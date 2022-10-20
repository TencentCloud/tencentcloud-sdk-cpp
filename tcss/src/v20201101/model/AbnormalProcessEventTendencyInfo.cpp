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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessEventTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessEventTendencyInfo::AbnormalProcessEventTendencyInfo() :
    m_dateHasBeenSet(false),
    m_proxyToolEventCountHasBeenSet(false),
    m_transferControlEventCountHasBeenSet(false),
    m_attackCmdEventCountHasBeenSet(false),
    m_reverseShellEventCountHasBeenSet(false),
    m_filelessEventCountHasBeenSet(false),
    m_riskCmdEventCountHasBeenSet(false),
    m_abnormalChildProcessEventCountHasBeenSet(false),
    m_userDefinedRuleEventCountHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessEventTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("ProxyToolEventCount") && !value["ProxyToolEventCount"].IsNull())
    {
        if (!value["ProxyToolEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.ProxyToolEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyToolEventCount = value["ProxyToolEventCount"].GetInt64();
        m_proxyToolEventCountHasBeenSet = true;
    }

    if (value.HasMember("TransferControlEventCount") && !value["TransferControlEventCount"].IsNull())
    {
        if (!value["TransferControlEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.TransferControlEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferControlEventCount = value["TransferControlEventCount"].GetInt64();
        m_transferControlEventCountHasBeenSet = true;
    }

    if (value.HasMember("AttackCmdEventCount") && !value["AttackCmdEventCount"].IsNull())
    {
        if (!value["AttackCmdEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.AttackCmdEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCmdEventCount = value["AttackCmdEventCount"].GetInt64();
        m_attackCmdEventCountHasBeenSet = true;
    }

    if (value.HasMember("ReverseShellEventCount") && !value["ReverseShellEventCount"].IsNull())
    {
        if (!value["ReverseShellEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.ReverseShellEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reverseShellEventCount = value["ReverseShellEventCount"].GetInt64();
        m_reverseShellEventCountHasBeenSet = true;
    }

    if (value.HasMember("FilelessEventCount") && !value["FilelessEventCount"].IsNull())
    {
        if (!value["FilelessEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.FilelessEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filelessEventCount = value["FilelessEventCount"].GetInt64();
        m_filelessEventCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCmdEventCount") && !value["RiskCmdEventCount"].IsNull())
    {
        if (!value["RiskCmdEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.RiskCmdEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCmdEventCount = value["RiskCmdEventCount"].GetInt64();
        m_riskCmdEventCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalChildProcessEventCount") && !value["AbnormalChildProcessEventCount"].IsNull())
    {
        if (!value["AbnormalChildProcessEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.AbnormalChildProcessEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalChildProcessEventCount = value["AbnormalChildProcessEventCount"].GetInt64();
        m_abnormalChildProcessEventCountHasBeenSet = true;
    }

    if (value.HasMember("UserDefinedRuleEventCount") && !value["UserDefinedRuleEventCount"].IsNull())
    {
        if (!value["UserDefinedRuleEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventTendencyInfo.UserDefinedRuleEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userDefinedRuleEventCount = value["UserDefinedRuleEventCount"].GetInt64();
        m_userDefinedRuleEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessEventTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyToolEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyToolEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyToolEventCount, allocator);
    }

    if (m_transferControlEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferControlEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferControlEventCount, allocator);
    }

    if (m_attackCmdEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCmdEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCmdEventCount, allocator);
    }

    if (m_reverseShellEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShellEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reverseShellEventCount, allocator);
    }

    if (m_filelessEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilelessEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filelessEventCount, allocator);
    }

    if (m_riskCmdEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCmdEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCmdEventCount, allocator);
    }

    if (m_abnormalChildProcessEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalChildProcessEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalChildProcessEventCount, allocator);
    }

    if (m_userDefinedRuleEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedRuleEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userDefinedRuleEventCount, allocator);
    }

}


string AbnormalProcessEventTendencyInfo::GetDate() const
{
    return m_date;
}

void AbnormalProcessEventTendencyInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetProxyToolEventCount() const
{
    return m_proxyToolEventCount;
}

void AbnormalProcessEventTendencyInfo::SetProxyToolEventCount(const int64_t& _proxyToolEventCount)
{
    m_proxyToolEventCount = _proxyToolEventCount;
    m_proxyToolEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::ProxyToolEventCountHasBeenSet() const
{
    return m_proxyToolEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetTransferControlEventCount() const
{
    return m_transferControlEventCount;
}

void AbnormalProcessEventTendencyInfo::SetTransferControlEventCount(const int64_t& _transferControlEventCount)
{
    m_transferControlEventCount = _transferControlEventCount;
    m_transferControlEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::TransferControlEventCountHasBeenSet() const
{
    return m_transferControlEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetAttackCmdEventCount() const
{
    return m_attackCmdEventCount;
}

void AbnormalProcessEventTendencyInfo::SetAttackCmdEventCount(const int64_t& _attackCmdEventCount)
{
    m_attackCmdEventCount = _attackCmdEventCount;
    m_attackCmdEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::AttackCmdEventCountHasBeenSet() const
{
    return m_attackCmdEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetReverseShellEventCount() const
{
    return m_reverseShellEventCount;
}

void AbnormalProcessEventTendencyInfo::SetReverseShellEventCount(const int64_t& _reverseShellEventCount)
{
    m_reverseShellEventCount = _reverseShellEventCount;
    m_reverseShellEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::ReverseShellEventCountHasBeenSet() const
{
    return m_reverseShellEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetFilelessEventCount() const
{
    return m_filelessEventCount;
}

void AbnormalProcessEventTendencyInfo::SetFilelessEventCount(const int64_t& _filelessEventCount)
{
    m_filelessEventCount = _filelessEventCount;
    m_filelessEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::FilelessEventCountHasBeenSet() const
{
    return m_filelessEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetRiskCmdEventCount() const
{
    return m_riskCmdEventCount;
}

void AbnormalProcessEventTendencyInfo::SetRiskCmdEventCount(const int64_t& _riskCmdEventCount)
{
    m_riskCmdEventCount = _riskCmdEventCount;
    m_riskCmdEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::RiskCmdEventCountHasBeenSet() const
{
    return m_riskCmdEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetAbnormalChildProcessEventCount() const
{
    return m_abnormalChildProcessEventCount;
}

void AbnormalProcessEventTendencyInfo::SetAbnormalChildProcessEventCount(const int64_t& _abnormalChildProcessEventCount)
{
    m_abnormalChildProcessEventCount = _abnormalChildProcessEventCount;
    m_abnormalChildProcessEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::AbnormalChildProcessEventCountHasBeenSet() const
{
    return m_abnormalChildProcessEventCountHasBeenSet;
}

int64_t AbnormalProcessEventTendencyInfo::GetUserDefinedRuleEventCount() const
{
    return m_userDefinedRuleEventCount;
}

void AbnormalProcessEventTendencyInfo::SetUserDefinedRuleEventCount(const int64_t& _userDefinedRuleEventCount)
{
    m_userDefinedRuleEventCount = _userDefinedRuleEventCount;
    m_userDefinedRuleEventCountHasBeenSet = true;
}

bool AbnormalProcessEventTendencyInfo::UserDefinedRuleEventCountHasBeenSet() const
{
    return m_userDefinedRuleEventCountHasBeenSet;
}

