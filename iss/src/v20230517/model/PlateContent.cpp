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

#include <tencentcloud/iss/v20230517/model/PlateContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

PlateContent::PlateContent() :
    m_plateHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome PlateContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Plate") && !value["Plate"].IsNull())
    {
        if (!value["Plate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlateContent.Plate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plate = string(value["Plate"].GetString());
        m_plateHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlateContent.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlateContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlateContent.Location` is not object type").SetRequestId(requestId));
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

void PlateContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plate.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string PlateContent::GetPlate() const
{
    return m_plate;
}

void PlateContent::SetPlate(const string& _plate)
{
    m_plate = _plate;
    m_plateHasBeenSet = true;
}

bool PlateContent::PlateHasBeenSet() const
{
    return m_plateHasBeenSet;
}

string PlateContent::GetColor() const
{
    return m_color;
}

void PlateContent::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool PlateContent::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string PlateContent::GetType() const
{
    return m_type;
}

void PlateContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PlateContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Location PlateContent::GetLocation() const
{
    return m_location;
}

void PlateContent::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool PlateContent::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

