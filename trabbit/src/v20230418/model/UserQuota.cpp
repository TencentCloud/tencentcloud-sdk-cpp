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

#include <tencentcloud/trabbit/v20230418/model/UserQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

UserQuota::UserQuota() :
    m_maxUserHasBeenSet(false),
    m_usedUserHasBeenSet(false)
{
}

CoreInternalOutcome UserQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxUser") && !value["MaxUser"].IsNull())
    {
        if (!value["MaxUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.MaxUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUser = value["MaxUser"].GetInt64();
        m_maxUserHasBeenSet = true;
    }

    if (value.HasMember("UsedUser") && !value["UsedUser"].IsNull())
    {
        if (!value["UsedUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.UsedUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedUser = value["UsedUser"].GetInt64();
        m_usedUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUser, allocator);
    }

    if (m_usedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedUser, allocator);
    }

}


int64_t UserQuota::GetMaxUser() const
{
    return m_maxUser;
}

void UserQuota::SetMaxUser(const int64_t& _maxUser)
{
    m_maxUser = _maxUser;
    m_maxUserHasBeenSet = true;
}

bool UserQuota::MaxUserHasBeenSet() const
{
    return m_maxUserHasBeenSet;
}

int64_t UserQuota::GetUsedUser() const
{
    return m_usedUser;
}

void UserQuota::SetUsedUser(const int64_t& _usedUser)
{
    m_usedUser = _usedUser;
    m_usedUserHasBeenSet = true;
}

bool UserQuota::UsedUserHasBeenSet() const
{
    return m_usedUserHasBeenSet;
}

