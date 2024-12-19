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

#include <tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ModifyStaffRequest::ModifyStaffRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_staffNoHasBeenSet(false),
    m_skillGroupIdsHasBeenSet(false),
    m_useMobileCallOutHasBeenSet(false),
    m_useMobileAcceptHasBeenSet(false),
    m_extensionNumberHasBeenSet(false)
{
}

string ModifyStaffRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staffNo.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillGroupIds.begin(); itr != m_skillGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_useMobileCallOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseMobileCallOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useMobileCallOut, allocator);
    }

    if (m_useMobileAcceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseMobileAccept";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useMobileAccept, allocator);
    }

    if (m_extensionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extensionNumber.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyStaffRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyStaffRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyStaffRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyStaffRequest::GetEmail() const
{
    return m_email;
}

void ModifyStaffRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyStaffRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyStaffRequest::GetName() const
{
    return m_name;
}

void ModifyStaffRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStaffRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyStaffRequest::GetPhone() const
{
    return m_phone;
}

void ModifyStaffRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ModifyStaffRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ModifyStaffRequest::GetNick() const
{
    return m_nick;
}

void ModifyStaffRequest::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool ModifyStaffRequest::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string ModifyStaffRequest::GetStaffNo() const
{
    return m_staffNo;
}

void ModifyStaffRequest::SetStaffNo(const string& _staffNo)
{
    m_staffNo = _staffNo;
    m_staffNoHasBeenSet = true;
}

bool ModifyStaffRequest::StaffNoHasBeenSet() const
{
    return m_staffNoHasBeenSet;
}

vector<int64_t> ModifyStaffRequest::GetSkillGroupIds() const
{
    return m_skillGroupIds;
}

void ModifyStaffRequest::SetSkillGroupIds(const vector<int64_t>& _skillGroupIds)
{
    m_skillGroupIds = _skillGroupIds;
    m_skillGroupIdsHasBeenSet = true;
}

bool ModifyStaffRequest::SkillGroupIdsHasBeenSet() const
{
    return m_skillGroupIdsHasBeenSet;
}

bool ModifyStaffRequest::GetUseMobileCallOut() const
{
    return m_useMobileCallOut;
}

void ModifyStaffRequest::SetUseMobileCallOut(const bool& _useMobileCallOut)
{
    m_useMobileCallOut = _useMobileCallOut;
    m_useMobileCallOutHasBeenSet = true;
}

bool ModifyStaffRequest::UseMobileCallOutHasBeenSet() const
{
    return m_useMobileCallOutHasBeenSet;
}

int64_t ModifyStaffRequest::GetUseMobileAccept() const
{
    return m_useMobileAccept;
}

void ModifyStaffRequest::SetUseMobileAccept(const int64_t& _useMobileAccept)
{
    m_useMobileAccept = _useMobileAccept;
    m_useMobileAcceptHasBeenSet = true;
}

bool ModifyStaffRequest::UseMobileAcceptHasBeenSet() const
{
    return m_useMobileAcceptHasBeenSet;
}

string ModifyStaffRequest::GetExtensionNumber() const
{
    return m_extensionNumber;
}

void ModifyStaffRequest::SetExtensionNumber(const string& _extensionNumber)
{
    m_extensionNumber = _extensionNumber;
    m_extensionNumberHasBeenSet = true;
}

bool ModifyStaffRequest::ExtensionNumberHasBeenSet() const
{
    return m_extensionNumberHasBeenSet;
}


