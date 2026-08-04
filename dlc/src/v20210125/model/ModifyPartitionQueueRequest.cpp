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

#include <tencentcloud/dlc/v20210125/model/ModifyPartitionQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifyPartitionQueueRequest::ModifyPartitionQueueRequest() :
    m_idHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceUsagesHasBeenSet(false),
    m_queueTypeHasBeenSet(false)
{
}

string ModifyPartitionQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUsages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceUsages.begin(); itr != m_resourceUsages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queueType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyPartitionQueueRequest::GetId() const
{
    return m_id;
}

void ModifyPartitionQueueRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyPartitionQueueRequest::GetPartitionCode() const
{
    return m_partitionCode;
}

void ModifyPartitionQueueRequest::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string ModifyPartitionQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyPartitionQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string ModifyPartitionQueueRequest::GetDescription() const
{
    return m_description;
}

void ModifyPartitionQueueRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ResourceUsage> ModifyPartitionQueueRequest::GetResourceUsages() const
{
    return m_resourceUsages;
}

void ModifyPartitionQueueRequest::SetResourceUsages(const vector<ResourceUsage>& _resourceUsages)
{
    m_resourceUsages = _resourceUsages;
    m_resourceUsagesHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::ResourceUsagesHasBeenSet() const
{
    return m_resourceUsagesHasBeenSet;
}

int64_t ModifyPartitionQueueRequest::GetQueueType() const
{
    return m_queueType;
}

void ModifyPartitionQueueRequest::SetQueueType(const int64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool ModifyPartitionQueueRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}


