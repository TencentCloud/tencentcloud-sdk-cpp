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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceUser::DeviceUser() :
    m_userIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_familyIdHasBeenSet(false),
    m_familyNameHasBeenSet(false)
{
}

CoreInternalOutcome DeviceUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUser.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUser.Role` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_role = value["Role"].GetInt64();
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("FamilyId") && !value["FamilyId"].IsNull())
    {
        if (!value["FamilyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUser.FamilyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyId = string(value["FamilyId"].GetString());
        m_familyIdHasBeenSet = true;
    }

    if (value.HasMember("FamilyName") && !value["FamilyName"].IsNull())
    {
        if (!value["FamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceUser.FamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyName = string(value["FamilyName"].GetString());
        m_familyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_role, allocator);
    }

    if (m_familyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyId.c_str(), allocator).Move(), allocator);
    }

    if (m_familyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyName.c_str(), allocator).Move(), allocator);
    }

}


string DeviceUser::GetUserId() const
{
    return m_userId;
}

void DeviceUser::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DeviceUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

int64_t DeviceUser::GetRole() const
{
    return m_role;
}

void DeviceUser::SetRole(const int64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool DeviceUser::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string DeviceUser::GetFamilyId() const
{
    return m_familyId;
}

void DeviceUser::SetFamilyId(const string& _familyId)
{
    m_familyId = _familyId;
    m_familyIdHasBeenSet = true;
}

bool DeviceUser::FamilyIdHasBeenSet() const
{
    return m_familyIdHasBeenSet;
}

string DeviceUser::GetFamilyName() const
{
    return m_familyName;
}

void DeviceUser::SetFamilyName(const string& _familyName)
{
    m_familyName = _familyName;
    m_familyNameHasBeenSet = true;
}

bool DeviceUser::FamilyNameHasBeenSet() const
{
    return m_familyNameHasBeenSet;
}

