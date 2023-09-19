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

#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_editMediaTaskHasBeenSet(false),
    m_workflowTaskHasBeenSet(false),
    m_liveStreamProcessTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_scheduleTaskHasBeenSet(false),
    m_liveScheduleTaskHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BeginProcessTime") && !rsp["BeginProcessTime"].IsNull())
    {
        if (!rsp["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(rsp["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EditMediaTask") && !rsp["EditMediaTask"].IsNull())
    {
        if (!rsp["EditMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaTask.Deserialize(rsp["EditMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowTask") && !rsp["WorkflowTask"].IsNull())
    {
        if (!rsp["WorkflowTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowTask.Deserialize(rsp["WorkflowTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowTaskHasBeenSet = true;
    }

    if (rsp.HasMember("LiveStreamProcessTask") && !rsp["LiveStreamProcessTask"].IsNull())
    {
        if (!rsp["LiveStreamProcessTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamProcessTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveStreamProcessTask.Deserialize(rsp["LiveStreamProcessTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveStreamProcessTaskHasBeenSet = true;
    }

    if (rsp.HasMember("TaskNotifyConfig") && !rsp["TaskNotifyConfig"].IsNull())
    {
        if (!rsp["TaskNotifyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskNotifyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskNotifyConfig.Deserialize(rsp["TaskNotifyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskNotifyConfigHasBeenSet = true;
    }

    if (rsp.HasMember("TasksPriority") && !rsp["TasksPriority"].IsNull())
    {
        if (!rsp["TasksPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TasksPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tasksPriority = rsp["TasksPriority"].GetInt64();
        m_tasksPriorityHasBeenSet = true;
    }

    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("SessionContext") && !rsp["SessionContext"].IsNull())
    {
        if (!rsp["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(rsp["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (rsp.HasMember("ExtInfo") && !rsp["ExtInfo"].IsNull())
    {
        if (!rsp["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(rsp["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ScheduleTask") && !rsp["ScheduleTask"].IsNull())
    {
        if (!rsp["ScheduleTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduleTask.Deserialize(rsp["ScheduleTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleTaskHasBeenSet = true;
    }

    if (rsp.HasMember("LiveScheduleTask") && !rsp["LiveScheduleTask"].IsNull())
    {
        if (!rsp["LiveScheduleTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveScheduleTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveScheduleTask.Deserialize(rsp["LiveScheduleTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveScheduleTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_beginProcessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginProcessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_editMediaTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditMediaTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_editMediaTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveStreamProcessTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveStreamProcessTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveStreamProcessTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveScheduleTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveScheduleTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveScheduleTask.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeTaskDetailResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeTaskDetailResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTaskDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

bool DescribeTaskDetailResponse::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool DescribeTaskDetailResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

EditMediaTask DescribeTaskDetailResponse::GetEditMediaTask() const
{
    return m_editMediaTask;
}

bool DescribeTaskDetailResponse::EditMediaTaskHasBeenSet() const
{
    return m_editMediaTaskHasBeenSet;
}

WorkflowTask DescribeTaskDetailResponse::GetWorkflowTask() const
{
    return m_workflowTask;
}

bool DescribeTaskDetailResponse::WorkflowTaskHasBeenSet() const
{
    return m_workflowTaskHasBeenSet;
}

LiveStreamProcessTask DescribeTaskDetailResponse::GetLiveStreamProcessTask() const
{
    return m_liveStreamProcessTask;
}

bool DescribeTaskDetailResponse::LiveStreamProcessTaskHasBeenSet() const
{
    return m_liveStreamProcessTaskHasBeenSet;
}

TaskNotifyConfig DescribeTaskDetailResponse::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

bool DescribeTaskDetailResponse::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t DescribeTaskDetailResponse::GetTasksPriority() const
{
    return m_tasksPriority;
}

bool DescribeTaskDetailResponse::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string DescribeTaskDetailResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeTaskDetailResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeTaskDetailResponse::GetSessionContext() const
{
    return m_sessionContext;
}

bool DescribeTaskDetailResponse::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string DescribeTaskDetailResponse::GetExtInfo() const
{
    return m_extInfo;
}

bool DescribeTaskDetailResponse::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

ScheduleTask DescribeTaskDetailResponse::GetScheduleTask() const
{
    return m_scheduleTask;
}

bool DescribeTaskDetailResponse::ScheduleTaskHasBeenSet() const
{
    return m_scheduleTaskHasBeenSet;
}

LiveScheduleTask DescribeTaskDetailResponse::GetLiveScheduleTask() const
{
    return m_liveScheduleTask;
}

bool DescribeTaskDetailResponse::LiveScheduleTaskHasBeenSet() const
{
    return m_liveScheduleTaskHasBeenSet;
}


