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

#include <tencentcloud/ocr/v20181119/model/ItemPolygonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ItemPolygonInfo::ItemPolygonInfo() :
    m_keyHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_rowHasBeenSet(false)
{
}

CoreInternalOutcome ItemPolygonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPolygonInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPolygonInfo.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("Row") && !value["Row"].IsNull())
    {
        if (!value["Row"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPolygonInfo.Row` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_row = value["Row"].GetInt64();
        m_rowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemPolygonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Row";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_row, allocator);
    }

}


string ItemPolygonInfo::GetKey() const
{
    return m_key;
}

void ItemPolygonInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ItemPolygonInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

Polygon ItemPolygonInfo::GetPolygon() const
{
    return m_polygon;
}

void ItemPolygonInfo::SetPolygon(const Polygon& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool ItemPolygonInfo::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

int64_t ItemPolygonInfo::GetRow() const
{
    return m_row;
}

void ItemPolygonInfo::SetRow(const int64_t& _row)
{
    m_row = _row;
    m_rowHasBeenSet = true;
}

bool ItemPolygonInfo::RowHasBeenSet() const
{
    return m_rowHasBeenSet;
}

