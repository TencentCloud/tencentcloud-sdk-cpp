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

#include <tencentcloud/cls/v20201016/model/SplitPartitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SplitPartitionRequest::SplitPartitionRequest() :
    m_topicIdHasBeenSet(false),
    m_partitionIdHasBeenSet(false),
    m_splitKeyHasBeenSet(false),
    m_numberHasBeenSet(false)
{
}

string SplitPartitionRequest::ToJsonString() const
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

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionId, allocator);
    }

    if (m_splitKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_splitKey.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SplitPartitionRequest::GetTopicId() const
{
    return m_topicId;
}

void SplitPartitionRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SplitPartitionRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t SplitPartitionRequest::GetPartitionId() const
{
    return m_partitionId;
}

void SplitPartitionRequest::SetPartitionId(const int64_t& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool SplitPartitionRequest::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

string SplitPartitionRequest::GetSplitKey() const
{
    return m_splitKey;
}

void SplitPartitionRequest::SetSplitKey(const string& _splitKey)
{
    m_splitKey = _splitKey;
    m_splitKeyHasBeenSet = true;
}

bool SplitPartitionRequest::SplitKeyHasBeenSet() const
{
    return m_splitKeyHasBeenSet;
}

int64_t SplitPartitionRequest::GetNumber() const
{
    return m_number;
}

void SplitPartitionRequest::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool SplitPartitionRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}


