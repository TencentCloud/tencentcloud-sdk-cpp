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

#include <tencentcloud/bm/v20180423/model/BuyDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

BuyDevicesRequest::BuyDevicesRequest() :
    m_zoneHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_raidIdHasBeenSet(false),
    m_goodsCountHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_needSecurityAgentHasBeenSet(false),
    m_needMonitorAgentHasBeenSet(false),
    m_needEMRAgentHasBeenSet(false),
    m_needEMRSoftwareHasBeenSet(false),
    m_applyEipHasBeenSet(false),
    m_eipPayModeHasBeenSet(false),
    m_eipBandwidthHasBeenSet(false),
    m_isZoningHasBeenSet(false),
    m_cpmPayModeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_sysRootSpaceHasBeenSet(false),
    m_sysSwaporuefiSpaceHasBeenSet(false),
    m_sysUsrlocalSpaceHasBeenSet(false),
    m_sysDataSpaceHasBeenSet(false),
    m_hyperThreadingHasBeenSet(false),
    m_lanIpsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_cpuIdHasBeenSet(false),
    m_containRaidCardHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_systemDiskTypeIdHasBeenSet(false),
    m_systemDiskCountHasBeenSet(false),
    m_dataDiskTypeIdHasBeenSet(false),
    m_dataDiskCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_buySessionHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string BuyDevicesRequest::ToJsonString() const
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

    if (m_goodsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsCount, allocator);
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

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
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

    if (m_applyEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyEip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyEip, allocator);
    }

    if (m_eipPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eipPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_eipBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eipBandwidth, allocator);
    }

    if (m_isZoningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsZoning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isZoning, allocator);
    }

    if (m_cpmPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpmPayMode, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_sysDataSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysDataSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sysDataSpace, allocator);
    }

    if (m_hyperThreadingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperThreading";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hyperThreading, allocator);
    }

    if (m_lanIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lanIps.begin(); itr != m_lanIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpuId, allocator);
    }

    if (m_containRaidCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainRaidCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containRaidCard, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_systemDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_systemDiskTypeId, allocator);
    }

    if (m_systemDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_systemDiskCount, allocator);
    }

    if (m_dataDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataDiskTypeId, allocator);
    }

    if (m_dataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataDiskCount, allocator);
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

    if (m_fileSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_buySessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuySession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buySession.c_str(), allocator).Move(), allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BuyDevicesRequest::GetZone() const
{
    return m_zone;
}

void BuyDevicesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool BuyDevicesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t BuyDevicesRequest::GetOsTypeId() const
{
    return m_osTypeId;
}

void BuyDevicesRequest::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool BuyDevicesRequest::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

uint64_t BuyDevicesRequest::GetRaidId() const
{
    return m_raidId;
}

void BuyDevicesRequest::SetRaidId(const uint64_t& _raidId)
{
    m_raidId = _raidId;
    m_raidIdHasBeenSet = true;
}

bool BuyDevicesRequest::RaidIdHasBeenSet() const
{
    return m_raidIdHasBeenSet;
}

uint64_t BuyDevicesRequest::GetGoodsCount() const
{
    return m_goodsCount;
}

void BuyDevicesRequest::SetGoodsCount(const uint64_t& _goodsCount)
{
    m_goodsCount = _goodsCount;
    m_goodsCountHasBeenSet = true;
}

bool BuyDevicesRequest::GoodsCountHasBeenSet() const
{
    return m_goodsCountHasBeenSet;
}

string BuyDevicesRequest::GetVpcId() const
{
    return m_vpcId;
}

void BuyDevicesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BuyDevicesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string BuyDevicesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void BuyDevicesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool BuyDevicesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string BuyDevicesRequest::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void BuyDevicesRequest::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool BuyDevicesRequest::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

string BuyDevicesRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void BuyDevicesRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool BuyDevicesRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t BuyDevicesRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void BuyDevicesRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool BuyDevicesRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

uint64_t BuyDevicesRequest::GetNeedSecurityAgent() const
{
    return m_needSecurityAgent;
}

void BuyDevicesRequest::SetNeedSecurityAgent(const uint64_t& _needSecurityAgent)
{
    m_needSecurityAgent = _needSecurityAgent;
    m_needSecurityAgentHasBeenSet = true;
}

bool BuyDevicesRequest::NeedSecurityAgentHasBeenSet() const
{
    return m_needSecurityAgentHasBeenSet;
}

uint64_t BuyDevicesRequest::GetNeedMonitorAgent() const
{
    return m_needMonitorAgent;
}

void BuyDevicesRequest::SetNeedMonitorAgent(const uint64_t& _needMonitorAgent)
{
    m_needMonitorAgent = _needMonitorAgent;
    m_needMonitorAgentHasBeenSet = true;
}

bool BuyDevicesRequest::NeedMonitorAgentHasBeenSet() const
{
    return m_needMonitorAgentHasBeenSet;
}

uint64_t BuyDevicesRequest::GetNeedEMRAgent() const
{
    return m_needEMRAgent;
}

void BuyDevicesRequest::SetNeedEMRAgent(const uint64_t& _needEMRAgent)
{
    m_needEMRAgent = _needEMRAgent;
    m_needEMRAgentHasBeenSet = true;
}

bool BuyDevicesRequest::NeedEMRAgentHasBeenSet() const
{
    return m_needEMRAgentHasBeenSet;
}

uint64_t BuyDevicesRequest::GetNeedEMRSoftware() const
{
    return m_needEMRSoftware;
}

void BuyDevicesRequest::SetNeedEMRSoftware(const uint64_t& _needEMRSoftware)
{
    m_needEMRSoftware = _needEMRSoftware;
    m_needEMRSoftwareHasBeenSet = true;
}

bool BuyDevicesRequest::NeedEMRSoftwareHasBeenSet() const
{
    return m_needEMRSoftwareHasBeenSet;
}

uint64_t BuyDevicesRequest::GetApplyEip() const
{
    return m_applyEip;
}

void BuyDevicesRequest::SetApplyEip(const uint64_t& _applyEip)
{
    m_applyEip = _applyEip;
    m_applyEipHasBeenSet = true;
}

bool BuyDevicesRequest::ApplyEipHasBeenSet() const
{
    return m_applyEipHasBeenSet;
}

string BuyDevicesRequest::GetEipPayMode() const
{
    return m_eipPayMode;
}

void BuyDevicesRequest::SetEipPayMode(const string& _eipPayMode)
{
    m_eipPayMode = _eipPayMode;
    m_eipPayModeHasBeenSet = true;
}

bool BuyDevicesRequest::EipPayModeHasBeenSet() const
{
    return m_eipPayModeHasBeenSet;
}

uint64_t BuyDevicesRequest::GetEipBandwidth() const
{
    return m_eipBandwidth;
}

void BuyDevicesRequest::SetEipBandwidth(const uint64_t& _eipBandwidth)
{
    m_eipBandwidth = _eipBandwidth;
    m_eipBandwidthHasBeenSet = true;
}

bool BuyDevicesRequest::EipBandwidthHasBeenSet() const
{
    return m_eipBandwidthHasBeenSet;
}

uint64_t BuyDevicesRequest::GetIsZoning() const
{
    return m_isZoning;
}

void BuyDevicesRequest::SetIsZoning(const uint64_t& _isZoning)
{
    m_isZoning = _isZoning;
    m_isZoningHasBeenSet = true;
}

bool BuyDevicesRequest::IsZoningHasBeenSet() const
{
    return m_isZoningHasBeenSet;
}

uint64_t BuyDevicesRequest::GetCpmPayMode() const
{
    return m_cpmPayMode;
}

void BuyDevicesRequest::SetCpmPayMode(const uint64_t& _cpmPayMode)
{
    m_cpmPayMode = _cpmPayMode;
    m_cpmPayModeHasBeenSet = true;
}

bool BuyDevicesRequest::CpmPayModeHasBeenSet() const
{
    return m_cpmPayModeHasBeenSet;
}

string BuyDevicesRequest::GetImageId() const
{
    return m_imageId;
}

void BuyDevicesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool BuyDevicesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string BuyDevicesRequest::GetPassword() const
{
    return m_password;
}

void BuyDevicesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool BuyDevicesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t BuyDevicesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void BuyDevicesRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool BuyDevicesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSysRootSpace() const
{
    return m_sysRootSpace;
}

void BuyDevicesRequest::SetSysRootSpace(const uint64_t& _sysRootSpace)
{
    m_sysRootSpace = _sysRootSpace;
    m_sysRootSpaceHasBeenSet = true;
}

bool BuyDevicesRequest::SysRootSpaceHasBeenSet() const
{
    return m_sysRootSpaceHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSysSwaporuefiSpace() const
{
    return m_sysSwaporuefiSpace;
}

void BuyDevicesRequest::SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace)
{
    m_sysSwaporuefiSpace = _sysSwaporuefiSpace;
    m_sysSwaporuefiSpaceHasBeenSet = true;
}

bool BuyDevicesRequest::SysSwaporuefiSpaceHasBeenSet() const
{
    return m_sysSwaporuefiSpaceHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSysUsrlocalSpace() const
{
    return m_sysUsrlocalSpace;
}

void BuyDevicesRequest::SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace)
{
    m_sysUsrlocalSpace = _sysUsrlocalSpace;
    m_sysUsrlocalSpaceHasBeenSet = true;
}

bool BuyDevicesRequest::SysUsrlocalSpaceHasBeenSet() const
{
    return m_sysUsrlocalSpaceHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSysDataSpace() const
{
    return m_sysDataSpace;
}

void BuyDevicesRequest::SetSysDataSpace(const uint64_t& _sysDataSpace)
{
    m_sysDataSpace = _sysDataSpace;
    m_sysDataSpaceHasBeenSet = true;
}

bool BuyDevicesRequest::SysDataSpaceHasBeenSet() const
{
    return m_sysDataSpaceHasBeenSet;
}

uint64_t BuyDevicesRequest::GetHyperThreading() const
{
    return m_hyperThreading;
}

void BuyDevicesRequest::SetHyperThreading(const uint64_t& _hyperThreading)
{
    m_hyperThreading = _hyperThreading;
    m_hyperThreadingHasBeenSet = true;
}

bool BuyDevicesRequest::HyperThreadingHasBeenSet() const
{
    return m_hyperThreadingHasBeenSet;
}

vector<string> BuyDevicesRequest::GetLanIps() const
{
    return m_lanIps;
}

void BuyDevicesRequest::SetLanIps(const vector<string>& _lanIps)
{
    m_lanIps = _lanIps;
    m_lanIpsHasBeenSet = true;
}

bool BuyDevicesRequest::LanIpsHasBeenSet() const
{
    return m_lanIpsHasBeenSet;
}

vector<string> BuyDevicesRequest::GetAliases() const
{
    return m_aliases;
}

void BuyDevicesRequest::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool BuyDevicesRequest::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

uint64_t BuyDevicesRequest::GetCpuId() const
{
    return m_cpuId;
}

void BuyDevicesRequest::SetCpuId(const uint64_t& _cpuId)
{
    m_cpuId = _cpuId;
    m_cpuIdHasBeenSet = true;
}

bool BuyDevicesRequest::CpuIdHasBeenSet() const
{
    return m_cpuIdHasBeenSet;
}

uint64_t BuyDevicesRequest::GetContainRaidCard() const
{
    return m_containRaidCard;
}

void BuyDevicesRequest::SetContainRaidCard(const uint64_t& _containRaidCard)
{
    m_containRaidCard = _containRaidCard;
    m_containRaidCardHasBeenSet = true;
}

bool BuyDevicesRequest::ContainRaidCardHasBeenSet() const
{
    return m_containRaidCardHasBeenSet;
}

uint64_t BuyDevicesRequest::GetMemSize() const
{
    return m_memSize;
}

void BuyDevicesRequest::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool BuyDevicesRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSystemDiskTypeId() const
{
    return m_systemDiskTypeId;
}

void BuyDevicesRequest::SetSystemDiskTypeId(const uint64_t& _systemDiskTypeId)
{
    m_systemDiskTypeId = _systemDiskTypeId;
    m_systemDiskTypeIdHasBeenSet = true;
}

bool BuyDevicesRequest::SystemDiskTypeIdHasBeenSet() const
{
    return m_systemDiskTypeIdHasBeenSet;
}

uint64_t BuyDevicesRequest::GetSystemDiskCount() const
{
    return m_systemDiskCount;
}

void BuyDevicesRequest::SetSystemDiskCount(const uint64_t& _systemDiskCount)
{
    m_systemDiskCount = _systemDiskCount;
    m_systemDiskCountHasBeenSet = true;
}

bool BuyDevicesRequest::SystemDiskCountHasBeenSet() const
{
    return m_systemDiskCountHasBeenSet;
}

uint64_t BuyDevicesRequest::GetDataDiskTypeId() const
{
    return m_dataDiskTypeId;
}

void BuyDevicesRequest::SetDataDiskTypeId(const uint64_t& _dataDiskTypeId)
{
    m_dataDiskTypeId = _dataDiskTypeId;
    m_dataDiskTypeIdHasBeenSet = true;
}

bool BuyDevicesRequest::DataDiskTypeIdHasBeenSet() const
{
    return m_dataDiskTypeIdHasBeenSet;
}

uint64_t BuyDevicesRequest::GetDataDiskCount() const
{
    return m_dataDiskCount;
}

void BuyDevicesRequest::SetDataDiskCount(const uint64_t& _dataDiskCount)
{
    m_dataDiskCount = _dataDiskCount;
    m_dataDiskCountHasBeenSet = true;
}

bool BuyDevicesRequest::DataDiskCountHasBeenSet() const
{
    return m_dataDiskCountHasBeenSet;
}

vector<Tag> BuyDevicesRequest::GetTags() const
{
    return m_tags;
}

void BuyDevicesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BuyDevicesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string BuyDevicesRequest::GetFileSystem() const
{
    return m_fileSystem;
}

void BuyDevicesRequest::SetFileSystem(const string& _fileSystem)
{
    m_fileSystem = _fileSystem;
    m_fileSystemHasBeenSet = true;
}

bool BuyDevicesRequest::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

string BuyDevicesRequest::GetBuySession() const
{
    return m_buySession;
}

void BuyDevicesRequest::SetBuySession(const string& _buySession)
{
    m_buySession = _buySession;
    m_buySessionHasBeenSet = true;
}

bool BuyDevicesRequest::BuySessionHasBeenSet() const
{
    return m_buySessionHasBeenSet;
}

string BuyDevicesRequest::GetSgId() const
{
    return m_sgId;
}

void BuyDevicesRequest::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool BuyDevicesRequest::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string BuyDevicesRequest::GetTemplateId() const
{
    return m_templateId;
}

void BuyDevicesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool BuyDevicesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


