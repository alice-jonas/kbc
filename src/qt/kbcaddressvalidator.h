// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KBC_QT_KBCADDRESSVALIDATOR_H
#define KBC_QT_KBCADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KbcAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KbcAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Kbc address widget validator, checks for a valid kbc address.
 */
class KbcAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KbcAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // KBC_QT_KBCADDRESSVALIDATOR_H
