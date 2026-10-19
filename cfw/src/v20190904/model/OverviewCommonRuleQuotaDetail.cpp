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

#include <tencentcloud/cfw/v20190904/model/OverviewCommonRuleQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewCommonRuleQuotaDetail::OverviewCommonRuleQuotaDetail() :
    m_allowedNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_remainQuotaHasBeenSet(false),
    m_remainExtensionNumHasBeenSet(false),
    m_inTotalHasBeenSet(false),
    m_inEnableNumHasBeenSet(false),
    m_outTotalHasBeenSet(false),
    m_outEnableNumHasBeenSet(false)
{
}

CoreInternalOutcome OverviewCommonRuleQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllowedNum") && !value["AllowedNum"].IsNull())
    {
        if (!value["AllowedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.AllowedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowedNum = value["AllowedNum"].GetInt64();
        m_allowedNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("RemainQuota") && !value["RemainQuota"].IsNull())
    {
        if (!value["RemainQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.RemainQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainQuota = value["RemainQuota"].GetInt64();
        m_remainQuotaHasBeenSet = true;
    }

    if (value.HasMember("RemainExtensionNum") && !value["RemainExtensionNum"].IsNull())
    {
        if (!value["RemainExtensionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.RemainExtensionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainExtensionNum = value["RemainExtensionNum"].GetInt64();
        m_remainExtensionNumHasBeenSet = true;
    }

    if (value.HasMember("InTotal") && !value["InTotal"].IsNull())
    {
        if (!value["InTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.InTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inTotal = value["InTotal"].GetInt64();
        m_inTotalHasBeenSet = true;
    }

    if (value.HasMember("InEnableNum") && !value["InEnableNum"].IsNull())
    {
        if (!value["InEnableNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.InEnableNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inEnableNum = value["InEnableNum"].GetInt64();
        m_inEnableNumHasBeenSet = true;
    }

    if (value.HasMember("OutTotal") && !value["OutTotal"].IsNull())
    {
        if (!value["OutTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.OutTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outTotal = value["OutTotal"].GetInt64();
        m_outTotalHasBeenSet = true;
    }

    if (value.HasMember("OutEnableNum") && !value["OutEnableNum"].IsNull())
    {
        if (!value["OutEnableNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewCommonRuleQuotaDetail.OutEnableNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outEnableNum = value["OutEnableNum"].GetInt64();
        m_outEnableNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewCommonRuleQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inTotal, allocator);
    }

    if (m_inEnableNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InEnableNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inEnableNum, allocator);
    }

    if (m_outTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outTotal, allocator);
    }

    if (m_outEnableNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutEnableNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outEnableNum, allocator);
    }

}


int64_t OverviewCommonRuleQuotaDetail::GetAllowedNum() const
{
    return m_allowedNum;
}

void OverviewCommonRuleQuotaDetail::SetAllowedNum(const int64_t& _allowedNum)
{
    m_allowedNum = _allowedNum;
    m_allowedNumHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::AllowedNumHasBeenSet() const
{
    return m_allowedNumHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetUsedNum() const
{
    return m_usedNum;
}

void OverviewCommonRuleQuotaDetail::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetRemainQuota() const
{
    return m_remainQuota;
}

void OverviewCommonRuleQuotaDetail::SetRemainQuota(const int64_t& _remainQuota)
{
    m_remainQuota = _remainQuota;
    m_remainQuotaHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::RemainQuotaHasBeenSet() const
{
    return m_remainQuotaHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetRemainExtensionNum() const
{
    return m_remainExtensionNum;
}

void OverviewCommonRuleQuotaDetail::SetRemainExtensionNum(const int64_t& _remainExtensionNum)
{
    m_remainExtensionNum = _remainExtensionNum;
    m_remainExtensionNumHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::RemainExtensionNumHasBeenSet() const
{
    return m_remainExtensionNumHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetInTotal() const
{
    return m_inTotal;
}

void OverviewCommonRuleQuotaDetail::SetInTotal(const int64_t& _inTotal)
{
    m_inTotal = _inTotal;
    m_inTotalHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::InTotalHasBeenSet() const
{
    return m_inTotalHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetInEnableNum() const
{
    return m_inEnableNum;
}

void OverviewCommonRuleQuotaDetail::SetInEnableNum(const int64_t& _inEnableNum)
{
    m_inEnableNum = _inEnableNum;
    m_inEnableNumHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::InEnableNumHasBeenSet() const
{
    return m_inEnableNumHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetOutTotal() const
{
    return m_outTotal;
}

void OverviewCommonRuleQuotaDetail::SetOutTotal(const int64_t& _outTotal)
{
    m_outTotal = _outTotal;
    m_outTotalHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::OutTotalHasBeenSet() const
{
    return m_outTotalHasBeenSet;
}

int64_t OverviewCommonRuleQuotaDetail::GetOutEnableNum() const
{
    return m_outEnableNum;
}

void OverviewCommonRuleQuotaDetail::SetOutEnableNum(const int64_t& _outEnableNum)
{
    m_outEnableNum = _outEnableNum;
    m_outEnableNumHasBeenSet = true;
}

bool OverviewCommonRuleQuotaDetail::OutEnableNumHasBeenSet() const
{
    return m_outEnableNumHasBeenSet;
}

