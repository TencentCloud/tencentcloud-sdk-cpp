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

#include <tencentcloud/vod/v20180717/model/ModifyEnhanceMediaTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyEnhanceMediaTemplateRequest::ModifyEnhanceMediaTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_rebuildVideoInfoHasBeenSet(false),
    m_rebuildAudioInfoHasBeenSet(false),
    m_targetVideoInfoHasBeenSet(false),
    m_targetAudioInfoHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false)
{
}

string ModifyEnhanceMediaTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
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

    if (m_rebuildVideoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebuildVideoInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rebuildVideoInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rebuildAudioInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebuildAudioInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rebuildAudioInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetVideoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVideoInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetVideoInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetAudioInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAudioInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetAudioInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyEnhanceMediaTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyEnhanceMediaTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t ModifyEnhanceMediaTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyEnhanceMediaTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyEnhanceMediaTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyEnhanceMediaTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEnhanceMediaTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyEnhanceMediaTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

RebuildVideoInfo ModifyEnhanceMediaTemplateRequest::GetRebuildVideoInfo() const
{
    return m_rebuildVideoInfo;
}

void ModifyEnhanceMediaTemplateRequest::SetRebuildVideoInfo(const RebuildVideoInfo& _rebuildVideoInfo)
{
    m_rebuildVideoInfo = _rebuildVideoInfo;
    m_rebuildVideoInfoHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::RebuildVideoInfoHasBeenSet() const
{
    return m_rebuildVideoInfoHasBeenSet;
}

RebuildAudioInfo ModifyEnhanceMediaTemplateRequest::GetRebuildAudioInfo() const
{
    return m_rebuildAudioInfo;
}

void ModifyEnhanceMediaTemplateRequest::SetRebuildAudioInfo(const RebuildAudioInfo& _rebuildAudioInfo)
{
    m_rebuildAudioInfo = _rebuildAudioInfo;
    m_rebuildAudioInfoHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::RebuildAudioInfoHasBeenSet() const
{
    return m_rebuildAudioInfoHasBeenSet;
}

RebuildMediaTargetVideoStream ModifyEnhanceMediaTemplateRequest::GetTargetVideoInfo() const
{
    return m_targetVideoInfo;
}

void ModifyEnhanceMediaTemplateRequest::SetTargetVideoInfo(const RebuildMediaTargetVideoStream& _targetVideoInfo)
{
    m_targetVideoInfo = _targetVideoInfo;
    m_targetVideoInfoHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::TargetVideoInfoHasBeenSet() const
{
    return m_targetVideoInfoHasBeenSet;
}

RebuildMediaTargetAudioStream ModifyEnhanceMediaTemplateRequest::GetTargetAudioInfo() const
{
    return m_targetAudioInfo;
}

void ModifyEnhanceMediaTemplateRequest::SetTargetAudioInfo(const RebuildMediaTargetAudioStream& _targetAudioInfo)
{
    m_targetAudioInfo = _targetAudioInfo;
    m_targetAudioInfoHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::TargetAudioInfoHasBeenSet() const
{
    return m_targetAudioInfoHasBeenSet;
}

string ModifyEnhanceMediaTemplateRequest::GetContainer() const
{
    return m_container;
}

void ModifyEnhanceMediaTemplateRequest::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t ModifyEnhanceMediaTemplateRequest::GetRemoveVideo() const
{
    return m_removeVideo;
}

void ModifyEnhanceMediaTemplateRequest::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t ModifyEnhanceMediaTemplateRequest::GetRemoveAudio() const
{
    return m_removeAudio;
}

void ModifyEnhanceMediaTemplateRequest::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool ModifyEnhanceMediaTemplateRequest::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}


