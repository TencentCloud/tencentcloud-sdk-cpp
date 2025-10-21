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

#include <tencentcloud/dlc/v20210125/model/UDFPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UDFPolicyInfo::UDFPolicyInfo() :
    m_accessesHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

CoreInternalOutcome UDFPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Accesses") && !value["Accesses"].IsNull())
    {
        if (!value["Accesses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UDFPolicyInfo.Accesses` is not array type"));

        const rapidjson::Value &tmpValue = value["Accesses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accesses.push_back((*itr).GetString());
        }
        m_accessesHasBeenSet = true;
    }

    if (value.HasMember("Users") && !value["Users"].IsNull())
    {
        if (!value["Users"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UDFPolicyInfo.Users` is not array type"));

        const rapidjson::Value &tmpValue = value["Users"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_users.push_back((*itr).GetString());
        }
        m_usersHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UDFPolicyInfo.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groups.push_back((*itr).GetString());
        }
        m_groupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UDFPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accesses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accesses.begin(); itr != m_accesses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> UDFPolicyInfo::GetAccesses() const
{
    return m_accesses;
}

void UDFPolicyInfo::SetAccesses(const vector<string>& _accesses)
{
    m_accesses = _accesses;
    m_accessesHasBeenSet = true;
}

bool UDFPolicyInfo::AccessesHasBeenSet() const
{
    return m_accessesHasBeenSet;
}

vector<string> UDFPolicyInfo::GetUsers() const
{
    return m_users;
}

void UDFPolicyInfo::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool UDFPolicyInfo::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

vector<string> UDFPolicyInfo::GetGroups() const
{
    return m_groups;
}

void UDFPolicyInfo::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool UDFPolicyInfo::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

