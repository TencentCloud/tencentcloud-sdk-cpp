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

#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeKafkaConsumerGroupDetailRequest::DescribeKafkaConsumerGroupDetailRequest() :
    m_topicIdHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

string DescribeKafkaConsumerGroupDetailRequest::ToJsonString() const
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

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeKafkaConsumerGroupDetailRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeKafkaConsumerGroupDetailRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeKafkaConsumerGroupDetailRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeKafkaConsumerGroupDetailRequest::GetGroup() const
{
    return m_group;
}

void DescribeKafkaConsumerGroupDetailRequest::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DescribeKafkaConsumerGroupDetailRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}


