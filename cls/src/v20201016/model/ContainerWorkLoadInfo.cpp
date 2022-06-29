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

#include <tencentcloud/cls/v20201016/model/ContainerWorkLoadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ContainerWorkLoadInfo::ContainerWorkLoadInfo() :
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome ContainerWorkLoadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWorkLoadInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWorkLoadInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWorkLoadInfo.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWorkLoadInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerWorkLoadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

}


string ContainerWorkLoadInfo::GetKind() const
{
    return m_kind;
}

void ContainerWorkLoadInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool ContainerWorkLoadInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string ContainerWorkLoadInfo::GetName() const
{
    return m_name;
}

void ContainerWorkLoadInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerWorkLoadInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerWorkLoadInfo::GetContainer() const
{
    return m_container;
}

void ContainerWorkLoadInfo::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ContainerWorkLoadInfo::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string ContainerWorkLoadInfo::GetNamespace() const
{
    return m_namespace;
}

void ContainerWorkLoadInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ContainerWorkLoadInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

