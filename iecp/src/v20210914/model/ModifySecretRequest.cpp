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

#include <tencentcloud/iecp/v20210914/model/ModifySecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifySecretRequest::ModifySecretRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_secretNamespaceHasBeenSet(false)
{
}

string ModifySecretRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretNamespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySecretRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void ModifySecretRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool ModifySecretRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

string ModifySecretRequest::GetSecretName() const
{
    return m_secretName;
}

void ModifySecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool ModifySecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string ModifySecretRequest::GetYaml() const
{
    return m_yaml;
}

void ModifySecretRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool ModifySecretRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

string ModifySecretRequest::GetSecretNamespace() const
{
    return m_secretNamespace;
}

void ModifySecretRequest::SetSecretNamespace(const string& _secretNamespace)
{
    m_secretNamespace = _secretNamespace;
    m_secretNamespaceHasBeenSet = true;
}

bool ModifySecretRequest::SecretNamespaceHasBeenSet() const
{
    return m_secretNamespaceHasBeenSet;
}


