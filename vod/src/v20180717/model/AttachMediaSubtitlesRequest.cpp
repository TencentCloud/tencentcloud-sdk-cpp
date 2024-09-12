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

#include <tencentcloud/vod/v20180717/model/AttachMediaSubtitlesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AttachMediaSubtitlesRequest::AttachMediaSubtitlesRequest() :
    m_fileIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_adaptiveDynamicStreamingDefinitionHasBeenSet(false),
    m_subtitleIdsHasBeenSet(false),
    m_defaultSubtitleIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string AttachMediaSubtitlesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_adaptiveDynamicStreamingDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingDefinition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adaptiveDynamicStreamingDefinition, allocator);
    }

    if (m_subtitleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subtitleIds.begin(); itr != m_subtitleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultSubtitleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSubtitleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultSubtitleId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachMediaSubtitlesRequest::GetFileId() const
{
    return m_fileId;
}

void AttachMediaSubtitlesRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AttachMediaSubtitlesRequest::GetOperation() const
{
    return m_operation;
}

void AttachMediaSubtitlesRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t AttachMediaSubtitlesRequest::GetAdaptiveDynamicStreamingDefinition() const
{
    return m_adaptiveDynamicStreamingDefinition;
}

void AttachMediaSubtitlesRequest::SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition)
{
    m_adaptiveDynamicStreamingDefinition = _adaptiveDynamicStreamingDefinition;
    m_adaptiveDynamicStreamingDefinitionHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::AdaptiveDynamicStreamingDefinitionHasBeenSet() const
{
    return m_adaptiveDynamicStreamingDefinitionHasBeenSet;
}

vector<string> AttachMediaSubtitlesRequest::GetSubtitleIds() const
{
    return m_subtitleIds;
}

void AttachMediaSubtitlesRequest::SetSubtitleIds(const vector<string>& _subtitleIds)
{
    m_subtitleIds = _subtitleIds;
    m_subtitleIdsHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::SubtitleIdsHasBeenSet() const
{
    return m_subtitleIdsHasBeenSet;
}

string AttachMediaSubtitlesRequest::GetDefaultSubtitleId() const
{
    return m_defaultSubtitleId;
}

void AttachMediaSubtitlesRequest::SetDefaultSubtitleId(const string& _defaultSubtitleId)
{
    m_defaultSubtitleId = _defaultSubtitleId;
    m_defaultSubtitleIdHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::DefaultSubtitleIdHasBeenSet() const
{
    return m_defaultSubtitleIdHasBeenSet;
}

uint64_t AttachMediaSubtitlesRequest::GetSubAppId() const
{
    return m_subAppId;
}

void AttachMediaSubtitlesRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool AttachMediaSubtitlesRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


