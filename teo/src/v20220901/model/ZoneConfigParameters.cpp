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

#include <tencentcloud/teo/v20220901/model/ZoneConfigParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ZoneConfigParameters::ZoneConfigParameters() :
    m_zoneNameHasBeenSet(false),
    m_zoneConfigHasBeenSet(false)
{
}

CoreInternalOutcome ZoneConfigParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfigParameters.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneConfig") && !value["ZoneConfig"].IsNull())
    {
        if (!value["ZoneConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfigParameters.ZoneConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneConfig.Deserialize(value["ZoneConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneConfigParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ZoneConfigParameters::GetZoneName() const
{
    return m_zoneName;
}

void ZoneConfigParameters::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneConfigParameters::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

ZoneConfig ZoneConfigParameters::GetZoneConfig() const
{
    return m_zoneConfig;
}

void ZoneConfigParameters::SetZoneConfig(const ZoneConfig& _zoneConfig)
{
    m_zoneConfig = _zoneConfig;
    m_zoneConfigHasBeenSet = true;
}

bool ZoneConfigParameters::ZoneConfigHasBeenSet() const
{
    return m_zoneConfigHasBeenSet;
}

