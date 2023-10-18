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

#include <tencentcloud/oceanus/v20190422/model/StatementResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

StatementResult::StatementResult() :
    m_columnsHasBeenSet(false),
    m_rowFormatHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome StatementResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatementResult.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("RowFormat") && !value["RowFormat"].IsNull())
    {
        if (!value["RowFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatementResult.RowFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowFormat = string(value["RowFormat"].GetString());
        m_rowFormatHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatementResult.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatementResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rowFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ResultColumn> StatementResult::GetColumns() const
{
    return m_columns;
}

void StatementResult::SetColumns(const vector<ResultColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool StatementResult::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

string StatementResult::GetRowFormat() const
{
    return m_rowFormat;
}

void StatementResult::SetRowFormat(const string& _rowFormat)
{
    m_rowFormat = _rowFormat;
    m_rowFormatHasBeenSet = true;
}

bool StatementResult::RowFormatHasBeenSet() const
{
    return m_rowFormatHasBeenSet;
}

vector<ResultData> StatementResult::GetData() const
{
    return m_data;
}

void StatementResult::SetData(const vector<ResultData>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool StatementResult::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

