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

#include <tencentcloud/emr/v20190103/model/ZoneResourceConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ZoneResourceConfiguration::ZoneResourceConfiguration() :
    m_virtualPrivateCloudHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_allNodeResourceSpecHasBeenSet(false),
    m_zoneTagHasBeenSet(false)
{
}

CoreInternalOutcome ZoneResourceConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VirtualPrivateCloud") && !value["VirtualPrivateCloud"].IsNull())
    {
        if (!value["VirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResourceConfiguration.VirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualPrivateCloud.Deserialize(value["VirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResourceConfiguration.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("AllNodeResourceSpec") && !value["AllNodeResourceSpec"].IsNull())
    {
        if (!value["AllNodeResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResourceConfiguration.AllNodeResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_allNodeResourceSpec.Deserialize(value["AllNodeResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_allNodeResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("ZoneTag") && !value["ZoneTag"].IsNull())
    {
        if (!value["ZoneTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResourceConfiguration.ZoneTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneTag = string(value["ZoneTag"].GetString());
        m_zoneTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneResourceConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allNodeResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllNodeResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_allNodeResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zoneTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneTag.c_str(), allocator).Move(), allocator);
    }

}


VirtualPrivateCloud ZoneResourceConfiguration::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void ZoneResourceConfiguration::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool ZoneResourceConfiguration::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

Placement ZoneResourceConfiguration::GetPlacement() const
{
    return m_placement;
}

void ZoneResourceConfiguration::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ZoneResourceConfiguration::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

AllNodeResourceSpec ZoneResourceConfiguration::GetAllNodeResourceSpec() const
{
    return m_allNodeResourceSpec;
}

void ZoneResourceConfiguration::SetAllNodeResourceSpec(const AllNodeResourceSpec& _allNodeResourceSpec)
{
    m_allNodeResourceSpec = _allNodeResourceSpec;
    m_allNodeResourceSpecHasBeenSet = true;
}

bool ZoneResourceConfiguration::AllNodeResourceSpecHasBeenSet() const
{
    return m_allNodeResourceSpecHasBeenSet;
}

string ZoneResourceConfiguration::GetZoneTag() const
{
    return m_zoneTag;
}

void ZoneResourceConfiguration::SetZoneTag(const string& _zoneTag)
{
    m_zoneTag = _zoneTag;
    m_zoneTagHasBeenSet = true;
}

bool ZoneResourceConfiguration::ZoneTagHasBeenSet() const
{
    return m_zoneTagHasBeenSet;
}

