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

#include <tencentcloud/ckafka/v20190819/model/InstanceAttributesResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

InstanceAttributesResponse::InstanceAttributesResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_healthyMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_remainderPartitionsHasBeenSet(false),
    m_remainderTopicsHasBeenSet(false),
    m_createdPartitionsHasBeenSet(false),
    m_createdTopicsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false),
    m_cvmHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAttributesResponse::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VipList") && !value["VipList"].IsNull())
    {
        if (!value["VipList"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.VipList` is not array type"));

        const Value &tmpValue = value["VipList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VipEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vipList.push_back(item);
        }
        m_vipListHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Vport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vport = string(value["Vport"].GetString());
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("HealthyMessage") && !value["HealthyMessage"].IsNull())
    {
        if (!value["HealthyMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.HealthyMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyMessage = string(value["HealthyMessage"].GetString());
        m_healthyMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionTime") && !value["MsgRetentionTime"].IsNull())
    {
        if (!value["MsgRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.MsgRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionTime = value["MsgRetentionTime"].GetInt64();
        m_msgRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("RemainderPartitions") && !value["RemainderPartitions"].IsNull())
    {
        if (!value["RemainderPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.RemainderPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainderPartitions = value["RemainderPartitions"].GetInt64();
        m_remainderPartitionsHasBeenSet = true;
    }

    if (value.HasMember("RemainderTopics") && !value["RemainderTopics"].IsNull())
    {
        if (!value["RemainderTopics"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.RemainderTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainderTopics = value["RemainderTopics"].GetInt64();
        m_remainderTopicsHasBeenSet = true;
    }

    if (value.HasMember("CreatedPartitions") && !value["CreatedPartitions"].IsNull())
    {
        if (!value["CreatedPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.CreatedPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdPartitions = value["CreatedPartitions"].GetInt64();
        m_createdPartitionsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTopics") && !value["CreatedTopics"].IsNull())
    {
        if (!value["CreatedTopics"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.CreatedTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTopics = value["CreatedTopics"].GetInt64();
        m_createdTopicsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.ZoneIds` is not array type"));

        const Value &tmpValue = value["ZoneIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("MaxGroupNum") && !value["MaxGroupNum"].IsNull())
    {
        if (!value["MaxGroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.MaxGroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = value["MaxGroupNum"].GetInt64();
        m_maxGroupNumHasBeenSet = true;
    }

    if (value.HasMember("Cvm") && !value["Cvm"].IsNull())
    {
        if (!value["Cvm"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAttributesResponse.Cvm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvm = value["Cvm"].GetInt64();
        m_cvmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAttributesResponse::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vipList.begin(); itr != m_vipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vport.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_healthyMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthyMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_healthyMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_msgRetentionTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionTime, allocator);
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remainderPartitionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemainderPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainderPartitions, allocator);
    }

    if (m_remainderTopicsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemainderTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainderTopics, allocator);
    }

    if (m_createdPartitionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdPartitions, allocator);
    }

    if (m_createdTopicsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTopics, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_maxGroupNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGroupNum, allocator);
    }

    if (m_cvmHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvm, allocator);
    }

}


string InstanceAttributesResponse::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAttributesResponse::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceAttributesResponse::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceAttributesResponse::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<VipEntity> InstanceAttributesResponse::GetVipList() const
{
    return m_vipList;
}

void InstanceAttributesResponse::SetVipList(const vector<VipEntity>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool InstanceAttributesResponse::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

string InstanceAttributesResponse::GetVip() const
{
    return m_vip;
}

void InstanceAttributesResponse::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceAttributesResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string InstanceAttributesResponse::GetVport() const
{
    return m_vport;
}

void InstanceAttributesResponse::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceAttributesResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t InstanceAttributesResponse::GetStatus() const
{
    return m_status;
}

void InstanceAttributesResponse::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceAttributesResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceAttributesResponse::GetBandwidth() const
{
    return m_bandwidth;
}

void InstanceAttributesResponse::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool InstanceAttributesResponse::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t InstanceAttributesResponse::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceAttributesResponse::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceAttributesResponse::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t InstanceAttributesResponse::GetZoneId() const
{
    return m_zoneId;
}

void InstanceAttributesResponse::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceAttributesResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InstanceAttributesResponse::GetVpcId() const
{
    return m_vpcId;
}

void InstanceAttributesResponse::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceAttributesResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceAttributesResponse::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceAttributesResponse::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceAttributesResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceAttributesResponse::GetHealthy() const
{
    return m_healthy;
}

void InstanceAttributesResponse::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool InstanceAttributesResponse::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string InstanceAttributesResponse::GetHealthyMessage() const
{
    return m_healthyMessage;
}

void InstanceAttributesResponse::SetHealthyMessage(const string& _healthyMessage)
{
    m_healthyMessage = _healthyMessage;
    m_healthyMessageHasBeenSet = true;
}

bool InstanceAttributesResponse::HealthyMessageHasBeenSet() const
{
    return m_healthyMessageHasBeenSet;
}

uint64_t InstanceAttributesResponse::GetCreateTime() const
{
    return m_createTime;
}

void InstanceAttributesResponse::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InstanceAttributesResponse::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void InstanceAttributesResponse::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

InstanceConfigDO InstanceAttributesResponse::GetConfig() const
{
    return m_config;
}

void InstanceAttributesResponse::SetConfig(const InstanceConfigDO& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InstanceAttributesResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainderPartitions() const
{
    return m_remainderPartitions;
}

void InstanceAttributesResponse::SetRemainderPartitions(const int64_t& _remainderPartitions)
{
    m_remainderPartitions = _remainderPartitions;
    m_remainderPartitionsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainderPartitionsHasBeenSet() const
{
    return m_remainderPartitionsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainderTopics() const
{
    return m_remainderTopics;
}

void InstanceAttributesResponse::SetRemainderTopics(const int64_t& _remainderTopics)
{
    m_remainderTopics = _remainderTopics;
    m_remainderTopicsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainderTopicsHasBeenSet() const
{
    return m_remainderTopicsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCreatedPartitions() const
{
    return m_createdPartitions;
}

void InstanceAttributesResponse::SetCreatedPartitions(const int64_t& _createdPartitions)
{
    m_createdPartitions = _createdPartitions;
    m_createdPartitionsHasBeenSet = true;
}

bool InstanceAttributesResponse::CreatedPartitionsHasBeenSet() const
{
    return m_createdPartitionsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCreatedTopics() const
{
    return m_createdTopics;
}

void InstanceAttributesResponse::SetCreatedTopics(const int64_t& _createdTopics)
{
    m_createdTopics = _createdTopics;
    m_createdTopicsHasBeenSet = true;
}

bool InstanceAttributesResponse::CreatedTopicsHasBeenSet() const
{
    return m_createdTopicsHasBeenSet;
}

vector<Tag> InstanceAttributesResponse::GetTags() const
{
    return m_tags;
}

void InstanceAttributesResponse::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceAttributesResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t InstanceAttributesResponse::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceAttributesResponse::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<int64_t> InstanceAttributesResponse::GetZoneIds() const
{
    return m_zoneIds;
}

void InstanceAttributesResponse::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool InstanceAttributesResponse::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

string InstanceAttributesResponse::GetVersion() const
{
    return m_version;
}

void InstanceAttributesResponse::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceAttributesResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t InstanceAttributesResponse::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

void InstanceAttributesResponse::SetMaxGroupNum(const int64_t& _maxGroupNum)
{
    m_maxGroupNum = _maxGroupNum;
    m_maxGroupNumHasBeenSet = true;
}

bool InstanceAttributesResponse::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCvm() const
{
    return m_cvm;
}

void InstanceAttributesResponse::SetCvm(const int64_t& _cvm)
{
    m_cvm = _cvm;
    m_cvmHasBeenSet = true;
}

bool InstanceAttributesResponse::CvmHasBeenSet() const
{
    return m_cvmHasBeenSet;
}

