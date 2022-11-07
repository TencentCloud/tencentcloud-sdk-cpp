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

#include <tencentcloud/wedata/v20210820/model/SpeedValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SpeedValue::SpeedValue() :
    m_timeHasBeenSet(false),
    m_speedHasBeenSet(false)
{
}

CoreInternalOutcome SpeedValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedValue.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedValue.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

}


uint64_t SpeedValue::GetTime() const
{
    return m_time;
}

void SpeedValue::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SpeedValue::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double SpeedValue::GetSpeed() const
{
    return m_speed;
}

void SpeedValue::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool SpeedValue::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

