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

#include <tencentcloud/acp/v20220105/model/AppTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

AppTaskData::AppTaskData() :
    m_taskIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskErrMsgHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_appInfoHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_contactNameHasBeenSet(false)
{
}

CoreInternalOutcome AppTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskErrMsg") && !value["TaskErrMsg"].IsNull())
    {
        if (!value["TaskErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.TaskErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskErrMsg = string(value["TaskErrMsg"].GetString());
        m_taskErrMsgHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("AppInfo") && !value["AppInfo"].IsNull())
    {
        if (!value["AppInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.AppInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appInfo.Deserialize(value["AppInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appInfoHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ContactName") && !value["ContactName"].IsNull())
    {
        if (!value["ContactName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTaskData.ContactName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactName = string(value["ContactName"].GetString());
        m_contactNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_appInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

}


string AppTaskData::GetTaskID() const
{
    return m_taskID;
}

void AppTaskData::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool AppTaskData::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

int64_t AppTaskData::GetTaskType() const
{
    return m_taskType;
}

void AppTaskData::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AppTaskData::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t AppTaskData::GetTaskStatus() const
{
    return m_taskStatus;
}

void AppTaskData::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool AppTaskData::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string AppTaskData::GetTaskErrMsg() const
{
    return m_taskErrMsg;
}

void AppTaskData::SetTaskErrMsg(const string& _taskErrMsg)
{
    m_taskErrMsg = _taskErrMsg;
    m_taskErrMsgHasBeenSet = true;
}

bool AppTaskData::TaskErrMsgHasBeenSet() const
{
    return m_taskErrMsgHasBeenSet;
}

int64_t AppTaskData::GetSource() const
{
    return m_source;
}

void AppTaskData::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AppTaskData::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

AppInfoItem AppTaskData::GetAppInfo() const
{
    return m_appInfo;
}

void AppTaskData::SetAppInfo(const AppInfoItem& _appInfo)
{
    m_appInfo = _appInfo;
    m_appInfoHasBeenSet = true;
}

bool AppTaskData::AppInfoHasBeenSet() const
{
    return m_appInfoHasBeenSet;
}

string AppTaskData::GetStartTime() const
{
    return m_startTime;
}

void AppTaskData::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AppTaskData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AppTaskData::GetEndTime() const
{
    return m_endTime;
}

void AppTaskData::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AppTaskData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string AppTaskData::GetContactName() const
{
    return m_contactName;
}

void AppTaskData::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool AppTaskData::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

