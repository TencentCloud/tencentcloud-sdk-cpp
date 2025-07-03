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

#include <tencentcloud/securitylake/v20240117/model/SecurityGroupAlertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Securitylake::V20240117::Model;
using namespace std;

SecurityGroupAlertInfo::SecurityGroupAlertInfo() :
    m_alarmUuidHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupAlertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmUuid") && !value["AlarmUuid"].IsNull())
    {
        if (!value["AlarmUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAlertInfo.AlarmUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmUuid = string(value["AlarmUuid"].GetString());
        m_alarmUuidHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupAlertInfo.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupAlertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroupAlertInfo::GetAlarmUuid() const
{
    return m_alarmUuid;
}

void SecurityGroupAlertInfo::SetAlarmUuid(const string& _alarmUuid)
{
    m_alarmUuid = _alarmUuid;
    m_alarmUuidHasBeenSet = true;
}

bool SecurityGroupAlertInfo::AlarmUuidHasBeenSet() const
{
    return m_alarmUuidHasBeenSet;
}

string SecurityGroupAlertInfo::GetTimestamp() const
{
    return m_timestamp;
}

void SecurityGroupAlertInfo::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SecurityGroupAlertInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

