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

#include <tencentcloud/dayu/v20180709/model/CCAlarmThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CCAlarmThreshold::CCAlarmThreshold() :
    m_alarmThresholdHasBeenSet(false)
{
}

CoreInternalOutcome CCAlarmThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmThreshold") && !value["AlarmThreshold"].IsNull())
    {
        if (!value["AlarmThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCAlarmThreshold.AlarmThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmThreshold = value["AlarmThreshold"].GetUint64();
        m_alarmThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCAlarmThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmThreshold, allocator);
    }

}


uint64_t CCAlarmThreshold::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void CCAlarmThreshold::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool CCAlarmThreshold::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}

