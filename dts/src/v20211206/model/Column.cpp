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

#include <tencentcloud/dts/v20211206/model/Column.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Column::Column() :
    m_columnNameHasBeenSet(false),
    m_newColumnNameHasBeenSet(false)
{
}

CoreInternalOutcome Column::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("NewColumnName") && !value["NewColumnName"].IsNull())
    {
        if (!value["NewColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.NewColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newColumnName = string(value["NewColumnName"].GetString());
        m_newColumnNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Column::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_newColumnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newColumnName.c_str(), allocator).Move(), allocator);
    }

}


string Column::GetColumnName() const
{
    return m_columnName;
}

void Column::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool Column::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string Column::GetNewColumnName() const
{
    return m_newColumnName;
}

void Column::SetNewColumnName(const string& _newColumnName)
{
    m_newColumnName = _newColumnName;
    m_newColumnNameHasBeenSet = true;
}

bool Column::NewColumnNameHasBeenSet() const
{
    return m_newColumnNameHasBeenSet;
}

