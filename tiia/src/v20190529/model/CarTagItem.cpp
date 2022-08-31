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

#include <tencentcloud/tiia/v20190529/model/CarTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

CarTagItem::CarTagItem() :
    m_serialHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_yearHasBeenSet(false),
    m_carLocationHasBeenSet(false),
    m_plateContentHasBeenSet(false),
    m_plateConfidenceHasBeenSet(false),
    m_typeConfidenceHasBeenSet(false),
    m_colorConfidenceHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_orientationConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome CarTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Serial") && !value["Serial"].IsNull())
    {
        if (!value["Serial"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Serial` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serial = string(value["Serial"].GetString());
        m_serialHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Year") && !value["Year"].IsNull())
    {
        if (!value["Year"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Year` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_year = value["Year"].GetInt64();
        m_yearHasBeenSet = true;
    }

    if (value.HasMember("CarLocation") && !value["CarLocation"].IsNull())
    {
        if (!value["CarLocation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CarTagItem.CarLocation` is not array type"));

        const rapidjson::Value &tmpValue = value["CarLocation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_carLocation.push_back(item);
        }
        m_carLocationHasBeenSet = true;
    }

    if (value.HasMember("PlateContent") && !value["PlateContent"].IsNull())
    {
        if (!value["PlateContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.PlateContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_plateContent.Deserialize(value["PlateContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_plateContentHasBeenSet = true;
    }

    if (value.HasMember("PlateConfidence") && !value["PlateConfidence"].IsNull())
    {
        if (!value["PlateConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.PlateConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_plateConfidence = value["PlateConfidence"].GetInt64();
        m_plateConfidenceHasBeenSet = true;
    }

    if (value.HasMember("TypeConfidence") && !value["TypeConfidence"].IsNull())
    {
        if (!value["TypeConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.TypeConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeConfidence = value["TypeConfidence"].GetInt64();
        m_typeConfidenceHasBeenSet = true;
    }

    if (value.HasMember("ColorConfidence") && !value["ColorConfidence"].IsNull())
    {
        if (!value["ColorConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.ColorConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colorConfidence = value["ColorConfidence"].GetInt64();
        m_colorConfidenceHasBeenSet = true;
    }

    if (value.HasMember("Orientation") && !value["Orientation"].IsNull())
    {
        if (!value["Orientation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.Orientation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orientation = string(value["Orientation"].GetString());
        m_orientationHasBeenSet = true;
    }

    if (value.HasMember("OrientationConfidence") && !value["OrientationConfidence"].IsNull())
    {
        if (!value["OrientationConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarTagItem.OrientationConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orientationConfidence = value["OrientationConfidence"].GetInt64();
        m_orientationConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_carLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_carLocation.begin(); itr != m_carLocation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_plateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_plateContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_plateConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_plateConfidence, allocator);
    }

    if (m_typeConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeConfidence, allocator);
    }

    if (m_colorConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colorConfidence, allocator);
    }

    if (m_orientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orientation.c_str(), allocator).Move(), allocator);
    }

    if (m_orientationConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrientationConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orientationConfidence, allocator);
    }

}


string CarTagItem::GetSerial() const
{
    return m_serial;
}

void CarTagItem::SetSerial(const string& _serial)
{
    m_serial = _serial;
    m_serialHasBeenSet = true;
}

bool CarTagItem::SerialHasBeenSet() const
{
    return m_serialHasBeenSet;
}

string CarTagItem::GetBrand() const
{
    return m_brand;
}

void CarTagItem::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool CarTagItem::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string CarTagItem::GetType() const
{
    return m_type;
}

void CarTagItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CarTagItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CarTagItem::GetColor() const
{
    return m_color;
}

void CarTagItem::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CarTagItem::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

int64_t CarTagItem::GetConfidence() const
{
    return m_confidence;
}

void CarTagItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool CarTagItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t CarTagItem::GetYear() const
{
    return m_year;
}

void CarTagItem::SetYear(const int64_t& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool CarTagItem::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

vector<Coord> CarTagItem::GetCarLocation() const
{
    return m_carLocation;
}

void CarTagItem::SetCarLocation(const vector<Coord>& _carLocation)
{
    m_carLocation = _carLocation;
    m_carLocationHasBeenSet = true;
}

bool CarTagItem::CarLocationHasBeenSet() const
{
    return m_carLocationHasBeenSet;
}

CarPlateContent CarTagItem::GetPlateContent() const
{
    return m_plateContent;
}

void CarTagItem::SetPlateContent(const CarPlateContent& _plateContent)
{
    m_plateContent = _plateContent;
    m_plateContentHasBeenSet = true;
}

bool CarTagItem::PlateContentHasBeenSet() const
{
    return m_plateContentHasBeenSet;
}

int64_t CarTagItem::GetPlateConfidence() const
{
    return m_plateConfidence;
}

void CarTagItem::SetPlateConfidence(const int64_t& _plateConfidence)
{
    m_plateConfidence = _plateConfidence;
    m_plateConfidenceHasBeenSet = true;
}

bool CarTagItem::PlateConfidenceHasBeenSet() const
{
    return m_plateConfidenceHasBeenSet;
}

int64_t CarTagItem::GetTypeConfidence() const
{
    return m_typeConfidence;
}

void CarTagItem::SetTypeConfidence(const int64_t& _typeConfidence)
{
    m_typeConfidence = _typeConfidence;
    m_typeConfidenceHasBeenSet = true;
}

bool CarTagItem::TypeConfidenceHasBeenSet() const
{
    return m_typeConfidenceHasBeenSet;
}

int64_t CarTagItem::GetColorConfidence() const
{
    return m_colorConfidence;
}

void CarTagItem::SetColorConfidence(const int64_t& _colorConfidence)
{
    m_colorConfidence = _colorConfidence;
    m_colorConfidenceHasBeenSet = true;
}

bool CarTagItem::ColorConfidenceHasBeenSet() const
{
    return m_colorConfidenceHasBeenSet;
}

string CarTagItem::GetOrientation() const
{
    return m_orientation;
}

void CarTagItem::SetOrientation(const string& _orientation)
{
    m_orientation = _orientation;
    m_orientationHasBeenSet = true;
}

bool CarTagItem::OrientationHasBeenSet() const
{
    return m_orientationHasBeenSet;
}

int64_t CarTagItem::GetOrientationConfidence() const
{
    return m_orientationConfidence;
}

void CarTagItem::SetOrientationConfidence(const int64_t& _orientationConfidence)
{
    m_orientationConfidence = _orientationConfidence;
    m_orientationConfidenceHasBeenSet = true;
}

bool CarTagItem::OrientationConfidenceHasBeenSet() const
{
    return m_orientationConfidenceHasBeenSet;
}

