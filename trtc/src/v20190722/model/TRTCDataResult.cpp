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

#include <tencentcloud/trtc/v20190722/model/TRTCDataResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TRTCDataResult::TRTCDataResult() :
    m_statementIDHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome TRTCDataResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatementID") && !value["StatementID"].IsNull())
    {
        if (!value["StatementID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCDataResult.StatementID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statementID = value["StatementID"].GetInt64();
        m_statementIDHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TRTCDataResult.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeriesInfos item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_series.push_back(item);
        }
        m_seriesHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCDataResult.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TRTCDataResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statementIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statementID, allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


int64_t TRTCDataResult::GetStatementID() const
{
    return m_statementID;
}

void TRTCDataResult::SetStatementID(const int64_t& _statementID)
{
    m_statementID = _statementID;
    m_statementIDHasBeenSet = true;
}

bool TRTCDataResult::StatementIDHasBeenSet() const
{
    return m_statementIDHasBeenSet;
}

vector<SeriesInfos> TRTCDataResult::GetSeries() const
{
    return m_series;
}

void TRTCDataResult::SetSeries(const vector<SeriesInfos>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool TRTCDataResult::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

int64_t TRTCDataResult::GetTotal() const
{
    return m_total;
}

void TRTCDataResult::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TRTCDataResult::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

