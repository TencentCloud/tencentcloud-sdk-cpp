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

#include <tencentcloud/databuddy/v20260715/model/TaskRunConditionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TaskRunConditionRule::TaskRunConditionRule() :
    m_upstreamTaskIdHasBeenSet(false),
    m_upstreamTaskNameHasBeenSet(false),
    m_allowedStatesHasBeenSet(false)
{
}

CoreInternalOutcome TaskRunConditionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamTaskId") && !value["UpstreamTaskId"].IsNull())
    {
        if (!value["UpstreamTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRunConditionRule.UpstreamTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamTaskId = string(value["UpstreamTaskId"].GetString());
        m_upstreamTaskIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamTaskName") && !value["UpstreamTaskName"].IsNull())
    {
        if (!value["UpstreamTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRunConditionRule.UpstreamTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamTaskName = string(value["UpstreamTaskName"].GetString());
        m_upstreamTaskNameHasBeenSet = true;
    }

    if (value.HasMember("AllowedStates") && !value["AllowedStates"].IsNull())
    {
        if (!value["AllowedStates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskRunConditionRule.AllowedStates` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedStates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedStates.push_back((*itr).GetString());
        }
        m_allowedStatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskRunConditionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upstreamTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedStatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedStates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedStates.begin(); itr != m_allowedStates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TaskRunConditionRule::GetUpstreamTaskId() const
{
    return m_upstreamTaskId;
}

void TaskRunConditionRule::SetUpstreamTaskId(const string& _upstreamTaskId)
{
    m_upstreamTaskId = _upstreamTaskId;
    m_upstreamTaskIdHasBeenSet = true;
}

bool TaskRunConditionRule::UpstreamTaskIdHasBeenSet() const
{
    return m_upstreamTaskIdHasBeenSet;
}

string TaskRunConditionRule::GetUpstreamTaskName() const
{
    return m_upstreamTaskName;
}

void TaskRunConditionRule::SetUpstreamTaskName(const string& _upstreamTaskName)
{
    m_upstreamTaskName = _upstreamTaskName;
    m_upstreamTaskNameHasBeenSet = true;
}

bool TaskRunConditionRule::UpstreamTaskNameHasBeenSet() const
{
    return m_upstreamTaskNameHasBeenSet;
}

vector<string> TaskRunConditionRule::GetAllowedStates() const
{
    return m_allowedStates;
}

void TaskRunConditionRule::SetAllowedStates(const vector<string>& _allowedStates)
{
    m_allowedStates = _allowedStates;
    m_allowedStatesHasBeenSet = true;
}

bool TaskRunConditionRule::AllowedStatesHasBeenSet() const
{
    return m_allowedStatesHasBeenSet;
}

