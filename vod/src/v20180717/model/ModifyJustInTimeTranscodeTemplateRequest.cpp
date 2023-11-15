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

#include <tencentcloud/vod/v20180717/model/ModifyJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyJustInTimeTranscodeTemplateRequest::ModifyJustInTimeTranscodeTemplateRequest() :
    m_nameHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_videoConfigureHasBeenSet(false),
    m_watermarkConfigureHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyJustInTimeTranscodeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_videoConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_watermarkConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_watermarkConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyJustInTimeTranscodeTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyJustInTimeTranscodeTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyJustInTimeTranscodeTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyJustInTimeTranscodeTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyJustInTimeTranscodeTemplateRequest::SetSubAppId(const int64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyJustInTimeTranscodeTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

VideoConfigureInfoForUpdate ModifyJustInTimeTranscodeTemplateRequest::GetVideoConfigure() const
{
    return m_videoConfigure;
}

void ModifyJustInTimeTranscodeTemplateRequest::SetVideoConfigure(const VideoConfigureInfoForUpdate& _videoConfigure)
{
    m_videoConfigure = _videoConfigure;
    m_videoConfigureHasBeenSet = true;
}

bool ModifyJustInTimeTranscodeTemplateRequest::VideoConfigureHasBeenSet() const
{
    return m_videoConfigureHasBeenSet;
}

WatermarkConfigureInfoForUpdate ModifyJustInTimeTranscodeTemplateRequest::GetWatermarkConfigure() const
{
    return m_watermarkConfigure;
}

void ModifyJustInTimeTranscodeTemplateRequest::SetWatermarkConfigure(const WatermarkConfigureInfoForUpdate& _watermarkConfigure)
{
    m_watermarkConfigure = _watermarkConfigure;
    m_watermarkConfigureHasBeenSet = true;
}

bool ModifyJustInTimeTranscodeTemplateRequest::WatermarkConfigureHasBeenSet() const
{
    return m_watermarkConfigureHasBeenSet;
}

string ModifyJustInTimeTranscodeTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyJustInTimeTranscodeTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyJustInTimeTranscodeTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


