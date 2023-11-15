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

#include <tencentcloud/weilingwith/v20230427/model/SpaceTypeListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceTypeListRes::SpaceTypeListRes() :
    m_spaceTypeListHasBeenSet(false)
{
}

CoreInternalOutcome SpaceTypeListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceTypeList") && !value["SpaceTypeList"].IsNull())
    {
        if (!value["SpaceTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceTypeListRes.SpaceTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["SpaceTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpaceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spaceTypeList.push_back(item);
        }
        m_spaceTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceTypeListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spaceTypeList.begin(); itr != m_spaceTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SpaceType> SpaceTypeListRes::GetSpaceTypeList() const
{
    return m_spaceTypeList;
}

void SpaceTypeListRes::SetSpaceTypeList(const vector<SpaceType>& _spaceTypeList)
{
    m_spaceTypeList = _spaceTypeList;
    m_spaceTypeListHasBeenSet = true;
}

bool SpaceTypeListRes::SpaceTypeListHasBeenSet() const
{
    return m_spaceTypeListHasBeenSet;
}

