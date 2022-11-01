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

#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ScheduledAction::ScheduledAction() :
    m_scheduleStopHasBeenSet(false),
    m_scheduleStopTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleStop") && !value["ScheduleStop"].IsNull())
    {
        if (!value["ScheduleStop"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.ScheduleStop` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleStop = value["ScheduleStop"].GetBool();
        m_scheduleStopHasBeenSet = true;
    }

    if (value.HasMember("ScheduleStopTime") && !value["ScheduleStopTime"].IsNull())
    {
        if (!value["ScheduleStopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.ScheduleStopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleStopTime = string(value["ScheduleStopTime"].GetString());
        m_scheduleStopTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleStop, allocator);
    }

    if (m_scheduleStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleStopTime.c_str(), allocator).Move(), allocator);
    }

}


bool ScheduledAction::GetScheduleStop() const
{
    return m_scheduleStop;
}

void ScheduledAction::SetScheduleStop(const bool& _scheduleStop)
{
    m_scheduleStop = _scheduleStop;
    m_scheduleStopHasBeenSet = true;
}

bool ScheduledAction::ScheduleStopHasBeenSet() const
{
    return m_scheduleStopHasBeenSet;
}

string ScheduledAction::GetScheduleStopTime() const
{
    return m_scheduleStopTime;
}

void ScheduledAction::SetScheduleStopTime(const string& _scheduleStopTime)
{
    m_scheduleStopTime = _scheduleStopTime;
    m_scheduleStopTimeHasBeenSet = true;
}

bool ScheduledAction::ScheduleStopTimeHasBeenSet() const
{
    return m_scheduleStopTimeHasBeenSet;
}

