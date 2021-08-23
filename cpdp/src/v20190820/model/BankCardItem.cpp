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

#include <tencentcloud/cpdp/v20190820/model/BankCardItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BankCardItem::BankCardItem() :
    m_eiconBankBranchIdHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_settleAcctTypeHasBeenSet(false),
    m_settleAcctNameHasBeenSet(false),
    m_acctBranchNameHasBeenSet(false),
    m_settleAcctNoHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idCodeHasBeenSet(false)
{
}

CoreInternalOutcome BankCardItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EiconBankBranchId") && !value["EiconBankBranchId"].IsNull())
    {
        if (!value["EiconBankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.EiconBankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eiconBankBranchId = string(value["EiconBankBranchId"].GetString());
        m_eiconBankBranchIdHasBeenSet = true;
    }

    if (value.HasMember("CnapsBranchId") && !value["CnapsBranchId"].IsNull())
    {
        if (!value["CnapsBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.CnapsBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnapsBranchId = string(value["CnapsBranchId"].GetString());
        m_cnapsBranchIdHasBeenSet = true;
    }

    if (value.HasMember("SettleAcctType") && !value["SettleAcctType"].IsNull())
    {
        if (!value["SettleAcctType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.SettleAcctType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_settleAcctType = value["SettleAcctType"].GetInt64();
        m_settleAcctTypeHasBeenSet = true;
    }

    if (value.HasMember("SettleAcctName") && !value["SettleAcctName"].IsNull())
    {
        if (!value["SettleAcctName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.SettleAcctName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleAcctName = string(value["SettleAcctName"].GetString());
        m_settleAcctNameHasBeenSet = true;
    }

    if (value.HasMember("AcctBranchName") && !value["AcctBranchName"].IsNull())
    {
        if (!value["AcctBranchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.AcctBranchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctBranchName = string(value["AcctBranchName"].GetString());
        m_acctBranchNameHasBeenSet = true;
    }

    if (value.HasMember("SettleAcctNo") && !value["SettleAcctNo"].IsNull())
    {
        if (!value["SettleAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.SettleAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleAcctNo = string(value["SettleAcctNo"].GetString());
        m_settleAcctNoHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.BindType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = value["BindType"].GetInt64();
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.IdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idType = string(value["IdType"].GetString());
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCode") && !value["IdCode"].IsNull())
    {
        if (!value["IdCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankCardItem.IdCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCode = string(value["IdCode"].GetString());
        m_idCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BankCardItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eiconBankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EiconBankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eiconBankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnapsBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnapsBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_settleAcctType, allocator);
    }

    if (m_settleAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_acctBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctBranchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acctBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindType, allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCode.c_str(), allocator).Move(), allocator);
    }

}


string BankCardItem::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void BankCardItem::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool BankCardItem::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string BankCardItem::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void BankCardItem::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool BankCardItem::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

int64_t BankCardItem::GetSettleAcctType() const
{
    return m_settleAcctType;
}

void BankCardItem::SetSettleAcctType(const int64_t& _settleAcctType)
{
    m_settleAcctType = _settleAcctType;
    m_settleAcctTypeHasBeenSet = true;
}

bool BankCardItem::SettleAcctTypeHasBeenSet() const
{
    return m_settleAcctTypeHasBeenSet;
}

string BankCardItem::GetSettleAcctName() const
{
    return m_settleAcctName;
}

void BankCardItem::SetSettleAcctName(const string& _settleAcctName)
{
    m_settleAcctName = _settleAcctName;
    m_settleAcctNameHasBeenSet = true;
}

bool BankCardItem::SettleAcctNameHasBeenSet() const
{
    return m_settleAcctNameHasBeenSet;
}

string BankCardItem::GetAcctBranchName() const
{
    return m_acctBranchName;
}

void BankCardItem::SetAcctBranchName(const string& _acctBranchName)
{
    m_acctBranchName = _acctBranchName;
    m_acctBranchNameHasBeenSet = true;
}

bool BankCardItem::AcctBranchNameHasBeenSet() const
{
    return m_acctBranchNameHasBeenSet;
}

string BankCardItem::GetSettleAcctNo() const
{
    return m_settleAcctNo;
}

void BankCardItem::SetSettleAcctNo(const string& _settleAcctNo)
{
    m_settleAcctNo = _settleAcctNo;
    m_settleAcctNoHasBeenSet = true;
}

bool BankCardItem::SettleAcctNoHasBeenSet() const
{
    return m_settleAcctNoHasBeenSet;
}

string BankCardItem::GetSubAppId() const
{
    return m_subAppId;
}

void BankCardItem::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool BankCardItem::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

int64_t BankCardItem::GetBindType() const
{
    return m_bindType;
}

void BankCardItem::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool BankCardItem::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string BankCardItem::GetMobile() const
{
    return m_mobile;
}

void BankCardItem::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool BankCardItem::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string BankCardItem::GetIdType() const
{
    return m_idType;
}

void BankCardItem::SetIdType(const string& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool BankCardItem::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string BankCardItem::GetIdCode() const
{
    return m_idCode;
}

void BankCardItem::SetIdCode(const string& _idCode)
{
    m_idCode = _idCode;
    m_idCodeHasBeenSet = true;
}

bool BankCardItem::IdCodeHasBeenSet() const
{
    return m_idCodeHasBeenSet;
}

