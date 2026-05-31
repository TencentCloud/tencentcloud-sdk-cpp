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

#include <tencentcloud/tokenhub/v20260322/model/UsageRankItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

UsageRankItem::UsageRankItem() :
    m_rankHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statsHasBeenSet(false),
    m_seriesHasBeenSet(false)
{
}

CoreInternalOutcome UsageRankItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRankItem.Rank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetInt64();
        m_rankHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRankItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRankItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Stats") && !value["Stats"].IsNull())
    {
        if (!value["Stats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRankItem.Stats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stats.Deserialize(value["Stats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statsHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRankItem.Series` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_series.Deserialize(value["Series"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageRankItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stats.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_series.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t UsageRankItem::GetRank() const
{
    return m_rank;
}

void UsageRankItem::SetRank(const int64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool UsageRankItem::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

string UsageRankItem::GetKey() const
{
    return m_key;
}

void UsageRankItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool UsageRankItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string UsageRankItem::GetName() const
{
    return m_name;
}

void UsageRankItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UsageRankItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

UsageStats UsageRankItem::GetStats() const
{
    return m_stats;
}

void UsageRankItem::SetStats(const UsageStats& _stats)
{
    m_stats = _stats;
    m_statsHasBeenSet = true;
}

bool UsageRankItem::StatsHasBeenSet() const
{
    return m_statsHasBeenSet;
}

UsageSeries UsageRankItem::GetSeries() const
{
    return m_series;
}

void UsageRankItem::SetSeries(const UsageSeries& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool UsageRankItem::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

