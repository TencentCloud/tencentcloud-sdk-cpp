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
using namespace rapidjson;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_workflowTaskHasBeenSet(false),
    m_editMediaTaskHasBeenSet(false),
    m_liveStreamProcessTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BeginProcessTime") && !rsp["BeginProcessTime"].IsNull())
    {
        if (!rsp["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(rsp["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowTask") && !rsp["WorkflowTask"].IsNull())
    {
        if (!rsp["WorkflowTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WorkflowTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowTask.Deserialize(rsp["WorkflowTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowTaskHasBeenSet = true;
    }

    if (rsp.HasMember("EditMediaTask") && !rsp["EditMediaTask"].IsNull())
    {
        if (!rsp["EditMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EditMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaTask.Deserialize(rsp["EditMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("LiveStreamProcessTask") && !rsp["LiveStreamProcessTask"].IsNull())
    {
        if (!rsp["LiveStreamProcessTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LiveStreamProcessTask` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TaskNotifyConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TasksPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tasksPriority = rsp["TasksPriority"].GetInt64();
        m_tasksPriorityHasBeenSet = true;
    }

    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("SessionContext") && !rsp["SessionContext"].IsNull())
    {
        if (!rsp["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(rsp["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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

WorkflowTask DescribeTaskDetailResponse::GetWorkflowTask() const
{
    return m_workflowTask;
}

bool DescribeTaskDetailResponse::WorkflowTaskHasBeenSet() const
{
    return m_workflowTaskHasBeenSet;
}

EditMediaTask DescribeTaskDetailResponse::GetEditMediaTask() const
{
    return m_editMediaTask;
}

bool DescribeTaskDetailResponse::EditMediaTaskHasBeenSet() const
{
    return m_editMediaTaskHasBeenSet;
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


