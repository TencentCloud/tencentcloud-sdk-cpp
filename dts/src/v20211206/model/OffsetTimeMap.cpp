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

#include <tencentcloud/dts/v20211206/model/OffsetTimeMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

OffsetTimeMap::OffsetTimeMap() :
    m_partitionNoHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

CoreInternalOutcome OffsetTimeMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionNo") && !value["PartitionNo"].IsNull())
    {
        if (!value["PartitionNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsetTimeMap.PartitionNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNo = value["PartitionNo"].GetUint64();
        m_partitionNoHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsetTimeMap.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OffsetTimeMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNo, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

}


uint64_t OffsetTimeMap::GetPartitionNo() const
{
    return m_partitionNo;
}

void OffsetTimeMap::SetPartitionNo(const uint64_t& _partitionNo)
{
    m_partitionNo = _partitionNo;
    m_partitionNoHasBeenSet = true;
}

bool OffsetTimeMap::PartitionNoHasBeenSet() const
{
    return m_partitionNoHasBeenSet;
}

uint64_t OffsetTimeMap::GetOffset() const
{
    return m_offset;
}

void OffsetTimeMap::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool OffsetTimeMap::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

