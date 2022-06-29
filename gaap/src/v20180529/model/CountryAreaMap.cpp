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

#include <tencentcloud/gaap/v20180529/model/CountryAreaMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CountryAreaMap::CountryAreaMap() :
    m_nationCountryNameHasBeenSet(false),
    m_nationCountryInnerCodeHasBeenSet(false),
    m_geographicalZoneNameHasBeenSet(false),
    m_geographicalZoneInnerCodeHasBeenSet(false),
    m_continentNameHasBeenSet(false),
    m_continentInnerCodeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome CountryAreaMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NationCountryName") && !value["NationCountryName"].IsNull())
    {
        if (!value["NationCountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.NationCountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCountryName = string(value["NationCountryName"].GetString());
        m_nationCountryNameHasBeenSet = true;
    }

    if (value.HasMember("NationCountryInnerCode") && !value["NationCountryInnerCode"].IsNull())
    {
        if (!value["NationCountryInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.NationCountryInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCountryInnerCode = string(value["NationCountryInnerCode"].GetString());
        m_nationCountryInnerCodeHasBeenSet = true;
    }

    if (value.HasMember("GeographicalZoneName") && !value["GeographicalZoneName"].IsNull())
    {
        if (!value["GeographicalZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.GeographicalZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_geographicalZoneName = string(value["GeographicalZoneName"].GetString());
        m_geographicalZoneNameHasBeenSet = true;
    }

    if (value.HasMember("GeographicalZoneInnerCode") && !value["GeographicalZoneInnerCode"].IsNull())
    {
        if (!value["GeographicalZoneInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.GeographicalZoneInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_geographicalZoneInnerCode = string(value["GeographicalZoneInnerCode"].GetString());
        m_geographicalZoneInnerCodeHasBeenSet = true;
    }

    if (value.HasMember("ContinentName") && !value["ContinentName"].IsNull())
    {
        if (!value["ContinentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.ContinentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continentName = string(value["ContinentName"].GetString());
        m_continentNameHasBeenSet = true;
    }

    if (value.HasMember("ContinentInnerCode") && !value["ContinentInnerCode"].IsNull())
    {
        if (!value["ContinentInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.ContinentInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_continentInnerCode = string(value["ContinentInnerCode"].GetString());
        m_continentInnerCodeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryAreaMap.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CountryAreaMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nationCountryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCountryName.c_str(), allocator).Move(), allocator);
    }

    if (m_nationCountryInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCountryInnerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_geographicalZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeographicalZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_geographicalZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_geographicalZoneInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeographicalZoneInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_geographicalZoneInnerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_continentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continentName.c_str(), allocator).Move(), allocator);
    }

    if (m_continentInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinentInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_continentInnerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string CountryAreaMap::GetNationCountryName() const
{
    return m_nationCountryName;
}

void CountryAreaMap::SetNationCountryName(const string& _nationCountryName)
{
    m_nationCountryName = _nationCountryName;
    m_nationCountryNameHasBeenSet = true;
}

bool CountryAreaMap::NationCountryNameHasBeenSet() const
{
    return m_nationCountryNameHasBeenSet;
}

string CountryAreaMap::GetNationCountryInnerCode() const
{
    return m_nationCountryInnerCode;
}

void CountryAreaMap::SetNationCountryInnerCode(const string& _nationCountryInnerCode)
{
    m_nationCountryInnerCode = _nationCountryInnerCode;
    m_nationCountryInnerCodeHasBeenSet = true;
}

bool CountryAreaMap::NationCountryInnerCodeHasBeenSet() const
{
    return m_nationCountryInnerCodeHasBeenSet;
}

string CountryAreaMap::GetGeographicalZoneName() const
{
    return m_geographicalZoneName;
}

void CountryAreaMap::SetGeographicalZoneName(const string& _geographicalZoneName)
{
    m_geographicalZoneName = _geographicalZoneName;
    m_geographicalZoneNameHasBeenSet = true;
}

bool CountryAreaMap::GeographicalZoneNameHasBeenSet() const
{
    return m_geographicalZoneNameHasBeenSet;
}

string CountryAreaMap::GetGeographicalZoneInnerCode() const
{
    return m_geographicalZoneInnerCode;
}

void CountryAreaMap::SetGeographicalZoneInnerCode(const string& _geographicalZoneInnerCode)
{
    m_geographicalZoneInnerCode = _geographicalZoneInnerCode;
    m_geographicalZoneInnerCodeHasBeenSet = true;
}

bool CountryAreaMap::GeographicalZoneInnerCodeHasBeenSet() const
{
    return m_geographicalZoneInnerCodeHasBeenSet;
}

string CountryAreaMap::GetContinentName() const
{
    return m_continentName;
}

void CountryAreaMap::SetContinentName(const string& _continentName)
{
    m_continentName = _continentName;
    m_continentNameHasBeenSet = true;
}

bool CountryAreaMap::ContinentNameHasBeenSet() const
{
    return m_continentNameHasBeenSet;
}

string CountryAreaMap::GetContinentInnerCode() const
{
    return m_continentInnerCode;
}

void CountryAreaMap::SetContinentInnerCode(const string& _continentInnerCode)
{
    m_continentInnerCode = _continentInnerCode;
    m_continentInnerCodeHasBeenSet = true;
}

bool CountryAreaMap::ContinentInnerCodeHasBeenSet() const
{
    return m_continentInnerCodeHasBeenSet;
}

string CountryAreaMap::GetRemark() const
{
    return m_remark;
}

void CountryAreaMap::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CountryAreaMap::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

