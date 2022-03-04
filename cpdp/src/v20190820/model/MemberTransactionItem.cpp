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

#include <tencentcloud/cpdp/v20190820/model/MemberTransactionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MemberTransactionItem::MemberTransactionItem() :
    m_transTypeHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_transAmountHasBeenSet(false),
    m_transDateHasBeenSet(false),
    m_transTimeHasBeenSet(false),
    m_bankSequenceNumberHasBeenSet(false),
    m_bankBookingTypeHasBeenSet(false),
    m_inSubAccountNumberHasBeenSet(false),
    m_outSubAccountNumberHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome MemberTransactionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransType") && !value["TransType"].IsNull())
    {
        if (!value["TransType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.TransType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transType = string(value["TransType"].GetString());
        m_transTypeHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("TransAmount") && !value["TransAmount"].IsNull())
    {
        if (!value["TransAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.TransAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transAmount = string(value["TransAmount"].GetString());
        m_transAmountHasBeenSet = true;
    }

    if (value.HasMember("TransDate") && !value["TransDate"].IsNull())
    {
        if (!value["TransDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.TransDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDate = string(value["TransDate"].GetString());
        m_transDateHasBeenSet = true;
    }

    if (value.HasMember("TransTime") && !value["TransTime"].IsNull())
    {
        if (!value["TransTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.TransTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transTime = string(value["TransTime"].GetString());
        m_transTimeHasBeenSet = true;
    }

    if (value.HasMember("BankSequenceNumber") && !value["BankSequenceNumber"].IsNull())
    {
        if (!value["BankSequenceNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.BankSequenceNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankSequenceNumber = string(value["BankSequenceNumber"].GetString());
        m_bankSequenceNumberHasBeenSet = true;
    }

    if (value.HasMember("BankBookingType") && !value["BankBookingType"].IsNull())
    {
        if (!value["BankBookingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.BankBookingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBookingType = string(value["BankBookingType"].GetString());
        m_bankBookingTypeHasBeenSet = true;
    }

    if (value.HasMember("InSubAccountNumber") && !value["InSubAccountNumber"].IsNull())
    {
        if (!value["InSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.InSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSubAccountNumber = string(value["InSubAccountNumber"].GetString());
        m_inSubAccountNumberHasBeenSet = true;
    }

    if (value.HasMember("OutSubAccountNumber") && !value["OutSubAccountNumber"].IsNull())
    {
        if (!value["OutSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.OutSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubAccountNumber = string(value["OutSubAccountNumber"].GetString());
        m_outSubAccountNumberHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberTransactionItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberTransactionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transType.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_transAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transAmount.c_str(), allocator).Move(), allocator);
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

    if (m_bankBookingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBookingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBookingType.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string MemberTransactionItem::GetTransType() const
{
    return m_transType;
}

void MemberTransactionItem::SetTransType(const string& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool MemberTransactionItem::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}

string MemberTransactionItem::GetTranStatus() const
{
    return m_tranStatus;
}

void MemberTransactionItem::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool MemberTransactionItem::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string MemberTransactionItem::GetTransAmount() const
{
    return m_transAmount;
}

void MemberTransactionItem::SetTransAmount(const string& _transAmount)
{
    m_transAmount = _transAmount;
    m_transAmountHasBeenSet = true;
}

bool MemberTransactionItem::TransAmountHasBeenSet() const
{
    return m_transAmountHasBeenSet;
}

string MemberTransactionItem::GetTransDate() const
{
    return m_transDate;
}

void MemberTransactionItem::SetTransDate(const string& _transDate)
{
    m_transDate = _transDate;
    m_transDateHasBeenSet = true;
}

bool MemberTransactionItem::TransDateHasBeenSet() const
{
    return m_transDateHasBeenSet;
}

string MemberTransactionItem::GetTransTime() const
{
    return m_transTime;
}

void MemberTransactionItem::SetTransTime(const string& _transTime)
{
    m_transTime = _transTime;
    m_transTimeHasBeenSet = true;
}

bool MemberTransactionItem::TransTimeHasBeenSet() const
{
    return m_transTimeHasBeenSet;
}

string MemberTransactionItem::GetBankSequenceNumber() const
{
    return m_bankSequenceNumber;
}

void MemberTransactionItem::SetBankSequenceNumber(const string& _bankSequenceNumber)
{
    m_bankSequenceNumber = _bankSequenceNumber;
    m_bankSequenceNumberHasBeenSet = true;
}

bool MemberTransactionItem::BankSequenceNumberHasBeenSet() const
{
    return m_bankSequenceNumberHasBeenSet;
}

string MemberTransactionItem::GetBankBookingType() const
{
    return m_bankBookingType;
}

void MemberTransactionItem::SetBankBookingType(const string& _bankBookingType)
{
    m_bankBookingType = _bankBookingType;
    m_bankBookingTypeHasBeenSet = true;
}

bool MemberTransactionItem::BankBookingTypeHasBeenSet() const
{
    return m_bankBookingTypeHasBeenSet;
}

string MemberTransactionItem::GetInSubAccountNumber() const
{
    return m_inSubAccountNumber;
}

void MemberTransactionItem::SetInSubAccountNumber(const string& _inSubAccountNumber)
{
    m_inSubAccountNumber = _inSubAccountNumber;
    m_inSubAccountNumberHasBeenSet = true;
}

bool MemberTransactionItem::InSubAccountNumberHasBeenSet() const
{
    return m_inSubAccountNumberHasBeenSet;
}

string MemberTransactionItem::GetOutSubAccountNumber() const
{
    return m_outSubAccountNumber;
}

void MemberTransactionItem::SetOutSubAccountNumber(const string& _outSubAccountNumber)
{
    m_outSubAccountNumber = _outSubAccountNumber;
    m_outSubAccountNumberHasBeenSet = true;
}

bool MemberTransactionItem::OutSubAccountNumberHasBeenSet() const
{
    return m_outSubAccountNumberHasBeenSet;
}

string MemberTransactionItem::GetRemark() const
{
    return m_remark;
}

void MemberTransactionItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MemberTransactionItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

