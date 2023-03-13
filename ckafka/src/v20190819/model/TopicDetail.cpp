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

#include <tencentcloud/ckafka/v20190819/model/TopicDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicDetail::TopicDetail() :
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_ipWhiteListCountHasBeenSet(false),
    m_forwardCosBucketHasBeenSet(false),
    m_forwardStatusHasBeenSet(false),
    m_forwardIntervalHasBeenSet(false),
    m_configHasBeenSet(false),
    m_retentionTimeConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome TopicDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.ReplicaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetInt64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableWhiteList") && !value["EnableWhiteList"].IsNull())
    {
        if (!value["EnableWhiteList"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.EnableWhiteList` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableWhiteList = value["EnableWhiteList"].GetBool();
        m_enableWhiteListHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteListCount") && !value["IpWhiteListCount"].IsNull())
    {
        if (!value["IpWhiteListCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.IpWhiteListCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipWhiteListCount = value["IpWhiteListCount"].GetInt64();
        m_ipWhiteListCountHasBeenSet = true;
    }

    if (value.HasMember("ForwardCosBucket") && !value["ForwardCosBucket"].IsNull())
    {
        if (!value["ForwardCosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.ForwardCosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardCosBucket = string(value["ForwardCosBucket"].GetString());
        m_forwardCosBucketHasBeenSet = true;
    }

    if (value.HasMember("ForwardStatus") && !value["ForwardStatus"].IsNull())
    {
        if (!value["ForwardStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.ForwardStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardStatus = value["ForwardStatus"].GetInt64();
        m_forwardStatusHasBeenSet = true;
    }

    if (value.HasMember("ForwardInterval") && !value["ForwardInterval"].IsNull())
    {
        if (!value["ForwardInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.ForwardInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardInterval = value["ForwardInterval"].GetInt64();
        m_forwardIntervalHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("RetentionTimeConfig") && !value["RetentionTimeConfig"].IsNull())
    {
        if (!value["RetentionTimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.RetentionTimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_retentionTimeConfig.Deserialize(value["RetentionTimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_retentionTimeConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicDetail.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void TopicDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_ipWhiteListCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteListCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipWhiteListCount, allocator);
    }

    if (m_forwardCosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardCosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardCosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardStatus, allocator);
    }

    if (m_forwardIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardInterval, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_retentionTimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionTimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionTimeConfig.ToJsonObject(value[key.c_str()], allocator);
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

}


string TopicDetail::GetTopicName() const
{
    return m_topicName;
}

void TopicDetail::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicDetail::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string TopicDetail::GetTopicId() const
{
    return m_topicId;
}

void TopicDetail::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicDetail::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t TopicDetail::GetPartitionNum() const
{
    return m_partitionNum;
}

void TopicDetail::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool TopicDetail::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t TopicDetail::GetReplicaNum() const
{
    return m_replicaNum;
}

void TopicDetail::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool TopicDetail::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

string TopicDetail::GetNote() const
{
    return m_note;
}

void TopicDetail::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool TopicDetail::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t TopicDetail::GetCreateTime() const
{
    return m_createTime;
}

void TopicDetail::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool TopicDetail::GetEnableWhiteList() const
{
    return m_enableWhiteList;
}

void TopicDetail::SetEnableWhiteList(const bool& _enableWhiteList)
{
    m_enableWhiteList = _enableWhiteList;
    m_enableWhiteListHasBeenSet = true;
}

bool TopicDetail::EnableWhiteListHasBeenSet() const
{
    return m_enableWhiteListHasBeenSet;
}

int64_t TopicDetail::GetIpWhiteListCount() const
{
    return m_ipWhiteListCount;
}

void TopicDetail::SetIpWhiteListCount(const int64_t& _ipWhiteListCount)
{
    m_ipWhiteListCount = _ipWhiteListCount;
    m_ipWhiteListCountHasBeenSet = true;
}

bool TopicDetail::IpWhiteListCountHasBeenSet() const
{
    return m_ipWhiteListCountHasBeenSet;
}

string TopicDetail::GetForwardCosBucket() const
{
    return m_forwardCosBucket;
}

void TopicDetail::SetForwardCosBucket(const string& _forwardCosBucket)
{
    m_forwardCosBucket = _forwardCosBucket;
    m_forwardCosBucketHasBeenSet = true;
}

bool TopicDetail::ForwardCosBucketHasBeenSet() const
{
    return m_forwardCosBucketHasBeenSet;
}

int64_t TopicDetail::GetForwardStatus() const
{
    return m_forwardStatus;
}

void TopicDetail::SetForwardStatus(const int64_t& _forwardStatus)
{
    m_forwardStatus = _forwardStatus;
    m_forwardStatusHasBeenSet = true;
}

bool TopicDetail::ForwardStatusHasBeenSet() const
{
    return m_forwardStatusHasBeenSet;
}

int64_t TopicDetail::GetForwardInterval() const
{
    return m_forwardInterval;
}

void TopicDetail::SetForwardInterval(const int64_t& _forwardInterval)
{
    m_forwardInterval = _forwardInterval;
    m_forwardIntervalHasBeenSet = true;
}

bool TopicDetail::ForwardIntervalHasBeenSet() const
{
    return m_forwardIntervalHasBeenSet;
}

Config TopicDetail::GetConfig() const
{
    return m_config;
}

void TopicDetail::SetConfig(const Config& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TopicDetail::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

TopicRetentionTimeConfigRsp TopicDetail::GetRetentionTimeConfig() const
{
    return m_retentionTimeConfig;
}

void TopicDetail::SetRetentionTimeConfig(const TopicRetentionTimeConfigRsp& _retentionTimeConfig)
{
    m_retentionTimeConfig = _retentionTimeConfig;
    m_retentionTimeConfigHasBeenSet = true;
}

bool TopicDetail::RetentionTimeConfigHasBeenSet() const
{
    return m_retentionTimeConfigHasBeenSet;
}

int64_t TopicDetail::GetStatus() const
{
    return m_status;
}

void TopicDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TopicDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Tag> TopicDetail::GetTags() const
{
    return m_tags;
}

void TopicDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TopicDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

