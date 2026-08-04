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

#include <tencentcloud/dlc/v20210125/model/DeletePartitionQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DeletePartitionQueueRequest::DeletePartitionQueueRequest() :
    m_partitionCodeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string DeletePartitionQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePartitionQueueRequest::GetPartitionCode() const
{
    return m_partitionCode;
}

void DeletePartitionQueueRequest::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool DeletePartitionQueueRequest::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string DeletePartitionQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void DeletePartitionQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DeletePartitionQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

int64_t DeletePartitionQueueRequest::GetId() const
{
    return m_id;
}

void DeletePartitionQueueRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeletePartitionQueueRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


