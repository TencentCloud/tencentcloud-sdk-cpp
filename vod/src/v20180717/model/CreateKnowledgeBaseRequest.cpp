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

#include <tencentcloud/vod/v20180717/model/CreateKnowledgeBaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateKnowledgeBaseRequest::CreateKnowledgeBaseRequest() :
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_indexTypeHasBeenSet(false),
    m_mediaTypeHasBeenSet(false)
{
}

string CreateKnowledgeBaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateKnowledgeBaseRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateKnowledgeBaseRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateKnowledgeBaseRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateKnowledgeBaseRequest::GetName() const
{
    return m_name;
}

void CreateKnowledgeBaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateKnowledgeBaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateKnowledgeBaseRequest::GetDescription() const
{
    return m_description;
}

void CreateKnowledgeBaseRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateKnowledgeBaseRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateKnowledgeBaseRequest::GetIndexType() const
{
    return m_indexType;
}

void CreateKnowledgeBaseRequest::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool CreateKnowledgeBaseRequest::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

string CreateKnowledgeBaseRequest::GetMediaType() const
{
    return m_mediaType;
}

void CreateKnowledgeBaseRequest::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool CreateKnowledgeBaseRequest::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}


