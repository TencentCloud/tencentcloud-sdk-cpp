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

#include <tencentcloud/csip/v20221121/model/DimensionTrendData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DimensionTrendData::DimensionTrendData() :
    m_dimensionIdHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
}

CoreInternalOutcome DimensionTrendData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionId") && !value["DimensionId"].IsNull())
    {
        if (!value["DimensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionTrendData.DimensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionId = string(value["DimensionId"].GetString());
        m_dimensionIdHasBeenSet = true;
    }

    if (value.HasMember("DataPoints") && !value["DataPoints"].IsNull())
    {
        if (!value["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionTrendData.DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrendDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataPoints.push_back(item);
        }
        m_dataPointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionTrendData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataPoints.begin(); itr != m_dataPoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DimensionTrendData::GetDimensionId() const
{
    return m_dimensionId;
}

void DimensionTrendData::SetDimensionId(const string& _dimensionId)
{
    m_dimensionId = _dimensionId;
    m_dimensionIdHasBeenSet = true;
}

bool DimensionTrendData::DimensionIdHasBeenSet() const
{
    return m_dimensionIdHasBeenSet;
}

vector<TrendDataPoint> DimensionTrendData::GetDataPoints() const
{
    return m_dataPoints;
}

void DimensionTrendData::SetDataPoints(const vector<TrendDataPoint>& _dataPoints)
{
    m_dataPoints = _dataPoints;
    m_dataPointsHasBeenSet = true;
}

bool DimensionTrendData::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}

