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

#include <tencentcloud/lke/v20231130/model/DocumentElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DocumentElement::DocumentElement() :
    m_indexHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_insetImageNameHasBeenSet(false),
    m_elementsHasBeenSet(false)
{
}

CoreInternalOutcome DocumentElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("InsetImageName") && !value["InsetImageName"].IsNull())
    {
        if (!value["InsetImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentElement.InsetImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insetImageName = string(value["InsetImageName"].GetString());
        m_insetImageNameHasBeenSet = true;
    }

    if (value.HasMember("Elements") && !value["Elements"].IsNull())
    {
        if (!value["Elements"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocumentElement.Elements` is not array type"));

        const rapidjson::Value &tmpValue = value["Elements"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DocumentElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_elements.push_back(item);
        }
        m_elementsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_insetImageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsetImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insetImageName.c_str(), allocator).Move(), allocator);
    }

    if (m_elementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_elements.begin(); itr != m_elements.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DocumentElement::GetIndex() const
{
    return m_index;
}

void DocumentElement::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DocumentElement::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string DocumentElement::GetType() const
{
    return m_type;
}

void DocumentElement::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DocumentElement::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DocumentElement::GetText() const
{
    return m_text;
}

void DocumentElement::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool DocumentElement::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

Polygon DocumentElement::GetPolygon() const
{
    return m_polygon;
}

void DocumentElement::SetPolygon(const Polygon& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool DocumentElement::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

int64_t DocumentElement::GetLevel() const
{
    return m_level;
}

void DocumentElement::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DocumentElement::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DocumentElement::GetInsetImageName() const
{
    return m_insetImageName;
}

void DocumentElement::SetInsetImageName(const string& _insetImageName)
{
    m_insetImageName = _insetImageName;
    m_insetImageNameHasBeenSet = true;
}

bool DocumentElement::InsetImageNameHasBeenSet() const
{
    return m_insetImageNameHasBeenSet;
}

vector<DocumentElement> DocumentElement::GetElements() const
{
    return m_elements;
}

void DocumentElement::SetElements(const vector<DocumentElement>& _elements)
{
    m_elements = _elements;
    m_elementsHasBeenSet = true;
}

bool DocumentElement::ElementsHasBeenSet() const
{
    return m_elementsHasBeenSet;
}

