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

#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAdaptiveDynamicStreamingTemplateRequest::CreateAdaptiveDynamicStreamingTemplateRequest() :
    m_formatHasBeenSet(false),
    m_streamInfosHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_disableHigherVideoBitrateHasBeenSet(false),
    m_disableHigherVideoResolutionHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_pureAudioHasBeenSet(false),
    m_segmentTypeHasBeenSet(false)
{
}

string CreateAdaptiveDynamicStreamingTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_streamInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamInfos.begin(); itr != m_streamInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_disableHigherVideoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHigherVideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableHigherVideoBitrate, allocator);
    }

    if (m_disableHigherVideoResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableHigherVideoResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableHigherVideoResolution, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_pureAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pureAudio, allocator);
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


string CreateAdaptiveDynamicStreamingTemplateRequest::GetFormat() const
{
    return m_format;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<AdaptiveStreamTemplate> CreateAdaptiveDynamicStreamingTemplateRequest::GetStreamInfos() const
{
    return m_streamInfos;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetStreamInfos(const vector<AdaptiveStreamTemplate>& _streamInfos)
{
    m_streamInfos = _streamInfos;
    m_streamInfosHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::StreamInfosHasBeenSet() const
{
    return m_streamInfosHasBeenSet;
}

string CreateAdaptiveDynamicStreamingTemplateRequest::GetName() const
{
    return m_name;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateAdaptiveDynamicStreamingTemplateRequest::GetDisableHigherVideoBitrate() const
{
    return m_disableHigherVideoBitrate;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate)
{
    m_disableHigherVideoBitrate = _disableHigherVideoBitrate;
    m_disableHigherVideoBitrateHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::DisableHigherVideoBitrateHasBeenSet() const
{
    return m_disableHigherVideoBitrateHasBeenSet;
}

uint64_t CreateAdaptiveDynamicStreamingTemplateRequest::GetDisableHigherVideoResolution() const
{
    return m_disableHigherVideoResolution;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution)
{
    m_disableHigherVideoResolution = _disableHigherVideoResolution;
    m_disableHigherVideoResolutionHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::DisableHigherVideoResolutionHasBeenSet() const
{
    return m_disableHigherVideoResolutionHasBeenSet;
}

string CreateAdaptiveDynamicStreamingTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

uint64_t CreateAdaptiveDynamicStreamingTemplateRequest::GetPureAudio() const
{
    return m_pureAudio;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetPureAudio(const uint64_t& _pureAudio)
{
    m_pureAudio = _pureAudio;
    m_pureAudioHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::PureAudioHasBeenSet() const
{
    return m_pureAudioHasBeenSet;
}

string CreateAdaptiveDynamicStreamingTemplateRequest::GetSegmentType() const
{
    return m_segmentType;
}

void CreateAdaptiveDynamicStreamingTemplateRequest::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool CreateAdaptiveDynamicStreamingTemplateRequest::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}


