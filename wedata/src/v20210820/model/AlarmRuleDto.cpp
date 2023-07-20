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

#include <tencentcloud/wedata/v20210820/model/AlarmRuleDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmRuleDto::AlarmRuleDto() :
    m_alarmRuleIdHasBeenSet(false),
    m_alarmLevelTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmRuleDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmRuleId") && !value["AlarmRuleId"].IsNull())
    {
        if (!value["AlarmRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDto.AlarmRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleId = string(value["AlarmRuleId"].GetString());
        m_alarmRuleIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevelType") && !value["AlarmLevelType"].IsNull())
    {
        if (!value["AlarmLevelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDto.AlarmLevelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevelType = string(value["AlarmLevelType"].GetString());
        m_alarmLevelTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmRuleDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmLevelType.c_str(), allocator).Move(), allocator);
    }

}


string AlarmRuleDto::GetAlarmRuleId() const
{
    return m_alarmRuleId;
}

void AlarmRuleDto::SetAlarmRuleId(const string& _alarmRuleId)
{
    m_alarmRuleId = _alarmRuleId;
    m_alarmRuleIdHasBeenSet = true;
}

bool AlarmRuleDto::AlarmRuleIdHasBeenSet() const
{
    return m_alarmRuleIdHasBeenSet;
}

string AlarmRuleDto::GetAlarmLevelType() const
{
    return m_alarmLevelType;
}

void AlarmRuleDto::SetAlarmLevelType(const string& _alarmLevelType)
{
    m_alarmLevelType = _alarmLevelType;
    m_alarmLevelTypeHasBeenSet = true;
}

bool AlarmRuleDto::AlarmLevelTypeHasBeenSet() const
{
    return m_alarmLevelTypeHasBeenSet;
}

