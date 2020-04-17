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

#include <tencentcloud/ckafka/v20190819/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_healthyMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isInternalHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_cvmHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Vport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vport = string(value["Vport"].GetString());
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("VipList") && !value["VipList"].IsNull())
    {
        if (!value["VipList"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceDetail.VipList` is not array type"));

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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("HealthyMessage") && !value["HealthyMessage"].IsNull())
    {
        if (!value["HealthyMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.HealthyMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyMessage = string(value["HealthyMessage"].GetString());
        m_healthyMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsInternal") && !value["IsInternal"].IsNull())
    {
        if (!value["IsInternal"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.IsInternal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInternal = value["IsInternal"].GetInt64();
        m_isInternalHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceDetail.Tags` is not array type"));

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

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceDetail.ZoneIds` is not array type"));

        const Value &tmpValue = value["ZoneIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("Cvm") && !value["Cvm"].IsNull())
    {
        if (!value["Cvm"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceDetail.Cvm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvm = value["Cvm"].GetInt64();
        m_cvmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
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

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInternal, allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
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

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
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

    if (m_cvmHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvm, allocator);
    }

}


string InstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceDetail::GetVip() const
{
    return m_vip;
}

void InstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string InstanceDetail::GetVport() const
{
    return m_vport;
}

void InstanceDetail::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

vector<VipEntity> InstanceDetail::GetVipList() const
{
    return m_vipList;
}

void InstanceDetail::SetVipList(const vector<VipEntity>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool InstanceDetail::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

int64_t InstanceDetail::GetStatus() const
{
    return m_status;
}

void InstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceDetail::GetBandwidth() const
{
    return m_bandwidth;
}

void InstanceDetail::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool InstanceDetail::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t InstanceDetail::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceDetail::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceDetail::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t InstanceDetail::GetZoneId() const
{
    return m_zoneId;
}

void InstanceDetail::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceDetail::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InstanceDetail::GetVpcId() const
{
    return m_vpcId;
}

void InstanceDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceDetail::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t InstanceDetail::GetHealthy() const
{
    return m_healthy;
}

void InstanceDetail::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool InstanceDetail::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string InstanceDetail::GetHealthyMessage() const
{
    return m_healthyMessage;
}

void InstanceDetail::SetHealthyMessage(const string& _healthyMessage)
{
    m_healthyMessage = _healthyMessage;
    m_healthyMessageHasBeenSet = true;
}

bool InstanceDetail::HealthyMessageHasBeenSet() const
{
    return m_healthyMessageHasBeenSet;
}

int64_t InstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void InstanceDetail::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InstanceDetail::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceDetail::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceDetail::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t InstanceDetail::GetIsInternal() const
{
    return m_isInternal;
}

void InstanceDetail::SetIsInternal(const int64_t& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool InstanceDetail::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}

int64_t InstanceDetail::GetTopicNum() const
{
    return m_topicNum;
}

void InstanceDetail::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool InstanceDetail::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

vector<Tag> InstanceDetail::GetTags() const
{
    return m_tags;
}

void InstanceDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string InstanceDetail::GetVersion() const
{
    return m_version;
}

void InstanceDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<int64_t> InstanceDetail::GetZoneIds() const
{
    return m_zoneIds;
}

void InstanceDetail::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool InstanceDetail::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

int64_t InstanceDetail::GetCvm() const
{
    return m_cvm;
}

void InstanceDetail::SetCvm(const int64_t& _cvm)
{
    m_cvm = _cvm;
    m_cvmHasBeenSet = true;
}

bool InstanceDetail::CvmHasBeenSet() const
{
    return m_cvmHasBeenSet;
}

