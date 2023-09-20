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

#include <tencentcloud/cwp/v20180228/model/DescribeMachineRiskCntResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeMachineRiskCntResponse::DescribeMachineRiskCntResponse() :
    m_hostLoginHasBeenSet(false),
    m_bruteAttackHasBeenSet(false),
    m_maliciousRequestHasBeenSet(false),
    m_reverseShellHasBeenSet(false),
    m_bashHasBeenSet(false),
    m_privilegeEscalationHasBeenSet(false),
    m_malwareHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachineRiskCntResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HostLogin") && !rsp["HostLogin"].IsNull())
    {
        if (!rsp["HostLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostLogin = rsp["HostLogin"].GetUint64();
        m_hostLoginHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttack") && !rsp["BruteAttack"].IsNull())
    {
        if (!rsp["BruteAttack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bruteAttack = rsp["BruteAttack"].GetUint64();
        m_bruteAttackHasBeenSet = true;
    }

    if (rsp.HasMember("MaliciousRequest") && !rsp["MaliciousRequest"].IsNull())
    {
        if (!rsp["MaliciousRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousRequest = rsp["MaliciousRequest"].GetUint64();
        m_maliciousRequestHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShell") && !rsp["ReverseShell"].IsNull())
    {
        if (!rsp["ReverseShell"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShell` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reverseShell = rsp["ReverseShell"].GetUint64();
        m_reverseShellHasBeenSet = true;
    }

    if (rsp.HasMember("Bash") && !rsp["Bash"].IsNull())
    {
        if (!rsp["Bash"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Bash` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bash = rsp["Bash"].GetUint64();
        m_bashHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeEscalation") && !rsp["PrivilegeEscalation"].IsNull())
    {
        if (!rsp["PrivilegeEscalation"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeEscalation = rsp["PrivilegeEscalation"].GetUint64();
        m_privilegeEscalationHasBeenSet = true;
    }

    if (rsp.HasMember("Malware") && !rsp["Malware"].IsNull())
    {
        if (!rsp["Malware"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Malware` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_malware = rsp["Malware"].GetUint64();
        m_malwareHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMachineRiskCntResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hostLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostLogin, allocator);
    }

    if (m_bruteAttackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAttack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bruteAttack, allocator);
    }

    if (m_maliciousRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maliciousRequest, allocator);
    }

    if (m_reverseShellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reverseShell, allocator);
    }

    if (m_bashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bash, allocator);
    }

    if (m_privilegeEscalationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeEscalation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeEscalation, allocator);
    }

    if (m_malwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Malware";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malware, allocator);
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


uint64_t DescribeMachineRiskCntResponse::GetHostLogin() const
{
    return m_hostLogin;
}

bool DescribeMachineRiskCntResponse::HostLoginHasBeenSet() const
{
    return m_hostLoginHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetBruteAttack() const
{
    return m_bruteAttack;
}

bool DescribeMachineRiskCntResponse::BruteAttackHasBeenSet() const
{
    return m_bruteAttackHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetMaliciousRequest() const
{
    return m_maliciousRequest;
}

bool DescribeMachineRiskCntResponse::MaliciousRequestHasBeenSet() const
{
    return m_maliciousRequestHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetReverseShell() const
{
    return m_reverseShell;
}

bool DescribeMachineRiskCntResponse::ReverseShellHasBeenSet() const
{
    return m_reverseShellHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetBash() const
{
    return m_bash;
}

bool DescribeMachineRiskCntResponse::BashHasBeenSet() const
{
    return m_bashHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetPrivilegeEscalation() const
{
    return m_privilegeEscalation;
}

bool DescribeMachineRiskCntResponse::PrivilegeEscalationHasBeenSet() const
{
    return m_privilegeEscalationHasBeenSet;
}

uint64_t DescribeMachineRiskCntResponse::GetMalware() const
{
    return m_malware;
}

bool DescribeMachineRiskCntResponse::MalwareHasBeenSet() const
{
    return m_malwareHasBeenSet;
}


