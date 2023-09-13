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

#include <tencentcloud/weilingwith/v20230427/model/SsoTeamUserResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SsoTeamUserResult::SsoTeamUserResult() :
    m_totalHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

CoreInternalOutcome SsoTeamUserResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoTeamUserResult.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Users") && !value["Users"].IsNull())
    {
        if (!value["Users"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SsoTeamUserResult.Users` is not array type"));

        const rapidjson::Value &tmpValue = value["Users"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SsoTeamUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_users.push_back(item);
        }
        m_usersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SsoTeamUserResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SsoTeamUserResult::GetTotal() const
{
    return m_total;
}

void SsoTeamUserResult::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SsoTeamUserResult::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<SsoTeamUser> SsoTeamUserResult::GetUsers() const
{
    return m_users;
}

void SsoTeamUserResult::SetUsers(const vector<SsoTeamUser>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool SsoTeamUserResult::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

