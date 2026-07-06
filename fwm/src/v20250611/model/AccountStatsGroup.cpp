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

#include <tencentcloud/fwm/v20250611/model/AccountStatsGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

AccountStatsGroup::AccountStatsGroup() :
    m_memberHasBeenSet(false),
    m_untreatedRiskCountHasBeenSet(false),
    m_productStatsHasBeenSet(false),
    m_rectifyRateHasBeenSet(false)
{
}

CoreInternalOutcome AccountStatsGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Member") && !value["Member"].IsNull())
    {
        if (!value["Member"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountStatsGroup.Member` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_member.Deserialize(value["Member"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memberHasBeenSet = true;
    }

    if (value.HasMember("UntreatedRiskCount") && !value["UntreatedRiskCount"].IsNull())
    {
        if (!value["UntreatedRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountStatsGroup.UntreatedRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_untreatedRiskCount = value["UntreatedRiskCount"].GetInt64();
        m_untreatedRiskCountHasBeenSet = true;
    }

    if (value.HasMember("ProductStats") && !value["ProductStats"].IsNull())
    {
        if (!value["ProductStats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountStatsGroup.ProductStats` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductStats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountProductDetailStats item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productStats.push_back(item);
        }
        m_productStatsHasBeenSet = true;
    }

    if (value.HasMember("RectifyRate") && !value["RectifyRate"].IsNull())
    {
        if (!value["RectifyRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountStatsGroup.RectifyRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rectifyRate = string(value["RectifyRate"].GetString());
        m_rectifyRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountStatsGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Member";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_member.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_untreatedRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntreatedRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_untreatedRiskCount, allocator);
    }

    if (m_productStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productStats.begin(); itr != m_productStats.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rectifyRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RectifyRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rectifyRate.c_str(), allocator).Move(), allocator);
    }

}


MemberInfo AccountStatsGroup::GetMember() const
{
    return m_member;
}

void AccountStatsGroup::SetMember(const MemberInfo& _member)
{
    m_member = _member;
    m_memberHasBeenSet = true;
}

bool AccountStatsGroup::MemberHasBeenSet() const
{
    return m_memberHasBeenSet;
}

int64_t AccountStatsGroup::GetUntreatedRiskCount() const
{
    return m_untreatedRiskCount;
}

void AccountStatsGroup::SetUntreatedRiskCount(const int64_t& _untreatedRiskCount)
{
    m_untreatedRiskCount = _untreatedRiskCount;
    m_untreatedRiskCountHasBeenSet = true;
}

bool AccountStatsGroup::UntreatedRiskCountHasBeenSet() const
{
    return m_untreatedRiskCountHasBeenSet;
}

vector<AccountProductDetailStats> AccountStatsGroup::GetProductStats() const
{
    return m_productStats;
}

void AccountStatsGroup::SetProductStats(const vector<AccountProductDetailStats>& _productStats)
{
    m_productStats = _productStats;
    m_productStatsHasBeenSet = true;
}

bool AccountStatsGroup::ProductStatsHasBeenSet() const
{
    return m_productStatsHasBeenSet;
}

string AccountStatsGroup::GetRectifyRate() const
{
    return m_rectifyRate;
}

void AccountStatsGroup::SetRectifyRate(const string& _rectifyRate)
{
    m_rectifyRate = _rectifyRate;
    m_rectifyRateHasBeenSet = true;
}

bool AccountStatsGroup::RectifyRateHasBeenSet() const
{
    return m_rectifyRateHasBeenSet;
}

