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

#include <tencentcloud/tdmq/v20200217/model/RocketMQTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQTopic::RocketMQTopic() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_subscriptionCountHasBeenSet(false),
    m_subscriptionDataHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("GroupNum") && !value["GroupNum"].IsNull())
    {
        if (!value["GroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.GroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = value["GroupNum"].GetUint64();
        m_groupNumHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionCount") && !value["SubscriptionCount"].IsNull())
    {
        if (!value["SubscriptionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.SubscriptionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionCount = value["SubscriptionCount"].GetInt64();
        m_subscriptionCountHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionData") && !value["SubscriptionData"].IsNull())
    {
        if (!value["SubscriptionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQTopic.SubscriptionData` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscriptionData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RocketMQSubscription item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscriptionData.push_back(item);
        }
        m_subscriptionDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNum, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_subscriptionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionCount, allocator);
    }

    if (m_subscriptionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscriptionData.begin(); itr != m_subscriptionData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RocketMQTopic::GetName() const
{
    return m_name;
}

void RocketMQTopic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RocketMQTopic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RocketMQTopic::GetType() const
{
    return m_type;
}

void RocketMQTopic::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RocketMQTopic::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RocketMQTopic::GetGroupNum() const
{
    return m_groupNum;
}

void RocketMQTopic::SetGroupNum(const uint64_t& _groupNum)
{
    m_groupNum = _groupNum;
    m_groupNumHasBeenSet = true;
}

bool RocketMQTopic::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

string RocketMQTopic::GetRemark() const
{
    return m_remark;
}

void RocketMQTopic::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQTopic::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t RocketMQTopic::GetPartitionNum() const
{
    return m_partitionNum;
}

void RocketMQTopic::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool RocketMQTopic::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

uint64_t RocketMQTopic::GetCreateTime() const
{
    return m_createTime;
}

void RocketMQTopic::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RocketMQTopic::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t RocketMQTopic::GetUpdateTime() const
{
    return m_updateTime;
}

void RocketMQTopic::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RocketMQTopic::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RocketMQTopic::GetInstanceId() const
{
    return m_instanceId;
}

void RocketMQTopic::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RocketMQTopic::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RocketMQTopic::GetNamespace() const
{
    return m_namespace;
}

void RocketMQTopic::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQTopic::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RocketMQTopic::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void RocketMQTopic::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool RocketMQTopic::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t RocketMQTopic::GetSubscriptionCount() const
{
    return m_subscriptionCount;
}

void RocketMQTopic::SetSubscriptionCount(const int64_t& _subscriptionCount)
{
    m_subscriptionCount = _subscriptionCount;
    m_subscriptionCountHasBeenSet = true;
}

bool RocketMQTopic::SubscriptionCountHasBeenSet() const
{
    return m_subscriptionCountHasBeenSet;
}

vector<RocketMQSubscription> RocketMQTopic::GetSubscriptionData() const
{
    return m_subscriptionData;
}

void RocketMQTopic::SetSubscriptionData(const vector<RocketMQSubscription>& _subscriptionData)
{
    m_subscriptionData = _subscriptionData;
    m_subscriptionDataHasBeenSet = true;
}

bool RocketMQTopic::SubscriptionDataHasBeenSet() const
{
    return m_subscriptionDataHasBeenSet;
}

