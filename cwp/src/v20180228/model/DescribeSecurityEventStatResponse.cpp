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

#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventStatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeSecurityEventStatResponse::DescribeSecurityEventStatResponse() :
    m_malwareStatHasBeenSet(false),
    m_hostLoginStatHasBeenSet(false),
    m_bruteAttackStatHasBeenSet(false),
    m_maliciousRequestStatHasBeenSet(false),
    m_privilegeStatHasBeenSet(false),
    m_reverseShellStatHasBeenSet(false),
    m_highRiskBashStatHasBeenSet(false),
    m_attackLogsStatHasBeenSet(false),
    m_vulHighStatHasBeenSet(false),
    m_vulNormalStatHasBeenSet(false),
    m_vulLowStatHasBeenSet(false),
    m_baselineHighStatHasBeenSet(false),
    m_baselineNormalStatHasBeenSet(false),
    m_baselineLowStatHasBeenSet(false),
    m_machineTotalAffectNumHasBeenSet(false),
    m_invasionTotalAffectNumHasBeenSet(false),
    m_vulTotalAffectNumHasBeenSet(false),
    m_baseLineTotalAffectNumHasBeenSet(false),
    m_cyberAttackTotalAffectNumHasBeenSet(false),
    m_vulRiskStatHasBeenSet(false),
    m_baselineRiskStatHasBeenSet(false),
    m_vulStatHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityEventStatResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MalwareStat") && !rsp["MalwareStat"].IsNull())
    {
        if (!rsp["MalwareStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MalwareStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_malwareStat.Deserialize(rsp["MalwareStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_malwareStatHasBeenSet = true;
    }

    if (rsp.HasMember("HostLoginStat") && !rsp["HostLoginStat"].IsNull())
    {
        if (!rsp["HostLoginStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostLoginStat.Deserialize(rsp["HostLoginStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostLoginStatHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttackStat") && !rsp["BruteAttackStat"].IsNull())
    {
        if (!rsp["BruteAttackStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bruteAttackStat.Deserialize(rsp["BruteAttackStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bruteAttackStatHasBeenSet = true;
    }

    if (rsp.HasMember("MaliciousRequestStat") && !rsp["MaliciousRequestStat"].IsNull())
    {
        if (!rsp["MaliciousRequestStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequestStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maliciousRequestStat.Deserialize(rsp["MaliciousRequestStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maliciousRequestStatHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeStat") && !rsp["PrivilegeStat"].IsNull())
    {
        if (!rsp["PrivilegeStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilegeStat.Deserialize(rsp["PrivilegeStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeStatHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShellStat") && !rsp["ReverseShellStat"].IsNull())
    {
        if (!rsp["ReverseShellStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reverseShellStat.Deserialize(rsp["ReverseShellStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reverseShellStatHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskBashStat") && !rsp["HighRiskBashStat"].IsNull())
    {
        if (!rsp["HighRiskBashStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskBashStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highRiskBashStat.Deserialize(rsp["HighRiskBashStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highRiskBashStatHasBeenSet = true;
    }

    if (rsp.HasMember("AttackLogsStat") && !rsp["AttackLogsStat"].IsNull())
    {
        if (!rsp["AttackLogsStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AttackLogsStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attackLogsStat.Deserialize(rsp["AttackLogsStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attackLogsStatHasBeenSet = true;
    }

    if (rsp.HasMember("VulHighStat") && !rsp["VulHighStat"].IsNull())
    {
        if (!rsp["VulHighStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulHighStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulHighStat.Deserialize(rsp["VulHighStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulHighStatHasBeenSet = true;
    }

    if (rsp.HasMember("VulNormalStat") && !rsp["VulNormalStat"].IsNull())
    {
        if (!rsp["VulNormalStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulNormalStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulNormalStat.Deserialize(rsp["VulNormalStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulNormalStatHasBeenSet = true;
    }

    if (rsp.HasMember("VulLowStat") && !rsp["VulLowStat"].IsNull())
    {
        if (!rsp["VulLowStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulLowStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulLowStat.Deserialize(rsp["VulLowStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulLowStatHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineHighStat") && !rsp["BaselineHighStat"].IsNull())
    {
        if (!rsp["BaselineHighStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHighStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineHighStat.Deserialize(rsp["BaselineHighStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineHighStatHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineNormalStat") && !rsp["BaselineNormalStat"].IsNull())
    {
        if (!rsp["BaselineNormalStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineNormalStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineNormalStat.Deserialize(rsp["BaselineNormalStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineNormalStatHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineLowStat") && !rsp["BaselineLowStat"].IsNull())
    {
        if (!rsp["BaselineLowStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineLowStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineLowStat.Deserialize(rsp["BaselineLowStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineLowStatHasBeenSet = true;
    }

    if (rsp.HasMember("MachineTotalAffectNum") && !rsp["MachineTotalAffectNum"].IsNull())
    {
        if (!rsp["MachineTotalAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineTotalAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineTotalAffectNum = rsp["MachineTotalAffectNum"].GetUint64();
        m_machineTotalAffectNumHasBeenSet = true;
    }

    if (rsp.HasMember("InvasionTotalAffectNum") && !rsp["InvasionTotalAffectNum"].IsNull())
    {
        if (!rsp["InvasionTotalAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InvasionTotalAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invasionTotalAffectNum = rsp["InvasionTotalAffectNum"].GetUint64();
        m_invasionTotalAffectNumHasBeenSet = true;
    }

    if (rsp.HasMember("VulTotalAffectNum") && !rsp["VulTotalAffectNum"].IsNull())
    {
        if (!rsp["VulTotalAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTotalAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulTotalAffectNum = rsp["VulTotalAffectNum"].GetUint64();
        m_vulTotalAffectNumHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLineTotalAffectNum") && !rsp["BaseLineTotalAffectNum"].IsNull())
    {
        if (!rsp["BaseLineTotalAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseLineTotalAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseLineTotalAffectNum = rsp["BaseLineTotalAffectNum"].GetUint64();
        m_baseLineTotalAffectNumHasBeenSet = true;
    }

    if (rsp.HasMember("CyberAttackTotalAffectNum") && !rsp["CyberAttackTotalAffectNum"].IsNull())
    {
        if (!rsp["CyberAttackTotalAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CyberAttackTotalAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cyberAttackTotalAffectNum = rsp["CyberAttackTotalAffectNum"].GetUint64();
        m_cyberAttackTotalAffectNumHasBeenSet = true;
    }

    if (rsp.HasMember("VulRiskStat") && !rsp["VulRiskStat"].IsNull())
    {
        if (!rsp["VulRiskStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulRiskStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulRiskStat.Deserialize(rsp["VulRiskStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulRiskStatHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineRiskStat") && !rsp["BaselineRiskStat"].IsNull())
    {
        if (!rsp["BaselineRiskStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineRiskStat.Deserialize(rsp["BaselineRiskStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineRiskStatHasBeenSet = true;
    }

    if (rsp.HasMember("VulStat") && !rsp["VulStat"].IsNull())
    {
        if (!rsp["VulStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulStat.Deserialize(rsp["VulStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulStatHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityEventStatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_malwareStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_malwareStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostLoginStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLoginStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostLoginStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bruteAttackStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAttackStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bruteAttackStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maliciousRequestStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousRequestStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maliciousRequestStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privilegeStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilegeStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reverseShellStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShellStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reverseShellStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highRiskBashStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskBashStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highRiskBashStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attackLogsStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLogsStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attackLogsStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulHighStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulHighStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulHighStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulNormalStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNormalStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulNormalStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulLowStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLowStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulLowStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineHighStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineHighStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineHighStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineNormalStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineNormalStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineNormalStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineLowStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineLowStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineLowStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_machineTotalAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineTotalAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineTotalAffectNum, allocator);
    }

    if (m_invasionTotalAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasionTotalAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invasionTotalAffectNum, allocator);
    }

    if (m_vulTotalAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTotalAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulTotalAffectNum, allocator);
    }

    if (m_baseLineTotalAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLineTotalAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseLineTotalAffectNum, allocator);
    }

    if (m_cyberAttackTotalAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CyberAttackTotalAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cyberAttackTotalAffectNum, allocator);
    }

    if (m_vulRiskStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRiskStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulRiskStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineRiskStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineRiskStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineRiskStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
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


EventStat DescribeSecurityEventStatResponse::GetMalwareStat() const
{
    return m_malwareStat;
}

bool DescribeSecurityEventStatResponse::MalwareStatHasBeenSet() const
{
    return m_malwareStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetHostLoginStat() const
{
    return m_hostLoginStat;
}

bool DescribeSecurityEventStatResponse::HostLoginStatHasBeenSet() const
{
    return m_hostLoginStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetBruteAttackStat() const
{
    return m_bruteAttackStat;
}

bool DescribeSecurityEventStatResponse::BruteAttackStatHasBeenSet() const
{
    return m_bruteAttackStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetMaliciousRequestStat() const
{
    return m_maliciousRequestStat;
}

bool DescribeSecurityEventStatResponse::MaliciousRequestStatHasBeenSet() const
{
    return m_maliciousRequestStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetPrivilegeStat() const
{
    return m_privilegeStat;
}

bool DescribeSecurityEventStatResponse::PrivilegeStatHasBeenSet() const
{
    return m_privilegeStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetReverseShellStat() const
{
    return m_reverseShellStat;
}

bool DescribeSecurityEventStatResponse::ReverseShellStatHasBeenSet() const
{
    return m_reverseShellStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetHighRiskBashStat() const
{
    return m_highRiskBashStat;
}

bool DescribeSecurityEventStatResponse::HighRiskBashStatHasBeenSet() const
{
    return m_highRiskBashStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetAttackLogsStat() const
{
    return m_attackLogsStat;
}

bool DescribeSecurityEventStatResponse::AttackLogsStatHasBeenSet() const
{
    return m_attackLogsStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetVulHighStat() const
{
    return m_vulHighStat;
}

bool DescribeSecurityEventStatResponse::VulHighStatHasBeenSet() const
{
    return m_vulHighStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetVulNormalStat() const
{
    return m_vulNormalStat;
}

bool DescribeSecurityEventStatResponse::VulNormalStatHasBeenSet() const
{
    return m_vulNormalStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetVulLowStat() const
{
    return m_vulLowStat;
}

bool DescribeSecurityEventStatResponse::VulLowStatHasBeenSet() const
{
    return m_vulLowStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetBaselineHighStat() const
{
    return m_baselineHighStat;
}

bool DescribeSecurityEventStatResponse::BaselineHighStatHasBeenSet() const
{
    return m_baselineHighStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetBaselineNormalStat() const
{
    return m_baselineNormalStat;
}

bool DescribeSecurityEventStatResponse::BaselineNormalStatHasBeenSet() const
{
    return m_baselineNormalStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetBaselineLowStat() const
{
    return m_baselineLowStat;
}

bool DescribeSecurityEventStatResponse::BaselineLowStatHasBeenSet() const
{
    return m_baselineLowStatHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetMachineTotalAffectNum() const
{
    return m_machineTotalAffectNum;
}

bool DescribeSecurityEventStatResponse::MachineTotalAffectNumHasBeenSet() const
{
    return m_machineTotalAffectNumHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetInvasionTotalAffectNum() const
{
    return m_invasionTotalAffectNum;
}

bool DescribeSecurityEventStatResponse::InvasionTotalAffectNumHasBeenSet() const
{
    return m_invasionTotalAffectNumHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetVulTotalAffectNum() const
{
    return m_vulTotalAffectNum;
}

bool DescribeSecurityEventStatResponse::VulTotalAffectNumHasBeenSet() const
{
    return m_vulTotalAffectNumHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetBaseLineTotalAffectNum() const
{
    return m_baseLineTotalAffectNum;
}

bool DescribeSecurityEventStatResponse::BaseLineTotalAffectNumHasBeenSet() const
{
    return m_baseLineTotalAffectNumHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetCyberAttackTotalAffectNum() const
{
    return m_cyberAttackTotalAffectNum;
}

bool DescribeSecurityEventStatResponse::CyberAttackTotalAffectNumHasBeenSet() const
{
    return m_cyberAttackTotalAffectNumHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetVulRiskStat() const
{
    return m_vulRiskStat;
}

bool DescribeSecurityEventStatResponse::VulRiskStatHasBeenSet() const
{
    return m_vulRiskStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetBaselineRiskStat() const
{
    return m_baselineRiskStat;
}

bool DescribeSecurityEventStatResponse::BaselineRiskStatHasBeenSet() const
{
    return m_baselineRiskStatHasBeenSet;
}

EventStat DescribeSecurityEventStatResponse::GetVulStat() const
{
    return m_vulStat;
}

bool DescribeSecurityEventStatResponse::VulStatHasBeenSet() const
{
    return m_vulStatHasBeenSet;
}

uint64_t DescribeSecurityEventStatResponse::GetScore() const
{
    return m_score;
}

bool DescribeSecurityEventStatResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}


