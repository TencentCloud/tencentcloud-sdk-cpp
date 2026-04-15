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

#include <tencentcloud/cfw/v20190904/model/NDRAssetServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NDRAssetServiceInfo::NDRAssetServiceInfo() :
    m_assetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_ipTypeHasBeenSet(false),
    m_assetServiceHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_assetCategoryHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_identificationSourceHasBeenSet(false),
    m_firstIdentificationTimeHasBeenSet(false),
    m_latestIdentificationTimeHasBeenSet(false),
    m_serverAddrHasBeenSet(false)
{
}

CoreInternalOutcome NDRAssetServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("IpType") && !value["IpType"].IsNull())
    {
        if (!value["IpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.IpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipType = string(value["IpType"].GetString());
        m_ipTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetService") && !value["AssetService"].IsNull())
    {
        if (!value["AssetService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.AssetService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetService = string(value["AssetService"].GetString());
        m_assetServiceHasBeenSet = true;
    }

    if (value.HasMember("AssetVersion") && !value["AssetVersion"].IsNull())
    {
        if (!value["AssetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.AssetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVersion = string(value["AssetVersion"].GetString());
        m_assetVersionHasBeenSet = true;
    }

    if (value.HasMember("AssetCategory") && !value["AssetCategory"].IsNull())
    {
        if (!value["AssetCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.AssetCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCategory = string(value["AssetCategory"].GetString());
        m_assetCategoryHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("IdentificationSource") && !value["IdentificationSource"].IsNull())
    {
        if (!value["IdentificationSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.IdentificationSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identificationSource = string(value["IdentificationSource"].GetString());
        m_identificationSourceHasBeenSet = true;
    }

    if (value.HasMember("FirstIdentificationTime") && !value["FirstIdentificationTime"].IsNull())
    {
        if (!value["FirstIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.FirstIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIdentificationTime = string(value["FirstIdentificationTime"].GetString());
        m_firstIdentificationTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestIdentificationTime") && !value["LatestIdentificationTime"].IsNull())
    {
        if (!value["LatestIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.LatestIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestIdentificationTime = string(value["LatestIdentificationTime"].GetString());
        m_latestIdentificationTimeHasBeenSet = true;
    }

    if (value.HasMember("ServerAddr") && !value["ServerAddr"].IsNull())
    {
        if (!value["ServerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NDRAssetServiceInfo.ServerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverAddr = string(value["ServerAddr"].GetString());
        m_serverAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NDRAssetServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetService.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_identificationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identificationSource.c_str(), allocator).Move(), allocator);
    }

    if (m_firstIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverAddr.c_str(), allocator).Move(), allocator);
    }

}


string NDRAssetServiceInfo::GetAssetId() const
{
    return m_assetId;
}

void NDRAssetServiceInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool NDRAssetServiceInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string NDRAssetServiceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void NDRAssetServiceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NDRAssetServiceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string NDRAssetServiceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void NDRAssetServiceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool NDRAssetServiceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string NDRAssetServiceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void NDRAssetServiceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NDRAssetServiceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string NDRAssetServiceInfo::GetRegion() const
{
    return m_region;
}

void NDRAssetServiceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NDRAssetServiceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NDRAssetServiceInfo::GetVpcId() const
{
    return m_vpcId;
}

void NDRAssetServiceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NDRAssetServiceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NDRAssetServiceInfo::GetVpcName() const
{
    return m_vpcName;
}

void NDRAssetServiceInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool NDRAssetServiceInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string NDRAssetServiceInfo::GetIp() const
{
    return m_ip;
}

void NDRAssetServiceInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NDRAssetServiceInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t NDRAssetServiceInfo::GetPort() const
{
    return m_port;
}

void NDRAssetServiceInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NDRAssetServiceInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NDRAssetServiceInfo::GetIpVersion() const
{
    return m_ipVersion;
}

void NDRAssetServiceInfo::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool NDRAssetServiceInfo::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string NDRAssetServiceInfo::GetIpType() const
{
    return m_ipType;
}

void NDRAssetServiceInfo::SetIpType(const string& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool NDRAssetServiceInfo::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}

string NDRAssetServiceInfo::GetAssetService() const
{
    return m_assetService;
}

void NDRAssetServiceInfo::SetAssetService(const string& _assetService)
{
    m_assetService = _assetService;
    m_assetServiceHasBeenSet = true;
}

bool NDRAssetServiceInfo::AssetServiceHasBeenSet() const
{
    return m_assetServiceHasBeenSet;
}

string NDRAssetServiceInfo::GetAssetVersion() const
{
    return m_assetVersion;
}

void NDRAssetServiceInfo::SetAssetVersion(const string& _assetVersion)
{
    m_assetVersion = _assetVersion;
    m_assetVersionHasBeenSet = true;
}

bool NDRAssetServiceInfo::AssetVersionHasBeenSet() const
{
    return m_assetVersionHasBeenSet;
}

string NDRAssetServiceInfo::GetAssetCategory() const
{
    return m_assetCategory;
}

void NDRAssetServiceInfo::SetAssetCategory(const string& _assetCategory)
{
    m_assetCategory = _assetCategory;
    m_assetCategoryHasBeenSet = true;
}

bool NDRAssetServiceInfo::AssetCategoryHasBeenSet() const
{
    return m_assetCategoryHasBeenSet;
}

string NDRAssetServiceInfo::GetProtocol() const
{
    return m_protocol;
}

void NDRAssetServiceInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NDRAssetServiceInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NDRAssetServiceInfo::GetIdentificationSource() const
{
    return m_identificationSource;
}

void NDRAssetServiceInfo::SetIdentificationSource(const string& _identificationSource)
{
    m_identificationSource = _identificationSource;
    m_identificationSourceHasBeenSet = true;
}

bool NDRAssetServiceInfo::IdentificationSourceHasBeenSet() const
{
    return m_identificationSourceHasBeenSet;
}

string NDRAssetServiceInfo::GetFirstIdentificationTime() const
{
    return m_firstIdentificationTime;
}

void NDRAssetServiceInfo::SetFirstIdentificationTime(const string& _firstIdentificationTime)
{
    m_firstIdentificationTime = _firstIdentificationTime;
    m_firstIdentificationTimeHasBeenSet = true;
}

bool NDRAssetServiceInfo::FirstIdentificationTimeHasBeenSet() const
{
    return m_firstIdentificationTimeHasBeenSet;
}

string NDRAssetServiceInfo::GetLatestIdentificationTime() const
{
    return m_latestIdentificationTime;
}

void NDRAssetServiceInfo::SetLatestIdentificationTime(const string& _latestIdentificationTime)
{
    m_latestIdentificationTime = _latestIdentificationTime;
    m_latestIdentificationTimeHasBeenSet = true;
}

bool NDRAssetServiceInfo::LatestIdentificationTimeHasBeenSet() const
{
    return m_latestIdentificationTimeHasBeenSet;
}

string NDRAssetServiceInfo::GetServerAddr() const
{
    return m_serverAddr;
}

void NDRAssetServiceInfo::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool NDRAssetServiceInfo::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

