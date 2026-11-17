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

#include <tencentcloud/faceid/v20180301/model/ExtraRiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ExtraRiskInfo::ExtraRiskInfo() :
    m_personIdHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

CoreInternalOutcome ExtraRiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskInfo.Latitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = string(value["Latitude"].GetString());
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskInfo.Longitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = string(value["Longitude"].GetString());
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraRiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

}


string ExtraRiskInfo::GetPersonId() const
{
    return m_personId;
}

void ExtraRiskInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ExtraRiskInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string ExtraRiskInfo::GetLatitude() const
{
    return m_latitude;
}

void ExtraRiskInfo::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool ExtraRiskInfo::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string ExtraRiskInfo::GetLongitude() const
{
    return m_longitude;
}

void ExtraRiskInfo::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool ExtraRiskInfo::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string ExtraRiskInfo::GetIp() const
{
    return m_ip;
}

void ExtraRiskInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ExtraRiskInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

