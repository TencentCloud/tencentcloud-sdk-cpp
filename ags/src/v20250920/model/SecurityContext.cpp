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

#include <tencentcloud/ags/v20250920/model/SecurityContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SecurityContext::SecurityContext() :
    m_privilegedHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

CoreInternalOutcome SecurityContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Privileged") && !value["Privileged"].IsNull())
    {
        if (!value["Privileged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityContext.Privileged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_privileged = value["Privileged"].GetBool();
        m_privilegedHasBeenSet = true;
    }

    if (value.HasMember("Capabilities") && !value["Capabilities"].IsNull())
    {
        if (!value["Capabilities"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityContext.Capabilities` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capabilities.Deserialize(value["Capabilities"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capabilitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privilegedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privileged, allocator);
    }

    if (m_capabilitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capabilities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capabilities.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool SecurityContext::GetPrivileged() const
{
    return m_privileged;
}

void SecurityContext::SetPrivileged(const bool& _privileged)
{
    m_privileged = _privileged;
    m_privilegedHasBeenSet = true;
}

bool SecurityContext::PrivilegedHasBeenSet() const
{
    return m_privilegedHasBeenSet;
}

Capabilities SecurityContext::GetCapabilities() const
{
    return m_capabilities;
}

void SecurityContext::SetCapabilities(const Capabilities& _capabilities)
{
    m_capabilities = _capabilities;
    m_capabilitiesHasBeenSet = true;
}

bool SecurityContext::CapabilitiesHasBeenSet() const
{
    return m_capabilitiesHasBeenSet;
}

