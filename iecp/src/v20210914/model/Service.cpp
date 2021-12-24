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

#include <tencentcloud/iecp/v20210914/model/Service.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

Service::Service() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_clusterIPHasBeenSet(false)
{
}

CoreInternalOutcome Service::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Service.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Service.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ClusterIP") && !value["ClusterIP"].IsNull())
    {
        if (!value["ClusterIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ClusterIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIP = string(value["ClusterIP"].GetString());
        m_clusterIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Service::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIP.c_str(), allocator).Move(), allocator);
    }

}


string Service::GetName() const
{
    return m_name;
}

void Service::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Service::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Service::GetType() const
{
    return m_type;
}

void Service::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Service::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<PortConfig> Service::GetPorts() const
{
    return m_ports;
}

void Service::SetPorts(const vector<PortConfig>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool Service::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<Label> Service::GetLabels() const
{
    return m_labels;
}

void Service::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool Service::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string Service::GetNamespace() const
{
    return m_namespace;
}

void Service::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool Service::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string Service::GetClusterIP() const
{
    return m_clusterIP;
}

void Service::SetClusterIP(const string& _clusterIP)
{
    m_clusterIP = _clusterIP;
    m_clusterIPHasBeenSet = true;
}

bool Service::ClusterIPHasBeenSet() const
{
    return m_clusterIPHasBeenSet;
}

