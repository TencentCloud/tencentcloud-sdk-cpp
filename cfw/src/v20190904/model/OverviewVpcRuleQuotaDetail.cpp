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

#include <tencentcloud/cfw/v20190904/model/OverviewVpcRuleQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewVpcRuleQuotaDetail::OverviewVpcRuleQuotaDetail() :
    m_allowedNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_remainQuotaHasBeenSet(false),
    m_remainExtensionNumHasBeenSet(false),
    m_globalRuleNumHasBeenSet(false),
    m_globalEnableRuleNumHasBeenSet(false),
    m_edgeRuleNumHasBeenSet(false),
    m_edgeEnableRuleNumHasBeenSet(false),
    m_v4RuleTotalHasBeenSet(false),
    m_v4EnableRuleTotalHasBeenSet(false),
    m_v6RuleTotalHasBeenSet(false),
    m_v6EnableRuleTotalHasBeenSet(false),
    m_isSwitchEnableHasBeenSet(false)
{
}

CoreInternalOutcome OverviewVpcRuleQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllowedNum") && !value["AllowedNum"].IsNull())
    {
        if (!value["AllowedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.AllowedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowedNum = value["AllowedNum"].GetInt64();
        m_allowedNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("RemainQuota") && !value["RemainQuota"].IsNull())
    {
        if (!value["RemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.RemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainQuota = value["RemainQuota"].GetInt64();
        m_remainQuotaHasBeenSet = true;
    }

    if (value.HasMember("RemainExtensionNum") && !value["RemainExtensionNum"].IsNull())
    {
        if (!value["RemainExtensionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.RemainExtensionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainExtensionNum = value["RemainExtensionNum"].GetInt64();
        m_remainExtensionNumHasBeenSet = true;
    }

    if (value.HasMember("GlobalRuleNum") && !value["GlobalRuleNum"].IsNull())
    {
        if (!value["GlobalRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.GlobalRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_globalRuleNum = value["GlobalRuleNum"].GetInt64();
        m_globalRuleNumHasBeenSet = true;
    }

    if (value.HasMember("GlobalEnableRuleNum") && !value["GlobalEnableRuleNum"].IsNull())
    {
        if (!value["GlobalEnableRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.GlobalEnableRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_globalEnableRuleNum = value["GlobalEnableRuleNum"].GetInt64();
        m_globalEnableRuleNumHasBeenSet = true;
    }

    if (value.HasMember("EdgeRuleNum") && !value["EdgeRuleNum"].IsNull())
    {
        if (!value["EdgeRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.EdgeRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeRuleNum = value["EdgeRuleNum"].GetInt64();
        m_edgeRuleNumHasBeenSet = true;
    }

    if (value.HasMember("EdgeEnableRuleNum") && !value["EdgeEnableRuleNum"].IsNull())
    {
        if (!value["EdgeEnableRuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.EdgeEnableRuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeEnableRuleNum = value["EdgeEnableRuleNum"].GetInt64();
        m_edgeEnableRuleNumHasBeenSet = true;
    }

    if (value.HasMember("V4RuleTotal") && !value["V4RuleTotal"].IsNull())
    {
        if (!value["V4RuleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.V4RuleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_v4RuleTotal = value["V4RuleTotal"].GetInt64();
        m_v4RuleTotalHasBeenSet = true;
    }

    if (value.HasMember("V4EnableRuleTotal") && !value["V4EnableRuleTotal"].IsNull())
    {
        if (!value["V4EnableRuleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.V4EnableRuleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_v4EnableRuleTotal = value["V4EnableRuleTotal"].GetInt64();
        m_v4EnableRuleTotalHasBeenSet = true;
    }

    if (value.HasMember("V6RuleTotal") && !value["V6RuleTotal"].IsNull())
    {
        if (!value["V6RuleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.V6RuleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_v6RuleTotal = value["V6RuleTotal"].GetInt64();
        m_v6RuleTotalHasBeenSet = true;
    }

    if (value.HasMember("V6EnableRuleTotal") && !value["V6EnableRuleTotal"].IsNull())
    {
        if (!value["V6EnableRuleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.V6EnableRuleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_v6EnableRuleTotal = value["V6EnableRuleTotal"].GetInt64();
        m_v6EnableRuleTotalHasBeenSet = true;
    }

    if (value.HasMember("IsSwitchEnable") && !value["IsSwitchEnable"].IsNull())
    {
        if (!value["IsSwitchEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewVpcRuleQuotaDetail.IsSwitchEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSwitchEnable = value["IsSwitchEnable"].GetInt64();
        m_isSwitchEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewVpcRuleQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allowedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowedNum, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_remainQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainQuota, allocator);
    }

    if (m_remainExtensionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainExtensionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainExtensionNum, allocator);
    }

    if (m_globalRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalRuleNum, allocator);
    }

    if (m_globalEnableRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalEnableRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalEnableRuleNum, allocator);
    }

    if (m_edgeRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeRuleNum, allocator);
    }

    if (m_edgeEnableRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeEnableRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeEnableRuleNum, allocator);
    }

    if (m_v4RuleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V4RuleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_v4RuleTotal, allocator);
    }

    if (m_v4EnableRuleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V4EnableRuleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_v4EnableRuleTotal, allocator);
    }

    if (m_v6RuleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V6RuleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_v6RuleTotal, allocator);
    }

    if (m_v6EnableRuleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V6EnableRuleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_v6EnableRuleTotal, allocator);
    }

    if (m_isSwitchEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSwitchEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSwitchEnable, allocator);
    }

}


int64_t OverviewVpcRuleQuotaDetail::GetAllowedNum() const
{
    return m_allowedNum;
}

void OverviewVpcRuleQuotaDetail::SetAllowedNum(const int64_t& _allowedNum)
{
    m_allowedNum = _allowedNum;
    m_allowedNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::AllowedNumHasBeenSet() const
{
    return m_allowedNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetUsedNum() const
{
    return m_usedNum;
}

void OverviewVpcRuleQuotaDetail::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetRemainQuota() const
{
    return m_remainQuota;
}

void OverviewVpcRuleQuotaDetail::SetRemainQuota(const int64_t& _remainQuota)
{
    m_remainQuota = _remainQuota;
    m_remainQuotaHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::RemainQuotaHasBeenSet() const
{
    return m_remainQuotaHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetRemainExtensionNum() const
{
    return m_remainExtensionNum;
}

void OverviewVpcRuleQuotaDetail::SetRemainExtensionNum(const int64_t& _remainExtensionNum)
{
    m_remainExtensionNum = _remainExtensionNum;
    m_remainExtensionNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::RemainExtensionNumHasBeenSet() const
{
    return m_remainExtensionNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetGlobalRuleNum() const
{
    return m_globalRuleNum;
}

void OverviewVpcRuleQuotaDetail::SetGlobalRuleNum(const int64_t& _globalRuleNum)
{
    m_globalRuleNum = _globalRuleNum;
    m_globalRuleNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::GlobalRuleNumHasBeenSet() const
{
    return m_globalRuleNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetGlobalEnableRuleNum() const
{
    return m_globalEnableRuleNum;
}

void OverviewVpcRuleQuotaDetail::SetGlobalEnableRuleNum(const int64_t& _globalEnableRuleNum)
{
    m_globalEnableRuleNum = _globalEnableRuleNum;
    m_globalEnableRuleNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::GlobalEnableRuleNumHasBeenSet() const
{
    return m_globalEnableRuleNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetEdgeRuleNum() const
{
    return m_edgeRuleNum;
}

void OverviewVpcRuleQuotaDetail::SetEdgeRuleNum(const int64_t& _edgeRuleNum)
{
    m_edgeRuleNum = _edgeRuleNum;
    m_edgeRuleNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::EdgeRuleNumHasBeenSet() const
{
    return m_edgeRuleNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetEdgeEnableRuleNum() const
{
    return m_edgeEnableRuleNum;
}

void OverviewVpcRuleQuotaDetail::SetEdgeEnableRuleNum(const int64_t& _edgeEnableRuleNum)
{
    m_edgeEnableRuleNum = _edgeEnableRuleNum;
    m_edgeEnableRuleNumHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::EdgeEnableRuleNumHasBeenSet() const
{
    return m_edgeEnableRuleNumHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetV4RuleTotal() const
{
    return m_v4RuleTotal;
}

void OverviewVpcRuleQuotaDetail::SetV4RuleTotal(const int64_t& _v4RuleTotal)
{
    m_v4RuleTotal = _v4RuleTotal;
    m_v4RuleTotalHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::V4RuleTotalHasBeenSet() const
{
    return m_v4RuleTotalHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetV4EnableRuleTotal() const
{
    return m_v4EnableRuleTotal;
}

void OverviewVpcRuleQuotaDetail::SetV4EnableRuleTotal(const int64_t& _v4EnableRuleTotal)
{
    m_v4EnableRuleTotal = _v4EnableRuleTotal;
    m_v4EnableRuleTotalHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::V4EnableRuleTotalHasBeenSet() const
{
    return m_v4EnableRuleTotalHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetV6RuleTotal() const
{
    return m_v6RuleTotal;
}

void OverviewVpcRuleQuotaDetail::SetV6RuleTotal(const int64_t& _v6RuleTotal)
{
    m_v6RuleTotal = _v6RuleTotal;
    m_v6RuleTotalHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::V6RuleTotalHasBeenSet() const
{
    return m_v6RuleTotalHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetV6EnableRuleTotal() const
{
    return m_v6EnableRuleTotal;
}

void OverviewVpcRuleQuotaDetail::SetV6EnableRuleTotal(const int64_t& _v6EnableRuleTotal)
{
    m_v6EnableRuleTotal = _v6EnableRuleTotal;
    m_v6EnableRuleTotalHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::V6EnableRuleTotalHasBeenSet() const
{
    return m_v6EnableRuleTotalHasBeenSet;
}

int64_t OverviewVpcRuleQuotaDetail::GetIsSwitchEnable() const
{
    return m_isSwitchEnable;
}

void OverviewVpcRuleQuotaDetail::SetIsSwitchEnable(const int64_t& _isSwitchEnable)
{
    m_isSwitchEnable = _isSwitchEnable;
    m_isSwitchEnableHasBeenSet = true;
}

bool OverviewVpcRuleQuotaDetail::IsSwitchEnableHasBeenSet() const
{
    return m_isSwitchEnableHasBeenSet;
}

