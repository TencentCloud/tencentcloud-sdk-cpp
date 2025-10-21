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

#include <tencentcloud/ckafka/v20190819/model/Partition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Partition::Partition() :
    m_partitionIdHasBeenSet(false)
{
}

CoreInternalOutcome Partition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionId") && !value["PartitionId"].IsNull())
    {
        if (!value["PartitionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.PartitionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionId = value["PartitionId"].GetInt64();
        m_partitionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionId, allocator);
    }

}


int64_t Partition::GetPartitionId() const
{
    return m_partitionId;
}

void Partition::SetPartitionId(const int64_t& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool Partition::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

