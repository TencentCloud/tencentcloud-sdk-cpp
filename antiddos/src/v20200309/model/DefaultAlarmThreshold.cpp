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

#include <tencentcloud/antiddos/v20200309/model/DefaultAlarmThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DefaultAlarmThreshold::DefaultAlarmThreshold() :
    m_alarmTypeHasBeenSet(false),
    m_alarmThresholdHasBeenSet(false)
{
}

CoreInternalOutcome DefaultAlarmThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultAlarmThreshold.AlarmType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = value["AlarmType"].GetUint64();
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmThreshold") && !value["AlarmThreshold"].IsNull())
    {
        if (!value["AlarmThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultAlarmThreshold.AlarmThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmThreshold = value["AlarmThreshold"].GetUint64();
        m_alarmThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultAlarmThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmType, allocator);
    }

    if (m_alarmThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmThreshold, allocator);
    }

}


uint64_t DefaultAlarmThreshold::GetAlarmType() const
{
    return m_alarmType;
}

void DefaultAlarmThreshold::SetAlarmType(const uint64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool DefaultAlarmThreshold::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

uint64_t DefaultAlarmThreshold::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void DefaultAlarmThreshold::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool DefaultAlarmThreshold::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}

