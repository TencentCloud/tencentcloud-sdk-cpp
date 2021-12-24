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

#include <tencentcloud/iecp/v20210914/model/NamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NamespaceInfo::NamespaceInfo() :
    m_namespaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_protectedHasBeenSet(false),
    m_yamlHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Protected") && !value["Protected"].IsNull())
    {
        if (!value["Protected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Protected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protected = value["Protected"].GetBool();
        m_protectedHasBeenSet = true;
    }

    if (value.HasMember("Yaml") && !value["Yaml"].IsNull())
    {
        if (!value["Yaml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Yaml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yaml = string(value["Yaml"].GetString());
        m_yamlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protected, allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

}


string NamespaceInfo::GetNamespace() const
{
    return m_namespace;
}

void NamespaceInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NamespaceInfo::GetStatus() const
{
    return m_status;
}

void NamespaceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NamespaceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NamespaceInfo::GetDescription() const
{
    return m_description;
}

void NamespaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NamespaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NamespaceInfo::GetCreateTime() const
{
    return m_createTime;
}

void NamespaceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NamespaceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool NamespaceInfo::GetProtected() const
{
    return m_protected;
}

void NamespaceInfo::SetProtected(const bool& _protected)
{
    m_protected = _protected;
    m_protectedHasBeenSet = true;
}

bool NamespaceInfo::ProtectedHasBeenSet() const
{
    return m_protectedHasBeenSet;
}

string NamespaceInfo::GetYaml() const
{
    return m_yaml;
}

void NamespaceInfo::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool NamespaceInfo::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

