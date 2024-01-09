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

#include <tencentcloud/dts/v20211206/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_accountHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_consumerGroupOffsetHasBeenSet(false),
    m_consumerGroupLagHasBeenSet(false),
    m_latencyHasBeenSet(false),
    m_stateOfPartitionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_consumerGroupStateHasBeenSet(false),
    m_partitionAssignmentHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupName") && !value["ConsumerGroupName"].IsNull())
    {
        if (!value["ConsumerGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ConsumerGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupName = string(value["ConsumerGroupName"].GetString());
        m_consumerGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupOffset") && !value["ConsumerGroupOffset"].IsNull())
    {
        if (!value["ConsumerGroupOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ConsumerGroupOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupOffset = value["ConsumerGroupOffset"].GetInt64();
        m_consumerGroupOffsetHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupLag") && !value["ConsumerGroupLag"].IsNull())
    {
        if (!value["ConsumerGroupLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ConsumerGroupLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupLag = value["ConsumerGroupLag"].GetInt64();
        m_consumerGroupLagHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("StateOfPartition") && !value["StateOfPartition"].IsNull())
    {
        if (!value["StateOfPartition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupInfo.StateOfPartition` is not array type"));

        const rapidjson::Value &tmpValue = value["StateOfPartition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stateOfPartition.push_back(item);
        }
        m_stateOfPartitionHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupState") && !value["ConsumerGroupState"].IsNull())
    {
        if (!value["ConsumerGroupState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.ConsumerGroupState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupState = string(value["ConsumerGroupState"].GetString());
        m_consumerGroupStateHasBeenSet = true;
    }

    if (value.HasMember("PartitionAssignment") && !value["PartitionAssignment"].IsNull())
    {
        if (!value["PartitionAssignment"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupInfo.PartitionAssignment` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionAssignment"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartitionAssignment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionAssignment.push_back(item);
        }
        m_partitionAssignmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerGroupOffset, allocator);
    }

    if (m_consumerGroupLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerGroupLag, allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

    if (m_stateOfPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateOfPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stateOfPartition.begin(); itr != m_stateOfPartition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupState.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionAssignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionAssignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionAssignment.begin(); itr != m_partitionAssignment.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GroupInfo::GetAccount() const
{
    return m_account;
}

void GroupInfo::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool GroupInfo::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string GroupInfo::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void GroupInfo::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool GroupInfo::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

string GroupInfo::GetDescription() const
{
    return m_description;
}

void GroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t GroupInfo::GetConsumerGroupOffset() const
{
    return m_consumerGroupOffset;
}

void GroupInfo::SetConsumerGroupOffset(const int64_t& _consumerGroupOffset)
{
    m_consumerGroupOffset = _consumerGroupOffset;
    m_consumerGroupOffsetHasBeenSet = true;
}

bool GroupInfo::ConsumerGroupOffsetHasBeenSet() const
{
    return m_consumerGroupOffsetHasBeenSet;
}

int64_t GroupInfo::GetConsumerGroupLag() const
{
    return m_consumerGroupLag;
}

void GroupInfo::SetConsumerGroupLag(const int64_t& _consumerGroupLag)
{
    m_consumerGroupLag = _consumerGroupLag;
    m_consumerGroupLagHasBeenSet = true;
}

bool GroupInfo::ConsumerGroupLagHasBeenSet() const
{
    return m_consumerGroupLagHasBeenSet;
}

int64_t GroupInfo::GetLatency() const
{
    return m_latency;
}

void GroupInfo::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool GroupInfo::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

vector<MonitorInfo> GroupInfo::GetStateOfPartition() const
{
    return m_stateOfPartition;
}

void GroupInfo::SetStateOfPartition(const vector<MonitorInfo>& _stateOfPartition)
{
    m_stateOfPartition = _stateOfPartition;
    m_stateOfPartitionHasBeenSet = true;
}

bool GroupInfo::StateOfPartitionHasBeenSet() const
{
    return m_stateOfPartitionHasBeenSet;
}

string GroupInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void GroupInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool GroupInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string GroupInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void GroupInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool GroupInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string GroupInfo::GetConsumerGroupState() const
{
    return m_consumerGroupState;
}

void GroupInfo::SetConsumerGroupState(const string& _consumerGroupState)
{
    m_consumerGroupState = _consumerGroupState;
    m_consumerGroupStateHasBeenSet = true;
}

bool GroupInfo::ConsumerGroupStateHasBeenSet() const
{
    return m_consumerGroupStateHasBeenSet;
}

vector<PartitionAssignment> GroupInfo::GetPartitionAssignment() const
{
    return m_partitionAssignment;
}

void GroupInfo::SetPartitionAssignment(const vector<PartitionAssignment>& _partitionAssignment)
{
    m_partitionAssignment = _partitionAssignment;
    m_partitionAssignmentHasBeenSet = true;
}

bool GroupInfo::PartitionAssignmentHasBeenSet() const
{
    return m_partitionAssignmentHasBeenSet;
}

