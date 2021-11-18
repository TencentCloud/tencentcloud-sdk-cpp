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

#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeSecurityEventsCntResponse::DescribeSecurityEventsCntResponse() :
    m_malwareHasBeenSet(false),
    m_hostLoginHasBeenSet(false),
    m_bruteAttackHasBeenSet(false),
    m_riskDnsHasBeenSet(false),
    m_bashHasBeenSet(false),
    m_privilegeRulesHasBeenSet(false),
    m_reverseShellHasBeenSet(false),
    m_sysVulHasBeenSet(false),
    m_webVulHasBeenSet(false),
    m_emergencyVulHasBeenSet(false),
    m_baseLineHasBeenSet(false),
    m_attackLogsHasBeenSet(false),
    m_effectMachineCountHasBeenSet(false),
    m_eventsCountHasBeenSet(false),
    m_windowVulHasBeenSet(false),
    m_linuxVulHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityEventsCntResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Malware") && !rsp["Malware"].IsNull())
    {
        if (!rsp["Malware"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Malware` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_malware.Deserialize(rsp["Malware"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_malwareHasBeenSet = true;
    }

    if (rsp.HasMember("HostLogin") && !rsp["HostLogin"].IsNull())
    {
        if (!rsp["HostLogin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostLogin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostLogin.Deserialize(rsp["HostLogin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostLoginHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttack") && !rsp["BruteAttack"].IsNull())
    {
        if (!rsp["BruteAttack"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bruteAttack.Deserialize(rsp["BruteAttack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bruteAttackHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDns") && !rsp["RiskDns"].IsNull())
    {
        if (!rsp["RiskDns"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDns` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskDns.Deserialize(rsp["RiskDns"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskDnsHasBeenSet = true;
    }

    if (rsp.HasMember("Bash") && !rsp["Bash"].IsNull())
    {
        if (!rsp["Bash"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Bash` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bash.Deserialize(rsp["Bash"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bashHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeRules") && !rsp["PrivilegeRules"].IsNull())
    {
        if (!rsp["PrivilegeRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilegeRules.Deserialize(rsp["PrivilegeRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeRulesHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShell") && !rsp["ReverseShell"].IsNull())
    {
        if (!rsp["ReverseShell"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShell` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reverseShell.Deserialize(rsp["ReverseShell"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reverseShellHasBeenSet = true;
    }

    if (rsp.HasMember("SysVul") && !rsp["SysVul"].IsNull())
    {
        if (!rsp["SysVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SysVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sysVul.Deserialize(rsp["SysVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sysVulHasBeenSet = true;
    }

    if (rsp.HasMember("WebVul") && !rsp["WebVul"].IsNull())
    {
        if (!rsp["WebVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webVul.Deserialize(rsp["WebVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webVulHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyVul") && !rsp["EmergencyVul"].IsNull())
    {
        if (!rsp["EmergencyVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emergencyVul.Deserialize(rsp["EmergencyVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emergencyVulHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLine") && !rsp["BaseLine"].IsNull())
    {
        if (!rsp["BaseLine"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseLine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseLine.Deserialize(rsp["BaseLine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseLineHasBeenSet = true;
    }

    if (rsp.HasMember("AttackLogs") && !rsp["AttackLogs"].IsNull())
    {
        if (!rsp["AttackLogs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attackLogs.Deserialize(rsp["AttackLogs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attackLogsHasBeenSet = true;
    }

    if (rsp.HasMember("EffectMachineCount") && !rsp["EffectMachineCount"].IsNull())
    {
        if (!rsp["EffectMachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectMachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectMachineCount = rsp["EffectMachineCount"].GetUint64();
        m_effectMachineCountHasBeenSet = true;
    }

    if (rsp.HasMember("EventsCount") && !rsp["EventsCount"].IsNull())
    {
        if (!rsp["EventsCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventsCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventsCount = rsp["EventsCount"].GetUint64();
        m_eventsCountHasBeenSet = true;
    }

    if (rsp.HasMember("WindowVul") && !rsp["WindowVul"].IsNull())
    {
        if (!rsp["WindowVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WindowVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_windowVul.Deserialize(rsp["WindowVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_windowVulHasBeenSet = true;
    }

    if (rsp.HasMember("LinuxVul") && !rsp["LinuxVul"].IsNull())
    {
        if (!rsp["LinuxVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_linuxVul.Deserialize(rsp["LinuxVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_linuxVulHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityEventsCntResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_malwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Malware";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_malware.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostLogin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bruteAttackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAttack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bruteAttack.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskDns.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bash.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privilegeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilegeRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reverseShellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reverseShell.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sysVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sysVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emergencyVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emergencyVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baseLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseLine.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attackLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attackLogs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_effectMachineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectMachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectMachineCount, allocator);
    }

    if (m_eventsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventsCount, allocator);
    }

    if (m_windowVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_windowVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_linuxVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_linuxVul.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


SecurityEventInfo DescribeSecurityEventsCntResponse::GetMalware() const
{
    return m_malware;
}

bool DescribeSecurityEventsCntResponse::MalwareHasBeenSet() const
{
    return m_malwareHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetHostLogin() const
{
    return m_hostLogin;
}

bool DescribeSecurityEventsCntResponse::HostLoginHasBeenSet() const
{
    return m_hostLoginHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBruteAttack() const
{
    return m_bruteAttack;
}

bool DescribeSecurityEventsCntResponse::BruteAttackHasBeenSet() const
{
    return m_bruteAttackHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetRiskDns() const
{
    return m_riskDns;
}

bool DescribeSecurityEventsCntResponse::RiskDnsHasBeenSet() const
{
    return m_riskDnsHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBash() const
{
    return m_bash;
}

bool DescribeSecurityEventsCntResponse::BashHasBeenSet() const
{
    return m_bashHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetPrivilegeRules() const
{
    return m_privilegeRules;
}

bool DescribeSecurityEventsCntResponse::PrivilegeRulesHasBeenSet() const
{
    return m_privilegeRulesHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetReverseShell() const
{
    return m_reverseShell;
}

bool DescribeSecurityEventsCntResponse::ReverseShellHasBeenSet() const
{
    return m_reverseShellHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetSysVul() const
{
    return m_sysVul;
}

bool DescribeSecurityEventsCntResponse::SysVulHasBeenSet() const
{
    return m_sysVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetWebVul() const
{
    return m_webVul;
}

bool DescribeSecurityEventsCntResponse::WebVulHasBeenSet() const
{
    return m_webVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetEmergencyVul() const
{
    return m_emergencyVul;
}

bool DescribeSecurityEventsCntResponse::EmergencyVulHasBeenSet() const
{
    return m_emergencyVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBaseLine() const
{
    return m_baseLine;
}

bool DescribeSecurityEventsCntResponse::BaseLineHasBeenSet() const
{
    return m_baseLineHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetAttackLogs() const
{
    return m_attackLogs;
}

bool DescribeSecurityEventsCntResponse::AttackLogsHasBeenSet() const
{
    return m_attackLogsHasBeenSet;
}

uint64_t DescribeSecurityEventsCntResponse::GetEffectMachineCount() const
{
    return m_effectMachineCount;
}

bool DescribeSecurityEventsCntResponse::EffectMachineCountHasBeenSet() const
{
    return m_effectMachineCountHasBeenSet;
}

uint64_t DescribeSecurityEventsCntResponse::GetEventsCount() const
{
    return m_eventsCount;
}

bool DescribeSecurityEventsCntResponse::EventsCountHasBeenSet() const
{
    return m_eventsCountHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetWindowVul() const
{
    return m_windowVul;
}

bool DescribeSecurityEventsCntResponse::WindowVulHasBeenSet() const
{
    return m_windowVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetLinuxVul() const
{
    return m_linuxVul;
}

bool DescribeSecurityEventsCntResponse::LinuxVulHasBeenSet() const
{
    return m_linuxVulHasBeenSet;
}


