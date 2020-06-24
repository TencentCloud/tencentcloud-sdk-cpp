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

#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

ModifyAdaptiveDynamicStreamingTemplateRequest::ModifyAdaptiveDynamicStreamingTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_disableHigherVideoBitrateHasBeenSet(false),
    m_disableHigherVideoResolutionHasBeenSet(false),
    m_streamInfosHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyAdaptiveDynamicStreamingTemplateRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_disableHigherVideoBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableHigherVideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableHigherVideoBitrate, allocator);
    }

    if (m_disableHigherVideoResolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableHigherVideoResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableHigherVideoResolution, allocator);
    }

    if (m_streamInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamInfos.begin(); itr != m_streamInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAdaptiveDynamicStreamingTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyAdaptiveDynamicStreamingTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAdaptiveDynamicStreamingTemplateRequest::GetFormat() const
{
    return m_format;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t ModifyAdaptiveDynamicStreamingTemplateRequest::GetDisableHigherVideoBitrate() const
{
    return m_disableHigherVideoBitrate;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate)
{
    m_disableHigherVideoBitrate = _disableHigherVideoBitrate;
    m_disableHigherVideoBitrateHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::DisableHigherVideoBitrateHasBeenSet() const
{
    return m_disableHigherVideoBitrateHasBeenSet;
}

uint64_t ModifyAdaptiveDynamicStreamingTemplateRequest::GetDisableHigherVideoResolution() const
{
    return m_disableHigherVideoResolution;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution)
{
    m_disableHigherVideoResolution = _disableHigherVideoResolution;
    m_disableHigherVideoResolutionHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::DisableHigherVideoResolutionHasBeenSet() const
{
    return m_disableHigherVideoResolutionHasBeenSet;
}

vector<AdaptiveStreamTemplate> ModifyAdaptiveDynamicStreamingTemplateRequest::GetStreamInfos() const
{
    return m_streamInfos;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetStreamInfos(const vector<AdaptiveStreamTemplate>& _streamInfos)
{
    m_streamInfos = _streamInfos;
    m_streamInfosHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::StreamInfosHasBeenSet() const
{
    return m_streamInfosHasBeenSet;
}

string ModifyAdaptiveDynamicStreamingTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyAdaptiveDynamicStreamingTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyAdaptiveDynamicStreamingTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


