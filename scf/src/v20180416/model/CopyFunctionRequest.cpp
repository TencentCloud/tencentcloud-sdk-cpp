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

#include <tencentcloud/scf/v20180416/model/CopyFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

CopyFunctionRequest::CopyFunctionRequest() :
    m_functionNameHasBeenSet(false),
    m_newFunctionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_targetNamespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_copyConfigurationHasBeenSet(false)
{
}

string CopyFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_newFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_override, allocator);
    }

    if (m_copyConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_copyConfiguration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void CopyFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool CopyFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string CopyFunctionRequest::GetNewFunctionName() const
{
    return m_newFunctionName;
}

void CopyFunctionRequest::SetNewFunctionName(const string& _newFunctionName)
{
    m_newFunctionName = _newFunctionName;
    m_newFunctionNameHasBeenSet = true;
}

bool CopyFunctionRequest::NewFunctionNameHasBeenSet() const
{
    return m_newFunctionNameHasBeenSet;
}

string CopyFunctionRequest::GetNamespace() const
{
    return m_namespace;
}

void CopyFunctionRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CopyFunctionRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CopyFunctionRequest::GetTargetNamespace() const
{
    return m_targetNamespace;
}

void CopyFunctionRequest::SetTargetNamespace(const string& _targetNamespace)
{
    m_targetNamespace = _targetNamespace;
    m_targetNamespaceHasBeenSet = true;
}

bool CopyFunctionRequest::TargetNamespaceHasBeenSet() const
{
    return m_targetNamespaceHasBeenSet;
}

string CopyFunctionRequest::GetDescription() const
{
    return m_description;
}

void CopyFunctionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CopyFunctionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CopyFunctionRequest::GetTargetRegion() const
{
    return m_targetRegion;
}

void CopyFunctionRequest::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool CopyFunctionRequest::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

bool CopyFunctionRequest::GetOverride() const
{
    return m_override;
}

void CopyFunctionRequest::SetOverride(const bool& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool CopyFunctionRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

bool CopyFunctionRequest::GetCopyConfiguration() const
{
    return m_copyConfiguration;
}

void CopyFunctionRequest::SetCopyConfiguration(const bool& _copyConfiguration)
{
    m_copyConfiguration = _copyConfiguration;
    m_copyConfigurationHasBeenSet = true;
}

bool CopyFunctionRequest::CopyConfigurationHasBeenSet() const
{
    return m_copyConfigurationHasBeenSet;
}


