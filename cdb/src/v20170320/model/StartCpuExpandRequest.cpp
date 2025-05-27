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

#include <tencentcloud/cdb/v20170320/model/StartCpuExpandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

StartCpuExpandRequest::StartCpuExpandRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_expandCpuHasBeenSet(false),
    m_autoStrategyHasBeenSet(false),
    m_timeIntervalStrategyHasBeenSet(false),
    m_periodStrategyHasBeenSet(false)
{
}

string StartCpuExpandRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_expandCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expandCpu, allocator);
    }

    if (m_autoStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeIntervalStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeIntervalStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeIntervalStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_periodStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodStrategy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartCpuExpandRequest::GetInstanceId() const
{
    return m_instanceId;
}

void StartCpuExpandRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool StartCpuExpandRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string StartCpuExpandRequest::GetType() const
{
    return m_type;
}

void StartCpuExpandRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StartCpuExpandRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t StartCpuExpandRequest::GetExpandCpu() const
{
    return m_expandCpu;
}

void StartCpuExpandRequest::SetExpandCpu(const int64_t& _expandCpu)
{
    m_expandCpu = _expandCpu;
    m_expandCpuHasBeenSet = true;
}

bool StartCpuExpandRequest::ExpandCpuHasBeenSet() const
{
    return m_expandCpuHasBeenSet;
}

AutoStrategy StartCpuExpandRequest::GetAutoStrategy() const
{
    return m_autoStrategy;
}

void StartCpuExpandRequest::SetAutoStrategy(const AutoStrategy& _autoStrategy)
{
    m_autoStrategy = _autoStrategy;
    m_autoStrategyHasBeenSet = true;
}

bool StartCpuExpandRequest::AutoStrategyHasBeenSet() const
{
    return m_autoStrategyHasBeenSet;
}

TimeIntervalStrategy StartCpuExpandRequest::GetTimeIntervalStrategy() const
{
    return m_timeIntervalStrategy;
}

void StartCpuExpandRequest::SetTimeIntervalStrategy(const TimeIntervalStrategy& _timeIntervalStrategy)
{
    m_timeIntervalStrategy = _timeIntervalStrategy;
    m_timeIntervalStrategyHasBeenSet = true;
}

bool StartCpuExpandRequest::TimeIntervalStrategyHasBeenSet() const
{
    return m_timeIntervalStrategyHasBeenSet;
}

PeriodStrategy StartCpuExpandRequest::GetPeriodStrategy() const
{
    return m_periodStrategy;
}

void StartCpuExpandRequest::SetPeriodStrategy(const PeriodStrategy& _periodStrategy)
{
    m_periodStrategy = _periodStrategy;
    m_periodStrategyHasBeenSet = true;
}

bool StartCpuExpandRequest::PeriodStrategyHasBeenSet() const
{
    return m_periodStrategyHasBeenSet;
}


