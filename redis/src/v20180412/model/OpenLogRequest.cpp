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

#include <tencentcloud/redis/v20180412/model/OpenLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

OpenLogRequest::OpenLogRequest() :
    m_instanceIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logSubTypeHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_highLogExpireDayHasBeenSet(false),
    m_degradeStrategyHasBeenSet(false)
{
}

string OpenLogRequest::ToJsonString() const
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

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_logSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_highLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highLogExpireDay, allocator);
    }

    if (m_degradeStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DegradeStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_degradeStrategy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenLogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void OpenLogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OpenLogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string OpenLogRequest::GetLogType() const
{
    return m_logType;
}

void OpenLogRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool OpenLogRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string OpenLogRequest::GetLogSubType() const
{
    return m_logSubType;
}

void OpenLogRequest::SetLogSubType(const string& _logSubType)
{
    m_logSubType = _logSubType;
    m_logSubTypeHasBeenSet = true;
}

bool OpenLogRequest::LogSubTypeHasBeenSet() const
{
    return m_logSubTypeHasBeenSet;
}

int64_t OpenLogRequest::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void OpenLogRequest::SetLogExpireDay(const int64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool OpenLogRequest::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

int64_t OpenLogRequest::GetHighLogExpireDay() const
{
    return m_highLogExpireDay;
}

void OpenLogRequest::SetHighLogExpireDay(const int64_t& _highLogExpireDay)
{
    m_highLogExpireDay = _highLogExpireDay;
    m_highLogExpireDayHasBeenSet = true;
}

bool OpenLogRequest::HighLogExpireDayHasBeenSet() const
{
    return m_highLogExpireDayHasBeenSet;
}

int64_t OpenLogRequest::GetDegradeStrategy() const
{
    return m_degradeStrategy;
}

void OpenLogRequest::SetDegradeStrategy(const int64_t& _degradeStrategy)
{
    m_degradeStrategy = _degradeStrategy;
    m_degradeStrategyHasBeenSet = true;
}

bool OpenLogRequest::DegradeStrategyHasBeenSet() const
{
    return m_degradeStrategyHasBeenSet;
}


