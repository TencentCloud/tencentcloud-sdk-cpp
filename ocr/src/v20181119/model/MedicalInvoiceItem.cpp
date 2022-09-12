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

#include <tencentcloud/ocr/v20181119/model/MedicalInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MedicalInvoiceItem::MedicalInvoiceItem() :
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_vertexHasBeenSet(false),
    m_coordHasBeenSet(false)
{
}

CoreInternalOutcome MedicalInvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalInvoiceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalInvoiceItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Vertex") && !value["Vertex"].IsNull())
    {
        if (!value["Vertex"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalInvoiceItem.Vertex` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vertex.Deserialize(value["Vertex"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vertexHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalInvoiceItem.Coord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coord.Deserialize(value["Coord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MedicalInvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_vertexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vertex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vertex.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coord.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MedicalInvoiceItem::GetName() const
{
    return m_name;
}

void MedicalInvoiceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MedicalInvoiceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MedicalInvoiceItem::GetContent() const
{
    return m_content;
}

void MedicalInvoiceItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MedicalInvoiceItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Polygon MedicalInvoiceItem::GetVertex() const
{
    return m_vertex;
}

void MedicalInvoiceItem::SetVertex(const Polygon& _vertex)
{
    m_vertex = _vertex;
    m_vertexHasBeenSet = true;
}

bool MedicalInvoiceItem::VertexHasBeenSet() const
{
    return m_vertexHasBeenSet;
}

Rect MedicalInvoiceItem::GetCoord() const
{
    return m_coord;
}

void MedicalInvoiceItem::SetCoord(const Rect& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool MedicalInvoiceItem::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

