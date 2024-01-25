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

#include <tencentcloud/wedata/v20210820/model/CsvRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CsvRow::CsvRow() :
    m_rowNumberHasBeenSet(false),
    m_columnValuesHasBeenSet(false)
{
}

CoreInternalOutcome CsvRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RowNumber") && !value["RowNumber"].IsNull())
    {
        if (!value["RowNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CsvRow.RowNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowNumber = value["RowNumber"].GetUint64();
        m_rowNumberHasBeenSet = true;
    }

    if (value.HasMember("ColumnValues") && !value["ColumnValues"].IsNull())
    {
        if (!value["ColumnValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CsvRow.ColumnValues` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RowColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnValues.push_back(item);
        }
        m_columnValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CsvRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rowNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowNumber, allocator);
    }

    if (m_columnValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnValues.begin(); itr != m_columnValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CsvRow::GetRowNumber() const
{
    return m_rowNumber;
}

void CsvRow::SetRowNumber(const uint64_t& _rowNumber)
{
    m_rowNumber = _rowNumber;
    m_rowNumberHasBeenSet = true;
}

bool CsvRow::RowNumberHasBeenSet() const
{
    return m_rowNumberHasBeenSet;
}

vector<RowColumn> CsvRow::GetColumnValues() const
{
    return m_columnValues;
}

void CsvRow::SetColumnValues(const vector<RowColumn>& _columnValues)
{
    m_columnValues = _columnValues;
    m_columnValuesHasBeenSet = true;
}

bool CsvRow::ColumnValuesHasBeenSet() const
{
    return m_columnValuesHasBeenSet;
}

