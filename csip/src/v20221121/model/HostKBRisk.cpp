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

#include <tencentcloud/csip/v20221121/model/HostKBRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostKBRisk::HostKBRisk() :
    m_riskIDHasBeenSet(false),
    m_kBDetailHasBeenSet(false),
    m_effectHostCountHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_riskStatusHasBeenSet(false)
{
}

CoreInternalOutcome HostKBRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.RiskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = value["RiskID"].GetUint64();
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("KBDetail") && !value["KBDetail"].IsNull())
    {
        if (!value["KBDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.KBDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kBDetail.Deserialize(value["KBDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kBDetailHasBeenSet = true;
    }

    if (value.HasMember("EffectHostCount") && !value["EffectHostCount"].IsNull())
    {
        if (!value["EffectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.EffectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectHostCount = value["EffectHostCount"].GetUint64();
        m_effectHostCountHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.Account` is not array type"));

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

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostKBRisk.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostKBRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskID, allocator);
    }

    if (m_kBDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kBDetail.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

}


uint64_t HostKBRisk::GetRiskID() const
{
    return m_riskID;
}

void HostKBRisk::SetRiskID(const uint64_t& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool HostKBRisk::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

KBDetail HostKBRisk::GetKBDetail() const
{
    return m_kBDetail;
}

void HostKBRisk::SetKBDetail(const KBDetail& _kBDetail)
{
    m_kBDetail = _kBDetail;
    m_kBDetailHasBeenSet = true;
}

bool HostKBRisk::KBDetailHasBeenSet() const
{
    return m_kBDetailHasBeenSet;
}

uint64_t HostKBRisk::GetEffectHostCount() const
{
    return m_effectHostCount;
}

void HostKBRisk::SetEffectHostCount(const uint64_t& _effectHostCount)
{
    m_effectHostCount = _effectHostCount;
    m_effectHostCountHasBeenSet = true;
}

bool HostKBRisk::EffectHostCountHasBeenSet() const
{
    return m_effectHostCountHasBeenSet;
}

string HostKBRisk::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void HostKBRisk::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool HostKBRisk::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

vector<AccountBriefInfo> HostKBRisk::GetAccount() const
{
    return m_account;
}

void HostKBRisk::SetAccount(const vector<AccountBriefInfo>& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool HostKBRisk::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string HostKBRisk::GetRiskStatus() const
{
    return m_riskStatus;
}

void HostKBRisk::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool HostKBRisk::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

