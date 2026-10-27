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

#include <tencentcloud/cvd/v20201104/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_instanceTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePrepaidHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_anonymousAccessHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_domainControlPoliciesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_anonymousAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anonymousAccess, allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_poolId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainControlPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainControlPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainControlPolicies.begin(); itr != m_domainControlPolicies.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

Disk CreateInstancesRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void CreateInstancesRequest::SetSystemDisk(const Disk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool CreateInstancesRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

string CreateInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void CreateInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

VirtualPrivateCloud CreateInstancesRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void CreateInstancesRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool CreateInstancesRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

string CreateInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t CreateInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateInstancesRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

vector<Disk> CreateInstancesRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void CreateInstancesRequest::SetDataDisks(const vector<Disk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool CreateInstancesRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

string CreateInstancesRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateInstancesRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateInstancesRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ChargePrepaid CreateInstancesRequest::GetChargePrepaid() const
{
    return m_chargePrepaid;
}

void CreateInstancesRequest::SetChargePrepaid(const ChargePrepaid& _chargePrepaid)
{
    m_chargePrepaid = _chargePrepaid;
    m_chargePrepaidHasBeenSet = true;
}

bool CreateInstancesRequest::ChargePrepaidHasBeenSet() const
{
    return m_chargePrepaidHasBeenSet;
}

bool CreateInstancesRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateInstancesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateInstancesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

bool CreateInstancesRequest::GetAnonymousAccess() const
{
    return m_anonymousAccess;
}

void CreateInstancesRequest::SetAnonymousAccess(const bool& _anonymousAccess)
{
    m_anonymousAccess = _anonymousAccess;
    m_anonymousAccessHasBeenSet = true;
}

bool CreateInstancesRequest::AnonymousAccessHasBeenSet() const
{
    return m_anonymousAccessHasBeenSet;
}

vector<string> CreateInstancesRequest::GetSecurityGroups() const
{
    return m_securityGroups;
}

void CreateInstancesRequest::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool CreateInstancesRequest::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string CreateInstancesRequest::GetPoolId() const
{
    return m_poolId;
}

void CreateInstancesRequest::SetPoolId(const string& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool CreateInstancesRequest::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

vector<string> CreateInstancesRequest::GetDomainControlPolicies() const
{
    return m_domainControlPolicies;
}

void CreateInstancesRequest::SetDomainControlPolicies(const vector<string>& _domainControlPolicies)
{
    m_domainControlPolicies = _domainControlPolicies;
    m_domainControlPoliciesHasBeenSet = true;
}

bool CreateInstancesRequest::DomainControlPoliciesHasBeenSet() const
{
    return m_domainControlPoliciesHasBeenSet;
}

vector<Tag> CreateInstancesRequest::GetTags() const
{
    return m_tags;
}

void CreateInstancesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstancesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}


