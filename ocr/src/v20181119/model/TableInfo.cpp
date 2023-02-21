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

#include <tencentcloud/ocr/v20181119/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TableInfo::TableInfo() :
    m_cellsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tableCoordPointHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cells") && !value["Cells"].IsNull())
    {
        if (!value["Cells"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Cells` is not array type"));

        const rapidjson::Value &tmpValue = value["Cells"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableCellInfo item;
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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TableCoordPoint") && !value["TableCoordPoint"].IsNull())
    {
        if (!value["TableCoordPoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableCoordPoint` is not array type"));

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

void TableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


vector<TableCellInfo> TableInfo::GetCells() const
{
    return m_cells;
}

void TableInfo::SetCells(const vector<TableCellInfo>& _cells)
{
    m_cells = _cells;
    m_cellsHasBeenSet = true;
}

bool TableInfo::CellsHasBeenSet() const
{
    return m_cellsHasBeenSet;
}

int64_t TableInfo::GetType() const
{
    return m_type;
}

void TableInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Coord> TableInfo::GetTableCoordPoint() const
{
    return m_tableCoordPoint;
}

void TableInfo::SetTableCoordPoint(const vector<Coord>& _tableCoordPoint)
{
    m_tableCoordPoint = _tableCoordPoint;
    m_tableCoordPointHasBeenSet = true;
}

bool TableInfo::TableCoordPointHasBeenSet() const
{
    return m_tableCoordPointHasBeenSet;
}

