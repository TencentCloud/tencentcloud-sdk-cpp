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

#include <tencentcloud/cpdp/v20190820/model/CreateCustAcctIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateCustAcctIdRequest::CreateCustAcctIdRequest() :
    m_functionFlagHasBeenSet(false),
    m_fundSummaryAcctNoHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberPropertyHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_mrchCodeHasBeenSet(false),
    m_selfBusinessHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_subAcctNameHasBeenSet(false),
    m_subAcctShortNameHasBeenSet(false),
    m_subAcctTypeHasBeenSet(false),
    m_userNicknameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateCustAcctIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_fundSummaryAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundSummaryAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fundSummaryAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberProperty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberProperty.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBusinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBusiness";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selfBusiness, allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAcctShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAcctType, allocator);
    }

    if (m_userNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
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


string CreateCustAcctIdRequest::GetFunctionFlag() const
{
    return m_functionFlag;
}

void CreateCustAcctIdRequest::SetFunctionFlag(const string& _functionFlag)
{
    m_functionFlag = _functionFlag;
    m_functionFlagHasBeenSet = true;
}

bool CreateCustAcctIdRequest::FunctionFlagHasBeenSet() const
{
    return m_functionFlagHasBeenSet;
}

string CreateCustAcctIdRequest::GetFundSummaryAcctNo() const
{
    return m_fundSummaryAcctNo;
}

void CreateCustAcctIdRequest::SetFundSummaryAcctNo(const string& _fundSummaryAcctNo)
{
    m_fundSummaryAcctNo = _fundSummaryAcctNo;
    m_fundSummaryAcctNoHasBeenSet = true;
}

bool CreateCustAcctIdRequest::FundSummaryAcctNoHasBeenSet() const
{
    return m_fundSummaryAcctNoHasBeenSet;
}

string CreateCustAcctIdRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void CreateCustAcctIdRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool CreateCustAcctIdRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string CreateCustAcctIdRequest::GetMemberProperty() const
{
    return m_memberProperty;
}

void CreateCustAcctIdRequest::SetMemberProperty(const string& _memberProperty)
{
    m_memberProperty = _memberProperty;
    m_memberPropertyHasBeenSet = true;
}

bool CreateCustAcctIdRequest::MemberPropertyHasBeenSet() const
{
    return m_memberPropertyHasBeenSet;
}

string CreateCustAcctIdRequest::GetMobile() const
{
    return m_mobile;
}

void CreateCustAcctIdRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateCustAcctIdRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateCustAcctIdRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void CreateCustAcctIdRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool CreateCustAcctIdRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

bool CreateCustAcctIdRequest::GetSelfBusiness() const
{
    return m_selfBusiness;
}

void CreateCustAcctIdRequest::SetSelfBusiness(const bool& _selfBusiness)
{
    m_selfBusiness = _selfBusiness;
    m_selfBusinessHasBeenSet = true;
}

bool CreateCustAcctIdRequest::SelfBusinessHasBeenSet() const
{
    return m_selfBusinessHasBeenSet;
}

string CreateCustAcctIdRequest::GetContactName() const
{
    return m_contactName;
}

void CreateCustAcctIdRequest::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool CreateCustAcctIdRequest::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string CreateCustAcctIdRequest::GetSubAcctName() const
{
    return m_subAcctName;
}

void CreateCustAcctIdRequest::SetSubAcctName(const string& _subAcctName)
{
    m_subAcctName = _subAcctName;
    m_subAcctNameHasBeenSet = true;
}

bool CreateCustAcctIdRequest::SubAcctNameHasBeenSet() const
{
    return m_subAcctNameHasBeenSet;
}

string CreateCustAcctIdRequest::GetSubAcctShortName() const
{
    return m_subAcctShortName;
}

void CreateCustAcctIdRequest::SetSubAcctShortName(const string& _subAcctShortName)
{
    m_subAcctShortName = _subAcctShortName;
    m_subAcctShortNameHasBeenSet = true;
}

bool CreateCustAcctIdRequest::SubAcctShortNameHasBeenSet() const
{
    return m_subAcctShortNameHasBeenSet;
}

int64_t CreateCustAcctIdRequest::GetSubAcctType() const
{
    return m_subAcctType;
}

void CreateCustAcctIdRequest::SetSubAcctType(const int64_t& _subAcctType)
{
    m_subAcctType = _subAcctType;
    m_subAcctTypeHasBeenSet = true;
}

bool CreateCustAcctIdRequest::SubAcctTypeHasBeenSet() const
{
    return m_subAcctTypeHasBeenSet;
}

string CreateCustAcctIdRequest::GetUserNickname() const
{
    return m_userNickname;
}

void CreateCustAcctIdRequest::SetUserNickname(const string& _userNickname)
{
    m_userNickname = _userNickname;
    m_userNicknameHasBeenSet = true;
}

bool CreateCustAcctIdRequest::UserNicknameHasBeenSet() const
{
    return m_userNicknameHasBeenSet;
}

string CreateCustAcctIdRequest::GetEmail() const
{
    return m_email;
}

void CreateCustAcctIdRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateCustAcctIdRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateCustAcctIdRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void CreateCustAcctIdRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool CreateCustAcctIdRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string CreateCustAcctIdRequest::GetProfile() const
{
    return m_profile;
}

void CreateCustAcctIdRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateCustAcctIdRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


