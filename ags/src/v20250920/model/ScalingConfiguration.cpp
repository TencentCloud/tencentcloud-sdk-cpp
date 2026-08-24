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

#include <tencentcloud/ags/v20250920/model/ScalingConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ScalingConfiguration::ScalingConfiguration() :
    m_minInstanceCountHasBeenSet(false),
    m_maxInstanceCountHasBeenSet(false),
    m_maxInstanceRequestConcurrencyHasBeenSet(false)
{
}

CoreInternalOutcome ScalingConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinInstanceCount") && !value["MinInstanceCount"].IsNull())
    {
        if (!value["MinInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingConfiguration.MinInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInstanceCount = value["MinInstanceCount"].GetInt64();
        m_minInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("MaxInstanceCount") && !value["MaxInstanceCount"].IsNull())
    {
        if (!value["MaxInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingConfiguration.MaxInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInstanceCount = value["MaxInstanceCount"].GetInt64();
        m_maxInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("MaxInstanceRequestConcurrency") && !value["MaxInstanceRequestConcurrency"].IsNull())
    {
        if (!value["MaxInstanceRequestConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingConfiguration.MaxInstanceRequestConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInstanceRequestConcurrency = value["MaxInstanceRequestConcurrency"].GetInt64();
        m_maxInstanceRequestConcurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScalingConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInstanceCount, allocator);
    }

    if (m_maxInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInstanceCount, allocator);
    }

    if (m_maxInstanceRequestConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInstanceRequestConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInstanceRequestConcurrency, allocator);
    }

}


int64_t ScalingConfiguration::GetMinInstanceCount() const
{
    return m_minInstanceCount;
}

void ScalingConfiguration::SetMinInstanceCount(const int64_t& _minInstanceCount)
{
    m_minInstanceCount = _minInstanceCount;
    m_minInstanceCountHasBeenSet = true;
}

bool ScalingConfiguration::MinInstanceCountHasBeenSet() const
{
    return m_minInstanceCountHasBeenSet;
}

int64_t ScalingConfiguration::GetMaxInstanceCount() const
{
    return m_maxInstanceCount;
}

void ScalingConfiguration::SetMaxInstanceCount(const int64_t& _maxInstanceCount)
{
    m_maxInstanceCount = _maxInstanceCount;
    m_maxInstanceCountHasBeenSet = true;
}

bool ScalingConfiguration::MaxInstanceCountHasBeenSet() const
{
    return m_maxInstanceCountHasBeenSet;
}

int64_t ScalingConfiguration::GetMaxInstanceRequestConcurrency() const
{
    return m_maxInstanceRequestConcurrency;
}

void ScalingConfiguration::SetMaxInstanceRequestConcurrency(const int64_t& _maxInstanceRequestConcurrency)
{
    m_maxInstanceRequestConcurrency = _maxInstanceRequestConcurrency;
    m_maxInstanceRequestConcurrencyHasBeenSet = true;
}

bool ScalingConfiguration::MaxInstanceRequestConcurrencyHasBeenSet() const
{
    return m_maxInstanceRequestConcurrencyHasBeenSet;
}

