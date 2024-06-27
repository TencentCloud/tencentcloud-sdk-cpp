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

#include <tencentcloud/emr/v20190103/model/TriggerCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TriggerCondition::TriggerCondition() :
    m_compareMethodHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

CoreInternalOutcome TriggerCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompareMethod") && !value["CompareMethod"].IsNull())
    {
        if (!value["CompareMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCondition.CompareMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareMethod = value["CompareMethod"].GetInt64();
        m_compareMethodHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCondition.Threshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetDouble();
        m_thresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compareMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareMethod, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

}


int64_t TriggerCondition::GetCompareMethod() const
{
    return m_compareMethod;
}

void TriggerCondition::SetCompareMethod(const int64_t& _compareMethod)
{
    m_compareMethod = _compareMethod;
    m_compareMethodHasBeenSet = true;
}

bool TriggerCondition::CompareMethodHasBeenSet() const
{
    return m_compareMethodHasBeenSet;
}

double TriggerCondition::GetThreshold() const
{
    return m_threshold;
}

void TriggerCondition::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool TriggerCondition::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

