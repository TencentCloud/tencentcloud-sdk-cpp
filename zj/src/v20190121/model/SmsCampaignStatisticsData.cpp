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

#include <tencentcloud/zj/v20190121/model/SmsCampaignStatisticsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

SmsCampaignStatisticsData::SmsCampaignStatisticsData() :
    m_campaignIdHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome SmsCampaignStatisticsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CampaignId") && !value["CampaignId"].IsNull())
    {
        if (!value["CampaignId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsData.CampaignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_campaignId = value["CampaignId"].GetUint64();
        m_campaignIdHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsData.Statistics` is not array type"));

        const rapidjson::Value &tmpValue = value["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmsCampaignStatisticsCrowdData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsCampaignStatisticsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_campaignIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampaignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_campaignId, allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SmsCampaignStatisticsData::GetCampaignId() const
{
    return m_campaignId;
}

void SmsCampaignStatisticsData::SetCampaignId(const uint64_t& _campaignId)
{
    m_campaignId = _campaignId;
    m_campaignIdHasBeenSet = true;
}

bool SmsCampaignStatisticsData::CampaignIdHasBeenSet() const
{
    return m_campaignIdHasBeenSet;
}

vector<SmsCampaignStatisticsCrowdData> SmsCampaignStatisticsData::GetStatistics() const
{
    return m_statistics;
}

void SmsCampaignStatisticsData::SetStatistics(const vector<SmsCampaignStatisticsCrowdData>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool SmsCampaignStatisticsData::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

