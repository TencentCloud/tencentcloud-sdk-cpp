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

#include <tencentcloud/cls/v20201016/model/ModifyConsumerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyConsumerRequest::ModifyConsumerRequest() :
    m_topicIdHasBeenSet(false),
    m_effectiveHasBeenSet(false),
    m_needContentHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_compressionHasBeenSet(false)
{
}

string ModifyConsumerRequest::ToJsonString() const
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

    if (m_effectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effective";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_effective, allocator);
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


string ModifyConsumerRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyConsumerRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyConsumerRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool ModifyConsumerRequest::GetEffective() const
{
    return m_effective;
}

void ModifyConsumerRequest::SetEffective(const bool& _effective)
{
    m_effective = _effective;
    m_effectiveHasBeenSet = true;
}

bool ModifyConsumerRequest::EffectiveHasBeenSet() const
{
    return m_effectiveHasBeenSet;
}

bool ModifyConsumerRequest::GetNeedContent() const
{
    return m_needContent;
}

void ModifyConsumerRequest::SetNeedContent(const bool& _needContent)
{
    m_needContent = _needContent;
    m_needContentHasBeenSet = true;
}

bool ModifyConsumerRequest::NeedContentHasBeenSet() const
{
    return m_needContentHasBeenSet;
}

ConsumerContent ModifyConsumerRequest::GetContent() const
{
    return m_content;
}

void ModifyConsumerRequest::SetContent(const ConsumerContent& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyConsumerRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Ckafka ModifyConsumerRequest::GetCkafka() const
{
    return m_ckafka;
}

void ModifyConsumerRequest::SetCkafka(const Ckafka& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool ModifyConsumerRequest::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

int64_t ModifyConsumerRequest::GetCompression() const
{
    return m_compression;
}

void ModifyConsumerRequest::SetCompression(const int64_t& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ModifyConsumerRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}


