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

#include <tencentcloud/emr/v20190103/model/AddMetricScaleStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AddMetricScaleStrategyRequest::AddMetricScaleStrategyRequest() :
    m_instanceIdHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_loadAutoScaleStrategyHasBeenSet(false),
    m_timeAutoScaleStrategyHasBeenSet(false)
{
}

string AddMetricScaleStrategyRequest::ToJsonString() const
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

    if (m_loadAutoScaleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadAutoScaleStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadAutoScaleStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeAutoScaleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeAutoScaleStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeAutoScaleStrategy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddMetricScaleStrategyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AddMetricScaleStrategyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AddMetricScaleStrategyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t AddMetricScaleStrategyRequest::GetStrategyType() const
{
    return m_strategyType;
}

void AddMetricScaleStrategyRequest::SetStrategyType(const int64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool AddMetricScaleStrategyRequest::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

LoadAutoScaleStrategy AddMetricScaleStrategyRequest::GetLoadAutoScaleStrategy() const
{
    return m_loadAutoScaleStrategy;
}

void AddMetricScaleStrategyRequest::SetLoadAutoScaleStrategy(const LoadAutoScaleStrategy& _loadAutoScaleStrategy)
{
    m_loadAutoScaleStrategy = _loadAutoScaleStrategy;
    m_loadAutoScaleStrategyHasBeenSet = true;
}

bool AddMetricScaleStrategyRequest::LoadAutoScaleStrategyHasBeenSet() const
{
    return m_loadAutoScaleStrategyHasBeenSet;
}

TimeAutoScaleStrategy AddMetricScaleStrategyRequest::GetTimeAutoScaleStrategy() const
{
    return m_timeAutoScaleStrategy;
}

void AddMetricScaleStrategyRequest::SetTimeAutoScaleStrategy(const TimeAutoScaleStrategy& _timeAutoScaleStrategy)
{
    m_timeAutoScaleStrategy = _timeAutoScaleStrategy;
    m_timeAutoScaleStrategyHasBeenSet = true;
}

bool AddMetricScaleStrategyRequest::TimeAutoScaleStrategyHasBeenSet() const
{
    return m_timeAutoScaleStrategyHasBeenSet;
}


