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

#include <tencentcloud/mps/v20190612/model/DescribeAigcTaskStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeAigcTaskStatusResponse::DescribeAigcTaskStatusResponse() :
    m_taskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_outputUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_taskResultCodeHasBeenSet(false),
    m_taskResultMsgHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAigcTaskStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(rsp["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("OutputUrl") && !rsp["OutputUrl"].IsNull())
    {
        if (!rsp["OutputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputUrl = string(rsp["OutputUrl"].GetString());
        m_outputUrlHasBeenSet = true;
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

    if (rsp.HasMember("ScheduledTime") && !rsp["ScheduledTime"].IsNull())
    {
        if (!rsp["ScheduledTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTime = string(rsp["ScheduledTime"].GetString());
        m_scheduledTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishedTime") && !rsp["FinishedTime"].IsNull())
    {
        if (!rsp["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(rsp["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TaskResultCode") && !rsp["TaskResultCode"].IsNull())
    {
        if (!rsp["TaskResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskResultCode = rsp["TaskResultCode"].GetInt64();
        m_taskResultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TaskResultMsg") && !rsp["TaskResultMsg"].IsNull())
    {
        if (!rsp["TaskResultMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskResultMsg = string(rsp["TaskResultMsg"].GetString());
        m_taskResultMsgHasBeenSet = true;
    }

    if (rsp.HasMember("RequestBody") && !rsp["RequestBody"].IsNull())
    {
        if (!rsp["RequestBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestBody = string(rsp["RequestBody"].GetString());
        m_requestBodyHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeAigcTaskStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_outputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskResultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskResultCode, allocator);
    }

    if (m_taskResultMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskResultMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
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


string DescribeAigcTaskStatusResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeAigcTaskStatusResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool DescribeAigcTaskStatusResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetOutputUrl() const
{
    return m_outputUrl;
}

bool DescribeAigcTaskStatusResponse::OutputUrlHasBeenSet() const
{
    return m_outputUrlHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAigcTaskStatusResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetScheduledTime() const
{
    return m_scheduledTime;
}

bool DescribeAigcTaskStatusResponse::ScheduledTimeHasBeenSet() const
{
    return m_scheduledTimeHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetFinishedTime() const
{
    return m_finishedTime;
}

bool DescribeAigcTaskStatusResponse::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

int64_t DescribeAigcTaskStatusResponse::GetTaskResultCode() const
{
    return m_taskResultCode;
}

bool DescribeAigcTaskStatusResponse::TaskResultCodeHasBeenSet() const
{
    return m_taskResultCodeHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetTaskResultMsg() const
{
    return m_taskResultMsg;
}

bool DescribeAigcTaskStatusResponse::TaskResultMsgHasBeenSet() const
{
    return m_taskResultMsgHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetRequestBody() const
{
    return m_requestBody;
}

bool DescribeAigcTaskStatusResponse::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

string DescribeAigcTaskStatusResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeAigcTaskStatusResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


