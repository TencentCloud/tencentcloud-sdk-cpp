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

#include <tencentcloud/scf/v20180416/model/CreateAliasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

CreateAliasRequest::CreateAliasRequest() :
    m_nameHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_routingConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAliasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_routingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routingConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAliasRequest::GetName() const
{
    return m_name;
}

void CreateAliasRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAliasRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAliasRequest::GetFunctionName() const
{
    return m_functionName;
}

void CreateAliasRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool CreateAliasRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string CreateAliasRequest::GetFunctionVersion() const
{
    return m_functionVersion;
}

void CreateAliasRequest::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool CreateAliasRequest::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

string CreateAliasRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateAliasRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateAliasRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

RoutingConfig CreateAliasRequest::GetRoutingConfig() const
{
    return m_routingConfig;
}

void CreateAliasRequest::SetRoutingConfig(const RoutingConfig& _routingConfig)
{
    m_routingConfig = _routingConfig;
    m_routingConfigHasBeenSet = true;
}

bool CreateAliasRequest::RoutingConfigHasBeenSet() const
{
    return m_routingConfigHasBeenSet;
}

string CreateAliasRequest::GetDescription() const
{
    return m_description;
}

void CreateAliasRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAliasRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


