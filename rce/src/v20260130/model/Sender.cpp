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

#include <tencentcloud/rce/v20260130/model/Sender.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Sender::Sender() :
    m_userInfoHasBeenSet(false),
    m_roleInfoHasBeenSet(false)
{
}

CoreInternalOutcome Sender::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Sender.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("RoleInfo") && !value["RoleInfo"].IsNull())
    {
        if (!value["RoleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Sender.RoleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_roleInfo.Deserialize(value["RoleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_roleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Sender::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_roleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


User Sender::GetUserInfo() const
{
    return m_userInfo;
}

void Sender::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool Sender::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Role Sender::GetRoleInfo() const
{
    return m_roleInfo;
}

void Sender::SetRoleInfo(const Role& _roleInfo)
{
    m_roleInfo = _roleInfo;
    m_roleInfoHasBeenSet = true;
}

bool Sender::RoleInfoHasBeenSet() const
{
    return m_roleInfoHasBeenSet;
}

