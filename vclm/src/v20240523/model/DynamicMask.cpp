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

#include <tencentcloud/vclm/v20240523/model/DynamicMask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

DynamicMask::DynamicMask() :
    m_maskHasBeenSet(false),
    m_trajectoriesHasBeenSet(false)
{
}

CoreInternalOutcome DynamicMask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicMask.Mask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mask = string(value["Mask"].GetString());
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("Trajectories") && !value["Trajectories"].IsNull())
    {
        if (!value["Trajectories"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicMask.Trajectories` is not array type"));

        const rapidjson::Value &tmpValue = value["Trajectories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Trajectory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trajectories.push_back(item);
        }
        m_trajectoriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicMask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mask.c_str(), allocator).Move(), allocator);
    }

    if (m_trajectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trajectories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trajectories.begin(); itr != m_trajectories.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DynamicMask::GetMask() const
{
    return m_mask;
}

void DynamicMask::SetMask(const string& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool DynamicMask::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

vector<Trajectory> DynamicMask::GetTrajectories() const
{
    return m_trajectories;
}

void DynamicMask::SetTrajectories(const vector<Trajectory>& _trajectories)
{
    m_trajectories = _trajectories;
    m_trajectoriesHasBeenSet = true;
}

bool DynamicMask::TrajectoriesHasBeenSet() const
{
    return m_trajectoriesHasBeenSet;
}

