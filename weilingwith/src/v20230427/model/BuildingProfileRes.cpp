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

#include <tencentcloud/weilingwith/v20230427/model/BuildingProfileRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BuildingProfileRes::BuildingProfileRes() :
    m_buildingProfileHasBeenSet(false)
{
}

CoreInternalOutcome BuildingProfileRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingProfile") && !value["BuildingProfile"].IsNull())
    {
        if (!value["BuildingProfile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfileRes.BuildingProfile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_buildingProfile.Deserialize(value["BuildingProfile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_buildingProfileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildingProfileRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_buildingProfile.ToJsonObject(value[key.c_str()], allocator);
    }

}


BuildingProfile BuildingProfileRes::GetBuildingProfile() const
{
    return m_buildingProfile;
}

void BuildingProfileRes::SetBuildingProfile(const BuildingProfile& _buildingProfile)
{
    m_buildingProfile = _buildingProfile;
    m_buildingProfileHasBeenSet = true;
}

bool BuildingProfileRes::BuildingProfileHasBeenSet() const
{
    return m_buildingProfileHasBeenSet;
}

