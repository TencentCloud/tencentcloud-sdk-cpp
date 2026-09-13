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

#include <tencentcloud/databuddy/v20260715/model/WorkflowAdvanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowAdvanceConfig::WorkflowAdvanceConfig() :
    m_queuingModeHasBeenSet(false),
    m_maxConcurrentNumHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowAdvanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueuingMode") && !value["QueuingMode"].IsNull())
    {
        if (!value["QueuingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowAdvanceConfig.QueuingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queuingMode = string(value["QueuingMode"].GetString());
        m_queuingModeHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentNum") && !value["MaxConcurrentNum"].IsNull())
    {
        if (!value["MaxConcurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowAdvanceConfig.MaxConcurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentNum = value["MaxConcurrentNum"].GetInt64();
        m_maxConcurrentNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowAdvanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queuingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queuingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentNum, allocator);
    }

}


string WorkflowAdvanceConfig::GetQueuingMode() const
{
    return m_queuingMode;
}

void WorkflowAdvanceConfig::SetQueuingMode(const string& _queuingMode)
{
    m_queuingMode = _queuingMode;
    m_queuingModeHasBeenSet = true;
}

bool WorkflowAdvanceConfig::QueuingModeHasBeenSet() const
{
    return m_queuingModeHasBeenSet;
}

int64_t WorkflowAdvanceConfig::GetMaxConcurrentNum() const
{
    return m_maxConcurrentNum;
}

void WorkflowAdvanceConfig::SetMaxConcurrentNum(const int64_t& _maxConcurrentNum)
{
    m_maxConcurrentNum = _maxConcurrentNum;
    m_maxConcurrentNumHasBeenSet = true;
}

bool WorkflowAdvanceConfig::MaxConcurrentNumHasBeenSet() const
{
    return m_maxConcurrentNumHasBeenSet;
}

