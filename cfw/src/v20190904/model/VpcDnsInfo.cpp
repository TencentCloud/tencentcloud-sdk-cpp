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

#include <tencentcloud/cfw/v20190904/model/VpcDnsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcDnsInfo::VpcDnsInfo() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_fwModeHasBeenSet(false),
    m_vpcIpv4CidrHasBeenSet(false),
    m_dNSEipHasBeenSet(false),
    m_natInsIdHasBeenSet(false),
    m_natInsNameHasBeenSet(false),
    m_switchStatusHasBeenSet(false),
    m_protectedStatusHasBeenSet(false),
    m_supportDNSFWHasBeenSet(false)
{
}

CoreInternalOutcome VpcDnsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("FwMode") && !value["FwMode"].IsNull())
    {
        if (!value["FwMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.FwMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwMode = value["FwMode"].GetInt64();
        m_fwModeHasBeenSet = true;
    }

    if (value.HasMember("VpcIpv4Cidr") && !value["VpcIpv4Cidr"].IsNull())
    {
        if (!value["VpcIpv4Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.VpcIpv4Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcIpv4Cidr = string(value["VpcIpv4Cidr"].GetString());
        m_vpcIpv4CidrHasBeenSet = true;
    }

    if (value.HasMember("DNSEip") && !value["DNSEip"].IsNull())
    {
        if (!value["DNSEip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.DNSEip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNSEip = string(value["DNSEip"].GetString());
        m_dNSEipHasBeenSet = true;
    }

    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("NatInsName") && !value["NatInsName"].IsNull())
    {
        if (!value["NatInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.NatInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsName = string(value["NatInsName"].GetString());
        m_natInsNameHasBeenSet = true;
    }

    if (value.HasMember("SwitchStatus") && !value["SwitchStatus"].IsNull())
    {
        if (!value["SwitchStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.SwitchStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchStatus = value["SwitchStatus"].GetInt64();
        m_switchStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectedStatus") && !value["ProtectedStatus"].IsNull())
    {
        if (!value["ProtectedStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.ProtectedStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedStatus = value["ProtectedStatus"].GetUint64();
        m_protectedStatusHasBeenSet = true;
    }

    if (value.HasMember("SupportDNSFW") && !value["SupportDNSFW"].IsNull())
    {
        if (!value["SupportDNSFW"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcDnsInfo.SupportDNSFW` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDNSFW = value["SupportDNSFW"].GetUint64();
        m_supportDNSFWHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcDnsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_fwModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwMode, allocator);
    }

    if (m_vpcIpv4CidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIpv4Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcIpv4Cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_dNSEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNSEip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dNSEip.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_switchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchStatus, allocator);
    }

    if (m_protectedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedStatus, allocator);
    }

    if (m_supportDNSFWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDNSFW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDNSFW, allocator);
    }

}


string VpcDnsInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcDnsInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcDnsInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcDnsInfo::GetVpcName() const
{
    return m_vpcName;
}

void VpcDnsInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpcDnsInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

int64_t VpcDnsInfo::GetFwMode() const
{
    return m_fwMode;
}

void VpcDnsInfo::SetFwMode(const int64_t& _fwMode)
{
    m_fwMode = _fwMode;
    m_fwModeHasBeenSet = true;
}

bool VpcDnsInfo::FwModeHasBeenSet() const
{
    return m_fwModeHasBeenSet;
}

string VpcDnsInfo::GetVpcIpv4Cidr() const
{
    return m_vpcIpv4Cidr;
}

void VpcDnsInfo::SetVpcIpv4Cidr(const string& _vpcIpv4Cidr)
{
    m_vpcIpv4Cidr = _vpcIpv4Cidr;
    m_vpcIpv4CidrHasBeenSet = true;
}

bool VpcDnsInfo::VpcIpv4CidrHasBeenSet() const
{
    return m_vpcIpv4CidrHasBeenSet;
}

string VpcDnsInfo::GetDNSEip() const
{
    return m_dNSEip;
}

void VpcDnsInfo::SetDNSEip(const string& _dNSEip)
{
    m_dNSEip = _dNSEip;
    m_dNSEipHasBeenSet = true;
}

bool VpcDnsInfo::DNSEipHasBeenSet() const
{
    return m_dNSEipHasBeenSet;
}

string VpcDnsInfo::GetNatInsId() const
{
    return m_natInsId;
}

void VpcDnsInfo::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool VpcDnsInfo::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string VpcDnsInfo::GetNatInsName() const
{
    return m_natInsName;
}

void VpcDnsInfo::SetNatInsName(const string& _natInsName)
{
    m_natInsName = _natInsName;
    m_natInsNameHasBeenSet = true;
}

bool VpcDnsInfo::NatInsNameHasBeenSet() const
{
    return m_natInsNameHasBeenSet;
}

int64_t VpcDnsInfo::GetSwitchStatus() const
{
    return m_switchStatus;
}

void VpcDnsInfo::SetSwitchStatus(const int64_t& _switchStatus)
{
    m_switchStatus = _switchStatus;
    m_switchStatusHasBeenSet = true;
}

bool VpcDnsInfo::SwitchStatusHasBeenSet() const
{
    return m_switchStatusHasBeenSet;
}

uint64_t VpcDnsInfo::GetProtectedStatus() const
{
    return m_protectedStatus;
}

void VpcDnsInfo::SetProtectedStatus(const uint64_t& _protectedStatus)
{
    m_protectedStatus = _protectedStatus;
    m_protectedStatusHasBeenSet = true;
}

bool VpcDnsInfo::ProtectedStatusHasBeenSet() const
{
    return m_protectedStatusHasBeenSet;
}

uint64_t VpcDnsInfo::GetSupportDNSFW() const
{
    return m_supportDNSFW;
}

void VpcDnsInfo::SetSupportDNSFW(const uint64_t& _supportDNSFW)
{
    m_supportDNSFW = _supportDNSFW;
    m_supportDNSFWHasBeenSet = true;
}

bool VpcDnsInfo::SupportDNSFWHasBeenSet() const
{
    return m_supportDNSFWHasBeenSet;
}

