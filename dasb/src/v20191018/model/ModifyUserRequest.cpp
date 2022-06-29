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

#include <tencentcloud/dasb/v20191018/model/ModifyUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

ModifyUserRequest::ModifyUserRequest() :
    m_idHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_groupIdSetHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_validateTimeHasBeenSet(false)
{
}

string ModifyUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdSet.begin(); itr != m_groupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_validateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyUserRequest::GetId() const
{
    return m_id;
}

void ModifyUserRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyUserRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyUserRequest::GetRealName() const
{
    return m_realName;
}

void ModifyUserRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool ModifyUserRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string ModifyUserRequest::GetPhone() const
{
    return m_phone;
}

void ModifyUserRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ModifyUserRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ModifyUserRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyUserRequest::GetValidateFrom() const
{
    return m_validateFrom;
}

void ModifyUserRequest::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool ModifyUserRequest::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string ModifyUserRequest::GetValidateTo() const
{
    return m_validateTo;
}

void ModifyUserRequest::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool ModifyUserRequest::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

vector<uint64_t> ModifyUserRequest::GetGroupIdSet() const
{
    return m_groupIdSet;
}

void ModifyUserRequest::SetGroupIdSet(const vector<uint64_t>& _groupIdSet)
{
    m_groupIdSet = _groupIdSet;
    m_groupIdSetHasBeenSet = true;
}

bool ModifyUserRequest::GroupIdSetHasBeenSet() const
{
    return m_groupIdSetHasBeenSet;
}

uint64_t ModifyUserRequest::GetAuthType() const
{
    return m_authType;
}

void ModifyUserRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ModifyUserRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ModifyUserRequest::GetValidateTime() const
{
    return m_validateTime;
}

void ModifyUserRequest::SetValidateTime(const string& _validateTime)
{
    m_validateTime = _validateTime;
    m_validateTimeHasBeenSet = true;
}

bool ModifyUserRequest::ValidateTimeHasBeenSet() const
{
    return m_validateTimeHasBeenSet;
}


