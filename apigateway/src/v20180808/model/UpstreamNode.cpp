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

#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UpstreamNode::UpstreamNode() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_vmInstanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_uniqueServiceNameHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("VmInstanceId") && !value["VmInstanceId"].IsNull())
    {
        if (!value["VmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.VmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vmInstanceId = string(value["VmInstanceId"].GetString());
        m_vmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Healthy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = string(value["Healthy"].GetString());
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("UniqueServiceName") && !value["UniqueServiceName"].IsNull())
    {
        if (!value["UniqueServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamNode.UniqueServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueServiceName = string(value["UniqueServiceName"].GetString());
        m_uniqueServiceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_vmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthy.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueServiceName.c_str(), allocator).Move(), allocator);
    }

}


string UpstreamNode::GetHost() const
{
    return m_host;
}

void UpstreamNode::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool UpstreamNode::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t UpstreamNode::GetPort() const
{
    return m_port;
}

void UpstreamNode::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UpstreamNode::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t UpstreamNode::GetWeight() const
{
    return m_weight;
}

void UpstreamNode::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool UpstreamNode::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string UpstreamNode::GetVmInstanceId() const
{
    return m_vmInstanceId;
}

void UpstreamNode::SetVmInstanceId(const string& _vmInstanceId)
{
    m_vmInstanceId = _vmInstanceId;
    m_vmInstanceIdHasBeenSet = true;
}

bool UpstreamNode::VmInstanceIdHasBeenSet() const
{
    return m_vmInstanceIdHasBeenSet;
}

vector<string> UpstreamNode::GetTags() const
{
    return m_tags;
}

void UpstreamNode::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UpstreamNode::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string UpstreamNode::GetHealthy() const
{
    return m_healthy;
}

void UpstreamNode::SetHealthy(const string& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool UpstreamNode::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string UpstreamNode::GetServiceName() const
{
    return m_serviceName;
}

void UpstreamNode::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool UpstreamNode::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string UpstreamNode::GetNameSpace() const
{
    return m_nameSpace;
}

void UpstreamNode::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool UpstreamNode::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string UpstreamNode::GetClusterId() const
{
    return m_clusterId;
}

void UpstreamNode::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpstreamNode::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpstreamNode::GetSource() const
{
    return m_source;
}

void UpstreamNode::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool UpstreamNode::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string UpstreamNode::GetUniqueServiceName() const
{
    return m_uniqueServiceName;
}

void UpstreamNode::SetUniqueServiceName(const string& _uniqueServiceName)
{
    m_uniqueServiceName = _uniqueServiceName;
    m_uniqueServiceNameHasBeenSet = true;
}

bool UpstreamNode::UniqueServiceNameHasBeenSet() const
{
    return m_uniqueServiceNameHasBeenSet;
}

