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
using namespace std;

ParseLiveStreamProcessNotificationResponse::ParseLiveStreamProcessNotificationResponse() :
    m_notificationTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_processEofInfoHasBeenSet(false),
    m_aiReviewResultInfoHasBeenSet(false),
    m_aiRecognitionResultInfoHasBeenSet(false),
    m_aiAnalysisResultInfoHasBeenSet(false),
    m_aiQualityControlResultInfoHasBeenSet(false),
    m_liveRecordResultInfoHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_signHasBeenSet(false)
{
}

CoreInternalOutcome ParseLiveStreamProcessNotificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NotificationType") && !rsp["NotificationType"].IsNull())
    {
        if (!rsp["NotificationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationType = string(rsp["NotificationType"].GetString());
        m_notificationTypeHasBeenSet = true;
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

    if (rsp.HasMember("ProcessEofInfo") && !rsp["ProcessEofInfo"].IsNull())
    {
        if (!rsp["ProcessEofInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessEofInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AiReviewResultInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AiRecognitionResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRecognitionResultInfo.Deserialize(rsp["AiRecognitionResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRecognitionResultInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AiAnalysisResultInfo") && !rsp["AiAnalysisResultInfo"].IsNull())
    {
        if (!rsp["AiAnalysisResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiAnalysisResultInfo.Deserialize(rsp["AiAnalysisResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiAnalysisResultInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AiQualityControlResultInfo") && !rsp["AiQualityControlResultInfo"].IsNull())
    {
        if (!rsp["AiQualityControlResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiQualityControlResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiQualityControlResultInfo.Deserialize(rsp["AiQualityControlResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiQualityControlResultInfoHasBeenSet = true;
    }

    if (rsp.HasMember("LiveRecordResultInfo") && !rsp["LiveRecordResultInfo"].IsNull())
    {
        if (!rsp["LiveRecordResultInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordResultInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveRecordResultInfo.Deserialize(rsp["LiveRecordResultInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveRecordResultInfoHasBeenSet = true;
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

string ParseLiveStreamProcessNotificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_notificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notificationType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_processEofInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessEofInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processEofInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiReviewResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiReviewResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiReviewResultInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiRecognitionResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionResultInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiAnalysisResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisResultInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiQualityControlResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControlResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiQualityControlResultInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveRecordResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveRecordResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveRecordResultInfo.ToJsonObject(value[key.c_str()], allocator);
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

LiveStreamAiAnalysisResultInfo ParseLiveStreamProcessNotificationResponse::GetAiAnalysisResultInfo() const
{
    return m_aiAnalysisResultInfo;
}

bool ParseLiveStreamProcessNotificationResponse::AiAnalysisResultInfoHasBeenSet() const
{
    return m_aiAnalysisResultInfoHasBeenSet;
}

LiveStreamAiQualityControlResultInfo ParseLiveStreamProcessNotificationResponse::GetAiQualityControlResultInfo() const
{
    return m_aiQualityControlResultInfo;
}

bool ParseLiveStreamProcessNotificationResponse::AiQualityControlResultInfoHasBeenSet() const
{
    return m_aiQualityControlResultInfoHasBeenSet;
}

LiveStreamRecordResultInfo ParseLiveStreamProcessNotificationResponse::GetLiveRecordResultInfo() const
{
    return m_liveRecordResultInfo;
}

bool ParseLiveStreamProcessNotificationResponse::LiveRecordResultInfoHasBeenSet() const
{
    return m_liveRecordResultInfoHasBeenSet;
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

int64_t ParseLiveStreamProcessNotificationResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool ParseLiveStreamProcessNotificationResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string ParseLiveStreamProcessNotificationResponse::GetSign() const
{
    return m_sign;
}

bool ParseLiveStreamProcessNotificationResponse::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}


