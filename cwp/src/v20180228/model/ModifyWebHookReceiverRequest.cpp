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

#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebHookReceiverRequest::ModifyWebHookReceiverRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addrHasBeenSet(false),
    m_isModifyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sCFRegionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

string ModifyWebHookReceiverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

    if (m_isModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModify, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_sCFRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCFRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sCFRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWebHookReceiverRequest::GetId() const
{
    return m_id;
}

void ModifyWebHookReceiverRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetName() const
{
    return m_name;
}

void ModifyWebHookReceiverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetAddr() const
{
    return m_addr;
}

void ModifyWebHookReceiverRequest::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

bool ModifyWebHookReceiverRequest::GetIsModify() const
{
    return m_isModify;
}

void ModifyWebHookReceiverRequest::SetIsModify(const bool& _isModify)
{
    m_isModify = _isModify;
    m_isModifyHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::IsModifyHasBeenSet() const
{
    return m_isModifyHasBeenSet;
}

uint64_t ModifyWebHookReceiverRequest::GetType() const
{
    return m_type;
}

void ModifyWebHookReceiverRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetSCFRegion() const
{
    return m_sCFRegion;
}

void ModifyWebHookReceiverRequest::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetNamespace() const
{
    return m_namespace;
}

void ModifyWebHookReceiverRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetFunctionName() const
{
    return m_functionName;
}

void ModifyWebHookReceiverRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetFunctionVersion() const
{
    return m_functionVersion;
}

void ModifyWebHookReceiverRequest::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

string ModifyWebHookReceiverRequest::GetAlias() const
{
    return m_alias;
}

void ModifyWebHookReceiverRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModifyWebHookReceiverRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}


