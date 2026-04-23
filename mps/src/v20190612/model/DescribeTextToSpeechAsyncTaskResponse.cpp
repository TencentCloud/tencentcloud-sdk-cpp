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

#include <tencentcloud/mps/v20190612/model/DescribeTextToSpeechAsyncTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeTextToSpeechAsyncTaskResponse::DescribeTextToSpeechAsyncTaskResponse() :
    m_errorCodeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTextToSpeechAsyncTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
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

    if (rsp.HasMember("AudioUrl") && !rsp["AudioUrl"].IsNull())
    {
        if (!rsp["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(rsp["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (rsp.HasMember("VoiceId") && !rsp["VoiceId"].IsNull())
    {
        if (!rsp["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(rsp["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeTextToSpeechAsyncTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
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


int64_t DescribeTextToSpeechAsyncTaskResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeTextToSpeechAsyncTaskResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeTextToSpeechAsyncTaskResponse::GetMsg() const
{
    return m_msg;
}

bool DescribeTextToSpeechAsyncTaskResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string DescribeTextToSpeechAsyncTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTextToSpeechAsyncTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTextToSpeechAsyncTaskResponse::GetAudioUrl() const
{
    return m_audioUrl;
}

bool DescribeTextToSpeechAsyncTaskResponse::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string DescribeTextToSpeechAsyncTaskResponse::GetVoiceId() const
{
    return m_voiceId;
}

bool DescribeTextToSpeechAsyncTaskResponse::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string DescribeTextToSpeechAsyncTaskResponse::GetExtInfo() const
{
    return m_extInfo;
}

bool DescribeTextToSpeechAsyncTaskResponse::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


