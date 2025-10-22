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

#include <tencentcloud/lighthouse/v20200324/model/DestinationRegionBlueprint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DestinationRegionBlueprint::DestinationRegionBlueprint() :
    m_regionHasBeenSet(false),
    m_blueprintIdHasBeenSet(false)
{
}

CoreInternalOutcome DestinationRegionBlueprint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationRegionBlueprint.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BlueprintId") && !value["BlueprintId"].IsNull())
    {
        if (!value["BlueprintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationRegionBlueprint.BlueprintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintId = string(value["BlueprintId"].GetString());
        m_blueprintIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestinationRegionBlueprint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

}


string DestinationRegionBlueprint::GetRegion() const
{
    return m_region;
}

void DestinationRegionBlueprint::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DestinationRegionBlueprint::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DestinationRegionBlueprint::GetBlueprintId() const
{
    return m_blueprintId;
}

void DestinationRegionBlueprint::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool DestinationRegionBlueprint::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

