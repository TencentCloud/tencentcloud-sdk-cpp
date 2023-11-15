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

#include <tencentcloud/weilingwith/v20230427/model/SpaceRelationRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceRelationRes::SpaceRelationRes() :
    m_spaceRelationHasBeenSet(false)
{
}

CoreInternalOutcome SpaceRelationRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceRelation") && !value["SpaceRelation"].IsNull())
    {
        if (!value["SpaceRelation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelationRes.SpaceRelation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spaceRelation.Deserialize(value["SpaceRelation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spaceRelationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceRelationRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spaceRelation.ToJsonObject(value[key.c_str()], allocator);
    }

}


SpaceRelation SpaceRelationRes::GetSpaceRelation() const
{
    return m_spaceRelation;
}

void SpaceRelationRes::SetSpaceRelation(const SpaceRelation& _spaceRelation)
{
    m_spaceRelation = _spaceRelation;
    m_spaceRelationHasBeenSet = true;
}

bool SpaceRelationRes::SpaceRelationHasBeenSet() const
{
    return m_spaceRelationHasBeenSet;
}

