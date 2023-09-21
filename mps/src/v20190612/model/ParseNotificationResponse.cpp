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

#include <tencentcloud/mps/v20190612/model/ParseNotificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ParseNotificationResponse::ParseNotificationResponse() :
    m_eventTypeHasBeenSet(false),
    m_workflowTaskEventHasBeenSet(false),
    m_editMediaTaskEventHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_scheduleTaskEventHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_signHasBeenSet(false)
{
}

CoreInternalOutcome ParseNotificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventType") && !rsp["EventType"].IsNull())
    {
        if (!rsp["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(rsp["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowTaskEvent") && !rsp["WorkflowTaskEvent"].IsNull())
    {
        if (!rsp["WorkflowTaskEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowTaskEvent.Deserialize(rsp["WorkflowTaskEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowTaskEventHasBeenSet = true;
    }

    if (rsp.HasMember("EditMediaTaskEvent") && !rsp["EditMediaTaskEvent"].IsNull())
    {
        if (!rsp["EditMediaTaskEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTaskEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaTaskEvent.Deserialize(rsp["EditMediaTaskEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaTaskEventHasBeenSet = true;
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

    if (rsp.HasMember("ScheduleTaskEvent") && !rsp["ScheduleTaskEvent"].IsNull())
    {
        if (!rsp["ScheduleTaskEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleTaskEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduleTaskEvent.Deserialize(rsp["ScheduleTaskEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleTaskEventHasBeenSet = true;
    }

    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = rsp["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (rsp.HasMember("Sign") && !rsp["Sign"].IsNull())
    {
        if (!rsp["Sign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sign = string(rsp["Sign"].GetString());
        m_signHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ParseNotificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTaskEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTaskEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowTaskEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_editMediaTaskEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditMediaTaskEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_editMediaTaskEvent.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_scheduleTaskEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTaskEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleTaskEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
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


string ParseNotificationResponse::GetEventType() const
{
    return m_eventType;
}

bool ParseNotificationResponse::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

WorkflowTask ParseNotificationResponse::GetWorkflowTaskEvent() const
{
    return m_workflowTaskEvent;
}

bool ParseNotificationResponse::WorkflowTaskEventHasBeenSet() const
{
    return m_workflowTaskEventHasBeenSet;
}

EditMediaTask ParseNotificationResponse::GetEditMediaTaskEvent() const
{
    return m_editMediaTaskEvent;
}

bool ParseNotificationResponse::EditMediaTaskEventHasBeenSet() const
{
    return m_editMediaTaskEventHasBeenSet;
}

string ParseNotificationResponse::GetSessionId() const
{
    return m_sessionId;
}

bool ParseNotificationResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ParseNotificationResponse::GetSessionContext() const
{
    return m_sessionContext;
}

bool ParseNotificationResponse::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

ScheduleTask ParseNotificationResponse::GetScheduleTaskEvent() const
{
    return m_scheduleTaskEvent;
}

bool ParseNotificationResponse::ScheduleTaskEventHasBeenSet() const
{
    return m_scheduleTaskEventHasBeenSet;
}

int64_t ParseNotificationResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool ParseNotificationResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string ParseNotificationResponse::GetSign() const
{
    return m_sign;
}

bool ParseNotificationResponse::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}


