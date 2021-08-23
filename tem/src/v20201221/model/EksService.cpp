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

#include <tencentcloud/tem/v20201221/model/EksService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

EksService::EksService() :
    m_nameHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_externalIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loadBalanceIdHasBeenSet(false),
    m_portMappingsHasBeenSet(false)
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

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksService.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
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

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
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

string EksService::GetServiceName() const
{
    return m_serviceName;
}

void EksService::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool EksService::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
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

