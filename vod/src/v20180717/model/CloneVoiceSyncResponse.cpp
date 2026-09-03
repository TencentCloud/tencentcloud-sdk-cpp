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

#include <tencentcloud/vod/v20180717/model/CloneVoiceSyncResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CloneVoiceSyncResponse::CloneVoiceSyncResponse() :
    m_voiceIdHasBeenSet(false),
    m_demoAudioHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome CloneVoiceSyncResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VoiceId") && !rsp["VoiceId"].IsNull())
    {
        if (!rsp["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(rsp["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DemoAudio") && !rsp["DemoAudio"].IsNull())
    {
        if (!rsp["DemoAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DemoAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoAudio = string(rsp["DemoAudio"].GetString());
        m_demoAudioHasBeenSet = true;
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

string CloneVoiceSyncResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_demoAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoAudio.c_str(), allocator).Move(), allocator);
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


string CloneVoiceSyncResponse::GetVoiceId() const
{
    return m_voiceId;
}

bool CloneVoiceSyncResponse::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CloneVoiceSyncResponse::GetDemoAudio() const
{
    return m_demoAudio;
}

bool CloneVoiceSyncResponse::DemoAudioHasBeenSet() const
{
    return m_demoAudioHasBeenSet;
}

string CloneVoiceSyncResponse::GetExtInfo() const
{
    return m_extInfo;
}

bool CloneVoiceSyncResponse::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


