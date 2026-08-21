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

#include <tencentcloud/csip/v20221121/model/ModifyWebhookReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyWebhookReceiverRequest::ModifyWebhookReceiverRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_webhookAddrHasBeenSet(false),
    m_sCFRegionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

string ModifyWebhookReceiverRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_webhookAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webhookAddr.c_str(), allocator).Move(), allocator);
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


string ModifyWebhookReceiverRequest::GetName() const
{
    return m_name;
}

void ModifyWebhookReceiverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetType() const
{
    return m_type;
}

void ModifyWebhookReceiverRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyWebhookReceiverRequest::GetID() const
{
    return m_iD;
}

void ModifyWebhookReceiverRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetWebhookAddr() const
{
    return m_webhookAddr;
}

void ModifyWebhookReceiverRequest::SetWebhookAddr(const string& _webhookAddr)
{
    m_webhookAddr = _webhookAddr;
    m_webhookAddrHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::WebhookAddrHasBeenSet() const
{
    return m_webhookAddrHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetSCFRegion() const
{
    return m_sCFRegion;
}

void ModifyWebhookReceiverRequest::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetNamespace() const
{
    return m_namespace;
}

void ModifyWebhookReceiverRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetFunctionName() const
{
    return m_functionName;
}

void ModifyWebhookReceiverRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetFunctionVersion() const
{
    return m_functionVersion;
}

void ModifyWebhookReceiverRequest::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

string ModifyWebhookReceiverRequest::GetAlias() const
{
    return m_alias;
}

void ModifyWebhookReceiverRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModifyWebhookReceiverRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}


