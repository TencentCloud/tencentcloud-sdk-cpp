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

#include <tencentcloud/scf/v20180416/model/UpdateTriggerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

UpdateTriggerRequest::UpdateTriggerRequest() :
    m_functionNameHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_customArgumentHasBeenSet(false)
{
}

string UpdateTriggerRequest::ToJsonString() const
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

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_customArgumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomArgument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customArgument.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTriggerRequest::GetFunctionName() const
{
    return m_functionName;
}

void UpdateTriggerRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool UpdateTriggerRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string UpdateTriggerRequest::GetTriggerName() const
{
    return m_triggerName;
}

void UpdateTriggerRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool UpdateTriggerRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string UpdateTriggerRequest::GetType() const
{
    return m_type;
}

void UpdateTriggerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateTriggerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpdateTriggerRequest::GetEnable() const
{
    return m_enable;
}

void UpdateTriggerRequest::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool UpdateTriggerRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string UpdateTriggerRequest::GetQualifier() const
{
    return m_qualifier;
}

void UpdateTriggerRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool UpdateTriggerRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string UpdateTriggerRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateTriggerRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateTriggerRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string UpdateTriggerRequest::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void UpdateTriggerRequest::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool UpdateTriggerRequest::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string UpdateTriggerRequest::GetDescription() const
{
    return m_description;
}

void UpdateTriggerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateTriggerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateTriggerRequest::GetCustomArgument() const
{
    return m_customArgument;
}

void UpdateTriggerRequest::SetCustomArgument(const string& _customArgument)
{
    m_customArgument = _customArgument;
    m_customArgumentHasBeenSet = true;
}

bool UpdateTriggerRequest::CustomArgumentHasBeenSet() const
{
    return m_customArgumentHasBeenSet;
}


