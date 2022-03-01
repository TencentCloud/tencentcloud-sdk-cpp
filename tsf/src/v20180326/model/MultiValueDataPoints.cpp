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

#include <tencentcloud/tsf/v20180326/model/MultiValueDataPoints.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MultiValueDataPoints::MultiValueDataPoints() :
    m_pointsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_pointKeysHasBeenSet(false)
{
}

CoreInternalOutcome MultiValueDataPoints::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiValueDataPoints.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiValue item;
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

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiValueDataPoints.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("PointKeys") && !value["PointKeys"].IsNull())
    {
        if (!value["PointKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiValueDataPoints.PointKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["PointKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pointKeys.push_back((*itr).GetString());
        }
        m_pointKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiValueDataPoints::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_pointKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PointKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pointKeys.begin(); itr != m_pointKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<MultiValue> MultiValueDataPoints::GetPoints() const
{
    return m_points;
}

void MultiValueDataPoints::SetPoints(const vector<MultiValue>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool MultiValueDataPoints::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

string MultiValueDataPoints::GetMetricName() const
{
    return m_metricName;
}

void MultiValueDataPoints::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MultiValueDataPoints::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<string> MultiValueDataPoints::GetPointKeys() const
{
    return m_pointKeys;
}

void MultiValueDataPoints::SetPointKeys(const vector<string>& _pointKeys)
{
    m_pointKeys = _pointKeys;
    m_pointKeysHasBeenSet = true;
}

bool MultiValueDataPoints::PointKeysHasBeenSet() const
{
    return m_pointKeysHasBeenSet;
}

