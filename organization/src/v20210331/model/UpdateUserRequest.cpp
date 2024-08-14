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

#include <tencentcloud/organization/v20210331/model/UpdateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateUserRequest::UpdateUserRequest() :
    m_zoneIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_newFirstNameHasBeenSet(false),
    m_newLastNameHasBeenSet(false),
    m_newDisplayNameHasBeenSet(false),
    m_newDescriptionHasBeenSet(false),
    m_newEmailHasBeenSet(false)
{
}

string UpdateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_newFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFirstName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_newLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewLastName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_newEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newEmail.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateUserRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateUserRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateUserRequest::GetUserId() const
{
    return m_userId;
}

void UpdateUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UpdateUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UpdateUserRequest::GetNewFirstName() const
{
    return m_newFirstName;
}

void UpdateUserRequest::SetNewFirstName(const string& _newFirstName)
{
    m_newFirstName = _newFirstName;
    m_newFirstNameHasBeenSet = true;
}

bool UpdateUserRequest::NewFirstNameHasBeenSet() const
{
    return m_newFirstNameHasBeenSet;
}

string UpdateUserRequest::GetNewLastName() const
{
    return m_newLastName;
}

void UpdateUserRequest::SetNewLastName(const string& _newLastName)
{
    m_newLastName = _newLastName;
    m_newLastNameHasBeenSet = true;
}

bool UpdateUserRequest::NewLastNameHasBeenSet() const
{
    return m_newLastNameHasBeenSet;
}

string UpdateUserRequest::GetNewDisplayName() const
{
    return m_newDisplayName;
}

void UpdateUserRequest::SetNewDisplayName(const string& _newDisplayName)
{
    m_newDisplayName = _newDisplayName;
    m_newDisplayNameHasBeenSet = true;
}

bool UpdateUserRequest::NewDisplayNameHasBeenSet() const
{
    return m_newDisplayNameHasBeenSet;
}

string UpdateUserRequest::GetNewDescription() const
{
    return m_newDescription;
}

void UpdateUserRequest::SetNewDescription(const string& _newDescription)
{
    m_newDescription = _newDescription;
    m_newDescriptionHasBeenSet = true;
}

bool UpdateUserRequest::NewDescriptionHasBeenSet() const
{
    return m_newDescriptionHasBeenSet;
}

string UpdateUserRequest::GetNewEmail() const
{
    return m_newEmail;
}

void UpdateUserRequest::SetNewEmail(const string& _newEmail)
{
    m_newEmail = _newEmail;
    m_newEmailHasBeenSet = true;
}

bool UpdateUserRequest::NewEmailHasBeenSet() const
{
    return m_newEmailHasBeenSet;
}


