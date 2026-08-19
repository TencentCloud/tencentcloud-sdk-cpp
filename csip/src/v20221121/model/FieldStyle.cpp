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

#include <tencentcloud/csip/v20221121/model/FieldStyle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

FieldStyle::FieldStyle() :
    m_typeHasBeenSet(false),
    m_copyHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

CoreInternalOutcome FieldStyle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldStyle.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Copy") && !value["Copy"].IsNull())
    {
        if (!value["Copy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FieldStyle.Copy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_copy = value["Copy"].GetBool();
        m_copyHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldStyle.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldStyle.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldStyle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_copyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Copy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copy, allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

}


string FieldStyle::GetType() const
{
    return m_type;
}

void FieldStyle::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FieldStyle::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool FieldStyle::GetCopy() const
{
    return m_copy;
}

void FieldStyle::SetCopy(const bool& _copy)
{
    m_copy = _copy;
    m_copyHasBeenSet = true;
}

bool FieldStyle::CopyHasBeenSet() const
{
    return m_copyHasBeenSet;
}

string FieldStyle::GetColor() const
{
    return m_color;
}

void FieldStyle::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool FieldStyle::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string FieldStyle::GetURL() const
{
    return m_uRL;
}

void FieldStyle::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool FieldStyle::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

