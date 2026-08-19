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

#include <tencentcloud/csip/v20221121/model/ScfCustomDomainEndpointItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScfCustomDomainEndpointItem::ScfCustomDomainEndpointItem() :
    m_pathMatchHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}

CoreInternalOutcome ScfCustomDomainEndpointItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PathMatch") && !value["PathMatch"].IsNull())
    {
        if (!value["PathMatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfCustomDomainEndpointItem.PathMatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatch = string(value["PathMatch"].GetString());
        m_pathMatchHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfCustomDomainEndpointItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfCustomDomainEndpointItem.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScfCustomDomainEndpointItem.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScfCustomDomainEndpointItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatch.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

}


string ScfCustomDomainEndpointItem::GetPathMatch() const
{
    return m_pathMatch;
}

void ScfCustomDomainEndpointItem::SetPathMatch(const string& _pathMatch)
{
    m_pathMatch = _pathMatch;
    m_pathMatchHasBeenSet = true;
}

bool ScfCustomDomainEndpointItem::PathMatchHasBeenSet() const
{
    return m_pathMatchHasBeenSet;
}

string ScfCustomDomainEndpointItem::GetNamespace() const
{
    return m_namespace;
}

void ScfCustomDomainEndpointItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ScfCustomDomainEndpointItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ScfCustomDomainEndpointItem::GetFunctionName() const
{
    return m_functionName;
}

void ScfCustomDomainEndpointItem::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ScfCustomDomainEndpointItem::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ScfCustomDomainEndpointItem::GetQualifier() const
{
    return m_qualifier;
}

void ScfCustomDomainEndpointItem::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool ScfCustomDomainEndpointItem::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

