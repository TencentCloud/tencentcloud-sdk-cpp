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

#include <tencentcloud/teo/v20220901/model/CreateJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateJustInTimeTranscodeTemplateRequest::CreateJustInTimeTranscodeTemplateRequest() :
    m_zoneIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_videoStreamSwitchHasBeenSet(false),
    m_audioStreamSwitchHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false)
{
}

string CreateJustInTimeTranscodeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_videoStreamSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStreamSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoStreamSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_audioStreamSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStreamSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioStreamSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_videoTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_audioTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioTemplate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJustInTimeTranscodeTemplateRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateJustInTimeTranscodeTemplateRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateJustInTimeTranscodeTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateJustInTimeTranscodeTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CreateJustInTimeTranscodeTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateJustInTimeTranscodeTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateJustInTimeTranscodeTemplateRequest::GetVideoStreamSwitch() const
{
    return m_videoStreamSwitch;
}

void CreateJustInTimeTranscodeTemplateRequest::SetVideoStreamSwitch(const string& _videoStreamSwitch)
{
    m_videoStreamSwitch = _videoStreamSwitch;
    m_videoStreamSwitchHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::VideoStreamSwitchHasBeenSet() const
{
    return m_videoStreamSwitchHasBeenSet;
}

string CreateJustInTimeTranscodeTemplateRequest::GetAudioStreamSwitch() const
{
    return m_audioStreamSwitch;
}

void CreateJustInTimeTranscodeTemplateRequest::SetAudioStreamSwitch(const string& _audioStreamSwitch)
{
    m_audioStreamSwitch = _audioStreamSwitch;
    m_audioStreamSwitchHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::AudioStreamSwitchHasBeenSet() const
{
    return m_audioStreamSwitchHasBeenSet;
}

VideoTemplateInfo CreateJustInTimeTranscodeTemplateRequest::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void CreateJustInTimeTranscodeTemplateRequest::SetVideoTemplate(const VideoTemplateInfo& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfo CreateJustInTimeTranscodeTemplateRequest::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void CreateJustInTimeTranscodeTemplateRequest::SetAudioTemplate(const AudioTemplateInfo& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool CreateJustInTimeTranscodeTemplateRequest::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}


