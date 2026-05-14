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

#include <tencentcloud/wedata/v20250806/model/WorkflowRunConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowRunConfig::WorkflowRunConfig() :
    m_maxConcurrentNumHasBeenSet(false),
    m_queuingModeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxConcurrentNum") && !value["MaxConcurrentNum"].IsNull())
    {
        if (!value["MaxConcurrentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunConfig.MaxConcurrentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentNum = value["MaxConcurrentNum"].GetUint64();
        m_maxConcurrentNumHasBeenSet = true;
    }

    if (value.HasMember("QueuingMode") && !value["QueuingMode"].IsNull())
    {
        if (!value["QueuingMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunConfig.QueuingMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queuingMode = value["QueuingMode"].GetUint64();
        m_queuingModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxConcurrentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentNum, allocator);
    }

    if (m_queuingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuingMode, allocator);
    }

}


uint64_t WorkflowRunConfig::GetMaxConcurrentNum() const
{
    return m_maxConcurrentNum;
}

void WorkflowRunConfig::SetMaxConcurrentNum(const uint64_t& _maxConcurrentNum)
{
    m_maxConcurrentNum = _maxConcurrentNum;
    m_maxConcurrentNumHasBeenSet = true;
}

bool WorkflowRunConfig::MaxConcurrentNumHasBeenSet() const
{
    return m_maxConcurrentNumHasBeenSet;
}

uint64_t WorkflowRunConfig::GetQueuingMode() const
{
    return m_queuingMode;
}

void WorkflowRunConfig::SetQueuingMode(const uint64_t& _queuingMode)
{
    m_queuingMode = _queuingMode;
    m_queuingModeHasBeenSet = true;
}

bool WorkflowRunConfig::QueuingModeHasBeenSet() const
{
    return m_queuingModeHasBeenSet;
}

