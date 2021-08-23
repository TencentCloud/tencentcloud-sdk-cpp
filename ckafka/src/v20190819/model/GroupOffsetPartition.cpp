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

#include <tencentcloud/ckafka/v20190819/model/GroupOffsetPartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

GroupOffsetPartition::GroupOffsetPartition() :
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_logEndOffsetHasBeenSet(false),
    m_lagHasBeenSet(false)
{
}

CoreInternalOutcome GroupOffsetPartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.Partition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partition = value["Partition"].GetInt64();
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("LogEndOffset") && !value["LogEndOffset"].IsNull())
    {
        if (!value["LogEndOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.LogEndOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logEndOffset = value["LogEndOffset"].GetInt64();
        m_logEndOffsetHasBeenSet = true;
    }

    if (value.HasMember("Lag") && !value["Lag"].IsNull())
    {
        if (!value["Lag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOffsetPartition.Lag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lag = value["Lag"].GetInt64();
        m_lagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupOffsetPartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_logEndOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEndOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logEndOffset, allocator);
    }

    if (m_lagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lag, allocator);
    }

}


int64_t GroupOffsetPartition::GetPartition() const
{
    return m_partition;
}

void GroupOffsetPartition::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool GroupOffsetPartition::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t GroupOffsetPartition::GetOffset() const
{
    return m_offset;
}

void GroupOffsetPartition::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GroupOffsetPartition::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string GroupOffsetPartition::GetMetadata() const
{
    return m_metadata;
}

void GroupOffsetPartition::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool GroupOffsetPartition::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

int64_t GroupOffsetPartition::GetErrorCode() const
{
    return m_errorCode;
}

void GroupOffsetPartition::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool GroupOffsetPartition::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

int64_t GroupOffsetPartition::GetLogEndOffset() const
{
    return m_logEndOffset;
}

void GroupOffsetPartition::SetLogEndOffset(const int64_t& _logEndOffset)
{
    m_logEndOffset = _logEndOffset;
    m_logEndOffsetHasBeenSet = true;
}

bool GroupOffsetPartition::LogEndOffsetHasBeenSet() const
{
    return m_logEndOffsetHasBeenSet;
}

int64_t GroupOffsetPartition::GetLag() const
{
    return m_lag;
}

void GroupOffsetPartition::SetLag(const int64_t& _lag)
{
    m_lag = _lag;
    m_lagHasBeenSet = true;
}

bool GroupOffsetPartition::LagHasBeenSet() const
{
    return m_lagHasBeenSet;
}

