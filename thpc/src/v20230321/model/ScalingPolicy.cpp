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

#include <tencentcloud/thpc/v20230321/model/ScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ScalingPolicy::ScalingPolicy() :
    m_desiredCapacityHasBeenSet(false),
    m_scalingUnitHasBeenSet(false)
{
}

CoreInternalOutcome ScalingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DesiredCapacity") && !value["DesiredCapacity"].IsNull())
    {
        if (!value["DesiredCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.DesiredCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredCapacity = value["DesiredCapacity"].GetInt64();
        m_desiredCapacityHasBeenSet = true;
    }

    if (value.HasMember("ScalingUnit") && !value["ScalingUnit"].IsNull())
    {
        if (!value["ScalingUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScalingPolicy.ScalingUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingUnit = string(value["ScalingUnit"].GetString());
        m_scalingUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScalingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_scalingUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingUnit.c_str(), allocator).Move(), allocator);
    }

}


int64_t ScalingPolicy::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void ScalingPolicy::SetDesiredCapacity(const int64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool ScalingPolicy::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

string ScalingPolicy::GetScalingUnit() const
{
    return m_scalingUnit;
}

void ScalingPolicy::SetScalingUnit(const string& _scalingUnit)
{
    m_scalingUnit = _scalingUnit;
    m_scalingUnitHasBeenSet = true;
}

bool ScalingPolicy::ScalingUnitHasBeenSet() const
{
    return m_scalingUnitHasBeenSet;
}

