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

#include <tencentcloud/tem/v20210701/model/ServicePortMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ServicePortMapping::ServicePortMapping() :
    m_typeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_externalIpHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_loadBalanceIdHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_portMappingItemListHasBeenSet(false),
    m_externalDomainHasBeenSet(false)
{
}

CoreInternalOutcome ServicePortMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterIp") && !value["ClusterIp"].IsNull())
    {
        if (!value["ClusterIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.ClusterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIp = string(value["ClusterIp"].GetString());
        m_clusterIpHasBeenSet = true;
    }

    if (value.HasMember("ExternalIp") && !value["ExternalIp"].IsNull())
    {
        if (!value["ExternalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.ExternalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalIp = string(value["ExternalIp"].GetString());
        m_externalIpHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalanceId") && !value["LoadBalanceId"].IsNull())
    {
        if (!value["LoadBalanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.LoadBalanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalanceId = string(value["LoadBalanceId"].GetString());
        m_loadBalanceIdHasBeenSet = true;
    }

    if (value.HasMember("Yaml") && !value["Yaml"].IsNull())
    {
        if (!value["Yaml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.Yaml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yaml = string(value["Yaml"].GetString());
        m_yamlHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ports.push_back((*itr).GetInt64());
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("PortMappingItemList") && !value["PortMappingItemList"].IsNull())
    {
        if (!value["PortMappingItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.PortMappingItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["PortMappingItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServicePortMappingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portMappingItemList.push_back(item);
        }
        m_portMappingItemListHasBeenSet = true;
    }

    if (value.HasMember("ExternalDomain") && !value["ExternalDomain"].IsNull())
    {
        if (!value["ExternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMapping.ExternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalDomain = string(value["ExternalDomain"].GetString());
        m_externalDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServicePortMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
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

    if (m_portMappingItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortMappingItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portMappingItemList.begin(); itr != m_portMappingItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_externalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalDomain.c_str(), allocator).Move(), allocator);
    }

}


string ServicePortMapping::GetType() const
{
    return m_type;
}

void ServicePortMapping::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ServicePortMapping::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ServicePortMapping::GetServiceName() const
{
    return m_serviceName;
}

void ServicePortMapping::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServicePortMapping::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServicePortMapping::GetClusterIp() const
{
    return m_clusterIp;
}

void ServicePortMapping::SetClusterIp(const string& _clusterIp)
{
    m_clusterIp = _clusterIp;
    m_clusterIpHasBeenSet = true;
}

bool ServicePortMapping::ClusterIpHasBeenSet() const
{
    return m_clusterIpHasBeenSet;
}

string ServicePortMapping::GetExternalIp() const
{
    return m_externalIp;
}

void ServicePortMapping::SetExternalIp(const string& _externalIp)
{
    m_externalIp = _externalIp;
    m_externalIpHasBeenSet = true;
}

bool ServicePortMapping::ExternalIpHasBeenSet() const
{
    return m_externalIpHasBeenSet;
}

string ServicePortMapping::GetSubnetId() const
{
    return m_subnetId;
}

void ServicePortMapping::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServicePortMapping::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ServicePortMapping::GetVpcId() const
{
    return m_vpcId;
}

void ServicePortMapping::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ServicePortMapping::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ServicePortMapping::GetLoadBalanceId() const
{
    return m_loadBalanceId;
}

void ServicePortMapping::SetLoadBalanceId(const string& _loadBalanceId)
{
    m_loadBalanceId = _loadBalanceId;
    m_loadBalanceIdHasBeenSet = true;
}

bool ServicePortMapping::LoadBalanceIdHasBeenSet() const
{
    return m_loadBalanceIdHasBeenSet;
}

string ServicePortMapping::GetYaml() const
{
    return m_yaml;
}

void ServicePortMapping::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool ServicePortMapping::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

vector<int64_t> ServicePortMapping::GetPorts() const
{
    return m_ports;
}

void ServicePortMapping::SetPorts(const vector<int64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool ServicePortMapping::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<ServicePortMappingItem> ServicePortMapping::GetPortMappingItemList() const
{
    return m_portMappingItemList;
}

void ServicePortMapping::SetPortMappingItemList(const vector<ServicePortMappingItem>& _portMappingItemList)
{
    m_portMappingItemList = _portMappingItemList;
    m_portMappingItemListHasBeenSet = true;
}

bool ServicePortMapping::PortMappingItemListHasBeenSet() const
{
    return m_portMappingItemListHasBeenSet;
}

string ServicePortMapping::GetExternalDomain() const
{
    return m_externalDomain;
}

void ServicePortMapping::SetExternalDomain(const string& _externalDomain)
{
    m_externalDomain = _externalDomain;
    m_externalDomainHasBeenSet = true;
}

bool ServicePortMapping::ExternalDomainHasBeenSet() const
{
    return m_externalDomainHasBeenSet;
}

