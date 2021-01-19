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

#include <tencentcloud/cme/v20191029/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_platformHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_switcherProjectInputHasBeenSet(false),
    m_liveStreamClipProjectInputHasBeenSet(false),
    m_videoEditProjectInputHasBeenSet(false),
    m_videoSegmentationProjectInputHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_switcherProjectInputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SwitcherProjectInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_switcherProjectInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_liveStreamClipProjectInputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LiveStreamClipProjectInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_liveStreamClipProjectInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoEditProjectInputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoEditProjectInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoEditProjectInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoSegmentationProjectInputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoSegmentationProjectInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoSegmentationProjectInput.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProjectRequest::GetPlatform() const
{
    return m_platform;
}

void CreateProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateProjectRequest::GetCategory() const
{
    return m_category;
}

void CreateProjectRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool CreateProjectRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string CreateProjectRequest::GetName() const
{
    return m_name;
}

void CreateProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Entity CreateProjectRequest::GetOwner() const
{
    return m_owner;
}

void CreateProjectRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateProjectRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string CreateProjectRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void CreateProjectRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool CreateProjectRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string CreateProjectRequest::GetDescription() const
{
    return m_description;
}

void CreateProjectRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateProjectRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

SwitcherProjectInput CreateProjectRequest::GetSwitcherProjectInput() const
{
    return m_switcherProjectInput;
}

void CreateProjectRequest::SetSwitcherProjectInput(const SwitcherProjectInput& _switcherProjectInput)
{
    m_switcherProjectInput = _switcherProjectInput;
    m_switcherProjectInputHasBeenSet = true;
}

bool CreateProjectRequest::SwitcherProjectInputHasBeenSet() const
{
    return m_switcherProjectInputHasBeenSet;
}

LiveStreamClipProjectInput CreateProjectRequest::GetLiveStreamClipProjectInput() const
{
    return m_liveStreamClipProjectInput;
}

void CreateProjectRequest::SetLiveStreamClipProjectInput(const LiveStreamClipProjectInput& _liveStreamClipProjectInput)
{
    m_liveStreamClipProjectInput = _liveStreamClipProjectInput;
    m_liveStreamClipProjectInputHasBeenSet = true;
}

bool CreateProjectRequest::LiveStreamClipProjectInputHasBeenSet() const
{
    return m_liveStreamClipProjectInputHasBeenSet;
}

VideoEditProjectInput CreateProjectRequest::GetVideoEditProjectInput() const
{
    return m_videoEditProjectInput;
}

void CreateProjectRequest::SetVideoEditProjectInput(const VideoEditProjectInput& _videoEditProjectInput)
{
    m_videoEditProjectInput = _videoEditProjectInput;
    m_videoEditProjectInputHasBeenSet = true;
}

bool CreateProjectRequest::VideoEditProjectInputHasBeenSet() const
{
    return m_videoEditProjectInputHasBeenSet;
}

VideoSegmentationProjectInput CreateProjectRequest::GetVideoSegmentationProjectInput() const
{
    return m_videoSegmentationProjectInput;
}

void CreateProjectRequest::SetVideoSegmentationProjectInput(const VideoSegmentationProjectInput& _videoSegmentationProjectInput)
{
    m_videoSegmentationProjectInput = _videoSegmentationProjectInput;
    m_videoSegmentationProjectInputHasBeenSet = true;
}

bool CreateProjectRequest::VideoSegmentationProjectInputHasBeenSet() const
{
    return m_videoSegmentationProjectInputHasBeenSet;
}


