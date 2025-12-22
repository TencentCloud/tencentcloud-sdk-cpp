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

#include <tencentcloud/cls/v20201016/model/PartitionOffsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PartitionOffsetInfo::PartitionOffsetInfo() :
    m_partitionIdHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome PartitionOffsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionId") && !value["PartitionId"].IsNull())
    {
        if (!value["PartitionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionOffsetInfo.PartitionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionId = value["PartitionId"].GetUint64();
        m_partitionIdHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionOffsetInfo.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionOffsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionId, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

}


uint64_t PartitionOffsetInfo::GetPartitionId() const
{
    return m_partitionId;
}

void PartitionOffsetInfo::SetPartitionId(const uint64_t& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool PartitionOffsetInfo::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

int64_t PartitionOffsetInfo::GetOffset() const
{
    return m_offset;
}

void PartitionOffsetInfo::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PartitionOffsetInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

