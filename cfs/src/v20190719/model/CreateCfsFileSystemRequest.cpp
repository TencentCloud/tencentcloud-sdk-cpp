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

#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateCfsFileSystemRequest::CreateCfsFileSystemRequest() :
    m_zoneHasBeenSet(false),
    m_netInterfaceHasBeenSet(false),
    m_pGroupIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_mountIPHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_enableAutoScaleUpHasBeenSet(false),
    m_cfsVersionHasBeenSet(false),
    m_metaTypeHasBeenSet(false)
{
}

string CreateCfsFileSystemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_netInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInterface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netInterface.c_str(), allocator).Move(), allocator);
    }

    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
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

    if (m_mountIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountIP.c_str(), allocator).Move(), allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capacity, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoScaleUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoScaleUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoScaleUp, allocator);
    }

    if (m_cfsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfsVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCfsFileSystemRequest::GetZone() const
{
    return m_zone;
}

void CreateCfsFileSystemRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateCfsFileSystemRequest::GetNetInterface() const
{
    return m_netInterface;
}

void CreateCfsFileSystemRequest::SetNetInterface(const string& _netInterface)
{
    m_netInterface = _netInterface;
    m_netInterfaceHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::NetInterfaceHasBeenSet() const
{
    return m_netInterfaceHasBeenSet;
}

string CreateCfsFileSystemRequest::GetPGroupId() const
{
    return m_pGroupId;
}

void CreateCfsFileSystemRequest::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string CreateCfsFileSystemRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCfsFileSystemRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateCfsFileSystemRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateCfsFileSystemRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string CreateCfsFileSystemRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateCfsFileSystemRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateCfsFileSystemRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateCfsFileSystemRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateCfsFileSystemRequest::GetMountIP() const
{
    return m_mountIP;
}

void CreateCfsFileSystemRequest::SetMountIP(const string& _mountIP)
{
    m_mountIP = _mountIP;
    m_mountIPHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::MountIPHasBeenSet() const
{
    return m_mountIPHasBeenSet;
}

string CreateCfsFileSystemRequest::GetFsName() const
{
    return m_fsName;
}

void CreateCfsFileSystemRequest::SetFsName(const string& _fsName)
{
    m_fsName = _fsName;
    m_fsNameHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

vector<TagInfo> CreateCfsFileSystemRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateCfsFileSystemRequest::SetResourceTags(const vector<TagInfo>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateCfsFileSystemRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateCfsFileSystemRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateCfsFileSystemRequest::GetCcnId() const
{
    return m_ccnId;
}

void CreateCfsFileSystemRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CreateCfsFileSystemRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CreateCfsFileSystemRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t CreateCfsFileSystemRequest::GetCapacity() const
{
    return m_capacity;
}

void CreateCfsFileSystemRequest::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

string CreateCfsFileSystemRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void CreateCfsFileSystemRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string CreateCfsFileSystemRequest::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void CreateCfsFileSystemRequest::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

bool CreateCfsFileSystemRequest::GetEnableAutoScaleUp() const
{
    return m_enableAutoScaleUp;
}

void CreateCfsFileSystemRequest::SetEnableAutoScaleUp(const bool& _enableAutoScaleUp)
{
    m_enableAutoScaleUp = _enableAutoScaleUp;
    m_enableAutoScaleUpHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::EnableAutoScaleUpHasBeenSet() const
{
    return m_enableAutoScaleUpHasBeenSet;
}

string CreateCfsFileSystemRequest::GetCfsVersion() const
{
    return m_cfsVersion;
}

void CreateCfsFileSystemRequest::SetCfsVersion(const string& _cfsVersion)
{
    m_cfsVersion = _cfsVersion;
    m_cfsVersionHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::CfsVersionHasBeenSet() const
{
    return m_cfsVersionHasBeenSet;
}

string CreateCfsFileSystemRequest::GetMetaType() const
{
    return m_metaType;
}

void CreateCfsFileSystemRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CreateCfsFileSystemRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}


