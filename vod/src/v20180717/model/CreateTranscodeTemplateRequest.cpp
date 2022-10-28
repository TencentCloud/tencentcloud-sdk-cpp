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

#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateTranscodeTemplateRequest::CreateTranscodeTemplateRequest() :
    m_containerHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false),
    m_segmentTypeHasBeenSet(false)
{
}

string CreateTranscodeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeAudio, allocator);
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

    if (m_tEHDConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_segmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_segmentType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTranscodeTemplateRequest::GetContainer() const
{
    return m_container;
}

void CreateTranscodeTemplateRequest::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

uint64_t CreateTranscodeTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateTranscodeTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateTranscodeTemplateRequest::GetName() const
{
    return m_name;
}

void CreateTranscodeTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateTranscodeTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateTranscodeTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t CreateTranscodeTemplateRequest::GetRemoveVideo() const
{
    return m_removeVideo;
}

void CreateTranscodeTemplateRequest::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t CreateTranscodeTemplateRequest::GetRemoveAudio() const
{
    return m_removeAudio;
}

void CreateTranscodeTemplateRequest::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoTemplateInfo CreateTranscodeTemplateRequest::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void CreateTranscodeTemplateRequest::SetVideoTemplate(const VideoTemplateInfo& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfo CreateTranscodeTemplateRequest::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void CreateTranscodeTemplateRequest::SetAudioTemplate(const AudioTemplateInfo& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

TEHDConfig CreateTranscodeTemplateRequest::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void CreateTranscodeTemplateRequest::SetTEHDConfig(const TEHDConfig& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}

string CreateTranscodeTemplateRequest::GetSegmentType() const
{
    return m_segmentType;
}

void CreateTranscodeTemplateRequest::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool CreateTranscodeTemplateRequest::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}


