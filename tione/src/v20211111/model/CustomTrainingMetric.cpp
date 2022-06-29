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

#include <tencentcloud/tione/v20211111/model/CustomTrainingMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CustomTrainingMetric::CustomTrainingMetric() :
    m_xTypeHasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome CustomTrainingMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("XType") && !value["XType"].IsNull())
    {
        if (!value["XType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTrainingMetric.XType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xType = string(value["XType"].GetString());
        m_xTypeHasBeenSet = true;
    }

    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomTrainingMetric.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomTrainingPoint item;
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

void CustomTrainingMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xType.c_str(), allocator).Move(), allocator);
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


string CustomTrainingMetric::GetXType() const
{
    return m_xType;
}

void CustomTrainingMetric::SetXType(const string& _xType)
{
    m_xType = _xType;
    m_xTypeHasBeenSet = true;
}

bool CustomTrainingMetric::XTypeHasBeenSet() const
{
    return m_xTypeHasBeenSet;
}

vector<CustomTrainingPoint> CustomTrainingMetric::GetPoints() const
{
    return m_points;
}

void CustomTrainingMetric::SetPoints(const vector<CustomTrainingPoint>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool CustomTrainingMetric::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

