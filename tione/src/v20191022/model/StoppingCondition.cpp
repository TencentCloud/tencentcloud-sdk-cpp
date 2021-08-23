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

#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

StoppingCondition::StoppingCondition() :
    m_maxRuntimeInSecondsHasBeenSet(false),
    m_maxWaitTimeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome StoppingCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxRuntimeInSeconds") && !value["MaxRuntimeInSeconds"].IsNull())
    {
        if (!value["MaxRuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StoppingCondition.MaxRuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRuntimeInSeconds = value["MaxRuntimeInSeconds"].GetUint64();
        m_maxRuntimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxWaitTimeInSeconds") && !value["MaxWaitTimeInSeconds"].IsNull())
    {
        if (!value["MaxWaitTimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StoppingCondition.MaxWaitTimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxWaitTimeInSeconds = value["MaxWaitTimeInSeconds"].GetUint64();
        m_maxWaitTimeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StoppingCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxRuntimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRuntimeInSeconds, allocator);
    }

    if (m_maxWaitTimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxWaitTimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxWaitTimeInSeconds, allocator);
    }

}


uint64_t StoppingCondition::GetMaxRuntimeInSeconds() const
{
    return m_maxRuntimeInSeconds;
}

void StoppingCondition::SetMaxRuntimeInSeconds(const uint64_t& _maxRuntimeInSeconds)
{
    m_maxRuntimeInSeconds = _maxRuntimeInSeconds;
    m_maxRuntimeInSecondsHasBeenSet = true;
}

bool StoppingCondition::MaxRuntimeInSecondsHasBeenSet() const
{
    return m_maxRuntimeInSecondsHasBeenSet;
}

uint64_t StoppingCondition::GetMaxWaitTimeInSeconds() const
{
    return m_maxWaitTimeInSeconds;
}

void StoppingCondition::SetMaxWaitTimeInSeconds(const uint64_t& _maxWaitTimeInSeconds)
{
    m_maxWaitTimeInSeconds = _maxWaitTimeInSeconds;
    m_maxWaitTimeInSecondsHasBeenSet = true;
}

bool StoppingCondition::MaxWaitTimeInSecondsHasBeenSet() const
{
    return m_maxWaitTimeInSecondsHasBeenSet;
}

