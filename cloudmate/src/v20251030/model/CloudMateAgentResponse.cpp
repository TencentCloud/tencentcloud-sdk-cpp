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

#include <tencentcloud/cloudmate/v20251030/model/CloudMateAgentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudmate::V20251030::Model;
using namespace std;

CloudMateAgentResponse::CloudMateAgentResponse() :
    m_sessionIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_partialHasBeenSet(false),
    m_turnCompleteHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome CloudMateAgentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = rsp["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(rsp["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("Partial") && !rsp["Partial"].IsNull())
    {
        if (!rsp["Partial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Partial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_partial = rsp["Partial"].GetBool();
        m_partialHasBeenSet = true;
    }

    if (rsp.HasMember("TurnComplete") && !rsp["TurnComplete"].IsNull())
    {
        if (!rsp["TurnComplete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TurnComplete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_turnComplete = rsp["TurnComplete"].GetBool();
        m_turnCompleteHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string CloudMateAgentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partial, allocator);
    }

    if (m_turnCompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnComplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_turnComplete, allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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


string CloudMateAgentResponse::GetSessionId() const
{
    return m_sessionId;
}

bool CloudMateAgentResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t CloudMateAgentResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool CloudMateAgentResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

ChatContent CloudMateAgentResponse::GetContent() const
{
    return m_content;
}

bool CloudMateAgentResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool CloudMateAgentResponse::GetPartial() const
{
    return m_partial;
}

bool CloudMateAgentResponse::PartialHasBeenSet() const
{
    return m_partialHasBeenSet;
}

bool CloudMateAgentResponse::GetTurnComplete() const
{
    return m_turnComplete;
}

bool CloudMateAgentResponse::TurnCompleteHasBeenSet() const
{
    return m_turnCompleteHasBeenSet;
}

string CloudMateAgentResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool CloudMateAgentResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string CloudMateAgentResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool CloudMateAgentResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}


