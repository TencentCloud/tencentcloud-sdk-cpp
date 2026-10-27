/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cvd/v20201104/model/BindStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

BindStatusInfo::BindStatusInfo() :
    m_instanceIdHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

CoreInternalOutcome BindStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatusInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatusInfo.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatusInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatusInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindStatusInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

}


string BindStatusInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BindStatusInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BindStatusInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BindStatusInfo::GetBindStatus() const
{
    return m_bindStatus;
}

void BindStatusInfo::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool BindStatusInfo::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string BindStatusInfo::GetUserId() const
{
    return m_userId;
}

void BindStatusInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool BindStatusInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string BindStatusInfo::GetUserName() const
{
    return m_userName;
}

void BindStatusInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BindStatusInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BindStatusInfo::GetDisplayName() const
{
    return m_displayName;
}

void BindStatusInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool BindStatusInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

