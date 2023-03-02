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

#include <tencentcloud/mrs/v20200910/model/Coord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Coord::Coord() :
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome Coord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Coord.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
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

void Coord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


vector<Point> Coord::GetPoints() const
{
    return m_points;
}

void Coord::SetPoints(const vector<Point>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool Coord::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

