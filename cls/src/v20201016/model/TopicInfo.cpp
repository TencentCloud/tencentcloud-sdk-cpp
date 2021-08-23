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

#include <tencentcloud/cls/v20201016/model/TopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TopicInfo::TopicInfo() :
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoSplitHasBeenSet(false),
    m_maxSplitPartitionsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

CoreInternalOutcome TopicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.PartitionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetInt64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.Index` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetBool();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AutoSplit") && !value["AutoSplit"].IsNull())
    {
        if (!value["AutoSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.AutoSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSplit = value["AutoSplit"].GetBool();
        m_autoSplitHasBeenSet = true;
    }

    if (value.HasMember("MaxSplitPartitions") && !value["MaxSplitPartitions"].IsNull())
    {
        if (!value["MaxSplitPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.MaxSplitPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSplitPartitions = value["MaxSplitPartitions"].GetInt64();
        m_maxSplitPartitionsHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInfo.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string TopicInfo::GetLogsetId() const
{
    return m_logsetId;
}

void TopicInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool TopicInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string TopicInfo::GetTopicId() const
{
    return m_topicId;
}

void TopicInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TopicInfo::GetTopicName() const
{
    return m_topicName;
}

void TopicInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t TopicInfo::GetPartitionCount() const
{
    return m_partitionCount;
}

void TopicInfo::SetPartitionCount(const int64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool TopicInfo::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

bool TopicInfo::GetIndex() const
{
    return m_index;
}

void TopicInfo::SetIndex(const bool& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool TopicInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string TopicInfo::GetCreateTime() const
{
    return m_createTime;
}

void TopicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool TopicInfo::GetStatus() const
{
    return m_status;
}

void TopicInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TopicInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Tag> TopicInfo::GetTags() const
{
    return m_tags;
}

void TopicInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TopicInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool TopicInfo::GetAutoSplit() const
{
    return m_autoSplit;
}

void TopicInfo::SetAutoSplit(const bool& _autoSplit)
{
    m_autoSplit = _autoSplit;
    m_autoSplitHasBeenSet = true;
}

bool TopicInfo::AutoSplitHasBeenSet() const
{
    return m_autoSplitHasBeenSet;
}

int64_t TopicInfo::GetMaxSplitPartitions() const
{
    return m_maxSplitPartitions;
}

void TopicInfo::SetMaxSplitPartitions(const int64_t& _maxSplitPartitions)
{
    m_maxSplitPartitions = _maxSplitPartitions;
    m_maxSplitPartitionsHasBeenSet = true;
}

bool TopicInfo::MaxSplitPartitionsHasBeenSet() const
{
    return m_maxSplitPartitionsHasBeenSet;
}

string TopicInfo::GetStorageType() const
{
    return m_storageType;
}

void TopicInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool TopicInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t TopicInfo::GetPeriod() const
{
    return m_period;
}

void TopicInfo::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool TopicInfo::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

