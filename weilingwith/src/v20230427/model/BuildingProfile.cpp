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

#include <tencentcloud/weilingwith/v20230427/model/BuildingProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BuildingProfile::BuildingProfile() :
    m_buildingIdHasBeenSet(false),
    m_buildingNameHasBeenSet(false),
    m_spaceCodeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome BuildingProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingId") && !value["BuildingId"].IsNull())
    {
        if (!value["BuildingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.BuildingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingId = string(value["BuildingId"].GetString());
        m_buildingIdHasBeenSet = true;
    }

    if (value.HasMember("BuildingName") && !value["BuildingName"].IsNull())
    {
        if (!value["BuildingName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.BuildingName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingName = string(value["BuildingName"].GetString());
        m_buildingNameHasBeenSet = true;
    }

    if (value.HasMember("SpaceCode") && !value["SpaceCode"].IsNull())
    {
        if (!value["SpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.SpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceCode = string(value["SpaceCode"].GetString());
        m_spaceCodeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.Longitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = value["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.Latitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = value["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingProfile.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildingProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildingId.c_str(), allocator).Move(), allocator);
    }

    if (m_buildingNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildingName.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string BuildingProfile::GetBuildingId() const
{
    return m_buildingId;
}

void BuildingProfile::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool BuildingProfile::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string BuildingProfile::GetBuildingName() const
{
    return m_buildingName;
}

void BuildingProfile::SetBuildingName(const string& _buildingName)
{
    m_buildingName = _buildingName;
    m_buildingNameHasBeenSet = true;
}

bool BuildingProfile::BuildingNameHasBeenSet() const
{
    return m_buildingNameHasBeenSet;
}

string BuildingProfile::GetSpaceCode() const
{
    return m_spaceCode;
}

void BuildingProfile::SetSpaceCode(const string& _spaceCode)
{
    m_spaceCode = _spaceCode;
    m_spaceCodeHasBeenSet = true;
}

bool BuildingProfile::SpaceCodeHasBeenSet() const
{
    return m_spaceCodeHasBeenSet;
}

double BuildingProfile::GetLongitude() const
{
    return m_longitude;
}

void BuildingProfile::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool BuildingProfile::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double BuildingProfile::GetLatitude() const
{
    return m_latitude;
}

void BuildingProfile::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool BuildingProfile::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string BuildingProfile::GetAddress() const
{
    return m_address;
}

void BuildingProfile::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool BuildingProfile::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

