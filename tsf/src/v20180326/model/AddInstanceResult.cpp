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

#include <tencentcloud/tsf/v20180326/model/AddInstanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

AddInstanceResult::AddInstanceResult() :
    m_failedInstanceIdsHasBeenSet(false),
    m_succInstanceIdsHasBeenSet(false),
    m_timeoutInstanceIdsHasBeenSet(false),
    m_failedReasonsHasBeenSet(false)
{
}

CoreInternalOutcome AddInstanceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedInstanceIds") && !value["FailedInstanceIds"].IsNull())
    {
        if (!value["FailedInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddInstanceResult.FailedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedInstanceIds.push_back((*itr).GetString());
        }
        m_failedInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("SuccInstanceIds") && !value["SuccInstanceIds"].IsNull())
    {
        if (!value["SuccInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddInstanceResult.SuccInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_succInstanceIds.push_back((*itr).GetString());
        }
        m_succInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutInstanceIds") && !value["TimeoutInstanceIds"].IsNull())
    {
        if (!value["TimeoutInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddInstanceResult.TimeoutInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeoutInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeoutInstanceIds.push_back((*itr).GetString());
        }
        m_timeoutInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("FailedReasons") && !value["FailedReasons"].IsNull())
    {
        if (!value["FailedReasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddInstanceResult.FailedReasons` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedReasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedReasons.push_back((*itr).GetString());
        }
        m_failedReasonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddInstanceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedInstanceIds.begin(); itr != m_failedInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_succInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_succInstanceIds.begin(); itr != m_succInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeoutInstanceIds.begin(); itr != m_timeoutInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failedReasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedReasons.begin(); itr != m_failedReasons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> AddInstanceResult::GetFailedInstanceIds() const
{
    return m_failedInstanceIds;
}

void AddInstanceResult::SetFailedInstanceIds(const vector<string>& _failedInstanceIds)
{
    m_failedInstanceIds = _failedInstanceIds;
    m_failedInstanceIdsHasBeenSet = true;
}

bool AddInstanceResult::FailedInstanceIdsHasBeenSet() const
{
    return m_failedInstanceIdsHasBeenSet;
}

vector<string> AddInstanceResult::GetSuccInstanceIds() const
{
    return m_succInstanceIds;
}

void AddInstanceResult::SetSuccInstanceIds(const vector<string>& _succInstanceIds)
{
    m_succInstanceIds = _succInstanceIds;
    m_succInstanceIdsHasBeenSet = true;
}

bool AddInstanceResult::SuccInstanceIdsHasBeenSet() const
{
    return m_succInstanceIdsHasBeenSet;
}

vector<string> AddInstanceResult::GetTimeoutInstanceIds() const
{
    return m_timeoutInstanceIds;
}

void AddInstanceResult::SetTimeoutInstanceIds(const vector<string>& _timeoutInstanceIds)
{
    m_timeoutInstanceIds = _timeoutInstanceIds;
    m_timeoutInstanceIdsHasBeenSet = true;
}

bool AddInstanceResult::TimeoutInstanceIdsHasBeenSet() const
{
    return m_timeoutInstanceIdsHasBeenSet;
}

vector<string> AddInstanceResult::GetFailedReasons() const
{
    return m_failedReasons;
}

void AddInstanceResult::SetFailedReasons(const vector<string>& _failedReasons)
{
    m_failedReasons = _failedReasons;
    m_failedReasonsHasBeenSet = true;
}

bool AddInstanceResult::FailedReasonsHasBeenSet() const
{
    return m_failedReasonsHasBeenSet;
}

