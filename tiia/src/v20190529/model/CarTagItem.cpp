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
using namespace rapidjson;
using namespace std;

CarTagItem::CarTagItem() :
    m_serialHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_yearHasBeenSet(false)
{
}

CoreInternalOutcome CarTagItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Serial") && !value["Serial"].IsNull())
    {
        if (!value["Serial"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Serial` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serial = string(value["Serial"].GetString());
        m_serialHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Year") && !value["Year"].IsNull())
    {
        if (!value["Year"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CarTagItem.Year` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_year = value["Year"].GetInt64();
        m_yearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarTagItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serialHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Serial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serial.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_yearHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_year, allocator);
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

