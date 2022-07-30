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

#include <tencentcloud/pts/v20210728/model/Stage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

Stage::Stage() :
    m_durationSecondsHasBeenSet(false),
    m_targetVirtualUsersHasBeenSet(false)
{
}

CoreInternalOutcome Stage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DurationSeconds") && !value["DurationSeconds"].IsNull())
    {
        if (!value["DurationSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Stage.DurationSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationSeconds = value["DurationSeconds"].GetInt64();
        m_durationSecondsHasBeenSet = true;
    }

    if (value.HasMember("TargetVirtualUsers") && !value["TargetVirtualUsers"].IsNull())
    {
        if (!value["TargetVirtualUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Stage.TargetVirtualUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetVirtualUsers = value["TargetVirtualUsers"].GetInt64();
        m_targetVirtualUsersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Stage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationSeconds, allocator);
    }

    if (m_targetVirtualUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVirtualUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetVirtualUsers, allocator);
    }

}


int64_t Stage::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void Stage::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool Stage::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}

int64_t Stage::GetTargetVirtualUsers() const
{
    return m_targetVirtualUsers;
}

void Stage::SetTargetVirtualUsers(const int64_t& _targetVirtualUsers)
{
    m_targetVirtualUsers = _targetVirtualUsers;
    m_targetVirtualUsersHasBeenSet = true;
}

bool Stage::TargetVirtualUsersHasBeenSet() const
{
    return m_targetVirtualUsersHasBeenSet;
}

