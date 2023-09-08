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

#include <tencentcloud/cfw/v20190904/model/FwDeploy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwDeploy::FwDeploy() :
    m_deployRegionHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_crossAZoneHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneBakHasBeenSet(false),
    m_cdcIdHasBeenSet(false)
{
}

CoreInternalOutcome FwDeploy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployRegion") && !value["DeployRegion"].IsNull())
    {
        if (!value["DeployRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.DeployRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployRegion = string(value["DeployRegion"].GetString());
        m_deployRegionHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("CrossAZone") && !value["CrossAZone"].IsNull())
    {
        if (!value["CrossAZone"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.CrossAZone` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossAZone = value["CrossAZone"].GetInt64();
        m_crossAZoneHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneBak") && !value["ZoneBak"].IsNull())
    {
        if (!value["ZoneBak"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.ZoneBak` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneBak = string(value["ZoneBak"].GetString());
        m_zoneBakHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwDeploy.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwDeploy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_crossAZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossAZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossAZone, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneBak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneBak.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

}


string FwDeploy::GetDeployRegion() const
{
    return m_deployRegion;
}

void FwDeploy::SetDeployRegion(const string& _deployRegion)
{
    m_deployRegion = _deployRegion;
    m_deployRegionHasBeenSet = true;
}

bool FwDeploy::DeployRegionHasBeenSet() const
{
    return m_deployRegionHasBeenSet;
}

int64_t FwDeploy::GetWidth() const
{
    return m_width;
}

void FwDeploy::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool FwDeploy::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t FwDeploy::GetCrossAZone() const
{
    return m_crossAZone;
}

void FwDeploy::SetCrossAZone(const int64_t& _crossAZone)
{
    m_crossAZone = _crossAZone;
    m_crossAZoneHasBeenSet = true;
}

bool FwDeploy::CrossAZoneHasBeenSet() const
{
    return m_crossAZoneHasBeenSet;
}

string FwDeploy::GetZone() const
{
    return m_zone;
}

void FwDeploy::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool FwDeploy::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string FwDeploy::GetZoneBak() const
{
    return m_zoneBak;
}

void FwDeploy::SetZoneBak(const string& _zoneBak)
{
    m_zoneBak = _zoneBak;
    m_zoneBakHasBeenSet = true;
}

bool FwDeploy::ZoneBakHasBeenSet() const
{
    return m_zoneBakHasBeenSet;
}

string FwDeploy::GetCdcId() const
{
    return m_cdcId;
}

void FwDeploy::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool FwDeploy::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

