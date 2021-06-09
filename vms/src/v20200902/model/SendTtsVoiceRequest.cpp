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

#include <tencentcloud/vms/v20200902/model/SendTtsVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vms::V20200902::Model;
using namespace std;

SendTtsVoiceRequest::SendTtsVoiceRequest() :
    m_templateIdHasBeenSet(false),
    m_calledNumberHasBeenSet(false),
    m_voiceSdkAppidHasBeenSet(false),
    m_templateParamSetHasBeenSet(false),
    m_playTimesHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

string SendTtsVoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
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

    if (m_templateParamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateParamSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateParamSet.begin(); itr != m_templateParamSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string SendTtsVoiceRequest::GetTemplateId() const
{
    return m_templateId;
}

void SendTtsVoiceRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SendTtsVoiceRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SendTtsVoiceRequest::GetCalledNumber() const
{
    return m_calledNumber;
}

void SendTtsVoiceRequest::SetCalledNumber(const string& _calledNumber)
{
    m_calledNumber = _calledNumber;
    m_calledNumberHasBeenSet = true;
}

bool SendTtsVoiceRequest::CalledNumberHasBeenSet() const
{
    return m_calledNumberHasBeenSet;
}

string SendTtsVoiceRequest::GetVoiceSdkAppid() const
{
    return m_voiceSdkAppid;
}

void SendTtsVoiceRequest::SetVoiceSdkAppid(const string& _voiceSdkAppid)
{
    m_voiceSdkAppid = _voiceSdkAppid;
    m_voiceSdkAppidHasBeenSet = true;
}

bool SendTtsVoiceRequest::VoiceSdkAppidHasBeenSet() const
{
    return m_voiceSdkAppidHasBeenSet;
}

vector<string> SendTtsVoiceRequest::GetTemplateParamSet() const
{
    return m_templateParamSet;
}

void SendTtsVoiceRequest::SetTemplateParamSet(const vector<string>& _templateParamSet)
{
    m_templateParamSet = _templateParamSet;
    m_templateParamSetHasBeenSet = true;
}

bool SendTtsVoiceRequest::TemplateParamSetHasBeenSet() const
{
    return m_templateParamSetHasBeenSet;
}

uint64_t SendTtsVoiceRequest::GetPlayTimes() const
{
    return m_playTimes;
}

void SendTtsVoiceRequest::SetPlayTimes(const uint64_t& _playTimes)
{
    m_playTimes = _playTimes;
    m_playTimesHasBeenSet = true;
}

bool SendTtsVoiceRequest::PlayTimesHasBeenSet() const
{
    return m_playTimesHasBeenSet;
}

string SendTtsVoiceRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void SendTtsVoiceRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SendTtsVoiceRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}


