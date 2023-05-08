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

#include <tencentcloud/ssa/v20180608/model/AlertListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AlertListData::AlertListData() :
    m_totalHasBeenSet(false),
    m_alertListHasBeenSet(false),
    m_aggregationsHasBeenSet(false)
{
}

CoreInternalOutcome AlertListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertListData.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("AlertList") && !value["AlertList"].IsNull())
    {
        if (!value["AlertList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertListData.AlertList` is not array type"));

        const rapidjson::Value &tmpValue = value["AlertList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlertType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alertList.push_back(item);
        }
        m_alertListHasBeenSet = true;
    }

    if (value.HasMember("Aggregations") && !value["Aggregations"].IsNull())
    {
        if (!value["Aggregations"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertListData.Aggregations` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aggregations.Deserialize(value["Aggregations"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aggregationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_alertListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alertList.begin(); itr != m_alertList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aggregationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aggregations.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AlertListData::GetTotal() const
{
    return m_total;
}

void AlertListData::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AlertListData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<AlertType> AlertListData::GetAlertList() const
{
    return m_alertList;
}

void AlertListData::SetAlertList(const vector<AlertType>& _alertList)
{
    m_alertList = _alertList;
    m_alertListHasBeenSet = true;
}

bool AlertListData::AlertListHasBeenSet() const
{
    return m_alertListHasBeenSet;
}

AlertListAggregations AlertListData::GetAggregations() const
{
    return m_aggregations;
}

void AlertListData::SetAggregations(const AlertListAggregations& _aggregations)
{
    m_aggregations = _aggregations;
    m_aggregationsHasBeenSet = true;
}

bool AlertListData::AggregationsHasBeenSet() const
{
    return m_aggregationsHasBeenSet;
}

