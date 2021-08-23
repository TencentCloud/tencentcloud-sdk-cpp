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

#include <tencentcloud/cpdp/v20190820/model/TranItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TranItem::TranItem() :
    m_fundSummaryAcctNoHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_memberGlobalTypeHasBeenSet(false),
    m_memberGlobalIdHasBeenSet(false),
    m_memberAcctNoHasBeenSet(false),
    m_bankTypeHasBeenSet(false),
    m_acctOpenBranchNameHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_eiconBankBranchIdHasBeenSet(false),
    m_mobileHasBeenSet(false)
{
}

CoreInternalOutcome TranItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FundSummaryAcctNo") && !value["FundSummaryAcctNo"].IsNull())
    {
        if (!value["FundSummaryAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.FundSummaryAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundSummaryAcctNo = string(value["FundSummaryAcctNo"].GetString());
        m_fundSummaryAcctNoHasBeenSet = true;
    }

    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("TranNetMemberCode") && !value["TranNetMemberCode"].IsNull())
    {
        if (!value["TranNetMemberCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.TranNetMemberCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranNetMemberCode = string(value["TranNetMemberCode"].GetString());
        m_tranNetMemberCodeHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }

    if (value.HasMember("MemberGlobalType") && !value["MemberGlobalType"].IsNull())
    {
        if (!value["MemberGlobalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.MemberGlobalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberGlobalType = string(value["MemberGlobalType"].GetString());
        m_memberGlobalTypeHasBeenSet = true;
    }

    if (value.HasMember("MemberGlobalId") && !value["MemberGlobalId"].IsNull())
    {
        if (!value["MemberGlobalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.MemberGlobalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberGlobalId = string(value["MemberGlobalId"].GetString());
        m_memberGlobalIdHasBeenSet = true;
    }

    if (value.HasMember("MemberAcctNo") && !value["MemberAcctNo"].IsNull())
    {
        if (!value["MemberAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.MemberAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberAcctNo = string(value["MemberAcctNo"].GetString());
        m_memberAcctNoHasBeenSet = true;
    }

    if (value.HasMember("BankType") && !value["BankType"].IsNull())
    {
        if (!value["BankType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.BankType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankType = string(value["BankType"].GetString());
        m_bankTypeHasBeenSet = true;
    }

    if (value.HasMember("AcctOpenBranchName") && !value["AcctOpenBranchName"].IsNull())
    {
        if (!value["AcctOpenBranchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.AcctOpenBranchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctOpenBranchName = string(value["AcctOpenBranchName"].GetString());
        m_acctOpenBranchNameHasBeenSet = true;
    }

    if (value.HasMember("CnapsBranchId") && !value["CnapsBranchId"].IsNull())
    {
        if (!value["CnapsBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.CnapsBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnapsBranchId = string(value["CnapsBranchId"].GetString());
        m_cnapsBranchIdHasBeenSet = true;
    }

    if (value.HasMember("EiconBankBranchId") && !value["EiconBankBranchId"].IsNull())
    {
        if (!value["EiconBankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.EiconBankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eiconBankBranchId = string(value["EiconBankBranchId"].GetString());
        m_eiconBankBranchIdHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranItem.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fundSummaryAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundSummaryAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundSummaryAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberGlobalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberGlobalType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberGlobalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberGlobalId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankType.c_str(), allocator).Move(), allocator);
    }

    if (m_acctOpenBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctOpenBranchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acctOpenBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnapsBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnapsBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_eiconBankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EiconBankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eiconBankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

}


string TranItem::GetFundSummaryAcctNo() const
{
    return m_fundSummaryAcctNo;
}

void TranItem::SetFundSummaryAcctNo(const string& _fundSummaryAcctNo)
{
    m_fundSummaryAcctNo = _fundSummaryAcctNo;
    m_fundSummaryAcctNoHasBeenSet = true;
}

bool TranItem::FundSummaryAcctNoHasBeenSet() const
{
    return m_fundSummaryAcctNoHasBeenSet;
}

string TranItem::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void TranItem::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool TranItem::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string TranItem::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void TranItem::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool TranItem::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string TranItem::GetMemberName() const
{
    return m_memberName;
}

void TranItem::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool TranItem::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

string TranItem::GetMemberGlobalType() const
{
    return m_memberGlobalType;
}

void TranItem::SetMemberGlobalType(const string& _memberGlobalType)
{
    m_memberGlobalType = _memberGlobalType;
    m_memberGlobalTypeHasBeenSet = true;
}

bool TranItem::MemberGlobalTypeHasBeenSet() const
{
    return m_memberGlobalTypeHasBeenSet;
}

string TranItem::GetMemberGlobalId() const
{
    return m_memberGlobalId;
}

void TranItem::SetMemberGlobalId(const string& _memberGlobalId)
{
    m_memberGlobalId = _memberGlobalId;
    m_memberGlobalIdHasBeenSet = true;
}

bool TranItem::MemberGlobalIdHasBeenSet() const
{
    return m_memberGlobalIdHasBeenSet;
}

string TranItem::GetMemberAcctNo() const
{
    return m_memberAcctNo;
}

void TranItem::SetMemberAcctNo(const string& _memberAcctNo)
{
    m_memberAcctNo = _memberAcctNo;
    m_memberAcctNoHasBeenSet = true;
}

bool TranItem::MemberAcctNoHasBeenSet() const
{
    return m_memberAcctNoHasBeenSet;
}

string TranItem::GetBankType() const
{
    return m_bankType;
}

void TranItem::SetBankType(const string& _bankType)
{
    m_bankType = _bankType;
    m_bankTypeHasBeenSet = true;
}

bool TranItem::BankTypeHasBeenSet() const
{
    return m_bankTypeHasBeenSet;
}

string TranItem::GetAcctOpenBranchName() const
{
    return m_acctOpenBranchName;
}

void TranItem::SetAcctOpenBranchName(const string& _acctOpenBranchName)
{
    m_acctOpenBranchName = _acctOpenBranchName;
    m_acctOpenBranchNameHasBeenSet = true;
}

bool TranItem::AcctOpenBranchNameHasBeenSet() const
{
    return m_acctOpenBranchNameHasBeenSet;
}

string TranItem::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void TranItem::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool TranItem::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

string TranItem::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void TranItem::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool TranItem::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string TranItem::GetMobile() const
{
    return m_mobile;
}

void TranItem::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool TranItem::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

