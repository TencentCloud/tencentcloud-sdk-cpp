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

#include <tencentcloud/cfs/v20190719/model/MountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

MountInfo::MountInfo() :
    m_fileSystemIdHasBeenSet(false),
    m_mountTargetIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_fSIDHasBeenSet(false),
    m_lifeCycleStateHasBeenSet(false),
    m_networkInterfaceHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_ccnIDHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome MountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("MountTargetId") && !value["MountTargetId"].IsNull())
    {
        if (!value["MountTargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.MountTargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountTargetId = string(value["MountTargetId"].GetString());
        m_mountTargetIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("FSID") && !value["FSID"].IsNull())
    {
        if (!value["FSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.FSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fSID = string(value["FSID"].GetString());
        m_fSIDHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleState") && !value["LifeCycleState"].IsNull())
    {
        if (!value["LifeCycleState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.LifeCycleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleState = string(value["LifeCycleState"].GetString());
        m_lifeCycleStateHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterface") && !value["NetworkInterface"].IsNull())
    {
        if (!value["NetworkInterface"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.NetworkInterface` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterface = string(value["NetworkInterface"].GetString());
        m_networkInterfaceHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CcnID") && !value["CcnID"].IsNull())
    {
        if (!value["CcnID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.CcnID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnID = string(value["CcnID"].GetString());
        m_ccnIDHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountTargetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountTargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountTargetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_fSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FSID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fSID.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeCycleState.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterface";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterface.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnID.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string MountInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void MountInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool MountInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string MountInfo::GetMountTargetId() const
{
    return m_mountTargetId;
}

void MountInfo::SetMountTargetId(const string& _mountTargetId)
{
    m_mountTargetId = _mountTargetId;
    m_mountTargetIdHasBeenSet = true;
}

bool MountInfo::MountTargetIdHasBeenSet() const
{
    return m_mountTargetIdHasBeenSet;
}

string MountInfo::GetIpAddress() const
{
    return m_ipAddress;
}

void MountInfo::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool MountInfo::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string MountInfo::GetFSID() const
{
    return m_fSID;
}

void MountInfo::SetFSID(const string& _fSID)
{
    m_fSID = _fSID;
    m_fSIDHasBeenSet = true;
}

bool MountInfo::FSIDHasBeenSet() const
{
    return m_fSIDHasBeenSet;
}

string MountInfo::GetLifeCycleState() const
{
    return m_lifeCycleState;
}

void MountInfo::SetLifeCycleState(const string& _lifeCycleState)
{
    m_lifeCycleState = _lifeCycleState;
    m_lifeCycleStateHasBeenSet = true;
}

bool MountInfo::LifeCycleStateHasBeenSet() const
{
    return m_lifeCycleStateHasBeenSet;
}

string MountInfo::GetNetworkInterface() const
{
    return m_networkInterface;
}

void MountInfo::SetNetworkInterface(const string& _networkInterface)
{
    m_networkInterface = _networkInterface;
    m_networkInterfaceHasBeenSet = true;
}

bool MountInfo::NetworkInterfaceHasBeenSet() const
{
    return m_networkInterfaceHasBeenSet;
}

string MountInfo::GetVpcId() const
{
    return m_vpcId;
}

void MountInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MountInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MountInfo::GetVpcName() const
{
    return m_vpcName;
}

void MountInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool MountInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string MountInfo::GetSubnetId() const
{
    return m_subnetId;
}

void MountInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool MountInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string MountInfo::GetSubnetName() const
{
    return m_subnetName;
}

void MountInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool MountInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string MountInfo::GetCcnID() const
{
    return m_ccnID;
}

void MountInfo::SetCcnID(const string& _ccnID)
{
    m_ccnID = _ccnID;
    m_ccnIDHasBeenSet = true;
}

bool MountInfo::CcnIDHasBeenSet() const
{
    return m_ccnIDHasBeenSet;
}

string MountInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void MountInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool MountInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

