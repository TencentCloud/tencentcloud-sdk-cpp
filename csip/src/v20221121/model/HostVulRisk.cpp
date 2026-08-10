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

#include <tencentcloud/csip/v20221121/model/HostVulRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostVulRisk::HostVulRisk() :
    m_riskIDHasBeenSet(false),
    m_effectHostCountHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_vulDetailHasBeenSet(false)
{
}

CoreInternalOutcome HostVulRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.RiskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = value["RiskID"].GetUint64();
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("EffectHostCount") && !value["EffectHostCount"].IsNull())
    {
        if (!value["EffectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.EffectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectHostCount = value["EffectHostCount"].GetUint64();
        m_effectHostCountHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.Account` is not array type"));

        const rapidjson::Value &tmpValue = value["Account"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_account.push_back(item);
        }
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("VulDetail") && !value["VulDetail"].IsNull())
    {
        if (!value["VulDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulRisk.VulDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulDetail.Deserialize(value["VulDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVulRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskID, allocator);
    }

    if (m_effectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectHostCount, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_account.begin(); itr != m_account.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vulDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t HostVulRisk::GetRiskID() const
{
    return m_riskID;
}

void HostVulRisk::SetRiskID(const uint64_t& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool HostVulRisk::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

uint64_t HostVulRisk::GetEffectHostCount() const
{
    return m_effectHostCount;
}

void HostVulRisk::SetEffectHostCount(const uint64_t& _effectHostCount)
{
    m_effectHostCount = _effectHostCount;
    m_effectHostCountHasBeenSet = true;
}

bool HostVulRisk::EffectHostCountHasBeenSet() const
{
    return m_effectHostCountHasBeenSet;
}

string HostVulRisk::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void HostVulRisk::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool HostVulRisk::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

vector<AccountBriefInfo> HostVulRisk::GetAccount() const
{
    return m_account;
}

void HostVulRisk::SetAccount(const vector<AccountBriefInfo>& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool HostVulRisk::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string HostVulRisk::GetDefendStatus() const
{
    return m_defendStatus;
}

void HostVulRisk::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool HostVulRisk::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

string HostVulRisk::GetRiskStatus() const
{
    return m_riskStatus;
}

void HostVulRisk::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool HostVulRisk::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

VulDetailInfo HostVulRisk::GetVulDetail() const
{
    return m_vulDetail;
}

void HostVulRisk::SetVulDetail(const VulDetailInfo& _vulDetail)
{
    m_vulDetail = _vulDetail;
    m_vulDetailHasBeenSet = true;
}

bool HostVulRisk::VulDetailHasBeenSet() const
{
    return m_vulDetailHasBeenSet;
}

