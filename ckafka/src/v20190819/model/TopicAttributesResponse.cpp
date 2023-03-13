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

#include <tencentcloud/ckafka/v20190819/model/TopicAttributesResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicAttributesResponse::TopicAttributesResponse() :
    m_topicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_configHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_enableAclRuleHasBeenSet(false),
    m_aclRuleListHasBeenSet(false),
    m_quotaConfigHasBeenSet(false),
    m_replicaNumHasBeenSet(false)
{
}

CoreInternalOutcome TopicAttributesResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("EnableWhiteList") && !value["EnableWhiteList"].IsNull())
    {
        if (!value["EnableWhiteList"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.EnableWhiteList` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableWhiteList = value["EnableWhiteList"].GetInt64();
        m_enableWhiteListHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteList") && !value["IpWhiteList"].IsNull())
    {
        if (!value["IpWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.IpWhiteList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpWhiteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhiteList.push_back((*itr).GetString());
        }
        m_ipWhiteListHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicPartitionDO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("EnableAclRule") && !value["EnableAclRule"].IsNull())
    {
        if (!value["EnableAclRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.EnableAclRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableAclRule = value["EnableAclRule"].GetInt64();
        m_enableAclRuleHasBeenSet = true;
    }

    if (value.HasMember("AclRuleList") && !value["AclRuleList"].IsNull())
    {
        if (!value["AclRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.AclRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["AclRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AclRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aclRuleList.push_back(item);
        }
        m_aclRuleListHasBeenSet = true;
    }

    if (value.HasMember("QuotaConfig") && !value["QuotaConfig"].IsNull())
    {
        if (!value["QuotaConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.QuotaConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quotaConfig.Deserialize(value["QuotaConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaConfigHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicAttributesResponse.ReplicaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetInt64();
        m_replicaNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicAttributesResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableAclRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAclRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAclRule, allocator);
    }

    if (m_aclRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aclRuleList.begin(); itr != m_aclRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quotaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

}


string TopicAttributesResponse::GetTopicId() const
{
    return m_topicId;
}

void TopicAttributesResponse::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicAttributesResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t TopicAttributesResponse::GetCreateTime() const
{
    return m_createTime;
}

void TopicAttributesResponse::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicAttributesResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TopicAttributesResponse::GetNote() const
{
    return m_note;
}

void TopicAttributesResponse::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool TopicAttributesResponse::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t TopicAttributesResponse::GetPartitionNum() const
{
    return m_partitionNum;
}

void TopicAttributesResponse::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool TopicAttributesResponse::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t TopicAttributesResponse::GetEnableWhiteList() const
{
    return m_enableWhiteList;
}

void TopicAttributesResponse::SetEnableWhiteList(const int64_t& _enableWhiteList)
{
    m_enableWhiteList = _enableWhiteList;
    m_enableWhiteListHasBeenSet = true;
}

bool TopicAttributesResponse::EnableWhiteListHasBeenSet() const
{
    return m_enableWhiteListHasBeenSet;
}

vector<string> TopicAttributesResponse::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void TopicAttributesResponse::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool TopicAttributesResponse::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

Config TopicAttributesResponse::GetConfig() const
{
    return m_config;
}

void TopicAttributesResponse::SetConfig(const Config& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TopicAttributesResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<TopicPartitionDO> TopicAttributesResponse::GetPartitions() const
{
    return m_partitions;
}

void TopicAttributesResponse::SetPartitions(const vector<TopicPartitionDO>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TopicAttributesResponse::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

int64_t TopicAttributesResponse::GetEnableAclRule() const
{
    return m_enableAclRule;
}

void TopicAttributesResponse::SetEnableAclRule(const int64_t& _enableAclRule)
{
    m_enableAclRule = _enableAclRule;
    m_enableAclRuleHasBeenSet = true;
}

bool TopicAttributesResponse::EnableAclRuleHasBeenSet() const
{
    return m_enableAclRuleHasBeenSet;
}

vector<AclRule> TopicAttributesResponse::GetAclRuleList() const
{
    return m_aclRuleList;
}

void TopicAttributesResponse::SetAclRuleList(const vector<AclRule>& _aclRuleList)
{
    m_aclRuleList = _aclRuleList;
    m_aclRuleListHasBeenSet = true;
}

bool TopicAttributesResponse::AclRuleListHasBeenSet() const
{
    return m_aclRuleListHasBeenSet;
}

InstanceQuotaConfigResp TopicAttributesResponse::GetQuotaConfig() const
{
    return m_quotaConfig;
}

void TopicAttributesResponse::SetQuotaConfig(const InstanceQuotaConfigResp& _quotaConfig)
{
    m_quotaConfig = _quotaConfig;
    m_quotaConfigHasBeenSet = true;
}

bool TopicAttributesResponse::QuotaConfigHasBeenSet() const
{
    return m_quotaConfigHasBeenSet;
}

int64_t TopicAttributesResponse::GetReplicaNum() const
{
    return m_replicaNum;
}

void TopicAttributesResponse::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool TopicAttributesResponse::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

