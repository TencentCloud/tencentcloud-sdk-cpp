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

#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

ModifyTranscodeTemplateRequest::ModifyTranscodeTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false)
{
}

string ModifyTranscodeTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_containerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_videoTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_audioTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_audioTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tEHDConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyTranscodeTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyTranscodeTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyTranscodeTemplateRequest::GetContainer() const
{
    return m_container;
}

void ModifyTranscodeTemplateRequest::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string ModifyTranscodeTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyTranscodeTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyTranscodeTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyTranscodeTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t ModifyTranscodeTemplateRequest::GetRemoveVideo() const
{
    return m_removeVideo;
}

void ModifyTranscodeTemplateRequest::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t ModifyTranscodeTemplateRequest::GetRemoveAudio() const
{
    return m_removeAudio;
}

void ModifyTranscodeTemplateRequest::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoTemplateInfoForUpdate ModifyTranscodeTemplateRequest::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void ModifyTranscodeTemplateRequest::SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfoForUpdate ModifyTranscodeTemplateRequest::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void ModifyTranscodeTemplateRequest::SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

TEHDConfigForUpdate ModifyTranscodeTemplateRequest::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void ModifyTranscodeTemplateRequest::SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool ModifyTranscodeTemplateRequest::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}


