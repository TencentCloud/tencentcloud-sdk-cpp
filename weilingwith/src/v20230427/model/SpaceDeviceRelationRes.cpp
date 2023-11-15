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

#include <tencentcloud/weilingwith/v20230427/model/SpaceDeviceRelationRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceDeviceRelationRes::SpaceDeviceRelationRes() :
    m_spaceDeviceRelationListHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDeviceRelationRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceDeviceRelationList") && !value["SpaceDeviceRelationList"].IsNull())
    {
        if (!value["SpaceDeviceRelationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceDeviceRelationRes.SpaceDeviceRelationList` is not array type"));

        const rapidjson::Value &tmpValue = value["SpaceDeviceRelationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpaceDeviceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spaceDeviceRelationList.push_back(item);
        }
        m_spaceDeviceRelationListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDeviceRelationRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceDeviceRelationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceDeviceRelationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spaceDeviceRelationList.begin(); itr != m_spaceDeviceRelationList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SpaceDeviceRelation> SpaceDeviceRelationRes::GetSpaceDeviceRelationList() const
{
    return m_spaceDeviceRelationList;
}

void SpaceDeviceRelationRes::SetSpaceDeviceRelationList(const vector<SpaceDeviceRelation>& _spaceDeviceRelationList)
{
    m_spaceDeviceRelationList = _spaceDeviceRelationList;
    m_spaceDeviceRelationListHasBeenSet = true;
}

bool SpaceDeviceRelationRes::SpaceDeviceRelationListHasBeenSet() const
{
    return m_spaceDeviceRelationListHasBeenSet;
}

