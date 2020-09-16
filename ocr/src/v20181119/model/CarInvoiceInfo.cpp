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

#include <tencentcloud/ocr/v20181119/model/CarInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

CarInvoiceInfo::CarInvoiceInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rectHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

CoreInternalOutcome CarInvoiceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarInvoiceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `CarInvoiceInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CarInvoiceInfo.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CarInvoiceInfo.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarInvoiceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_rectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_polygonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CarInvoiceInfo::GetName() const
{
    return m_name;
}

void CarInvoiceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CarInvoiceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CarInvoiceInfo::GetValue() const
{
    return m_value;
}

void CarInvoiceInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CarInvoiceInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

Rect CarInvoiceInfo::GetRect() const
{
    return m_rect;
}

void CarInvoiceInfo::SetRect(const Rect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool CarInvoiceInfo::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

Polygon CarInvoiceInfo::GetPolygon() const
{
    return m_polygon;
}

void CarInvoiceInfo::SetPolygon(const Polygon& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool CarInvoiceInfo::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

