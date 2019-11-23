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

#include <tencentcloud/batch/v20170312/model/EnvDataCpm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

EnvDataCpm::EnvDataCpm() :
    m_zonesHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_raidIdHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_virtualPrivateCloudsHasBeenSet(false),
    m_needSecurityAgentHasBeenSet(false),
    m_needMonitorAgentHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_isZoningHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_applyEipHasBeenSet(false),
    m_eipPayModeHasBeenSet(false),
    m_eipBandwidthHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_sysRootSpaceHasBeenSet(false),
    m_sysDataSpaceHasBeenSet(false),
    m_hyperThreadingHasBeenSet(false),
    m_lanIpsHasBeenSet(false)
{
}

CoreInternalOutcome EnvDataCpm::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.Zones` is not array type"));

        const Value &tmpValue = value["Zones"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.InstanceTypes` is not array type"));

        const Value &tmpValue = value["InstanceTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceTypes.push_back((*itr).GetString());
        }
        m_instanceTypesHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.TimeSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetUint64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("RaidId") && !value["RaidId"].IsNull())
    {
        if (!value["RaidId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.RaidId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_raidId = value["RaidId"].GetInt64();
        m_raidIdHasBeenSet = true;
    }

    if (value.HasMember("OsTypeId") && !value["OsTypeId"].IsNull())
    {
        if (!value["OsTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.OsTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osTypeId = value["OsTypeId"].GetInt64();
        m_osTypeIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateClouds") && !value["VirtualPrivateClouds"].IsNull())
    {
        if (!value["VirtualPrivateClouds"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.VirtualPrivateClouds` is not array type"));

        const Value &tmpValue = value["VirtualPrivateClouds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CpmVirtualPrivateCloud item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_virtualPrivateClouds.push_back(item);
        }
        m_virtualPrivateCloudsHasBeenSet = true;
    }

    if (value.HasMember("NeedSecurityAgent") && !value["NeedSecurityAgent"].IsNull())
    {
        if (!value["NeedSecurityAgent"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.NeedSecurityAgent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needSecurityAgent = value["NeedSecurityAgent"].GetInt64();
        m_needSecurityAgentHasBeenSet = true;
    }

    if (value.HasMember("NeedMonitorAgent") && !value["NeedMonitorAgent"].IsNull())
    {
        if (!value["NeedMonitorAgent"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.NeedMonitorAgent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needMonitorAgent = value["NeedMonitorAgent"].GetInt64();
        m_needMonitorAgentHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("IsZoning") && !value["IsZoning"].IsNull())
    {
        if (!value["IsZoning"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.IsZoning` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isZoning = value["IsZoning"].GetInt64();
        m_isZoningHasBeenSet = true;
    }

    if (value.HasMember("FileSystem") && !value["FileSystem"].IsNull())
    {
        if (!value["FileSystem"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.FileSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystem = string(value["FileSystem"].GetString());
        m_fileSystemHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("ApplyEip") && !value["ApplyEip"].IsNull())
    {
        if (!value["ApplyEip"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.ApplyEip` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyEip = value["ApplyEip"].GetInt64();
        m_applyEipHasBeenSet = true;
    }

    if (value.HasMember("EipPayMode") && !value["EipPayMode"].IsNull())
    {
        if (!value["EipPayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.EipPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipPayMode = string(value["EipPayMode"].GetString());
        m_eipPayModeHasBeenSet = true;
    }

    if (value.HasMember("EipBandwidth") && !value["EipBandwidth"].IsNull())
    {
        if (!value["EipBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.EipBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eipBandwidth = value["EipBandwidth"].GetInt64();
        m_eipBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("SysRootSpace") && !value["SysRootSpace"].IsNull())
    {
        if (!value["SysRootSpace"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.SysRootSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sysRootSpace = value["SysRootSpace"].GetInt64();
        m_sysRootSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysDataSpace") && !value["SysDataSpace"].IsNull())
    {
        if (!value["SysDataSpace"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.SysDataSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sysDataSpace = value["SysDataSpace"].GetInt64();
        m_sysDataSpaceHasBeenSet = true;
    }

    if (value.HasMember("HyperThreading") && !value["HyperThreading"].IsNull())
    {
        if (!value["HyperThreading"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.HyperThreading` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hyperThreading = value["HyperThreading"].GetInt64();
        m_hyperThreadingHasBeenSet = true;
    }

    if (value.HasMember("LanIps") && !value["LanIps"].IsNull())
    {
        if (!value["LanIps"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.LanIps` is not array type"));

        const Value &tmpValue = value["LanIps"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lanIps.push_back((*itr).GetString());
        }
        m_lanIpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvDataCpm::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zonesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_raidIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RaidId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raidId, allocator);
    }

    if (m_osTypeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_virtualPrivateCloudsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VirtualPrivateClouds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_virtualPrivateClouds.begin(); itr != m_virtualPrivateClouds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_needSecurityAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedSecurityAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSecurityAgent, allocator);
    }

    if (m_needMonitorAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedMonitorAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needMonitorAgent, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_isZoningHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsZoning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isZoning, allocator);
    }

    if (m_fileSystemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_applyEipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplyEip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyEip, allocator);
    }

    if (m_eipPayModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eipPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_eipBandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipBandwidth, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_sysRootSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysRootSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysRootSpace, allocator);
    }

    if (m_sysDataSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysDataSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysDataSpace, allocator);
    }

    if (m_hyperThreadingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HyperThreading";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hyperThreading, allocator);
    }

    if (m_lanIpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LanIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_lanIps.begin(); itr != m_lanIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> EnvDataCpm::GetZones() const
{
    return m_zones;
}

void EnvDataCpm::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool EnvDataCpm::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<string> EnvDataCpm::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void EnvDataCpm::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool EnvDataCpm::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

string EnvDataCpm::GetTimeUnit() const
{
    return m_timeUnit;
}

void EnvDataCpm::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool EnvDataCpm::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t EnvDataCpm::GetTimeSpan() const
{
    return m_timeSpan;
}

void EnvDataCpm::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool EnvDataCpm::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

int64_t EnvDataCpm::GetRaidId() const
{
    return m_raidId;
}

void EnvDataCpm::SetRaidId(const int64_t& _raidId)
{
    m_raidId = _raidId;
    m_raidIdHasBeenSet = true;
}

bool EnvDataCpm::RaidIdHasBeenSet() const
{
    return m_raidIdHasBeenSet;
}

int64_t EnvDataCpm::GetOsTypeId() const
{
    return m_osTypeId;
}

void EnvDataCpm::SetOsTypeId(const int64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool EnvDataCpm::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

vector<CpmVirtualPrivateCloud> EnvDataCpm::GetVirtualPrivateClouds() const
{
    return m_virtualPrivateClouds;
}

void EnvDataCpm::SetVirtualPrivateClouds(const vector<CpmVirtualPrivateCloud>& _virtualPrivateClouds)
{
    m_virtualPrivateClouds = _virtualPrivateClouds;
    m_virtualPrivateCloudsHasBeenSet = true;
}

bool EnvDataCpm::VirtualPrivateCloudsHasBeenSet() const
{
    return m_virtualPrivateCloudsHasBeenSet;
}

int64_t EnvDataCpm::GetNeedSecurityAgent() const
{
    return m_needSecurityAgent;
}

void EnvDataCpm::SetNeedSecurityAgent(const int64_t& _needSecurityAgent)
{
    m_needSecurityAgent = _needSecurityAgent;
    m_needSecurityAgentHasBeenSet = true;
}

bool EnvDataCpm::NeedSecurityAgentHasBeenSet() const
{
    return m_needSecurityAgentHasBeenSet;
}

int64_t EnvDataCpm::GetNeedMonitorAgent() const
{
    return m_needMonitorAgent;
}

void EnvDataCpm::SetNeedMonitorAgent(const int64_t& _needMonitorAgent)
{
    m_needMonitorAgent = _needMonitorAgent;
    m_needMonitorAgentHasBeenSet = true;
}

bool EnvDataCpm::NeedMonitorAgentHasBeenSet() const
{
    return m_needMonitorAgentHasBeenSet;
}

int64_t EnvDataCpm::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void EnvDataCpm::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool EnvDataCpm::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t EnvDataCpm::GetIsZoning() const
{
    return m_isZoning;
}

void EnvDataCpm::SetIsZoning(const int64_t& _isZoning)
{
    m_isZoning = _isZoning;
    m_isZoningHasBeenSet = true;
}

bool EnvDataCpm::IsZoningHasBeenSet() const
{
    return m_isZoningHasBeenSet;
}

string EnvDataCpm::GetFileSystem() const
{
    return m_fileSystem;
}

void EnvDataCpm::SetFileSystem(const string& _fileSystem)
{
    m_fileSystem = _fileSystem;
    m_fileSystemHasBeenSet = true;
}

bool EnvDataCpm::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

string EnvDataCpm::GetPassword() const
{
    return m_password;
}

void EnvDataCpm::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EnvDataCpm::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t EnvDataCpm::GetApplyEip() const
{
    return m_applyEip;
}

void EnvDataCpm::SetApplyEip(const int64_t& _applyEip)
{
    m_applyEip = _applyEip;
    m_applyEipHasBeenSet = true;
}

bool EnvDataCpm::ApplyEipHasBeenSet() const
{
    return m_applyEipHasBeenSet;
}

string EnvDataCpm::GetEipPayMode() const
{
    return m_eipPayMode;
}

void EnvDataCpm::SetEipPayMode(const string& _eipPayMode)
{
    m_eipPayMode = _eipPayMode;
    m_eipPayModeHasBeenSet = true;
}

bool EnvDataCpm::EipPayModeHasBeenSet() const
{
    return m_eipPayModeHasBeenSet;
}

int64_t EnvDataCpm::GetEipBandwidth() const
{
    return m_eipBandwidth;
}

void EnvDataCpm::SetEipBandwidth(const int64_t& _eipBandwidth)
{
    m_eipBandwidth = _eipBandwidth;
    m_eipBandwidthHasBeenSet = true;
}

bool EnvDataCpm::EipBandwidthHasBeenSet() const
{
    return m_eipBandwidthHasBeenSet;
}

string EnvDataCpm::GetImageId() const
{
    return m_imageId;
}

void EnvDataCpm::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool EnvDataCpm::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

int64_t EnvDataCpm::GetSysRootSpace() const
{
    return m_sysRootSpace;
}

void EnvDataCpm::SetSysRootSpace(const int64_t& _sysRootSpace)
{
    m_sysRootSpace = _sysRootSpace;
    m_sysRootSpaceHasBeenSet = true;
}

bool EnvDataCpm::SysRootSpaceHasBeenSet() const
{
    return m_sysRootSpaceHasBeenSet;
}

int64_t EnvDataCpm::GetSysDataSpace() const
{
    return m_sysDataSpace;
}

void EnvDataCpm::SetSysDataSpace(const int64_t& _sysDataSpace)
{
    m_sysDataSpace = _sysDataSpace;
    m_sysDataSpaceHasBeenSet = true;
}

bool EnvDataCpm::SysDataSpaceHasBeenSet() const
{
    return m_sysDataSpaceHasBeenSet;
}

int64_t EnvDataCpm::GetHyperThreading() const
{
    return m_hyperThreading;
}

void EnvDataCpm::SetHyperThreading(const int64_t& _hyperThreading)
{
    m_hyperThreading = _hyperThreading;
    m_hyperThreadingHasBeenSet = true;
}

bool EnvDataCpm::HyperThreadingHasBeenSet() const
{
    return m_hyperThreadingHasBeenSet;
}

vector<string> EnvDataCpm::GetLanIps() const
{
    return m_lanIps;
}

void EnvDataCpm::SetLanIps(const vector<string>& _lanIps)
{
    m_lanIps = _lanIps;
    m_lanIpsHasBeenSet = true;
}

bool EnvDataCpm::LanIpsHasBeenSet() const
{
    return m_lanIpsHasBeenSet;
}

