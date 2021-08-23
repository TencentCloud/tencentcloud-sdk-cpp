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

#include <tencentcloud/ump/v20200918/model/BunkZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

BunkZone::BunkZone() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_bunkCodesHasBeenSet(false)
{
}

CoreInternalOutcome BunkZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BunkZone.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BunkZone.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("BunkCodes") && !value["BunkCodes"].IsNull())
    {
        if (!value["BunkCodes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BunkZone.BunkCodes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bunkCodes = string(value["BunkCodes"].GetString());
        m_bunkCodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BunkZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_bunkCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BunkCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bunkCodes.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BunkZone::GetZoneId() const
{
    return m_zoneId;
}

void BunkZone::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool BunkZone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string BunkZone::GetZoneName() const
{
    return m_zoneName;
}

void BunkZone::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool BunkZone::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string BunkZone::GetBunkCodes() const
{
    return m_bunkCodes;
}

void BunkZone::SetBunkCodes(const string& _bunkCodes)
{
    m_bunkCodes = _bunkCodes;
    m_bunkCodesHasBeenSet = true;
}

bool BunkZone::BunkCodesHasBeenSet() const
{
    return m_bunkCodesHasBeenSet;
}

