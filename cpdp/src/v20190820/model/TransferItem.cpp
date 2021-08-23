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

#include <tencentcloud/cpdp/v20190820/model/TransferItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransferItem::TransferItem() :
    m_inAcctTypeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_tranAmtHasBeenSet(false),
    m_inAcctNoHasBeenSet(false),
    m_inAcctNameHasBeenSet(false),
    m_ccyHasBeenSet(false),
    m_accountingDateHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_frontSeqNoHasBeenSet(false)
{
}

CoreInternalOutcome TransferItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InAcctType") && !value["InAcctType"].IsNull())
    {
        if (!value["InAcctType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.InAcctType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inAcctType = string(value["InAcctType"].GetString());
        m_inAcctTypeHasBeenSet = true;
    }

    if (value.HasMember("TranNetMemberCode") && !value["TranNetMemberCode"].IsNull())
    {
        if (!value["TranNetMemberCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.TranNetMemberCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranNetMemberCode = string(value["TranNetMemberCode"].GetString());
        m_tranNetMemberCodeHasBeenSet = true;
    }

    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("TranAmt") && !value["TranAmt"].IsNull())
    {
        if (!value["TranAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.TranAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranAmt = string(value["TranAmt"].GetString());
        m_tranAmtHasBeenSet = true;
    }

    if (value.HasMember("InAcctNo") && !value["InAcctNo"].IsNull())
    {
        if (!value["InAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.InAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inAcctNo = string(value["InAcctNo"].GetString());
        m_inAcctNoHasBeenSet = true;
    }

    if (value.HasMember("InAcctName") && !value["InAcctName"].IsNull())
    {
        if (!value["InAcctName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.InAcctName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inAcctName = string(value["InAcctName"].GetString());
        m_inAcctNameHasBeenSet = true;
    }

    if (value.HasMember("Ccy") && !value["Ccy"].IsNull())
    {
        if (!value["Ccy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.Ccy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccy = string(value["Ccy"].GetString());
        m_ccyHasBeenSet = true;
    }

    if (value.HasMember("AccountingDate") && !value["AccountingDate"].IsNull())
    {
        if (!value["AccountingDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.AccountingDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountingDate = string(value["AccountingDate"].GetString());
        m_accountingDateHasBeenSet = true;
    }

    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FrontSeqNo") && !value["FrontSeqNo"].IsNull())
    {
        if (!value["FrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferItem.FrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSeqNo = string(value["FrontSeqNo"].GetString());
        m_frontSeqNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransferItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inAcctTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InAcctType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inAcctType.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_inAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_inAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InAcctName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccy.c_str(), allocator).Move(), allocator);
    }

    if (m_accountingDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountingDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountingDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_frontSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontSeqNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontSeqNo.c_str(), allocator).Move(), allocator);
    }

}


string TransferItem::GetInAcctType() const
{
    return m_inAcctType;
}

void TransferItem::SetInAcctType(const string& _inAcctType)
{
    m_inAcctType = _inAcctType;
    m_inAcctTypeHasBeenSet = true;
}

bool TransferItem::InAcctTypeHasBeenSet() const
{
    return m_inAcctTypeHasBeenSet;
}

string TransferItem::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void TransferItem::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool TransferItem::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string TransferItem::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void TransferItem::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool TransferItem::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string TransferItem::GetTranAmt() const
{
    return m_tranAmt;
}

void TransferItem::SetTranAmt(const string& _tranAmt)
{
    m_tranAmt = _tranAmt;
    m_tranAmtHasBeenSet = true;
}

bool TransferItem::TranAmtHasBeenSet() const
{
    return m_tranAmtHasBeenSet;
}

string TransferItem::GetInAcctNo() const
{
    return m_inAcctNo;
}

void TransferItem::SetInAcctNo(const string& _inAcctNo)
{
    m_inAcctNo = _inAcctNo;
    m_inAcctNoHasBeenSet = true;
}

bool TransferItem::InAcctNoHasBeenSet() const
{
    return m_inAcctNoHasBeenSet;
}

string TransferItem::GetInAcctName() const
{
    return m_inAcctName;
}

void TransferItem::SetInAcctName(const string& _inAcctName)
{
    m_inAcctName = _inAcctName;
    m_inAcctNameHasBeenSet = true;
}

bool TransferItem::InAcctNameHasBeenSet() const
{
    return m_inAcctNameHasBeenSet;
}

string TransferItem::GetCcy() const
{
    return m_ccy;
}

void TransferItem::SetCcy(const string& _ccy)
{
    m_ccy = _ccy;
    m_ccyHasBeenSet = true;
}

bool TransferItem::CcyHasBeenSet() const
{
    return m_ccyHasBeenSet;
}

string TransferItem::GetAccountingDate() const
{
    return m_accountingDate;
}

void TransferItem::SetAccountingDate(const string& _accountingDate)
{
    m_accountingDate = _accountingDate;
    m_accountingDateHasBeenSet = true;
}

bool TransferItem::AccountingDateHasBeenSet() const
{
    return m_accountingDateHasBeenSet;
}

string TransferItem::GetBankName() const
{
    return m_bankName;
}

void TransferItem::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool TransferItem::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string TransferItem::GetRemark() const
{
    return m_remark;
}

void TransferItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TransferItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string TransferItem::GetFrontSeqNo() const
{
    return m_frontSeqNo;
}

void TransferItem::SetFrontSeqNo(const string& _frontSeqNo)
{
    m_frontSeqNo = _frontSeqNo;
    m_frontSeqNoHasBeenSet = true;
}

bool TransferItem::FrontSeqNoHasBeenSet() const
{
    return m_frontSeqNoHasBeenSet;
}

