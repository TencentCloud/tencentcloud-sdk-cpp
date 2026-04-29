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

#include <tencentcloud/ess/v20201111/model/ChecklistCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ChecklistCategory::ChecklistCategory() :
    m_nameHasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome ChecklistCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistCategory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChecklistCategory.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChecklistPoint item;
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

void ChecklistCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string ChecklistCategory::GetName() const
{
    return m_name;
}

void ChecklistCategory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChecklistCategory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ChecklistPoint> ChecklistCategory::GetPoints() const
{
    return m_points;
}

void ChecklistCategory::SetPoints(const vector<ChecklistPoint>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool ChecklistCategory::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

