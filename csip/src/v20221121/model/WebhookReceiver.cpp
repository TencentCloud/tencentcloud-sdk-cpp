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

#include <tencentcloud/csip/v20221121/model/WebhookReceiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebhookReceiver::WebhookReceiver() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_webhookAddrHasBeenSet(false),
    m_sCFRegionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

CoreInternalOutcome WebhookReceiver::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("WebhookAddr") && !value["WebhookAddr"].IsNull())
    {
        if (!value["WebhookAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.WebhookAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookAddr = string(value["WebhookAddr"].GetString());
        m_webhookAddrHasBeenSet = true;
    }

    if (value.HasMember("SCFRegion") && !value["SCFRegion"].IsNull())
    {
        if (!value["SCFRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.SCFRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sCFRegion = string(value["SCFRegion"].GetString());
        m_sCFRegionHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("FunctionVersion") && !value["FunctionVersion"].IsNull())
    {
        if (!value["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(value["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiver.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookReceiver::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_sCFRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCFRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sCFRegion.c_str(), allocator).Move(), allocator);
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

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

}


int64_t WebhookReceiver::GetID() const
{
    return m_iD;
}

void WebhookReceiver::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool WebhookReceiver::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string WebhookReceiver::GetName() const
{
    return m_name;
}

void WebhookReceiver::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebhookReceiver::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WebhookReceiver::GetType() const
{
    return m_type;
}

void WebhookReceiver::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WebhookReceiver::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WebhookReceiver::GetWebhookAddr() const
{
    return m_webhookAddr;
}

void WebhookReceiver::SetWebhookAddr(const string& _webhookAddr)
{
    m_webhookAddr = _webhookAddr;
    m_webhookAddrHasBeenSet = true;
}

bool WebhookReceiver::WebhookAddrHasBeenSet() const
{
    return m_webhookAddrHasBeenSet;
}

string WebhookReceiver::GetSCFRegion() const
{
    return m_sCFRegion;
}

void WebhookReceiver::SetSCFRegion(const string& _sCFRegion)
{
    m_sCFRegion = _sCFRegion;
    m_sCFRegionHasBeenSet = true;
}

bool WebhookReceiver::SCFRegionHasBeenSet() const
{
    return m_sCFRegionHasBeenSet;
}

string WebhookReceiver::GetNamespace() const
{
    return m_namespace;
}

void WebhookReceiver::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool WebhookReceiver::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string WebhookReceiver::GetFunctionName() const
{
    return m_functionName;
}

void WebhookReceiver::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool WebhookReceiver::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string WebhookReceiver::GetFunctionVersion() const
{
    return m_functionVersion;
}

void WebhookReceiver::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool WebhookReceiver::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

string WebhookReceiver::GetAlias() const
{
    return m_alias;
}

void WebhookReceiver::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool WebhookReceiver::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

