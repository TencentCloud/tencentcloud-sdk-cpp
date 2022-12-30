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
    m_updateTimeHasBeenSet(false)
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

