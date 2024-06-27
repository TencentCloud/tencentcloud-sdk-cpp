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

#include <tencentcloud/emr/v20190103/model/ModifyAutoScaleStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyAutoScaleStrategyRequest::ModifyAutoScaleStrategyRequest() :
    m_instanceIdHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_loadAutoScaleStrategiesHasBeenSet(false),
    m_timeAutoScaleStrategiesHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string ModifyAutoScaleStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_loadAutoScaleStrategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadAutoScaleStrategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadAutoScaleStrategies.begin(); itr != m_loadAutoScaleStrategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeAutoScaleStrategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeAutoScaleStrategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeAutoScaleStrategies.begin(); itr != m_timeAutoScaleStrategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoScaleStrategyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAutoScaleStrategyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAutoScaleStrategyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyAutoScaleStrategyRequest::GetStrategyType() const
{
    return m_strategyType;
}

void ModifyAutoScaleStrategyRequest::SetStrategyType(const int64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool ModifyAutoScaleStrategyRequest::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

vector<LoadAutoScaleStrategy> ModifyAutoScaleStrategyRequest::GetLoadAutoScaleStrategies() const
{
    return m_loadAutoScaleStrategies;
}

void ModifyAutoScaleStrategyRequest::SetLoadAutoScaleStrategies(const vector<LoadAutoScaleStrategy>& _loadAutoScaleStrategies)
{
    m_loadAutoScaleStrategies = _loadAutoScaleStrategies;
    m_loadAutoScaleStrategiesHasBeenSet = true;
}

bool ModifyAutoScaleStrategyRequest::LoadAutoScaleStrategiesHasBeenSet() const
{
    return m_loadAutoScaleStrategiesHasBeenSet;
}

vector<TimeAutoScaleStrategy> ModifyAutoScaleStrategyRequest::GetTimeAutoScaleStrategies() const
{
    return m_timeAutoScaleStrategies;
}

void ModifyAutoScaleStrategyRequest::SetTimeAutoScaleStrategies(const vector<TimeAutoScaleStrategy>& _timeAutoScaleStrategies)
{
    m_timeAutoScaleStrategies = _timeAutoScaleStrategies;
    m_timeAutoScaleStrategiesHasBeenSet = true;
}

bool ModifyAutoScaleStrategyRequest::TimeAutoScaleStrategiesHasBeenSet() const
{
    return m_timeAutoScaleStrategiesHasBeenSet;
}

int64_t ModifyAutoScaleStrategyRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyAutoScaleStrategyRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyAutoScaleStrategyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


