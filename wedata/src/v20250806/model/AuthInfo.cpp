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

#include <tencentcloud/wedata/v20250806/model/AuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AuthInfo::AuthInfo() :
    m_authProjectIdsHasBeenSet(false),
    m_authUsersHasBeenSet(false)
{
}

CoreInternalOutcome AuthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthProjectIds") && !value["AuthProjectIds"].IsNull())
    {
        if (!value["AuthProjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthInfo.AuthProjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthProjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authProjectIds.push_back((*itr).GetString());
        }
        m_authProjectIdsHasBeenSet = true;
    }

    if (value.HasMember("AuthUsers") && !value["AuthUsers"].IsNull())
    {
        if (!value["AuthUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthInfo.AuthUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authUsers.push_back((*itr).GetString());
        }
        m_authUsersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authProjectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthProjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authProjectIds.begin(); itr != m_authProjectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authUsers.begin(); itr != m_authUsers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> AuthInfo::GetAuthProjectIds() const
{
    return m_authProjectIds;
}

void AuthInfo::SetAuthProjectIds(const vector<string>& _authProjectIds)
{
    m_authProjectIds = _authProjectIds;
    m_authProjectIdsHasBeenSet = true;
}

bool AuthInfo::AuthProjectIdsHasBeenSet() const
{
    return m_authProjectIdsHasBeenSet;
}

vector<string> AuthInfo::GetAuthUsers() const
{
    return m_authUsers;
}

void AuthInfo::SetAuthUsers(const vector<string>& _authUsers)
{
    m_authUsers = _authUsers;
    m_authUsersHasBeenSet = true;
}

bool AuthInfo::AuthUsersHasBeenSet() const
{
    return m_authUsersHasBeenSet;
}

