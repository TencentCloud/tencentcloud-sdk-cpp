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

#include <tencentcloud/ocr/v20181119/model/TableCell.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TableCell::TableCell() :
    m_colTlHasBeenSet(false),
    m_rowTlHasBeenSet(false),
    m_colBrHasBeenSet(false),
    m_rowBrHasBeenSet(false),
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

CoreInternalOutcome TableCell::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColTl") && !value["ColTl"].IsNull())
    {
        if (!value["ColTl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.ColTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colTl = value["ColTl"].GetInt64();
        m_colTlHasBeenSet = true;
    }

    if (value.HasMember("RowTl") && !value["RowTl"].IsNull())
    {
        if (!value["RowTl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.RowTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowTl = value["RowTl"].GetInt64();
        m_rowTlHasBeenSet = true;
    }

    if (value.HasMember("ColBr") && !value["ColBr"].IsNull())
    {
        if (!value["ColBr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.ColBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colBr = value["ColBr"].GetInt64();
        m_colBrHasBeenSet = true;
    }

    if (value.HasMember("RowBr") && !value["RowBr"].IsNull())
    {
        if (!value["RowBr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.RowBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowBr = value["RowBr"].GetInt64();
        m_rowBrHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableCell.Polygon` is not array type"));

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

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableCell.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableCell.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CellContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableCell::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TableCell::GetColTl() const
{
    return m_colTl;
}

void TableCell::SetColTl(const int64_t& _colTl)
{
    m_colTl = _colTl;
    m_colTlHasBeenSet = true;
}

bool TableCell::ColTlHasBeenSet() const
{
    return m_colTlHasBeenSet;
}

int64_t TableCell::GetRowTl() const
{
    return m_rowTl;
}

void TableCell::SetRowTl(const int64_t& _rowTl)
{
    m_rowTl = _rowTl;
    m_rowTlHasBeenSet = true;
}

bool TableCell::RowTlHasBeenSet() const
{
    return m_rowTlHasBeenSet;
}

int64_t TableCell::GetColBr() const
{
    return m_colBr;
}

void TableCell::SetColBr(const int64_t& _colBr)
{
    m_colBr = _colBr;
    m_colBrHasBeenSet = true;
}

bool TableCell::ColBrHasBeenSet() const
{
    return m_colBrHasBeenSet;
}

int64_t TableCell::GetRowBr() const
{
    return m_rowBr;
}

void TableCell::SetRowBr(const int64_t& _rowBr)
{
    m_rowBr = _rowBr;
    m_rowBrHasBeenSet = true;
}

bool TableCell::RowBrHasBeenSet() const
{
    return m_rowBrHasBeenSet;
}

string TableCell::GetText() const
{
    return m_text;
}

void TableCell::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TableCell::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TableCell::GetType() const
{
    return m_type;
}

void TableCell::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableCell::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double TableCell::GetConfidence() const
{
    return m_confidence;
}

void TableCell::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TableCell::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<Coord> TableCell::GetPolygon() const
{
    return m_polygon;
}

void TableCell::SetPolygon(const vector<Coord>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool TableCell::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

string TableCell::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void TableCell::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool TableCell::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

vector<CellContent> TableCell::GetContents() const
{
    return m_contents;
}

void TableCell::SetContents(const vector<CellContent>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool TableCell::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

