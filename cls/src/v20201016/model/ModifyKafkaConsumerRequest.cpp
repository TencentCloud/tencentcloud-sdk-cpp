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

#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyKafkaConsumerRequest::ModifyKafkaConsumerRequest() :
    m_fromTopicIdHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_consumerContentHasBeenSet(false)
{
}

string ModifyKafkaConsumerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compression, allocator);
    }

    if (m_consumerContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerContent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyKafkaConsumerRequest::GetFromTopicId() const
{
    return m_fromTopicId;
}

void ModifyKafkaConsumerRequest::SetFromTopicId(const string& _fromTopicId)
{
    m_fromTopicId = _fromTopicId;
    m_fromTopicIdHasBeenSet = true;
}

bool ModifyKafkaConsumerRequest::FromTopicIdHasBeenSet() const
{
    return m_fromTopicIdHasBeenSet;
}

int64_t ModifyKafkaConsumerRequest::GetCompression() const
{
    return m_compression;
}

void ModifyKafkaConsumerRequest::SetCompression(const int64_t& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ModifyKafkaConsumerRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

KafkaConsumerContent ModifyKafkaConsumerRequest::GetConsumerContent() const
{
    return m_consumerContent;
}

void ModifyKafkaConsumerRequest::SetConsumerContent(const KafkaConsumerContent& _consumerContent)
{
    m_consumerContent = _consumerContent;
    m_consumerContentHasBeenSet = true;
}

bool ModifyKafkaConsumerRequest::ConsumerContentHasBeenSet() const
{
    return m_consumerContentHasBeenSet;
}


