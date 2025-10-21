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

#include <tencentcloud/wedata/v20250806/model/CreateAlarmRuleData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateAlarmRuleData::CreateAlarmRuleData() :
    m_alarmRuleIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateAlarmRuleData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmRuleId") && !value["AlarmRuleId"].IsNull())
    {
        if (!value["AlarmRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAlarmRuleData.AlarmRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleId = string(value["AlarmRuleId"].GetString());
        m_alarmRuleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAlarmRuleData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRuleId.c_str(), allocator).Move(), allocator);
    }

}


string CreateAlarmRuleData::GetAlarmRuleId() const
{
    return m_alarmRuleId;
}

void CreateAlarmRuleData::SetAlarmRuleId(const string& _alarmRuleId)
{
    m_alarmRuleId = _alarmRuleId;
    m_alarmRuleIdHasBeenSet = true;
}

bool CreateAlarmRuleData::AlarmRuleIdHasBeenSet() const
{
    return m_alarmRuleIdHasBeenSet;
}

