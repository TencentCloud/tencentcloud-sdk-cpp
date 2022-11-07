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

#include <tencentcloud/wedata/v20210820/model/SchedulerTaskInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SchedulerTaskInstanceInfo::SchedulerTaskInstanceInfo() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false)
{
}

CoreInternalOutcome SchedulerTaskInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInstanceInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerTaskInstanceInfo.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulerTaskInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

}


string SchedulerTaskInstanceInfo::GetTaskId() const
{
    return m_taskId;
}

void SchedulerTaskInstanceInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SchedulerTaskInstanceInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SchedulerTaskInstanceInfo::GetCurRunDate() const
{
    return m_curRunDate;
}

void SchedulerTaskInstanceInfo::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool SchedulerTaskInstanceInfo::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

