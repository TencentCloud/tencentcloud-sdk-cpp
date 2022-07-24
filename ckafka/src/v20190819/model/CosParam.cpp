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

#include <tencentcloud/ckafka/v20190819/model/CosParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CosParam::CosParam() :
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_aggregateBatchSizeHasBeenSet(false),
    m_aggregateIntervalHasBeenSet(false),
    m_formatOutputTypeHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_directoryTimeFormatHasBeenSet(false)
{
}

CoreInternalOutcome CosParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ObjectKey") && !value["ObjectKey"].IsNull())
    {
        if (!value["ObjectKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.ObjectKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectKey = string(value["ObjectKey"].GetString());
        m_objectKeyHasBeenSet = true;
    }

    if (value.HasMember("AggregateBatchSize") && !value["AggregateBatchSize"].IsNull())
    {
        if (!value["AggregateBatchSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.AggregateBatchSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aggregateBatchSize = value["AggregateBatchSize"].GetUint64();
        m_aggregateBatchSizeHasBeenSet = true;
    }

    if (value.HasMember("AggregateInterval") && !value["AggregateInterval"].IsNull())
    {
        if (!value["AggregateInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.AggregateInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aggregateInterval = value["AggregateInterval"].GetUint64();
        m_aggregateIntervalHasBeenSet = true;
    }

    if (value.HasMember("FormatOutputType") && !value["FormatOutputType"].IsNull())
    {
        if (!value["FormatOutputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.FormatOutputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatOutputType = string(value["FormatOutputType"].GetString());
        m_formatOutputTypeHasBeenSet = true;
    }

    if (value.HasMember("ObjectKeyPrefix") && !value["ObjectKeyPrefix"].IsNull())
    {
        if (!value["ObjectKeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.ObjectKeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectKeyPrefix = string(value["ObjectKeyPrefix"].GetString());
        m_objectKeyPrefixHasBeenSet = true;
    }

    if (value.HasMember("DirectoryTimeFormat") && !value["DirectoryTimeFormat"].IsNull())
    {
        if (!value["DirectoryTimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosParam.DirectoryTimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directoryTimeFormat = string(value["DirectoryTimeFormat"].GetString());
        m_directoryTimeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_objectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectKey.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregateBatchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregateBatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aggregateBatchSize, allocator);
    }

    if (m_aggregateIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregateInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aggregateInterval, allocator);
    }

    if (m_formatOutputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatOutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatOutputType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectKeyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectKeyPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryTimeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryTimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directoryTimeFormat.c_str(), allocator).Move(), allocator);
    }

}


string CosParam::GetBucketName() const
{
    return m_bucketName;
}

void CosParam::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosParam::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosParam::GetRegion() const
{
    return m_region;
}

void CosParam::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosParam::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CosParam::GetObjectKey() const
{
    return m_objectKey;
}

void CosParam::SetObjectKey(const string& _objectKey)
{
    m_objectKey = _objectKey;
    m_objectKeyHasBeenSet = true;
}

bool CosParam::ObjectKeyHasBeenSet() const
{
    return m_objectKeyHasBeenSet;
}

uint64_t CosParam::GetAggregateBatchSize() const
{
    return m_aggregateBatchSize;
}

void CosParam::SetAggregateBatchSize(const uint64_t& _aggregateBatchSize)
{
    m_aggregateBatchSize = _aggregateBatchSize;
    m_aggregateBatchSizeHasBeenSet = true;
}

bool CosParam::AggregateBatchSizeHasBeenSet() const
{
    return m_aggregateBatchSizeHasBeenSet;
}

uint64_t CosParam::GetAggregateInterval() const
{
    return m_aggregateInterval;
}

void CosParam::SetAggregateInterval(const uint64_t& _aggregateInterval)
{
    m_aggregateInterval = _aggregateInterval;
    m_aggregateIntervalHasBeenSet = true;
}

bool CosParam::AggregateIntervalHasBeenSet() const
{
    return m_aggregateIntervalHasBeenSet;
}

string CosParam::GetFormatOutputType() const
{
    return m_formatOutputType;
}

void CosParam::SetFormatOutputType(const string& _formatOutputType)
{
    m_formatOutputType = _formatOutputType;
    m_formatOutputTypeHasBeenSet = true;
}

bool CosParam::FormatOutputTypeHasBeenSet() const
{
    return m_formatOutputTypeHasBeenSet;
}

string CosParam::GetObjectKeyPrefix() const
{
    return m_objectKeyPrefix;
}

void CosParam::SetObjectKeyPrefix(const string& _objectKeyPrefix)
{
    m_objectKeyPrefix = _objectKeyPrefix;
    m_objectKeyPrefixHasBeenSet = true;
}

bool CosParam::ObjectKeyPrefixHasBeenSet() const
{
    return m_objectKeyPrefixHasBeenSet;
}

string CosParam::GetDirectoryTimeFormat() const
{
    return m_directoryTimeFormat;
}

void CosParam::SetDirectoryTimeFormat(const string& _directoryTimeFormat)
{
    m_directoryTimeFormat = _directoryTimeFormat;
    m_directoryTimeFormatHasBeenSet = true;
}

bool CosParam::DirectoryTimeFormatHasBeenSet() const
{
    return m_directoryTimeFormatHasBeenSet;
}

