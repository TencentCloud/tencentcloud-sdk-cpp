/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cpdp/v20190820/model/FundsTransactionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

FundsTransactionItem::FundsTransactionItem() :
    m_transTypeHasBeenSet(false),
    m_bankBookingMessageHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_transNetMemberCodeHasBeenSet(false),
    m_subAccountNumberHasBeenSet(false),
    m_subAccountNameHasBeenSet(false),
    m_transAmountHasBeenSet(false),
    m_transFeeHasBeenSet(false),
    m_transDateHasBeenSet(false),
    m_transTimeHasBeenSet(false),
    m_bankSequenceNumberHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome FundsTransactionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransType") && !value["TransType"].IsNull())
    {
        if (!value["TransType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transType = string(value["TransType"].GetString());
        m_transTypeHasBeenSet = true;
    }

    if (value.HasMember("BankBookingMessage") && !value["BankBookingMessage"].IsNull())
    {
        if (!value["BankBookingMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.BankBookingMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBookingMessage = string(value["BankBookingMessage"].GetString());
        m_bankBookingMessageHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("TransNetMemberCode") && !value["TransNetMemberCode"].IsNull())
    {
        if (!value["TransNetMemberCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransNetMemberCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transNetMemberCode = string(value["TransNetMemberCode"].GetString());
        m_transNetMemberCodeHasBeenSet = true;
    }

    if (value.HasMember("SubAccountNumber") && !value["SubAccountNumber"].IsNull())
    {
        if (!value["SubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.SubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountNumber = string(value["SubAccountNumber"].GetString());
        m_subAccountNumberHasBeenSet = true;
    }

    if (value.HasMember("SubAccountName") && !value["SubAccountName"].IsNull())
    {
        if (!value["SubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.SubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountName = string(value["SubAccountName"].GetString());
        m_subAccountNameHasBeenSet = true;
    }

    if (value.HasMember("TransAmount") && !value["TransAmount"].IsNull())
    {
        if (!value["TransAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transAmount = string(value["TransAmount"].GetString());
        m_transAmountHasBeenSet = true;
    }

    if (value.HasMember("TransFee") && !value["TransFee"].IsNull())
    {
        if (!value["TransFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transFee = string(value["TransFee"].GetString());
        m_transFeeHasBeenSet = true;
    }

    if (value.HasMember("TransDate") && !value["TransDate"].IsNull())
    {
        if (!value["TransDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDate = string(value["TransDate"].GetString());
        m_transDateHasBeenSet = true;
    }

    if (value.HasMember("TransTime") && !value["TransTime"].IsNull())
    {
        if (!value["TransTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.TransTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transTime = string(value["TransTime"].GetString());
        m_transTimeHasBeenSet = true;
    }

    if (value.HasMember("BankSequenceNumber") && !value["BankSequenceNumber"].IsNull())
    {
        if (!value["BankSequenceNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.BankSequenceNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankSequenceNumber = string(value["BankSequenceNumber"].GetString());
        m_bankSequenceNumberHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FundsTransactionItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FundsTransactionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transType.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBookingMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBookingMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBookingMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_transNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_transAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transFee.c_str(), allocator).Move(), allocator);
    }

    if (m_transDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transDate.c_str(), allocator).Move(), allocator);
    }

    if (m_transTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bankSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string FundsTransactionItem::GetTransType() const
{
    return m_transType;
}

void FundsTransactionItem::SetTransType(const string& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool FundsTransactionItem::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}

string FundsTransactionItem::GetBankBookingMessage() const
{
    return m_bankBookingMessage;
}

void FundsTransactionItem::SetBankBookingMessage(const string& _bankBookingMessage)
{
    m_bankBookingMessage = _bankBookingMessage;
    m_bankBookingMessageHasBeenSet = true;
}

bool FundsTransactionItem::BankBookingMessageHasBeenSet() const
{
    return m_bankBookingMessageHasBeenSet;
}

string FundsTransactionItem::GetTranStatus() const
{
    return m_tranStatus;
}

void FundsTransactionItem::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool FundsTransactionItem::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string FundsTransactionItem::GetTransNetMemberCode() const
{
    return m_transNetMemberCode;
}

void FundsTransactionItem::SetTransNetMemberCode(const string& _transNetMemberCode)
{
    m_transNetMemberCode = _transNetMemberCode;
    m_transNetMemberCodeHasBeenSet = true;
}

bool FundsTransactionItem::TransNetMemberCodeHasBeenSet() const
{
    return m_transNetMemberCodeHasBeenSet;
}

string FundsTransactionItem::GetSubAccountNumber() const
{
    return m_subAccountNumber;
}

void FundsTransactionItem::SetSubAccountNumber(const string& _subAccountNumber)
{
    m_subAccountNumber = _subAccountNumber;
    m_subAccountNumberHasBeenSet = true;
}

bool FundsTransactionItem::SubAccountNumberHasBeenSet() const
{
    return m_subAccountNumberHasBeenSet;
}

string FundsTransactionItem::GetSubAccountName() const
{
    return m_subAccountName;
}

void FundsTransactionItem::SetSubAccountName(const string& _subAccountName)
{
    m_subAccountName = _subAccountName;
    m_subAccountNameHasBeenSet = true;
}

bool FundsTransactionItem::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string FundsTransactionItem::GetTransAmount() const
{
    return m_transAmount;
}

void FundsTransactionItem::SetTransAmount(const string& _transAmount)
{
    m_transAmount = _transAmount;
    m_transAmountHasBeenSet = true;
}

bool FundsTransactionItem::TransAmountHasBeenSet() const
{
    return m_transAmountHasBeenSet;
}

string FundsTransactionItem::GetTransFee() const
{
    return m_transFee;
}

void FundsTransactionItem::SetTransFee(const string& _transFee)
{
    m_transFee = _transFee;
    m_transFeeHasBeenSet = true;
}

bool FundsTransactionItem::TransFeeHasBeenSet() const
{
    return m_transFeeHasBeenSet;
}

string FundsTransactionItem::GetTransDate() const
{
    return m_transDate;
}

void FundsTransactionItem::SetTransDate(const string& _transDate)
{
    m_transDate = _transDate;
    m_transDateHasBeenSet = true;
}

bool FundsTransactionItem::TransDateHasBeenSet() const
{
    return m_transDateHasBeenSet;
}

string FundsTransactionItem::GetTransTime() const
{
    return m_transTime;
}

void FundsTransactionItem::SetTransTime(const string& _transTime)
{
    m_transTime = _transTime;
    m_transTimeHasBeenSet = true;
}

bool FundsTransactionItem::TransTimeHasBeenSet() const
{
    return m_transTimeHasBeenSet;
}

string FundsTransactionItem::GetBankSequenceNumber() const
{
    return m_bankSequenceNumber;
}

void FundsTransactionItem::SetBankSequenceNumber(const string& _bankSequenceNumber)
{
    m_bankSequenceNumber = _bankSequenceNumber;
    m_bankSequenceNumberHasBeenSet = true;
}

bool FundsTransactionItem::BankSequenceNumberHasBeenSet() const
{
    return m_bankSequenceNumberHasBeenSet;
}

string FundsTransactionItem::GetRemark() const
{
    return m_remark;
}

void FundsTransactionItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FundsTransactionItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

