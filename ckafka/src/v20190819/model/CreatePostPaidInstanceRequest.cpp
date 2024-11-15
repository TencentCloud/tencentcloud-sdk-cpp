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

#include <tencentcloud/ckafka/v20190819/model/CreatePostPaidInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreatePostPaidInstanceRequest::CreatePostPaidInstanceRequest() :
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_specificationsTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
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

string CreatePostPaidInstanceRequest::ToJsonString() const
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

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandWidth, allocator);
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


string CreatePostPaidInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreatePostPaidInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreatePostPaidInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreatePostPaidInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreatePostPaidInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreatePostPaidInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreatePostPaidInstanceRequest::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void CreatePostPaidInstanceRequest::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreatePostPaidInstanceRequest::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreatePostPaidInstanceRequest::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void CreatePostPaidInstanceRequest::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string CreatePostPaidInstanceRequest::GetSpecificationsType() const
{
    return m_specificationsType;
}

void CreatePostPaidInstanceRequest::SetSpecificationsType(const string& _specificationsType)
{
    m_specificationsType = _specificationsType;
    m_specificationsTypeHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::SpecificationsTypeHasBeenSet() const
{
    return m_specificationsTypeHasBeenSet;
}

string CreatePostPaidInstanceRequest::GetDiskType() const
{
    return m_diskType;
}

void CreatePostPaidInstanceRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void CreatePostPaidInstanceRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreatePostPaidInstanceRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetPartition() const
{
    return m_partition;
}

void CreatePostPaidInstanceRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetTopicNum() const
{
    return m_topicNum;
}

void CreatePostPaidInstanceRequest::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreatePostPaidInstanceRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

bool CreatePostPaidInstanceRequest::GetMultiZoneFlag() const
{
    return m_multiZoneFlag;
}

void CreatePostPaidInstanceRequest::SetMultiZoneFlag(const bool& _multiZoneFlag)
{
    m_multiZoneFlag = _multiZoneFlag;
    m_multiZoneFlagHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::MultiZoneFlagHasBeenSet() const
{
    return m_multiZoneFlagHasBeenSet;
}

vector<int64_t> CreatePostPaidInstanceRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void CreatePostPaidInstanceRequest::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void CreatePostPaidInstanceRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetPublicNetworkMonthly() const
{
    return m_publicNetworkMonthly;
}

void CreatePostPaidInstanceRequest::SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly)
{
    m_publicNetworkMonthly = _publicNetworkMonthly;
    m_publicNetworkMonthlyHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::PublicNetworkMonthlyHasBeenSet() const
{
    return m_publicNetworkMonthlyHasBeenSet;
}

vector<Tag> CreatePostPaidInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreatePostPaidInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreatePostPaidInstanceRequest::GetElasticBandwidthSwitch() const
{
    return m_elasticBandwidthSwitch;
}

void CreatePostPaidInstanceRequest::SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch)
{
    m_elasticBandwidthSwitch = _elasticBandwidthSwitch;
    m_elasticBandwidthSwitchHasBeenSet = true;
}

bool CreatePostPaidInstanceRequest::ElasticBandwidthSwitchHasBeenSet() const
{
    return m_elasticBandwidthSwitchHasBeenSet;
}


