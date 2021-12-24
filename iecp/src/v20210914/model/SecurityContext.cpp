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

#include <tencentcloud/iecp/v20210914/model/SecurityContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

SecurityContext::SecurityContext() :
    m_privilegeHasBeenSet(false),
    m_procMountHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

CoreInternalOutcome SecurityContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityContext.Privilege` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_privilege = value["Privilege"].GetBool();
        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("ProcMount") && !value["ProcMount"].IsNull())
    {
        if (!value["ProcMount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityContext.ProcMount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procMount = string(value["ProcMount"].GetString());
        m_procMountHasBeenSet = true;
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

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilege, allocator);
    }

    if (m_procMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procMount.c_str(), allocator).Move(), allocator);
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


bool SecurityContext::GetPrivilege() const
{
    return m_privilege;
}

void SecurityContext::SetPrivilege(const bool& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool SecurityContext::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string SecurityContext::GetProcMount() const
{
    return m_procMount;
}

void SecurityContext::SetProcMount(const string& _procMount)
{
    m_procMount = _procMount;
    m_procMountHasBeenSet = true;
}

bool SecurityContext::ProcMountHasBeenSet() const
{
    return m_procMountHasBeenSet;
}

SecurityCapabilities SecurityContext::GetCapabilities() const
{
    return m_capabilities;
}

void SecurityContext::SetCapabilities(const SecurityCapabilities& _capabilities)
{
    m_capabilities = _capabilities;
    m_capabilitiesHasBeenSet = true;
}

bool SecurityContext::CapabilitiesHasBeenSet() const
{
    return m_capabilitiesHasBeenSet;
}

