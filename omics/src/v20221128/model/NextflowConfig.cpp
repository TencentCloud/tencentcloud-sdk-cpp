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

#include <tencentcloud/omics/v20221128/model/NextflowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

NextflowConfig::NextflowConfig() :
    m_executorQueueSizeHasBeenSet(false)
{
}

CoreInternalOutcome NextflowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutorQueueSize") && !value["ExecutorQueueSize"].IsNull())
    {
        if (!value["ExecutorQueueSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NextflowConfig.ExecutorQueueSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorQueueSize = value["ExecutorQueueSize"].GetUint64();
        m_executorQueueSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NextflowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executorQueueSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorQueueSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorQueueSize, allocator);
    }

}


uint64_t NextflowConfig::GetExecutorQueueSize() const
{
    return m_executorQueueSize;
}

void NextflowConfig::SetExecutorQueueSize(const uint64_t& _executorQueueSize)
{
    m_executorQueueSize = _executorQueueSize;
    m_executorQueueSizeHasBeenSet = true;
}

bool NextflowConfig::ExecutorQueueSizeHasBeenSet() const
{
    return m_executorQueueSizeHasBeenSet;
}

