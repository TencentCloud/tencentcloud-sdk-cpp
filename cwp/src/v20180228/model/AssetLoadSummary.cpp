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

#include <tencentcloud/cwp/v20180228/model/AssetLoadSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetLoadSummary::AssetLoadSummary() :
    m_countsHasBeenSet(false),
    m_top5HasBeenSet(false)
{
}

CoreInternalOutcome AssetLoadSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Counts") && !value["Counts"].IsNull())
    {
        if (!value["Counts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetLoadSummary.Counts` is not array type"));

        const rapidjson::Value &tmpValue = value["Counts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_counts.push_back((*itr).GetUint64());
        }
        m_countsHasBeenSet = true;
    }

    if (value.HasMember("Top5") && !value["Top5"].IsNull())
    {
        if (!value["Top5"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetLoadSummary.Top5` is not array type"));

        const rapidjson::Value &tmpValue = value["Top5"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetLoadDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_top5.push_back(item);
        }
        m_top5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetLoadSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Counts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_counts.begin(); itr != m_counts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_top5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_top5.begin(); itr != m_top5.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<uint64_t> AssetLoadSummary::GetCounts() const
{
    return m_counts;
}

void AssetLoadSummary::SetCounts(const vector<uint64_t>& _counts)
{
    m_counts = _counts;
    m_countsHasBeenSet = true;
}

bool AssetLoadSummary::CountsHasBeenSet() const
{
    return m_countsHasBeenSet;
}

vector<AssetLoadDetail> AssetLoadSummary::GetTop5() const
{
    return m_top5;
}

void AssetLoadSummary::SetTop5(const vector<AssetLoadDetail>& _top5)
{
    m_top5 = _top5;
    m_top5HasBeenSet = true;
}

bool AssetLoadSummary::Top5HasBeenSet() const
{
    return m_top5HasBeenSet;
}

