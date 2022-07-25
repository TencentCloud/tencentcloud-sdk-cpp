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

#include <tencentcloud/ckafka/v20190819/model/FetchLatestDatahubMessageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

FetchLatestDatahubMessageListRequest::FetchLatestDatahubMessageListRequest() :
    m_nameHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_messageCountHasBeenSet(false)
{
}

string FetchLatestDatahubMessageListRequest::ToJsonString() const
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

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_messageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_messageCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FetchLatestDatahubMessageListRequest::GetName() const
{
    return m_name;
}

void FetchLatestDatahubMessageListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FetchLatestDatahubMessageListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t FetchLatestDatahubMessageListRequest::GetPartition() const
{
    return m_partition;
}

void FetchLatestDatahubMessageListRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool FetchLatestDatahubMessageListRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t FetchLatestDatahubMessageListRequest::GetOffset() const
{
    return m_offset;
}

void FetchLatestDatahubMessageListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool FetchLatestDatahubMessageListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t FetchLatestDatahubMessageListRequest::GetMessageCount() const
{
    return m_messageCount;
}

void FetchLatestDatahubMessageListRequest::SetMessageCount(const int64_t& _messageCount)
{
    m_messageCount = _messageCount;
    m_messageCountHasBeenSet = true;
}

bool FetchLatestDatahubMessageListRequest::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}


