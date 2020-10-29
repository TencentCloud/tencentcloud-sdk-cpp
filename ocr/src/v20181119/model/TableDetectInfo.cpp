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
using namespace rapidjson;
using namespace std;

TableDetectInfo::TableDetectInfo() :
    m_cellsHasBeenSet(false),
    m_titlesHasBeenSet(false)
{
}

CoreInternalOutcome TableDetectInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Cells") && !value["Cells"].IsNull())
    {
        if (!value["Cells"].IsArray())
            return CoreInternalOutcome(Error("response `TableDetectInfo.Cells` is not array type"));

        const Value &tmpValue = value["Cells"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TableDetectInfo.Titles` is not array type"));

        const Value &tmpValue = value["Titles"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void TableDetectInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cellsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cells";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cells.begin(); itr != m_cells.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_titlesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Titles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_titles.begin(); itr != m_titles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
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

