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

#include <tencentcloud/postgres/v20170312/model/Detail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

Detail::Detail() :
    m_totalTimeHasBeenSet(false),
    m_totalCallNumHasBeenSet(false),
    m_analysisItemsHasBeenSet(false)
{
}

CoreInternalOutcome Detail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Detail.TotalTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetDouble();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalCallNum") && !value["TotalCallNum"].IsNull())
    {
        if (!value["TotalCallNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Detail.TotalCallNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCallNum = value["TotalCallNum"].GetUint64();
        m_totalCallNumHasBeenSet = true;
    }

    if (value.HasMember("AnalysisItems") && !value["AnalysisItems"].IsNull())
    {
        if (!value["AnalysisItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Detail.AnalysisItems` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalysisItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisItems.push_back(item);
        }
        m_analysisItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Detail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_totalCallNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCallNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCallNum, allocator);
    }

    if (m_analysisItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisItems.begin(); itr != m_analysisItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double Detail::GetTotalTime() const
{
    return m_totalTime;
}

void Detail::SetTotalTime(const double& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool Detail::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

uint64_t Detail::GetTotalCallNum() const
{
    return m_totalCallNum;
}

void Detail::SetTotalCallNum(const uint64_t& _totalCallNum)
{
    m_totalCallNum = _totalCallNum;
    m_totalCallNumHasBeenSet = true;
}

bool Detail::TotalCallNumHasBeenSet() const
{
    return m_totalCallNumHasBeenSet;
}

vector<AnalysisItems> Detail::GetAnalysisItems() const
{
    return m_analysisItems;
}

void Detail::SetAnalysisItems(const vector<AnalysisItems>& _analysisItems)
{
    m_analysisItems = _analysisItems;
    m_analysisItemsHasBeenSet = true;
}

bool Detail::AnalysisItemsHasBeenSet() const
{
    return m_analysisItemsHasBeenSet;
}

