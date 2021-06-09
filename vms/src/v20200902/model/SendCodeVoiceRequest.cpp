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

#include <tencentcloud/vms/v20200902/model/SendCodeVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vms::V20200902::Model;
using namespace std;

SendCodeVoiceRequest::SendCodeVoiceRequest() :
    m_codeMessageHasBeenSet(false),
    m_calledNumberHasBeenSet(false),
    m_voiceSdkAppidHasBeenSet(false),
    m_playTimesHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

string SendCodeVoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_calledNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalledNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calledNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceSdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceSdkAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceSdkAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_playTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playTimes, allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendCodeVoiceRequest::GetCodeMessage() const
{
    return m_codeMessage;
}

void SendCodeVoiceRequest::SetCodeMessage(const string& _codeMessage)
{
    m_codeMessage = _codeMessage;
    m_codeMessageHasBeenSet = true;
}

bool SendCodeVoiceRequest::CodeMessageHasBeenSet() const
{
    return m_codeMessageHasBeenSet;
}

string SendCodeVoiceRequest::GetCalledNumber() const
{
    return m_calledNumber;
}

void SendCodeVoiceRequest::SetCalledNumber(const string& _calledNumber)
{
    m_calledNumber = _calledNumber;
    m_calledNumberHasBeenSet = true;
}

bool SendCodeVoiceRequest::CalledNumberHasBeenSet() const
{
    return m_calledNumberHasBeenSet;
}

string SendCodeVoiceRequest::GetVoiceSdkAppid() const
{
    return m_voiceSdkAppid;
}

void SendCodeVoiceRequest::SetVoiceSdkAppid(const string& _voiceSdkAppid)
{
    m_voiceSdkAppid = _voiceSdkAppid;
    m_voiceSdkAppidHasBeenSet = true;
}

bool SendCodeVoiceRequest::VoiceSdkAppidHasBeenSet() const
{
    return m_voiceSdkAppidHasBeenSet;
}

uint64_t SendCodeVoiceRequest::GetPlayTimes() const
{
    return m_playTimes;
}

void SendCodeVoiceRequest::SetPlayTimes(const uint64_t& _playTimes)
{
    m_playTimes = _playTimes;
    m_playTimesHasBeenSet = true;
}

bool SendCodeVoiceRequest::PlayTimesHasBeenSet() const
{
    return m_playTimesHasBeenSet;
}

string SendCodeVoiceRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void SendCodeVoiceRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SendCodeVoiceRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}


