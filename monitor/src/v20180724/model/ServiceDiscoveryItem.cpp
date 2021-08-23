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

#include <tencentcloud/monitor/v20180724/model/ServiceDiscoveryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ServiceDiscoveryItem::ServiceDiscoveryItem() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_namespaceSelectorHasBeenSet(false),
    m_selectorHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_yamlHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDiscoveryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("NamespaceSelector") && !value["NamespaceSelector"].IsNull())
    {
        if (!value["NamespaceSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.NamespaceSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceSelector = string(value["NamespaceSelector"].GetString());
        m_namespaceSelectorHasBeenSet = true;
    }

    if (value.HasMember("Selector") && !value["Selector"].IsNull())
    {
        if (!value["Selector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Selector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selector = string(value["Selector"].GetString());
        m_selectorHasBeenSet = true;
    }

    if (value.HasMember("Endpoints") && !value["Endpoints"].IsNull())
    {
        if (!value["Endpoints"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Endpoints` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoints = string(value["Endpoints"].GetString());
        m_endpointsHasBeenSet = true;
    }

    if (value.HasMember("Yaml") && !value["Yaml"].IsNull())
    {
        if (!value["Yaml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDiscoveryItem.Yaml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yaml = string(value["Yaml"].GetString());
        m_yamlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDiscoveryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_selectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selector.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoints.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

}


string ServiceDiscoveryItem::GetName() const
{
    return m_name;
}

void ServiceDiscoveryItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceDiscoveryItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceDiscoveryItem::GetNamespace() const
{
    return m_namespace;
}

void ServiceDiscoveryItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ServiceDiscoveryItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ServiceDiscoveryItem::GetKind() const
{
    return m_kind;
}

void ServiceDiscoveryItem::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool ServiceDiscoveryItem::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string ServiceDiscoveryItem::GetNamespaceSelector() const
{
    return m_namespaceSelector;
}

void ServiceDiscoveryItem::SetNamespaceSelector(const string& _namespaceSelector)
{
    m_namespaceSelector = _namespaceSelector;
    m_namespaceSelectorHasBeenSet = true;
}

bool ServiceDiscoveryItem::NamespaceSelectorHasBeenSet() const
{
    return m_namespaceSelectorHasBeenSet;
}

string ServiceDiscoveryItem::GetSelector() const
{
    return m_selector;
}

void ServiceDiscoveryItem::SetSelector(const string& _selector)
{
    m_selector = _selector;
    m_selectorHasBeenSet = true;
}

bool ServiceDiscoveryItem::SelectorHasBeenSet() const
{
    return m_selectorHasBeenSet;
}

string ServiceDiscoveryItem::GetEndpoints() const
{
    return m_endpoints;
}

void ServiceDiscoveryItem::SetEndpoints(const string& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool ServiceDiscoveryItem::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

string ServiceDiscoveryItem::GetYaml() const
{
    return m_yaml;
}

void ServiceDiscoveryItem::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool ServiceDiscoveryItem::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

