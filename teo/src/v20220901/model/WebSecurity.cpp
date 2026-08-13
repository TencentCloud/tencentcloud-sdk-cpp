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

#include <tencentcloud/teo/v20220901/model/WebSecurity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WebSecurity::WebSecurity() :
    m_zoneDefaultPolicyHasBeenSet(false),
    m_hostPolicyHasBeenSet(false),
    m_templatesHasBeenSet(false)
{
}

CoreInternalOutcome WebSecurity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneDefaultPolicy") && !value["ZoneDefaultPolicy"].IsNull())
    {
        if (!value["ZoneDefaultPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurity.ZoneDefaultPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneDefaultPolicy.Deserialize(value["ZoneDefaultPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneDefaultPolicyHasBeenSet = true;
    }

    if (value.HasMember("HostPolicy") && !value["HostPolicy"].IsNull())
    {
        if (!value["HostPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurity.HostPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostPolicy.Deserialize(value["HostPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostPolicyHasBeenSet = true;
    }

    if (value.HasMember("Templates") && !value["Templates"].IsNull())
    {
        if (!value["Templates"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurity.Templates` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templates.Deserialize(value["Templates"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebSecurity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneDefaultPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneDefaultPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneDefaultPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Templates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templates.ToJsonObject(value[key.c_str()], allocator);
    }

}


SecurityPolicy WebSecurity::GetZoneDefaultPolicy() const
{
    return m_zoneDefaultPolicy;
}

void WebSecurity::SetZoneDefaultPolicy(const SecurityPolicy& _zoneDefaultPolicy)
{
    m_zoneDefaultPolicy = _zoneDefaultPolicy;
    m_zoneDefaultPolicyHasBeenSet = true;
}

bool WebSecurity::ZoneDefaultPolicyHasBeenSet() const
{
    return m_zoneDefaultPolicyHasBeenSet;
}

HostPolicy WebSecurity::GetHostPolicy() const
{
    return m_hostPolicy;
}

void WebSecurity::SetHostPolicy(const HostPolicy& _hostPolicy)
{
    m_hostPolicy = _hostPolicy;
    m_hostPolicyHasBeenSet = true;
}

bool WebSecurity::HostPolicyHasBeenSet() const
{
    return m_hostPolicyHasBeenSet;
}

WebSecurityTemplates WebSecurity::GetTemplates() const
{
    return m_templates;
}

void WebSecurity::SetTemplates(const WebSecurityTemplates& _templates)
{
    m_templates = _templates;
    m_templatesHasBeenSet = true;
}

bool WebSecurity::TemplatesHasBeenSet() const
{
    return m_templatesHasBeenSet;
}

