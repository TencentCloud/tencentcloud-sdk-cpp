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

#include <tencentcloud/iss/v20230517/model/CarAIResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CarAIResultInfo::CarAIResultInfo() :
    m_serialHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_yearHasBeenSet(false),
    m_plateContentHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome CarAIResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Serial") && !value["Serial"].IsNull())
    {
        if (!value["Serial"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Serial` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serial = string(value["Serial"].GetString());
        m_serialHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Year") && !value["Year"].IsNull())
    {
        if (!value["Year"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Year` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_year = value["Year"].GetInt64();
        m_yearHasBeenSet = true;
    }

    if (value.HasMember("PlateContent") && !value["PlateContent"].IsNull())
    {
        if (!value["PlateContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.PlateContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_plateContent.Deserialize(value["PlateContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_plateContentHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CarAIResultInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarAIResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Serial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serial.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_year, allocator);
    }

    if (m_plateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_plateContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CarAIResultInfo::GetSerial() const
{
    return m_serial;
}

void CarAIResultInfo::SetSerial(const string& _serial)
{
    m_serial = _serial;
    m_serialHasBeenSet = true;
}

bool CarAIResultInfo::SerialHasBeenSet() const
{
    return m_serialHasBeenSet;
}

string CarAIResultInfo::GetBrand() const
{
    return m_brand;
}

void CarAIResultInfo::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool CarAIResultInfo::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string CarAIResultInfo::GetType() const
{
    return m_type;
}

void CarAIResultInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CarAIResultInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CarAIResultInfo::GetColor() const
{
    return m_color;
}

void CarAIResultInfo::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CarAIResultInfo::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

int64_t CarAIResultInfo::GetConfidence() const
{
    return m_confidence;
}

void CarAIResultInfo::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool CarAIResultInfo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t CarAIResultInfo::GetYear() const
{
    return m_year;
}

void CarAIResultInfo::SetYear(const int64_t& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool CarAIResultInfo::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

PlateContent CarAIResultInfo::GetPlateContent() const
{
    return m_plateContent;
}

void CarAIResultInfo::SetPlateContent(const PlateContent& _plateContent)
{
    m_plateContent = _plateContent;
    m_plateContentHasBeenSet = true;
}

bool CarAIResultInfo::PlateContentHasBeenSet() const
{
    return m_plateContentHasBeenSet;
}

Location CarAIResultInfo::GetLocation() const
{
    return m_location;
}

void CarAIResultInfo::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool CarAIResultInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

