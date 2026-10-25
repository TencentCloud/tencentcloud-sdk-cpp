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

#include <tencentcloud/rum/v20210622/model/TDEMSSETrendSeries.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

TDEMSSETrendSeries::TDEMSSETrendSeries() :
    m_dimensionValueHasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome TDEMSSETrendSeries::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionValue") && !value["DimensionValue"].IsNull())
    {
        if (!value["DimensionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSETrendSeries.DimensionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionValue = string(value["DimensionValue"].GetString());
        m_dimensionValueHasBeenSet = true;
    }

    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TDEMSSETrendSeries.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TDEMSSETrendPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEMSSETrendSeries::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TDEMSSETrendSeries::GetDimensionValue() const
{
    return m_dimensionValue;
}

void TDEMSSETrendSeries::SetDimensionValue(const string& _dimensionValue)
{
    m_dimensionValue = _dimensionValue;
    m_dimensionValueHasBeenSet = true;
}

bool TDEMSSETrendSeries::DimensionValueHasBeenSet() const
{
    return m_dimensionValueHasBeenSet;
}

vector<TDEMSSETrendPoint> TDEMSSETrendSeries::GetPoints() const
{
    return m_points;
}

void TDEMSSETrendSeries::SetPoints(const vector<TDEMSSETrendPoint>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool TDEMSSETrendSeries::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

