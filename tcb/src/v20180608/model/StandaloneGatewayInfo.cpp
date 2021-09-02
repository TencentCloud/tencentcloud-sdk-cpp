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

#include <tencentcloud/tcb/v20180608/model/StandaloneGatewayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StandaloneGatewayInfo::StandaloneGatewayInfo() :
    m_gatewayNameHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_gatewayAliasHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_gatewayDescHasBeenSet(false),
    m_gateWayStatusHasBeenSet(false),
    m_serviceInfoHasBeenSet(false),
    m_publicClbIpHasBeenSet(false),
    m_internalClbIpHasBeenSet(false)
{
}

CoreInternalOutcome StandaloneGatewayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.CPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetDouble();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("GatewayAlias") && !value["GatewayAlias"].IsNull())
    {
        if (!value["GatewayAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.GatewayAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayAlias = string(value["GatewayAlias"].GetString());
        m_gatewayAliasHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("GatewayDesc") && !value["GatewayDesc"].IsNull())
    {
        if (!value["GatewayDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.GatewayDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDesc = string(value["GatewayDesc"].GetString());
        m_gatewayDescHasBeenSet = true;
    }

    if (value.HasMember("GateWayStatus") && !value["GateWayStatus"].IsNull())
    {
        if (!value["GateWayStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.GateWayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateWayStatus = string(value["GateWayStatus"].GetString());
        m_gateWayStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceInfo") && !value["ServiceInfo"].IsNull())
    {
        if (!value["ServiceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.ServiceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceInfo.Deserialize(value["ServiceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceInfoHasBeenSet = true;
    }

    if (value.HasMember("PublicClbIp") && !value["PublicClbIp"].IsNull())
    {
        if (!value["PublicClbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.PublicClbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicClbIp = string(value["PublicClbIp"].GetString());
        m_publicClbIpHasBeenSet = true;
    }

    if (value.HasMember("InternalClbIp") && !value["InternalClbIp"].IsNull())
    {
        if (!value["InternalClbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandaloneGatewayInfo.InternalClbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalClbIp = string(value["InternalClbIp"].GetString());
        m_internalClbIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandaloneGatewayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gatewayDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_gateWayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GateWayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateWayStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publicClbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicClbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicClbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_internalClbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalClbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalClbIp.c_str(), allocator).Move(), allocator);
    }

}


string StandaloneGatewayInfo::GetGatewayName() const
{
    return m_gatewayName;
}

void StandaloneGatewayInfo::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool StandaloneGatewayInfo::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

double StandaloneGatewayInfo::GetCPU() const
{
    return m_cPU;
}

void StandaloneGatewayInfo::SetCPU(const double& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool StandaloneGatewayInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t StandaloneGatewayInfo::GetMem() const
{
    return m_mem;
}

void StandaloneGatewayInfo::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool StandaloneGatewayInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string StandaloneGatewayInfo::GetPackageVersion() const
{
    return m_packageVersion;
}

void StandaloneGatewayInfo::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool StandaloneGatewayInfo::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string StandaloneGatewayInfo::GetGatewayAlias() const
{
    return m_gatewayAlias;
}

void StandaloneGatewayInfo::SetGatewayAlias(const string& _gatewayAlias)
{
    m_gatewayAlias = _gatewayAlias;
    m_gatewayAliasHasBeenSet = true;
}

bool StandaloneGatewayInfo::GatewayAliasHasBeenSet() const
{
    return m_gatewayAliasHasBeenSet;
}

string StandaloneGatewayInfo::GetVpcId() const
{
    return m_vpcId;
}

void StandaloneGatewayInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool StandaloneGatewayInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> StandaloneGatewayInfo::GetSubnetIds() const
{
    return m_subnetIds;
}

void StandaloneGatewayInfo::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool StandaloneGatewayInfo::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string StandaloneGatewayInfo::GetGatewayDesc() const
{
    return m_gatewayDesc;
}

void StandaloneGatewayInfo::SetGatewayDesc(const string& _gatewayDesc)
{
    m_gatewayDesc = _gatewayDesc;
    m_gatewayDescHasBeenSet = true;
}

bool StandaloneGatewayInfo::GatewayDescHasBeenSet() const
{
    return m_gatewayDescHasBeenSet;
}

string StandaloneGatewayInfo::GetGateWayStatus() const
{
    return m_gateWayStatus;
}

void StandaloneGatewayInfo::SetGateWayStatus(const string& _gateWayStatus)
{
    m_gateWayStatus = _gateWayStatus;
    m_gateWayStatusHasBeenSet = true;
}

bool StandaloneGatewayInfo::GateWayStatusHasBeenSet() const
{
    return m_gateWayStatusHasBeenSet;
}

BackendServiceInfo StandaloneGatewayInfo::GetServiceInfo() const
{
    return m_serviceInfo;
}

void StandaloneGatewayInfo::SetServiceInfo(const BackendServiceInfo& _serviceInfo)
{
    m_serviceInfo = _serviceInfo;
    m_serviceInfoHasBeenSet = true;
}

bool StandaloneGatewayInfo::ServiceInfoHasBeenSet() const
{
    return m_serviceInfoHasBeenSet;
}

string StandaloneGatewayInfo::GetPublicClbIp() const
{
    return m_publicClbIp;
}

void StandaloneGatewayInfo::SetPublicClbIp(const string& _publicClbIp)
{
    m_publicClbIp = _publicClbIp;
    m_publicClbIpHasBeenSet = true;
}

bool StandaloneGatewayInfo::PublicClbIpHasBeenSet() const
{
    return m_publicClbIpHasBeenSet;
}

string StandaloneGatewayInfo::GetInternalClbIp() const
{
    return m_internalClbIp;
}

void StandaloneGatewayInfo::SetInternalClbIp(const string& _internalClbIp)
{
    m_internalClbIp = _internalClbIp;
    m_internalClbIpHasBeenSet = true;
}

bool StandaloneGatewayInfo::InternalClbIpHasBeenSet() const
{
    return m_internalClbIpHasBeenSet;
}

