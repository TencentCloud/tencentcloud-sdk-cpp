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

#include <tencentcloud/ocr/v20181119/model/TableDetectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TableDetectInfo::TableDetectInfo() :
    m_cellsHasBeenSet(false),
    m_titlesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tableCoordPointHasBeenSet(false)
{
}

CoreInternalOutcome TableDetectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cells") && !value["Cells"].IsNull())
    {
        if (!value["Cells"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableDetectInfo.Cells` is not array type"));

        const rapidjson::Value &tmpValue = value["Cells"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableCell item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cells.push_back(item);
        }
        m_cellsHasBeenSet = true;
    }

    if (value.HasMember("Titles") && !value["Titles"].IsNull())
    {
        if (!value["Titles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableDetectInfo.Titles` is not array type"));

        const rapidjson::Value &tmpValue = value["Titles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableTitle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_titles.push_back(item);
        }
        m_titlesHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableDetectInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TableCoordPoint") && !value["TableCoordPoint"].IsNull())
    {
        if (!value["TableCoordPoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableDetectInfo.TableCoordPoint` is not array type"));

        const rapidjson::Value &tmpValue = value["TableCoordPoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableCoordPoint.push_back(item);
        }
        m_tableCoordPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableDetectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cellsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cells";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cells.begin(); itr != m_cells.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_titlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Titles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_titles.begin(); itr != m_titles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_tableCoordPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCoordPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableCoordPoint.begin(); itr != m_tableCoordPoint.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TableCell> TableDetectInfo::GetCells() const
{
    return m_cells;
}

void TableDetectInfo::SetCells(const vector<TableCell>& _cells)
{
    m_cells = _cells;
    m_cellsHasBeenSet = true;
}

bool TableDetectInfo::CellsHasBeenSet() const
{
    return m_cellsHasBeenSet;
}

vector<TableTitle> TableDetectInfo::GetTitles() const
{
    return m_titles;
}

void TableDetectInfo::SetTitles(const vector<TableTitle>& _titles)
{
    m_titles = _titles;
    m_titlesHasBeenSet = true;
}

bool TableDetectInfo::TitlesHasBeenSet() const
{
    return m_titlesHasBeenSet;
}

int64_t TableDetectInfo::GetType() const
{
    return m_type;
}

void TableDetectInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableDetectInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Coord> TableDetectInfo::GetTableCoordPoint() const
{
    return m_tableCoordPoint;
}

void TableDetectInfo::SetTableCoordPoint(const vector<Coord>& _tableCoordPoint)
{
    m_tableCoordPoint = _tableCoordPoint;
    m_tableCoordPointHasBeenSet = true;
}

bool TableDetectInfo::TableCoordPointHasBeenSet() const
{
    return m_tableCoordPointHasBeenSet;
}

