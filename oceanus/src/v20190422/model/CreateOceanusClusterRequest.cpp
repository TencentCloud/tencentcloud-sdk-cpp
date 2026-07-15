/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/oceanus/v20190422/model/CreateOceanusClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateOceanusClusterRequest::CreateOceanusClusterRequest() :
    m_clusterNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_loginPasswordHasBeenSet(false),
    m_vpcDescriptionsHasBeenSet(false),
    m_defaultCOSBucketHasBeenSet(false),
    m_cUHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_flinkWebUINetworkAccessTypeHasBeenSet(false),
    m_slaveVpcDescriptionsHasBeenSet(false),
    m_cUMemoryHasBeenSet(false)
{
}

string CreateOceanusClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_loginPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcDescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcDescriptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcDescriptions.begin(); itr != m_vpcDescriptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_defaultCOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCOSBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultCOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cU, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_flinkWebUINetworkAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkWebUINetworkAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flinkWebUINetworkAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveVpcDescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveVpcDescriptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slaveVpcDescriptions.begin(); itr != m_slaveVpcDescriptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cUMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CUMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cUMemory, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOceanusClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateOceanusClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateOceanusClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t CreateOceanusClusterRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateOceanusClusterRequest::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateOceanusClusterRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t CreateOceanusClusterRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateOceanusClusterRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateOceanusClusterRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateOceanusClusterRequest::GetLoginPassword() const
{
    return m_loginPassword;
}

void CreateOceanusClusterRequest::SetLoginPassword(const string& _loginPassword)
{
    m_loginPassword = _loginPassword;
    m_loginPasswordHasBeenSet = true;
}

bool CreateOceanusClusterRequest::LoginPasswordHasBeenSet() const
{
    return m_loginPasswordHasBeenSet;
}

vector<VPCDescription> CreateOceanusClusterRequest::GetVpcDescriptions() const
{
    return m_vpcDescriptions;
}

void CreateOceanusClusterRequest::SetVpcDescriptions(const vector<VPCDescription>& _vpcDescriptions)
{
    m_vpcDescriptions = _vpcDescriptions;
    m_vpcDescriptionsHasBeenSet = true;
}

bool CreateOceanusClusterRequest::VpcDescriptionsHasBeenSet() const
{
    return m_vpcDescriptionsHasBeenSet;
}

string CreateOceanusClusterRequest::GetDefaultCOSBucket() const
{
    return m_defaultCOSBucket;
}

void CreateOceanusClusterRequest::SetDefaultCOSBucket(const string& _defaultCOSBucket)
{
    m_defaultCOSBucket = _defaultCOSBucket;
    m_defaultCOSBucketHasBeenSet = true;
}

bool CreateOceanusClusterRequest::DefaultCOSBucketHasBeenSet() const
{
    return m_defaultCOSBucketHasBeenSet;
}

int64_t CreateOceanusClusterRequest::GetCU() const
{
    return m_cU;
}

void CreateOceanusClusterRequest::SetCU(const int64_t& _cU)
{
    m_cU = _cU;
    m_cUHasBeenSet = true;
}

bool CreateOceanusClusterRequest::CUHasBeenSet() const
{
    return m_cUHasBeenSet;
}

string CreateOceanusClusterRequest::GetRemark() const
{
    return m_remark;
}

void CreateOceanusClusterRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOceanusClusterRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateOceanusClusterRequest::GetPeriod() const
{
    return m_period;
}

void CreateOceanusClusterRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateOceanusClusterRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateOceanusClusterRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateOceanusClusterRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateOceanusClusterRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateOceanusClusterRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateOceanusClusterRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateOceanusClusterRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateOceanusClusterRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void CreateOceanusClusterRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CreateOceanusClusterRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CreateOceanusClusterRequest::GetFlinkWebUINetworkAccessType() const
{
    return m_flinkWebUINetworkAccessType;
}

void CreateOceanusClusterRequest::SetFlinkWebUINetworkAccessType(const string& _flinkWebUINetworkAccessType)
{
    m_flinkWebUINetworkAccessType = _flinkWebUINetworkAccessType;
    m_flinkWebUINetworkAccessTypeHasBeenSet = true;
}

bool CreateOceanusClusterRequest::FlinkWebUINetworkAccessTypeHasBeenSet() const
{
    return m_flinkWebUINetworkAccessTypeHasBeenSet;
}

vector<SlaveVpcDescriptions> CreateOceanusClusterRequest::GetSlaveVpcDescriptions() const
{
    return m_slaveVpcDescriptions;
}

void CreateOceanusClusterRequest::SetSlaveVpcDescriptions(const vector<SlaveVpcDescriptions>& _slaveVpcDescriptions)
{
    m_slaveVpcDescriptions = _slaveVpcDescriptions;
    m_slaveVpcDescriptionsHasBeenSet = true;
}

bool CreateOceanusClusterRequest::SlaveVpcDescriptionsHasBeenSet() const
{
    return m_slaveVpcDescriptionsHasBeenSet;
}

int64_t CreateOceanusClusterRequest::GetCUMemory() const
{
    return m_cUMemory;
}

void CreateOceanusClusterRequest::SetCUMemory(const int64_t& _cUMemory)
{
    m_cUMemory = _cUMemory;
    m_cUMemoryHasBeenSet = true;
}

bool CreateOceanusClusterRequest::CUMemoryHasBeenSet() const
{
    return m_cUMemoryHasBeenSet;
}


