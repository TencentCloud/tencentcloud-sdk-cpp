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

#include <tencentcloud/emr/v20190103/model/MultiZoneSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

MultiZoneSetting::MultiZoneSetting() :
    m_zoneTagHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_resourceSpecHasBeenSet(false)
{
}

CoreInternalOutcome MultiZoneSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneTag") && !value["ZoneTag"].IsNull())
    {
        if (!value["ZoneTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiZoneSetting.ZoneTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneTag = string(value["ZoneTag"].GetString());
        m_zoneTagHasBeenSet = true;
    }

    if (value.HasMember("VPCSettings") && !value["VPCSettings"].IsNull())
    {
        if (!value["VPCSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiZoneSetting.VPCSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCSettings.Deserialize(value["VPCSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCSettingsHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiZoneSetting.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiZoneSetting.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiZoneSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneTag.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MultiZoneSetting::GetZoneTag() const
{
    return m_zoneTag;
}

void MultiZoneSetting::SetZoneTag(const string& _zoneTag)
{
    m_zoneTag = _zoneTag;
    m_zoneTagHasBeenSet = true;
}

bool MultiZoneSetting::ZoneTagHasBeenSet() const
{
    return m_zoneTagHasBeenSet;
}

VPCSettings MultiZoneSetting::GetVPCSettings() const
{
    return m_vPCSettings;
}

void MultiZoneSetting::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool MultiZoneSetting::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

Placement MultiZoneSetting::GetPlacement() const
{
    return m_placement;
}

void MultiZoneSetting::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool MultiZoneSetting::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

NewResourceSpec MultiZoneSetting::GetResourceSpec() const
{
    return m_resourceSpec;
}

void MultiZoneSetting::SetResourceSpec(const NewResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool MultiZoneSetting::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

