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

#include <tencentcloud/dbbrain/v20210527/model/TaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

TaskInfo::TaskInfo() :
    m_asyncRequestIdHasBeenSet(false),
    m_instProxyListHasBeenSet(false),
    m_instProxyCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_finishedProxyListHasBeenSet(false),
    m_failedProxyListHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.AsyncRequestId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetInt64();
        m_asyncRequestIdHasBeenSet = true;
    }

    if (value.HasMember("InstProxyList") && !value["InstProxyList"].IsNull())
    {
        if (!value["InstProxyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.InstProxyList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstProxyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instProxyList.push_back((*itr).GetString());
        }
        m_instProxyListHasBeenSet = true;
    }

    if (value.HasMember("InstProxyCount") && !value["InstProxyCount"].IsNull())
    {
        if (!value["InstProxyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.InstProxyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instProxyCount = value["InstProxyCount"].GetInt64();
        m_instProxyCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("FinishedProxyList") && !value["FinishedProxyList"].IsNull())
    {
        if (!value["FinishedProxyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.FinishedProxyList` is not array type"));

        const rapidjson::Value &tmpValue = value["FinishedProxyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_finishedProxyList.push_back((*itr).GetString());
        }
        m_finishedProxyListHasBeenSet = true;
    }

    if (value.HasMember("FailedProxyList") && !value["FailedProxyList"].IsNull())
    {
        if (!value["FailedProxyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.FailedProxyList` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedProxyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedProxyList.push_back((*itr).GetString());
        }
        m_failedProxyListHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_instProxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instProxyList.begin(); itr != m_instProxyList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instProxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstProxyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instProxyCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedProxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_finishedProxyList.begin(); itr != m_finishedProxyList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failedProxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedProxyList.begin(); itr != m_failedProxyList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskInfo::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void TaskInfo::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool TaskInfo::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

vector<string> TaskInfo::GetInstProxyList() const
{
    return m_instProxyList;
}

void TaskInfo::SetInstProxyList(const vector<string>& _instProxyList)
{
    m_instProxyList = _instProxyList;
    m_instProxyListHasBeenSet = true;
}

bool TaskInfo::InstProxyListHasBeenSet() const
{
    return m_instProxyListHasBeenSet;
}

int64_t TaskInfo::GetInstProxyCount() const
{
    return m_instProxyCount;
}

void TaskInfo::SetInstProxyCount(const int64_t& _instProxyCount)
{
    m_instProxyCount = _instProxyCount;
    m_instProxyCountHasBeenSet = true;
}

bool TaskInfo::InstProxyCountHasBeenSet() const
{
    return m_instProxyCountHasBeenSet;
}

string TaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskInfo::GetStartTime() const
{
    return m_startTime;
}

void TaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

vector<string> TaskInfo::GetFinishedProxyList() const
{
    return m_finishedProxyList;
}

void TaskInfo::SetFinishedProxyList(const vector<string>& _finishedProxyList)
{
    m_finishedProxyList = _finishedProxyList;
    m_finishedProxyListHasBeenSet = true;
}

bool TaskInfo::FinishedProxyListHasBeenSet() const
{
    return m_finishedProxyListHasBeenSet;
}

vector<string> TaskInfo::GetFailedProxyList() const
{
    return m_failedProxyList;
}

void TaskInfo::SetFailedProxyList(const vector<string>& _failedProxyList)
{
    m_failedProxyList = _failedProxyList;
    m_failedProxyListHasBeenSet = true;
}

bool TaskInfo::FailedProxyListHasBeenSet() const
{
    return m_failedProxyListHasBeenSet;
}

string TaskInfo::GetEndTime() const
{
    return m_endTime;
}

void TaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t TaskInfo::GetProgress() const
{
    return m_progress;
}

void TaskInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool TaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string TaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

