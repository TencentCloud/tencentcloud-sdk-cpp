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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeScheduledTaskLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeScheduledTaskLogResponse::DescribeScheduledTaskLogResponse() :
    m_logIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskKeyHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
    m_deliveryErrorHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_sessionNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScheduledTaskLogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogId") && !rsp["LogId"].IsNull())
    {
        if (!rsp["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(rsp["LogId"].GetString());
        m_logIdHasBeenSet = true;
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

    if (rsp.HasMember("TaskKey") && !rsp["TaskKey"].IsNull())
    {
        if (!rsp["TaskKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKey = string(rsp["TaskKey"].GetString());
        m_taskKeyHasBeenSet = true;
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

    if (rsp.HasMember("TriggerType") && !rsp["TriggerType"].IsNull())
    {
        if (!rsp["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(rsp["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
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

    if (rsp.HasMember("Prompt") && !rsp["Prompt"].IsNull())
    {
        if (!rsp["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(rsp["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DurationMs") && !rsp["DurationMs"].IsNull())
    {
        if (!rsp["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = rsp["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (rsp.HasMember("DeliveryStatus") && !rsp["DeliveryStatus"].IsNull())
    {
        if (!rsp["DeliveryStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryStatus = string(rsp["DeliveryStatus"].GetString());
        m_deliveryStatusHasBeenSet = true;
    }

    if (rsp.HasMember("DeliveryError") && !rsp["DeliveryError"].IsNull())
    {
        if (!rsp["DeliveryError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryError = string(rsp["DeliveryError"].GetString());
        m_deliveryErrorHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("SessionName") && !rsp["SessionName"].IsNull())
    {
        if (!rsp["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(rsp["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScheduledTaskLogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
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

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryError.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
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


string DescribeScheduledTaskLogResponse::GetLogId() const
{
    return m_logId;
}

bool DescribeScheduledTaskLogResponse::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeScheduledTaskLogResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetTaskKey() const
{
    return m_taskKey;
}

bool DescribeScheduledTaskLogResponse::TaskKeyHasBeenSet() const
{
    return m_taskKeyHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeScheduledTaskLogResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetTriggerType() const
{
    return m_triggerType;
}

bool DescribeScheduledTaskLogResponse::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetStatus() const
{
    return m_status;
}

bool DescribeScheduledTaskLogResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetPrompt() const
{
    return m_prompt;
}

bool DescribeScheduledTaskLogResponse::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetResult() const
{
    return m_result;
}

bool DescribeScheduledTaskLogResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeScheduledTaskLogResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeScheduledTaskLogResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeScheduledTaskLogResponse::GetDurationMs() const
{
    return m_durationMs;
}

bool DescribeScheduledTaskLogResponse::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

bool DescribeScheduledTaskLogResponse::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetDeliveryError() const
{
    return m_deliveryError;
}

bool DescribeScheduledTaskLogResponse::DeliveryErrorHasBeenSet() const
{
    return m_deliveryErrorHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeScheduledTaskLogResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool DescribeScheduledTaskLogResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string DescribeScheduledTaskLogResponse::GetSessionName() const
{
    return m_sessionName;
}

bool DescribeScheduledTaskLogResponse::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}


