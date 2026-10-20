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

#include <tencentcloud/cls/v20201016/model/CloudProductTopicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CloudProductTopicConfig::CloudProductTopicConfig() :
    m_encryptionHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_autoSplitHasBeenSet(false),
    m_maxSplitPartitionsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_hotPeriodHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_describesHasBeenSet(false),
    m_isSourceFromHasBeenSet(false),
    m_isWebTrackingHasBeenSet(false),
    m_customKmsInfoHasBeenSet(false),
    m_topicIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudProductTopicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.Encryption` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = value["Encryption"].GetUint64();
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.PartitionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetInt64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("AutoSplit") && !value["AutoSplit"].IsNull())
    {
        if (!value["AutoSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.AutoSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSplit = value["AutoSplit"].GetBool();
        m_autoSplitHasBeenSet = true;
    }

    if (value.HasMember("MaxSplitPartitions") && !value["MaxSplitPartitions"].IsNull())
    {
        if (!value["MaxSplitPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.MaxSplitPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSplitPartitions = value["MaxSplitPartitions"].GetInt64();
        m_maxSplitPartitionsHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("HotPeriod") && !value["HotPeriod"].IsNull())
    {
        if (!value["HotPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.HotPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hotPeriod = value["HotPeriod"].GetUint64();
        m_hotPeriodHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.BillingMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = value["BillingMode"].GetUint64();
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("Describes") && !value["Describes"].IsNull())
    {
        if (!value["Describes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.Describes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describes = string(value["Describes"].GetString());
        m_describesHasBeenSet = true;
    }

    if (value.HasMember("IsSourceFrom") && !value["IsSourceFrom"].IsNull())
    {
        if (!value["IsSourceFrom"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.IsSourceFrom` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSourceFrom = value["IsSourceFrom"].GetBool();
        m_isSourceFromHasBeenSet = true;
    }

    if (value.HasMember("IsWebTracking") && !value["IsWebTracking"].IsNull())
    {
        if (!value["IsWebTracking"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.IsWebTracking` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWebTracking = value["IsWebTracking"].GetBool();
        m_isWebTrackingHasBeenSet = true;
    }

    if (value.HasMember("CustomKmsInfo") && !value["CustomKmsInfo"].IsNull())
    {
        if (!value["CustomKmsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.CustomKmsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customKmsInfo.Deserialize(value["CustomKmsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customKmsInfoHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductTopicConfig.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudProductTopicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryption, allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_autoSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSplit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSplit, allocator);
    }

    if (m_maxSplitPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSplitPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSplitPartitions, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_hotPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotPeriod, allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_describesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describes.c_str(), allocator).Move(), allocator);
    }

    if (m_isSourceFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSourceFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSourceFrom, allocator);
    }

    if (m_isWebTrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebTracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWebTracking, allocator);
    }

    if (m_customKmsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomKmsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customKmsInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CloudProductTopicConfig::GetEncryption() const
{
    return m_encryption;
}

void CloudProductTopicConfig::SetEncryption(const uint64_t& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool CloudProductTopicConfig::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

int64_t CloudProductTopicConfig::GetPartitionCount() const
{
    return m_partitionCount;
}

void CloudProductTopicConfig::SetPartitionCount(const int64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool CloudProductTopicConfig::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

bool CloudProductTopicConfig::GetAutoSplit() const
{
    return m_autoSplit;
}

void CloudProductTopicConfig::SetAutoSplit(const bool& _autoSplit)
{
    m_autoSplit = _autoSplit;
    m_autoSplitHasBeenSet = true;
}

bool CloudProductTopicConfig::AutoSplitHasBeenSet() const
{
    return m_autoSplitHasBeenSet;
}

int64_t CloudProductTopicConfig::GetMaxSplitPartitions() const
{
    return m_maxSplitPartitions;
}

void CloudProductTopicConfig::SetMaxSplitPartitions(const int64_t& _maxSplitPartitions)
{
    m_maxSplitPartitions = _maxSplitPartitions;
    m_maxSplitPartitionsHasBeenSet = true;
}

bool CloudProductTopicConfig::MaxSplitPartitionsHasBeenSet() const
{
    return m_maxSplitPartitionsHasBeenSet;
}

string CloudProductTopicConfig::GetStorageType() const
{
    return m_storageType;
}

void CloudProductTopicConfig::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CloudProductTopicConfig::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t CloudProductTopicConfig::GetPeriod() const
{
    return m_period;
}

void CloudProductTopicConfig::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CloudProductTopicConfig::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CloudProductTopicConfig::GetHotPeriod() const
{
    return m_hotPeriod;
}

void CloudProductTopicConfig::SetHotPeriod(const uint64_t& _hotPeriod)
{
    m_hotPeriod = _hotPeriod;
    m_hotPeriodHasBeenSet = true;
}

bool CloudProductTopicConfig::HotPeriodHasBeenSet() const
{
    return m_hotPeriodHasBeenSet;
}

uint64_t CloudProductTopicConfig::GetBillingMode() const
{
    return m_billingMode;
}

void CloudProductTopicConfig::SetBillingMode(const uint64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool CloudProductTopicConfig::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

string CloudProductTopicConfig::GetDescribes() const
{
    return m_describes;
}

void CloudProductTopicConfig::SetDescribes(const string& _describes)
{
    m_describes = _describes;
    m_describesHasBeenSet = true;
}

bool CloudProductTopicConfig::DescribesHasBeenSet() const
{
    return m_describesHasBeenSet;
}

bool CloudProductTopicConfig::GetIsSourceFrom() const
{
    return m_isSourceFrom;
}

void CloudProductTopicConfig::SetIsSourceFrom(const bool& _isSourceFrom)
{
    m_isSourceFrom = _isSourceFrom;
    m_isSourceFromHasBeenSet = true;
}

bool CloudProductTopicConfig::IsSourceFromHasBeenSet() const
{
    return m_isSourceFromHasBeenSet;
}

bool CloudProductTopicConfig::GetIsWebTracking() const
{
    return m_isWebTracking;
}

void CloudProductTopicConfig::SetIsWebTracking(const bool& _isWebTracking)
{
    m_isWebTracking = _isWebTracking;
    m_isWebTrackingHasBeenSet = true;
}

bool CloudProductTopicConfig::IsWebTrackingHasBeenSet() const
{
    return m_isWebTrackingHasBeenSet;
}

CustomKmsInfo CloudProductTopicConfig::GetCustomKmsInfo() const
{
    return m_customKmsInfo;
}

void CloudProductTopicConfig::SetCustomKmsInfo(const CustomKmsInfo& _customKmsInfo)
{
    m_customKmsInfo = _customKmsInfo;
    m_customKmsInfoHasBeenSet = true;
}

bool CloudProductTopicConfig::CustomKmsInfoHasBeenSet() const
{
    return m_customKmsInfoHasBeenSet;
}

string CloudProductTopicConfig::GetTopicId() const
{
    return m_topicId;
}

void CloudProductTopicConfig::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CloudProductTopicConfig::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

