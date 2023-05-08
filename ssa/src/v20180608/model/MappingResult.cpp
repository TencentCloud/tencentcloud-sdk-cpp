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

#include <tencentcloud/ssa/v20180608/model/MappingResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

MappingResult::MappingResult() :
    m_assetNameHasBeenSet(false),
    m_assetIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_processHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_lastMappingTimeHasBeenSet(false),
    m_disposalRecommendationsHasBeenSet(false),
    m_disposalRecommendationDetailsHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_mappingStatusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_disposalRecommendationHasBeenSet(false),
    m_mappingTypeHasBeenSet(false)
{
}

CoreInternalOutcome MappingResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetIp") && !value["AssetIp"].IsNull())
    {
        if (!value["AssetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.AssetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetIp = string(value["AssetIp"].GetString());
        m_assetIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Process` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_process = string(value["Process"].GetString());
        m_processHasBeenSet = true;
    }

    if (value.HasMember("OS") && !value["OS"].IsNull())
    {
        if (!value["OS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.OS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oS = string(value["OS"].GetString());
        m_oSHasBeenSet = true;
    }

    if (value.HasMember("LastMappingTime") && !value["LastMappingTime"].IsNull())
    {
        if (!value["LastMappingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.LastMappingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMappingTime = string(value["LastMappingTime"].GetString());
        m_lastMappingTimeHasBeenSet = true;
    }

    if (value.HasMember("DisposalRecommendations") && !value["DisposalRecommendations"].IsNull())
    {
        if (!value["DisposalRecommendations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.DisposalRecommendations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalRecommendations = string(value["DisposalRecommendations"].GetString());
        m_disposalRecommendationsHasBeenSet = true;
    }

    if (value.HasMember("DisposalRecommendationDetails") && !value["DisposalRecommendationDetails"].IsNull())
    {
        if (!value["DisposalRecommendationDetails"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.DisposalRecommendationDetails` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalRecommendationDetails = string(value["DisposalRecommendationDetails"].GetString());
        m_disposalRecommendationDetailsHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("MappingStatus") && !value["MappingStatus"].IsNull())
    {
        if (!value["MappingStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.MappingStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mappingStatus = value["MappingStatus"].GetUint64();
        m_mappingStatusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MappingResult.SecurityStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityStatus.push_back(item);
        }
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("DisposalRecommendation") && !value["DisposalRecommendation"].IsNull())
    {
        if (!value["DisposalRecommendation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.DisposalRecommendation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disposalRecommendation = value["DisposalRecommendation"].GetInt64();
        m_disposalRecommendationHasBeenSet = true;
    }

    if (value.HasMember("MappingType") && !value["MappingType"].IsNull())
    {
        if (!value["MappingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingResult.MappingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mappingType = string(value["MappingType"].GetString());
        m_mappingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MappingResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_process.c_str(), allocator).Move(), allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMappingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMappingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMappingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_disposalRecommendationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalRecommendations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disposalRecommendations.c_str(), allocator).Move(), allocator);
    }

    if (m_disposalRecommendationDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalRecommendationDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disposalRecommendationDetails.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_mappingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mappingStatus, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityStatus.begin(); itr != m_securityStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disposalRecommendationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalRecommendation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disposalRecommendation, allocator);
    }

    if (m_mappingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mappingType.c_str(), allocator).Move(), allocator);
    }

}


string MappingResult::GetAssetName() const
{
    return m_assetName;
}

void MappingResult::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool MappingResult::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string MappingResult::GetAssetIp() const
{
    return m_assetIp;
}

void MappingResult::SetAssetIp(const string& _assetIp)
{
    m_assetIp = _assetIp;
    m_assetIpHasBeenSet = true;
}

bool MappingResult::AssetIpHasBeenSet() const
{
    return m_assetIpHasBeenSet;
}

string MappingResult::GetPrivateIp() const
{
    return m_privateIp;
}

void MappingResult::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool MappingResult::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string MappingResult::GetAssetId() const
{
    return m_assetId;
}

void MappingResult::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool MappingResult::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string MappingResult::GetProtocol() const
{
    return m_protocol;
}

void MappingResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool MappingResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string MappingResult::GetPort() const
{
    return m_port;
}

void MappingResult::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MappingResult::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string MappingResult::GetService() const
{
    return m_service;
}

void MappingResult::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool MappingResult::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string MappingResult::GetComponent() const
{
    return m_component;
}

void MappingResult::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool MappingResult::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string MappingResult::GetProcess() const
{
    return m_process;
}

void MappingResult::SetProcess(const string& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool MappingResult::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

string MappingResult::GetOS() const
{
    return m_oS;
}

void MappingResult::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool MappingResult::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string MappingResult::GetLastMappingTime() const
{
    return m_lastMappingTime;
}

void MappingResult::SetLastMappingTime(const string& _lastMappingTime)
{
    m_lastMappingTime = _lastMappingTime;
    m_lastMappingTimeHasBeenSet = true;
}

bool MappingResult::LastMappingTimeHasBeenSet() const
{
    return m_lastMappingTimeHasBeenSet;
}

string MappingResult::GetDisposalRecommendations() const
{
    return m_disposalRecommendations;
}

void MappingResult::SetDisposalRecommendations(const string& _disposalRecommendations)
{
    m_disposalRecommendations = _disposalRecommendations;
    m_disposalRecommendationsHasBeenSet = true;
}

bool MappingResult::DisposalRecommendationsHasBeenSet() const
{
    return m_disposalRecommendationsHasBeenSet;
}

string MappingResult::GetDisposalRecommendationDetails() const
{
    return m_disposalRecommendationDetails;
}

void MappingResult::SetDisposalRecommendationDetails(const string& _disposalRecommendationDetails)
{
    m_disposalRecommendationDetails = _disposalRecommendationDetails;
    m_disposalRecommendationDetailsHasBeenSet = true;
}

bool MappingResult::DisposalRecommendationDetailsHasBeenSet() const
{
    return m_disposalRecommendationDetailsHasBeenSet;
}

string MappingResult::GetAssetType() const
{
    return m_assetType;
}

void MappingResult::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool MappingResult::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string MappingResult::GetDomain() const
{
    return m_domain;
}

void MappingResult::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool MappingResult::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t MappingResult::GetMappingStatus() const
{
    return m_mappingStatus;
}

void MappingResult::SetMappingStatus(const uint64_t& _mappingStatus)
{
    m_mappingStatus = _mappingStatus;
    m_mappingStatusHasBeenSet = true;
}

bool MappingResult::MappingStatusHasBeenSet() const
{
    return m_mappingStatusHasBeenSet;
}

string MappingResult::GetRegion() const
{
    return m_region;
}

void MappingResult::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MappingResult::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<SecurityStatus> MappingResult::GetSecurityStatus() const
{
    return m_securityStatus;
}

void MappingResult::SetSecurityStatus(const vector<SecurityStatus>& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool MappingResult::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

int64_t MappingResult::GetDisposalRecommendation() const
{
    return m_disposalRecommendation;
}

void MappingResult::SetDisposalRecommendation(const int64_t& _disposalRecommendation)
{
    m_disposalRecommendation = _disposalRecommendation;
    m_disposalRecommendationHasBeenSet = true;
}

bool MappingResult::DisposalRecommendationHasBeenSet() const
{
    return m_disposalRecommendationHasBeenSet;
}

string MappingResult::GetMappingType() const
{
    return m_mappingType;
}

void MappingResult::SetMappingType(const string& _mappingType)
{
    m_mappingType = _mappingType;
    m_mappingTypeHasBeenSet = true;
}

bool MappingResult::MappingTypeHasBeenSet() const
{
    return m_mappingTypeHasBeenSet;
}

