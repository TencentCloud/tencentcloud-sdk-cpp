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

#include <tencentcloud/weilingwith/v20230427/model/BuildingListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BuildingListRes::BuildingListRes() :
    m_buildingProfileListHasBeenSet(false)
{
}

CoreInternalOutcome BuildingListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingProfileList") && !value["BuildingProfileList"].IsNull())
    {
        if (!value["BuildingProfileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BuildingListRes.BuildingProfileList` is not array type"));

        const rapidjson::Value &tmpValue = value["BuildingProfileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BuildingProfile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_buildingProfileList.push_back(item);
        }
        m_buildingProfileListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildingListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingProfileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingProfileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_buildingProfileList.begin(); itr != m_buildingProfileList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BuildingProfile> BuildingListRes::GetBuildingProfileList() const
{
    return m_buildingProfileList;
}

void BuildingListRes::SetBuildingProfileList(const vector<BuildingProfile>& _buildingProfileList)
{
    m_buildingProfileList = _buildingProfileList;
    m_buildingProfileListHasBeenSet = true;
}

bool BuildingListRes::BuildingProfileListHasBeenSet() const
{
    return m_buildingProfileListHasBeenSet;
}

