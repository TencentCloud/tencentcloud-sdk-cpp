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

#include <tencentcloud/wedata/v20210820/model/DependencyConfigTimeoutDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyConfigTimeoutDTO::DependencyConfigTimeoutDTO() :
    m_timeoutTypeHasBeenSet(false),
    m_timeoutValueHasBeenSet(false),
    m_timeoutPointHasBeenSet(false)
{
}

CoreInternalOutcome DependencyConfigTimeoutDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeoutType") && !value["TimeoutType"].IsNull())
    {
        if (!value["TimeoutType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigTimeoutDTO.TimeoutType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutType = string(value["TimeoutType"].GetString());
        m_timeoutTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeoutValue") && !value["TimeoutValue"].IsNull())
    {
        if (!value["TimeoutValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigTimeoutDTO.TimeoutValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutValue = value["TimeoutValue"].GetInt64();
        m_timeoutValueHasBeenSet = true;
    }

    if (value.HasMember("TimeoutPoint") && !value["TimeoutPoint"].IsNull())
    {
        if (!value["TimeoutPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyConfigTimeoutDTO.TimeoutPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutPoint = string(value["TimeoutPoint"].GetString());
        m_timeoutPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyConfigTimeoutDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeoutTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeoutType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutValue, allocator);
    }

    if (m_timeoutPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeoutPoint.c_str(), allocator).Move(), allocator);
    }

}


string DependencyConfigTimeoutDTO::GetTimeoutType() const
{
    return m_timeoutType;
}

void DependencyConfigTimeoutDTO::SetTimeoutType(const string& _timeoutType)
{
    m_timeoutType = _timeoutType;
    m_timeoutTypeHasBeenSet = true;
}

bool DependencyConfigTimeoutDTO::TimeoutTypeHasBeenSet() const
{
    return m_timeoutTypeHasBeenSet;
}

int64_t DependencyConfigTimeoutDTO::GetTimeoutValue() const
{
    return m_timeoutValue;
}

void DependencyConfigTimeoutDTO::SetTimeoutValue(const int64_t& _timeoutValue)
{
    m_timeoutValue = _timeoutValue;
    m_timeoutValueHasBeenSet = true;
}

bool DependencyConfigTimeoutDTO::TimeoutValueHasBeenSet() const
{
    return m_timeoutValueHasBeenSet;
}

string DependencyConfigTimeoutDTO::GetTimeoutPoint() const
{
    return m_timeoutPoint;
}

void DependencyConfigTimeoutDTO::SetTimeoutPoint(const string& _timeoutPoint)
{
    m_timeoutPoint = _timeoutPoint;
    m_timeoutPointHasBeenSet = true;
}

bool DependencyConfigTimeoutDTO::TimeoutPointHasBeenSet() const
{
    return m_timeoutPointHasBeenSet;
}

