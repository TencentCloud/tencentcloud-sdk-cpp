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

#include <tencentcloud/adp/v20260520/model/PluginStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginStatistics::PluginStatistics() :
    m_callCountHasBeenSet(false),
    m_toolCountHasBeenSet(false)
{
}

CoreInternalOutcome PluginStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginStatistics.CallCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetUint64();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("ToolCount") && !value["ToolCount"].IsNull())
    {
        if (!value["ToolCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginStatistics.ToolCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toolCount = value["ToolCount"].GetInt64();
        m_toolCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_toolCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolCount, allocator);
    }

}


uint64_t PluginStatistics::GetCallCount() const
{
    return m_callCount;
}

void PluginStatistics::SetCallCount(const uint64_t& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool PluginStatistics::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

int64_t PluginStatistics::GetToolCount() const
{
    return m_toolCount;
}

void PluginStatistics::SetToolCount(const int64_t& _toolCount)
{
    m_toolCount = _toolCount;
    m_toolCountHasBeenSet = true;
}

bool PluginStatistics::ToolCountHasBeenSet() const
{
    return m_toolCountHasBeenSet;
}

