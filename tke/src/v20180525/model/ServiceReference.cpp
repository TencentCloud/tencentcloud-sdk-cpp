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

#include <tencentcloud/tke/v20180525/model/ServiceReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ServiceReference::ServiceReference() :
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_schemeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReference.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReference.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReference.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReference.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReference.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

}


string ServiceReference::GetNamespace() const
{
    return m_namespace;
}

void ServiceReference::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ServiceReference::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ServiceReference::GetName() const
{
    return m_name;
}

void ServiceReference::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceReference::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ServiceReference::GetPort() const
{
    return m_port;
}

void ServiceReference::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServiceReference::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ServiceReference::GetPath() const
{
    return m_path;
}

void ServiceReference::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ServiceReference::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ServiceReference::GetScheme() const
{
    return m_scheme;
}

void ServiceReference::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool ServiceReference::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

