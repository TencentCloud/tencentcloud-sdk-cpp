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

#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVipInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRabbitMQVipInstanceRequest::CreateRabbitMQVipInstanceRequest() :
    m_zoneIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_nodeSpecHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_enableCreateDefaultHaMirrorQueueHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_isIntlHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_enablePublicAccessHasBeenSet(false)
{
}

string CreateRabbitMQVipInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_enableCreateDefaultHaMirrorQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCreateDefaultHaMirrorQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCreateDefaultHaMirrorQueue, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_isIntlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIntl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIntl, allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_enablePublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePublicAccess, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> CreateRabbitMQVipInstanceRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void CreateRabbitMQVipInstanceRequest::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

string CreateRabbitMQVipInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateRabbitMQVipInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateRabbitMQVipInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateRabbitMQVipInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateRabbitMQVipInstanceRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateRabbitMQVipInstanceRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateRabbitMQVipInstanceRequest::GetNodeSpec() const
{
    return m_nodeSpec;
}

void CreateRabbitMQVipInstanceRequest::SetNodeSpec(const string& _nodeSpec)
{
    m_nodeSpec = _nodeSpec;
    m_nodeSpecHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::NodeSpecHasBeenSet() const
{
    return m_nodeSpecHasBeenSet;
}

int64_t CreateRabbitMQVipInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CreateRabbitMQVipInstanceRequest::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t CreateRabbitMQVipInstanceRequest::GetStorageSize() const
{
    return m_storageSize;
}

void CreateRabbitMQVipInstanceRequest::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

bool CreateRabbitMQVipInstanceRequest::GetEnableCreateDefaultHaMirrorQueue() const
{
    return m_enableCreateDefaultHaMirrorQueue;
}

void CreateRabbitMQVipInstanceRequest::SetEnableCreateDefaultHaMirrorQueue(const bool& _enableCreateDefaultHaMirrorQueue)
{
    m_enableCreateDefaultHaMirrorQueue = _enableCreateDefaultHaMirrorQueue;
    m_enableCreateDefaultHaMirrorQueueHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::EnableCreateDefaultHaMirrorQueueHasBeenSet() const
{
    return m_enableCreateDefaultHaMirrorQueueHasBeenSet;
}

bool CreateRabbitMQVipInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateRabbitMQVipInstanceRequest::SetAutoRenewFlag(const bool& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateRabbitMQVipInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateRabbitMQVipInstanceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

uint64_t CreateRabbitMQVipInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateRabbitMQVipInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateRabbitMQVipInstanceRequest::GetClusterVersion() const
{
    return m_clusterVersion;
}

void CreateRabbitMQVipInstanceRequest::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

bool CreateRabbitMQVipInstanceRequest::GetIsIntl() const
{
    return m_isIntl;
}

void CreateRabbitMQVipInstanceRequest::SetIsIntl(const bool& _isIntl)
{
    m_isIntl = _isIntl;
    m_isIntlHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::IsIntlHasBeenSet() const
{
    return m_isIntlHasBeenSet;
}

vector<Tag> CreateRabbitMQVipInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateRabbitMQVipInstanceRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

uint64_t CreateRabbitMQVipInstanceRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateRabbitMQVipInstanceRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

bool CreateRabbitMQVipInstanceRequest::GetEnablePublicAccess() const
{
    return m_enablePublicAccess;
}

void CreateRabbitMQVipInstanceRequest::SetEnablePublicAccess(const bool& _enablePublicAccess)
{
    m_enablePublicAccess = _enablePublicAccess;
    m_enablePublicAccessHasBeenSet = true;
}

bool CreateRabbitMQVipInstanceRequest::EnablePublicAccessHasBeenSet() const
{
    return m_enablePublicAccessHasBeenSet;
}


