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

#include <tencentcloud/tem/v20210701/model/EksService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

EksService::EksService() :
    m_nameHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_externalIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loadBalanceIdHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_servicePortMappingListHasBeenSet(false),
    m_flushAllHasBeenSet(false),
    m_enableRegistryNextDeployHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_allIpDoneHasBeenSet(false),
    m_externalDomainHasBeenSet(false)
{
}

CoreInternalOutcome EksService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksService.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ports.push_back((*itr).GetInt64());
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("Yaml") && !value["Yaml"].IsNull())
    {
        if (!value["Yaml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.Yaml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yaml = string(value["Yaml"].GetString());
        m_yamlHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterIp") && !value["ClusterIp"].IsNull())
    {
        if (!value["ClusterIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksService.ClusterIp` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterIp.push_back((*itr).GetString());
        }
        m_clusterIpHasBeenSet = true;
    }

    if (value.HasMember("ExternalIp") && !value["ExternalIp"].IsNull())
    {
        if (!value["ExternalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.ExternalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalIp = string(value["ExternalIp"].GetString());
        m_externalIpHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalanceId") && !value["LoadBalanceId"].IsNull())
    {
        if (!value["LoadBalanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.LoadBalanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalanceId = string(value["LoadBalanceId"].GetString());
        m_loadBalanceIdHasBeenSet = true;
    }

    if (value.HasMember("PortMappings") && !value["PortMappings"].IsNull())
    {
        if (!value["PortMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksService.PortMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["PortMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portMappings.push_back(item);
        }
        m_portMappingsHasBeenSet = true;
    }

    if (value.HasMember("ServicePortMappingList") && !value["ServicePortMappingList"].IsNull())
    {
        if (!value["ServicePortMappingList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksService.ServicePortMappingList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServicePortMappingList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServicePortMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_servicePortMappingList.push_back(item);
        }
        m_servicePortMappingListHasBeenSet = true;
    }

    if (value.HasMember("FlushAll") && !value["FlushAll"].IsNull())
    {
        if (!value["FlushAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.FlushAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_flushAll = value["FlushAll"].GetBool();
        m_flushAllHasBeenSet = true;
    }

    if (value.HasMember("EnableRegistryNextDeploy") && !value["EnableRegistryNextDeploy"].IsNull())
    {
        if (!value["EnableRegistryNextDeploy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.EnableRegistryNextDeploy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableRegistryNextDeploy = value["EnableRegistryNextDeploy"].GetInt64();
        m_enableRegistryNextDeployHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("AllIpDone") && !value["AllIpDone"].IsNull())
    {
        if (!value["AllIpDone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.AllIpDone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allIpDone = value["AllIpDone"].GetBool();
        m_allIpDoneHasBeenSet = true;
    }

    if (value.HasMember("ExternalDomain") && !value["ExternalDomain"].IsNull())
    {
        if (!value["ExternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.ExternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalDomain = string(value["ExternalDomain"].GetString());
        m_externalDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EksService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIp.begin(); itr != m_clusterIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_externalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_portMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portMappings.begin(); itr != m_portMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_servicePortMappingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePortMappingList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_servicePortMappingList.begin(); itr != m_servicePortMappingList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flushAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flushAll, allocator);
    }

    if (m_enableRegistryNextDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegistryNextDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRegistryNextDeploy, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_allIpDoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllIpDone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allIpDone, allocator);
    }

    if (m_externalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalDomain.c_str(), allocator).Move(), allocator);
    }

}


string EksService::GetName() const
{
    return m_name;
}

void EksService::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EksService::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> EksService::GetPorts() const
{
    return m_ports;
}

void EksService::SetPorts(const vector<int64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool EksService::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string EksService::GetYaml() const
{
    return m_yaml;
}

void EksService::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool EksService::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

string EksService::GetApplicationName() const
{
    return m_applicationName;
}

void EksService::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool EksService::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string EksService::GetVersionName() const
{
    return m_versionName;
}

void EksService::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool EksService::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

vector<string> EksService::GetClusterIp() const
{
    return m_clusterIp;
}

void EksService::SetClusterIp(const vector<string>& _clusterIp)
{
    m_clusterIp = _clusterIp;
    m_clusterIpHasBeenSet = true;
}

bool EksService::ClusterIpHasBeenSet() const
{
    return m_clusterIpHasBeenSet;
}

string EksService::GetExternalIp() const
{
    return m_externalIp;
}

void EksService::SetExternalIp(const string& _externalIp)
{
    m_externalIp = _externalIp;
    m_externalIpHasBeenSet = true;
}

bool EksService::ExternalIpHasBeenSet() const
{
    return m_externalIpHasBeenSet;
}

string EksService::GetType() const
{
    return m_type;
}

void EksService::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EksService::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EksService::GetSubnetId() const
{
    return m_subnetId;
}

void EksService::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EksService::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EksService::GetLoadBalanceId() const
{
    return m_loadBalanceId;
}

void EksService::SetLoadBalanceId(const string& _loadBalanceId)
{
    m_loadBalanceId = _loadBalanceId;
    m_loadBalanceIdHasBeenSet = true;
}

bool EksService::LoadBalanceIdHasBeenSet() const
{
    return m_loadBalanceIdHasBeenSet;
}

vector<PortMapping> EksService::GetPortMappings() const
{
    return m_portMappings;
}

void EksService::SetPortMappings(const vector<PortMapping>& _portMappings)
{
    m_portMappings = _portMappings;
    m_portMappingsHasBeenSet = true;
}

bool EksService::PortMappingsHasBeenSet() const
{
    return m_portMappingsHasBeenSet;
}

vector<ServicePortMapping> EksService::GetServicePortMappingList() const
{
    return m_servicePortMappingList;
}

void EksService::SetServicePortMappingList(const vector<ServicePortMapping>& _servicePortMappingList)
{
    m_servicePortMappingList = _servicePortMappingList;
    m_servicePortMappingListHasBeenSet = true;
}

bool EksService::ServicePortMappingListHasBeenSet() const
{
    return m_servicePortMappingListHasBeenSet;
}

bool EksService::GetFlushAll() const
{
    return m_flushAll;
}

void EksService::SetFlushAll(const bool& _flushAll)
{
    m_flushAll = _flushAll;
    m_flushAllHasBeenSet = true;
}

bool EksService::FlushAllHasBeenSet() const
{
    return m_flushAllHasBeenSet;
}

int64_t EksService::GetEnableRegistryNextDeploy() const
{
    return m_enableRegistryNextDeploy;
}

void EksService::SetEnableRegistryNextDeploy(const int64_t& _enableRegistryNextDeploy)
{
    m_enableRegistryNextDeploy = _enableRegistryNextDeploy;
    m_enableRegistryNextDeployHasBeenSet = true;
}

bool EksService::EnableRegistryNextDeployHasBeenSet() const
{
    return m_enableRegistryNextDeployHasBeenSet;
}

string EksService::GetApplicationId() const
{
    return m_applicationId;
}

void EksService::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool EksService::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

bool EksService::GetAllIpDone() const
{
    return m_allIpDone;
}

void EksService::SetAllIpDone(const bool& _allIpDone)
{
    m_allIpDone = _allIpDone;
    m_allIpDoneHasBeenSet = true;
}

bool EksService::AllIpDoneHasBeenSet() const
{
    return m_allIpDoneHasBeenSet;
}

string EksService::GetExternalDomain() const
{
    return m_externalDomain;
}

void EksService::SetExternalDomain(const string& _externalDomain)
{
    m_externalDomain = _externalDomain;
    m_externalDomainHasBeenSet = true;
}

bool EksService::ExternalDomainHasBeenSet() const
{
    return m_externalDomainHasBeenSet;
}

