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

#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

ParseLiveStreamProcessNotificationResponse::ParseLiveStreamProcessNotificationResponse() :
    m_notificationTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_processEofInfoHasBeenSet(false),
    m_aiReviewResultInfoHasBeenSet(false),
    m_aiRecognitionResultInfoHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome ParseLiveStreamProcessNotificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NotificationType") && !rsp["NotificationType"].IsNull())
    {
        if (!rsp["NotificationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotificationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationType = string(rsp["NotificationType"].GetString());
        m_notificationTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessEofInfo") && !rsp["ProcessEofInfo"].IsNull())
    {
        if (!rsp["ProcessEofInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProcessEofInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_processEofInfo.Deserialize(rsp["ProcessEofInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processEofInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AiReviewResultInfo") && !rsp["AiReviewResultInfo"].IsNull())
    {
        if (!rsp["AiReviewResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiReviewResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiReviewResultInfo.Deserialize(rsp["AiReviewResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiReviewResultInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AiRecognitionResultInfo") && !rsp["AiRecognitionResultInfo"].IsNull())
    {
        if (!rsp["AiRecognitionResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRecognitionResultInfo.Deserialize(rsp["AiRecognitionResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRecognitionResultInfoHasBeenSet = true;
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


string ParseLiveStreamProcessNotificationResponse::GetNotificationType() const
{
    return m_notificationType;
}

bool ParseLiveStreamProcessNotificationResponse::NotificationTypeHasBeenSet() const
{
    return m_notificationTypeHasBeenSet;
}

string ParseLiveStreamProcessNotificationResponse::GetTaskId() const
{
    return m_taskId;
}

bool ParseLiveStreamProcessNotificationResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

LiveStreamProcessErrorInfo ParseLiveStreamProcessNotificationResponse::GetProcessEofInfo() const
{
    return m_processEofInfo;
}

bool ParseLiveStreamProcessNotificationResponse::ProcessEofInfoHasBeenSet() const
{
    return m_processEofInfoHasBeenSet;
}

LiveStreamAiReviewResultInfo ParseLiveStreamProcessNotificationResponse::GetAiReviewResultInfo() const
{
    return m_aiReviewResultInfo;
}

bool ParseLiveStreamProcessNotificationResponse::AiReviewResultInfoHasBeenSet() const
{
    return m_aiReviewResultInfoHasBeenSet;
}

LiveStreamAiRecognitionResultInfo ParseLiveStreamProcessNotificationResponse::GetAiRecognitionResultInfo() const
{
    return m_aiRecognitionResultInfo;
}

bool ParseLiveStreamProcessNotificationResponse::AiRecognitionResultInfoHasBeenSet() const
{
    return m_aiRecognitionResultInfoHasBeenSet;
}

string ParseLiveStreamProcessNotificationResponse::GetSessionId() const
{
    return m_sessionId;
}

bool ParseLiveStreamProcessNotificationResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ParseLiveStreamProcessNotificationResponse::GetSessionContext() const
{
    return m_sessionContext;
}

bool ParseLiveStreamProcessNotificationResponse::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}


