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
using namespace rapidjson;
using namespace std;

ParseNotificationResponse::ParseNotificationResponse() :
    m_eventTypeHasBeenSet(false),
    m_workflowTaskEventHasBeenSet(false),
    m_editMediaTaskEventHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome ParseNotificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventType") && !rsp["EventType"].IsNull())
    {
        if (!rsp["EventType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(rsp["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowTaskEvent") && !rsp["WorkflowTaskEvent"].IsNull())
    {
        if (!rsp["WorkflowTaskEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WorkflowTaskEvent` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `EditMediaTaskEvent` is not object type").SetRequestId(requestId));
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


