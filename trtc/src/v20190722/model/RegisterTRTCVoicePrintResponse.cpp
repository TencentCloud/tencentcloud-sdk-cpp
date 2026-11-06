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

#include <tencentcloud/trtc/v20190722/model/RegisterTRTCVoicePrintResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RegisterTRTCVoicePrintResponse::RegisterTRTCVoicePrintResponse() :
    m_voicePrintIdHasBeenSet(false),
    m_speakerIdHasBeenSet(false),
    m_effectiveAudioDurationHasBeenSet(false),
    m_sNRHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome RegisterTRTCVoicePrintResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VoicePrintId") && !rsp["VoicePrintId"].IsNull())
    {
        if (!rsp["VoicePrintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintId = string(rsp["VoicePrintId"].GetString());
        m_voicePrintIdHasBeenSet = true;
    }

    if (rsp.HasMember("SpeakerId") && !rsp["SpeakerId"].IsNull())
    {
        if (!rsp["SpeakerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeakerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerId = string(rsp["SpeakerId"].GetString());
        m_speakerIdHasBeenSet = true;
    }

    if (rsp.HasMember("EffectiveAudioDuration") && !rsp["EffectiveAudioDuration"].IsNull())
    {
        if (!rsp["EffectiveAudioDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveAudioDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveAudioDuration = rsp["EffectiveAudioDuration"].GetDouble();
        m_effectiveAudioDurationHasBeenSet = true;
    }

    if (rsp.HasMember("SNR") && !rsp["SNR"].IsNull())
    {
        if (!rsp["SNR"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SNR` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sNR = rsp["SNR"].GetDouble();
        m_sNRHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RegisterTRTCVoicePrintResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerId.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveAudioDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveAudioDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveAudioDuration, allocator);
    }

    if (m_sNRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sNR, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
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


string RegisterTRTCVoicePrintResponse::GetVoicePrintId() const
{
    return m_voicePrintId;
}

bool RegisterTRTCVoicePrintResponse::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string RegisterTRTCVoicePrintResponse::GetSpeakerId() const
{
    return m_speakerId;
}

bool RegisterTRTCVoicePrintResponse::SpeakerIdHasBeenSet() const
{
    return m_speakerIdHasBeenSet;
}

double RegisterTRTCVoicePrintResponse::GetEffectiveAudioDuration() const
{
    return m_effectiveAudioDuration;
}

bool RegisterTRTCVoicePrintResponse::EffectiveAudioDurationHasBeenSet() const
{
    return m_effectiveAudioDurationHasBeenSet;
}

double RegisterTRTCVoicePrintResponse::GetSNR() const
{
    return m_sNR;
}

bool RegisterTRTCVoicePrintResponse::SNRHasBeenSet() const
{
    return m_sNRHasBeenSet;
}

string RegisterTRTCVoicePrintResponse::GetMessage() const
{
    return m_message;
}

bool RegisterTRTCVoicePrintResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


