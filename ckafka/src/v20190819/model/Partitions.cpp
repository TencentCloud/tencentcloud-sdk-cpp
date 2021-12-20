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

#include <tencentcloud/ckafka/v20190819/model/Partitions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Partitions::Partitions() :
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome Partitions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Partitions.Partition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partition = value["Partition"].GetInt64();
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Partitions.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partitions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partition, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

}


int64_t Partitions::GetPartition() const
{
    return m_partition;
}

void Partitions::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool Partitions::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t Partitions::GetOffset() const
{
    return m_offset;
}

void Partitions::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool Partitions::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

