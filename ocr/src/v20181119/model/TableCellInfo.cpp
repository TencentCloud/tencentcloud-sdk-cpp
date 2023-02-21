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

#include <tencentcloud/ocr/v20181119/model/TableCellInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TableCellInfo::TableCellInfo() :
    m_colTlHasBeenSet(false),
    m_rowTlHasBeenSet(false),
    m_colBrHasBeenSet(false),
    m_rowBrHasBeenSet(false),
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

CoreInternalOutcome TableCellInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColTl") && !value["ColTl"].IsNull())
    {
        if (!value["ColTl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.ColTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colTl = value["ColTl"].GetInt64();
        m_colTlHasBeenSet = true;
    }

    if (value.HasMember("RowTl") && !value["RowTl"].IsNull())
    {
        if (!value["RowTl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.RowTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowTl = value["RowTl"].GetInt64();
        m_rowTlHasBeenSet = true;
    }

    if (value.HasMember("ColBr") && !value["ColBr"].IsNull())
    {
        if (!value["ColBr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.ColBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colBr = value["ColBr"].GetInt64();
        m_colBrHasBeenSet = true;
    }

    if (value.HasMember("RowBr") && !value["RowBr"].IsNull())
    {
        if (!value["RowBr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.RowBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowBr = value["RowBr"].GetInt64();
        m_rowBrHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableCellInfo.Polygon` is not array type"));

        const rapidjson::Value &tmpValue = value["Polygon"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polygon.push_back(item);
        }
        m_polygonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableCellInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colTlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColTl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colTl, allocator);
    }

    if (m_rowTlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowTl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowTl, allocator);
    }

    if (m_colBrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColBr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colBr, allocator);
    }

    if (m_rowBrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowBr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowBr, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polygon.begin(); itr != m_polygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TableCellInfo::GetColTl() const
{
    return m_colTl;
}

void TableCellInfo::SetColTl(const int64_t& _colTl)
{
    m_colTl = _colTl;
    m_colTlHasBeenSet = true;
}

bool TableCellInfo::ColTlHasBeenSet() const
{
    return m_colTlHasBeenSet;
}

int64_t TableCellInfo::GetRowTl() const
{
    return m_rowTl;
}

void TableCellInfo::SetRowTl(const int64_t& _rowTl)
{
    m_rowTl = _rowTl;
    m_rowTlHasBeenSet = true;
}

bool TableCellInfo::RowTlHasBeenSet() const
{
    return m_rowTlHasBeenSet;
}

int64_t TableCellInfo::GetColBr() const
{
    return m_colBr;
}

void TableCellInfo::SetColBr(const int64_t& _colBr)
{
    m_colBr = _colBr;
    m_colBrHasBeenSet = true;
}

bool TableCellInfo::ColBrHasBeenSet() const
{
    return m_colBrHasBeenSet;
}

int64_t TableCellInfo::GetRowBr() const
{
    return m_rowBr;
}

void TableCellInfo::SetRowBr(const int64_t& _rowBr)
{
    m_rowBr = _rowBr;
    m_rowBrHasBeenSet = true;
}

bool TableCellInfo::RowBrHasBeenSet() const
{
    return m_rowBrHasBeenSet;
}

string TableCellInfo::GetText() const
{
    return m_text;
}

void TableCellInfo::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TableCellInfo::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TableCellInfo::GetType() const
{
    return m_type;
}

void TableCellInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableCellInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double TableCellInfo::GetConfidence() const
{
    return m_confidence;
}

void TableCellInfo::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TableCellInfo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<Coord> TableCellInfo::GetPolygon() const
{
    return m_polygon;
}

void TableCellInfo::SetPolygon(const vector<Coord>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool TableCellInfo::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

