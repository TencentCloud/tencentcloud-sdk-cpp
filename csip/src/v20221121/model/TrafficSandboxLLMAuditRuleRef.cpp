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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxLLMAuditRuleRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxLLMAuditRuleRef::TrafficSandboxLLMAuditRuleRef() :
    m_systemRuleIDHasBeenSet(false),
    m_systemRuleNameHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxLLMAuditRuleRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SystemRuleID") && !value["SystemRuleID"].IsNull())
    {
        if (!value["SystemRuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleRef.SystemRuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemRuleID = string(value["SystemRuleID"].GetString());
        m_systemRuleIDHasBeenSet = true;
    }

    if (value.HasMember("SystemRuleName") && !value["SystemRuleName"].IsNull())
    {
        if (!value["SystemRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleRef.SystemRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemRuleName = string(value["SystemRuleName"].GetString());
        m_systemRuleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxLLMAuditRuleRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_systemRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_systemRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemRuleName.c_str(), allocator).Move(), allocator);
    }

}


string TrafficSandboxLLMAuditRuleRef::GetSystemRuleID() const
{
    return m_systemRuleID;
}

void TrafficSandboxLLMAuditRuleRef::SetSystemRuleID(const string& _systemRuleID)
{
    m_systemRuleID = _systemRuleID;
    m_systemRuleIDHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleRef::SystemRuleIDHasBeenSet() const
{
    return m_systemRuleIDHasBeenSet;
}

string TrafficSandboxLLMAuditRuleRef::GetSystemRuleName() const
{
    return m_systemRuleName;
}

void TrafficSandboxLLMAuditRuleRef::SetSystemRuleName(const string& _systemRuleName)
{
    m_systemRuleName = _systemRuleName;
    m_systemRuleNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleRef::SystemRuleNameHasBeenSet() const
{
    return m_systemRuleNameHasBeenSet;
}

