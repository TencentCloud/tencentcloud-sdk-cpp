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

#include <tencentcloud/ckafka/v20190819/model/PartitionOffset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

PartitionOffset::PartitionOffset() :
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome PartitionOffset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionOffset.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionOffset.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionOffset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

}


string PartitionOffset::GetPartition() const
{
    return m_partition;
}

void PartitionOffset::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool PartitionOffset::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t PartitionOffset::GetOffset() const
{
    return m_offset;
}

void PartitionOffset::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PartitionOffset::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

