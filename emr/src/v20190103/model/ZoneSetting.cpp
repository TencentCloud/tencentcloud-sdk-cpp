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

#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ZoneSetting::ZoneSetting() :
    m_zoneHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_nodeNumHasBeenSet(false)
{
}

CoreInternalOutcome ZoneSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VPCSettings") && !value["VPCSettings"].IsNull())
    {
        if (!value["VPCSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.VPCSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCSettings.Deserialize(value["VPCSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCSettingsHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

}


string ZoneSetting::GetZone() const
{
    return m_zone;
}

void ZoneSetting::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneSetting::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

VPCSettings ZoneSetting::GetVPCSettings() const
{
    return m_vPCSettings;
}

void ZoneSetting::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool ZoneSetting::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

int64_t ZoneSetting::GetNodeNum() const
{
    return m_nodeNum;
}

void ZoneSetting::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool ZoneSetting::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

