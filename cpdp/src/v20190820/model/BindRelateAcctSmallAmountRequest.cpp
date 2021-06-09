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

#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindRelateAcctSmallAmountRequest::BindRelateAcctSmallAmountRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_memberGlobalTypeHasBeenSet(false),
    m_memberGlobalIdHasBeenSet(false),
    m_memberAcctNoHasBeenSet(false),
    m_bankTypeHasBeenSet(false),
    m_acctOpenBranchNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_eiconBankBranchIdHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string BindRelateAcctSmallAmountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberGlobalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberGlobalType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberGlobalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberGlobalId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankType.c_str(), allocator).Move(), allocator);
    }

    if (m_acctOpenBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctOpenBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_acctOpenBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnapsBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cnapsBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_eiconBankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EiconBankBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eiconBankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindRelateAcctSmallAmountRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void BindRelateAcctSmallAmountRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void BindRelateAcctSmallAmountRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetMemberName() const
{
    return m_memberName;
}

void BindRelateAcctSmallAmountRequest::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetMemberGlobalType() const
{
    return m_memberGlobalType;
}

void BindRelateAcctSmallAmountRequest::SetMemberGlobalType(const string& _memberGlobalType)
{
    m_memberGlobalType = _memberGlobalType;
    m_memberGlobalTypeHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MemberGlobalTypeHasBeenSet() const
{
    return m_memberGlobalTypeHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetMemberGlobalId() const
{
    return m_memberGlobalId;
}

void BindRelateAcctSmallAmountRequest::SetMemberGlobalId(const string& _memberGlobalId)
{
    m_memberGlobalId = _memberGlobalId;
    m_memberGlobalIdHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MemberGlobalIdHasBeenSet() const
{
    return m_memberGlobalIdHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetMemberAcctNo() const
{
    return m_memberAcctNo;
}

void BindRelateAcctSmallAmountRequest::SetMemberAcctNo(const string& _memberAcctNo)
{
    m_memberAcctNo = _memberAcctNo;
    m_memberAcctNoHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MemberAcctNoHasBeenSet() const
{
    return m_memberAcctNoHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetBankType() const
{
    return m_bankType;
}

void BindRelateAcctSmallAmountRequest::SetBankType(const string& _bankType)
{
    m_bankType = _bankType;
    m_bankTypeHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::BankTypeHasBeenSet() const
{
    return m_bankTypeHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetAcctOpenBranchName() const
{
    return m_acctOpenBranchName;
}

void BindRelateAcctSmallAmountRequest::SetAcctOpenBranchName(const string& _acctOpenBranchName)
{
    m_acctOpenBranchName = _acctOpenBranchName;
    m_acctOpenBranchNameHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::AcctOpenBranchNameHasBeenSet() const
{
    return m_acctOpenBranchNameHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetMobile() const
{
    return m_mobile;
}

void BindRelateAcctSmallAmountRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void BindRelateAcctSmallAmountRequest::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void BindRelateAcctSmallAmountRequest::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void BindRelateAcctSmallAmountRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string BindRelateAcctSmallAmountRequest::GetProfile() const
{
    return m_profile;
}

void BindRelateAcctSmallAmountRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool BindRelateAcctSmallAmountRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


