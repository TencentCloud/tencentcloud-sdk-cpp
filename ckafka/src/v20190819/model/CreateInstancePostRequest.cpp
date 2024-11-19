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

#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateInstancePostRequest::CreateInstancePostRequest() :
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_specificationsTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_multiZoneFlagHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_publicNetworkMonthlyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_elasticBandwidthSwitchHasBeenSet(false)
{
}

string CreateInstancePostRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_msgRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionTime, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecificationsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specificationsType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_multiZoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiZoneFlag, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_publicNetworkMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkMonthly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicNetworkMonthly, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_elasticBandwidthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidthSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elasticBandwidthSwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancePostRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancePostRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancePostRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateInstancePostRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstancePostRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstancePostRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstancePostRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstancePostRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstancePostRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateInstancePostRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void CreateInstancePostRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool CreateInstancePostRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t CreateInstancePostRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstancePostRequest::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstancePostRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t CreateInstancePostRequest::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void CreateInstancePostRequest::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool CreateInstancePostRequest::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

int64_t CreateInstancePostRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateInstancePostRequest::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateInstancePostRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateInstancePostRequest::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void CreateInstancePostRequest::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool CreateInstancePostRequest::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string CreateInstancePostRequest::GetSpecificationsType() const
{
    return m_specificationsType;
}

void CreateInstancePostRequest::SetSpecificationsType(const string& _specificationsType)
{
    m_specificationsType = _specificationsType;
    m_specificationsTypeHasBeenSet = true;
}

bool CreateInstancePostRequest::SpecificationsTypeHasBeenSet() const
{
    return m_specificationsTypeHasBeenSet;
}

string CreateInstancePostRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateInstancePostRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateInstancePostRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t CreateInstancePostRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateInstancePostRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateInstancePostRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t CreateInstancePostRequest::GetPartition() const
{
    return m_partition;
}

void CreateInstancePostRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool CreateInstancePostRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t CreateInstancePostRequest::GetTopicNum() const
{
    return m_topicNum;
}

void CreateInstancePostRequest::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool CreateInstancePostRequest::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t CreateInstancePostRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateInstancePostRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateInstancePostRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

bool CreateInstancePostRequest::GetMultiZoneFlag() const
{
    return m_multiZoneFlag;
}

void CreateInstancePostRequest::SetMultiZoneFlag(const bool& _multiZoneFlag)
{
    m_multiZoneFlag = _multiZoneFlag;
    m_multiZoneFlagHasBeenSet = true;
}

bool CreateInstancePostRequest::MultiZoneFlagHasBeenSet() const
{
    return m_multiZoneFlagHasBeenSet;
}

vector<int64_t> CreateInstancePostRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void CreateInstancePostRequest::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool CreateInstancePostRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

int64_t CreateInstancePostRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void CreateInstancePostRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool CreateInstancePostRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t CreateInstancePostRequest::GetPublicNetworkMonthly() const
{
    return m_publicNetworkMonthly;
}

void CreateInstancePostRequest::SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly)
{
    m_publicNetworkMonthly = _publicNetworkMonthly;
    m_publicNetworkMonthlyHasBeenSet = true;
}

bool CreateInstancePostRequest::PublicNetworkMonthlyHasBeenSet() const
{
    return m_publicNetworkMonthlyHasBeenSet;
}

vector<Tag> CreateInstancePostRequest::GetTags() const
{
    return m_tags;
}

void CreateInstancePostRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstancePostRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateInstancePostRequest::GetElasticBandwidthSwitch() const
{
    return m_elasticBandwidthSwitch;
}

void CreateInstancePostRequest::SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch)
{
    m_elasticBandwidthSwitch = _elasticBandwidthSwitch;
    m_elasticBandwidthSwitchHasBeenSet = true;
}

bool CreateInstancePostRequest::ElasticBandwidthSwitchHasBeenSet() const
{
    return m_elasticBandwidthSwitchHasBeenSet;
}


