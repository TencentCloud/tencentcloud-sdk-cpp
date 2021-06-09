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

#include <tencentcloud/bm/v20180423/model/ReloadDeviceOsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

ReloadDeviceOsRequest::ReloadDeviceOsRequest() :
    m_instanceIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_raidIdHasBeenSet(false),
    m_isZoningHasBeenSet(false),
    m_sysRootSpaceHasBeenSet(false),
    m_sysSwaporuefiSpaceHasBeenSet(false),
    m_sysUsrlocalSpaceHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_hyperThreadingHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_needSecurityAgentHasBeenSet(false),
    m_needMonitorAgentHasBeenSet(false),
    m_needEMRAgentHasBeenSet(false),
    m_needEMRSoftwareHasBeenSet(false),
    m_reserveSgConfigHasBeenSet(false),
    m_sysDataSpaceHasBeenSet(false)
{
}

string ReloadDeviceOsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_raidIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_raidId, allocator);
    }

    if (m_isZoningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsZoning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isZoning, allocator);
    }

    if (m_sysRootSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysRootSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sysRootSpace, allocator);
    }

    if (m_sysSwaporuefiSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysSwaporuefiSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sysSwaporuefiSpace, allocator);
    }

    if (m_sysUsrlocalSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysUsrlocalSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sysUsrlocalSpace, allocator);
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

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hyperThreadingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperThreading";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hyperThreading, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_needSecurityAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSecurityAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSecurityAgent, allocator);
    }

    if (m_needMonitorAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMonitorAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needMonitorAgent, allocator);
    }

    if (m_needEMRAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedEMRAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needEMRAgent, allocator);
    }

    if (m_needEMRSoftwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedEMRSoftware";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needEMRSoftware, allocator);
    }

    if (m_reserveSgConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveSgConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reserveSgConfig, allocator);
    }

    if (m_sysDataSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysDataSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sysDataSpace, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReloadDeviceOsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ReloadDeviceOsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ReloadDeviceOsRequest::GetPassword() const
{
    return m_password;
}

void ReloadDeviceOsRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ReloadDeviceOsRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetOsTypeId() const
{
    return m_osTypeId;
}

void ReloadDeviceOsRequest::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetRaidId() const
{
    return m_raidId;
}

void ReloadDeviceOsRequest::SetRaidId(const uint64_t& _raidId)
{
    m_raidId = _raidId;
    m_raidIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::RaidIdHasBeenSet() const
{
    return m_raidIdHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetIsZoning() const
{
    return m_isZoning;
}

void ReloadDeviceOsRequest::SetIsZoning(const uint64_t& _isZoning)
{
    m_isZoning = _isZoning;
    m_isZoningHasBeenSet = true;
}

bool ReloadDeviceOsRequest::IsZoningHasBeenSet() const
{
    return m_isZoningHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetSysRootSpace() const
{
    return m_sysRootSpace;
}

void ReloadDeviceOsRequest::SetSysRootSpace(const uint64_t& _sysRootSpace)
{
    m_sysRootSpace = _sysRootSpace;
    m_sysRootSpaceHasBeenSet = true;
}

bool ReloadDeviceOsRequest::SysRootSpaceHasBeenSet() const
{
    return m_sysRootSpaceHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetSysSwaporuefiSpace() const
{
    return m_sysSwaporuefiSpace;
}

void ReloadDeviceOsRequest::SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace)
{
    m_sysSwaporuefiSpace = _sysSwaporuefiSpace;
    m_sysSwaporuefiSpaceHasBeenSet = true;
}

bool ReloadDeviceOsRequest::SysSwaporuefiSpaceHasBeenSet() const
{
    return m_sysSwaporuefiSpaceHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetSysUsrlocalSpace() const
{
    return m_sysUsrlocalSpace;
}

void ReloadDeviceOsRequest::SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace)
{
    m_sysUsrlocalSpace = _sysUsrlocalSpace;
    m_sysUsrlocalSpaceHasBeenSet = true;
}

bool ReloadDeviceOsRequest::SysUsrlocalSpaceHasBeenSet() const
{
    return m_sysUsrlocalSpaceHasBeenSet;
}

string ReloadDeviceOsRequest::GetVpcId() const
{
    return m_vpcId;
}

void ReloadDeviceOsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ReloadDeviceOsRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ReloadDeviceOsRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ReloadDeviceOsRequest::GetLanIp() const
{
    return m_lanIp;
}

void ReloadDeviceOsRequest::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool ReloadDeviceOsRequest::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetHyperThreading() const
{
    return m_hyperThreading;
}

void ReloadDeviceOsRequest::SetHyperThreading(const uint64_t& _hyperThreading)
{
    m_hyperThreading = _hyperThreading;
    m_hyperThreadingHasBeenSet = true;
}

bool ReloadDeviceOsRequest::HyperThreadingHasBeenSet() const
{
    return m_hyperThreadingHasBeenSet;
}

string ReloadDeviceOsRequest::GetImageId() const
{
    return m_imageId;
}

void ReloadDeviceOsRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ReloadDeviceOsRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ReloadDeviceOsRequest::GetFileSystem() const
{
    return m_fileSystem;
}

void ReloadDeviceOsRequest::SetFileSystem(const string& _fileSystem)
{
    m_fileSystem = _fileSystem;
    m_fileSystemHasBeenSet = true;
}

bool ReloadDeviceOsRequest::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetNeedSecurityAgent() const
{
    return m_needSecurityAgent;
}

void ReloadDeviceOsRequest::SetNeedSecurityAgent(const uint64_t& _needSecurityAgent)
{
    m_needSecurityAgent = _needSecurityAgent;
    m_needSecurityAgentHasBeenSet = true;
}

bool ReloadDeviceOsRequest::NeedSecurityAgentHasBeenSet() const
{
    return m_needSecurityAgentHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetNeedMonitorAgent() const
{
    return m_needMonitorAgent;
}

void ReloadDeviceOsRequest::SetNeedMonitorAgent(const uint64_t& _needMonitorAgent)
{
    m_needMonitorAgent = _needMonitorAgent;
    m_needMonitorAgentHasBeenSet = true;
}

bool ReloadDeviceOsRequest::NeedMonitorAgentHasBeenSet() const
{
    return m_needMonitorAgentHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetNeedEMRAgent() const
{
    return m_needEMRAgent;
}

void ReloadDeviceOsRequest::SetNeedEMRAgent(const uint64_t& _needEMRAgent)
{
    m_needEMRAgent = _needEMRAgent;
    m_needEMRAgentHasBeenSet = true;
}

bool ReloadDeviceOsRequest::NeedEMRAgentHasBeenSet() const
{
    return m_needEMRAgentHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetNeedEMRSoftware() const
{
    return m_needEMRSoftware;
}

void ReloadDeviceOsRequest::SetNeedEMRSoftware(const uint64_t& _needEMRSoftware)
{
    m_needEMRSoftware = _needEMRSoftware;
    m_needEMRSoftwareHasBeenSet = true;
}

bool ReloadDeviceOsRequest::NeedEMRSoftwareHasBeenSet() const
{
    return m_needEMRSoftwareHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetReserveSgConfig() const
{
    return m_reserveSgConfig;
}

void ReloadDeviceOsRequest::SetReserveSgConfig(const uint64_t& _reserveSgConfig)
{
    m_reserveSgConfig = _reserveSgConfig;
    m_reserveSgConfigHasBeenSet = true;
}

bool ReloadDeviceOsRequest::ReserveSgConfigHasBeenSet() const
{
    return m_reserveSgConfigHasBeenSet;
}

uint64_t ReloadDeviceOsRequest::GetSysDataSpace() const
{
    return m_sysDataSpace;
}

void ReloadDeviceOsRequest::SetSysDataSpace(const uint64_t& _sysDataSpace)
{
    m_sysDataSpace = _sysDataSpace;
    m_sysDataSpaceHasBeenSet = true;
}

bool ReloadDeviceOsRequest::SysDataSpaceHasBeenSet() const
{
    return m_sysDataSpaceHasBeenSet;
}


