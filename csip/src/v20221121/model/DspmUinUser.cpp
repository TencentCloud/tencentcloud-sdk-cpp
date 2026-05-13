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

#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmUinUser::DspmUinUser() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

CoreInternalOutcome DspmUinUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmUinUser.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmUinUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmUinUser.UserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetInt64();
        m_userTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmUinUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

}


string DspmUinUser::GetUin() const
{
    return m_uin;
}

void DspmUinUser::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmUinUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DspmUinUser::GetName() const
{
    return m_name;
}

void DspmUinUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmUinUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DspmUinUser::GetUserType() const
{
    return m_userType;
}

void DspmUinUser::SetUserType(const int64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool DspmUinUser::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

