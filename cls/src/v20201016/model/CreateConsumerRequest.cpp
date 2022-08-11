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

#include <tencentcloud/cls/v20201016/model/CreateConsumerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateConsumerRequest::CreateConsumerRequest() :
    m_topicIdHasBeenSet(false),
    m_needContentHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_compressionHasBeenSet(false)
{
}

string CreateConsumerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_needContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needContent, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafka.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compression, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConsumerRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateConsumerRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateConsumerRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool CreateConsumerRequest::GetNeedContent() const
{
    return m_needContent;
}

void CreateConsumerRequest::SetNeedContent(const bool& _needContent)
{
    m_needContent = _needContent;
    m_needContentHasBeenSet = true;
}

bool CreateConsumerRequest::NeedContentHasBeenSet() const
{
    return m_needContentHasBeenSet;
}

ConsumerContent CreateConsumerRequest::GetContent() const
{
    return m_content;
}

void CreateConsumerRequest::SetContent(const ConsumerContent& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateConsumerRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Ckafka CreateConsumerRequest::GetCkafka() const
{
    return m_ckafka;
}

void CreateConsumerRequest::SetCkafka(const Ckafka& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool CreateConsumerRequest::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

int64_t CreateConsumerRequest::GetCompression() const
{
    return m_compression;
}

void CreateConsumerRequest::SetCompression(const int64_t& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool CreateConsumerRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}


