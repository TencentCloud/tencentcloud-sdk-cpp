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

#include <tencentcloud/dcdb/v20180411/model/TableColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

TableColumn::TableColumn() :
    m_colHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome TableColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Col") && !value["Col"].IsNull())
    {
        if (!value["Col"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableColumn.Col` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_col = string(value["Col"].GetString());
        m_colHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableColumn.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Col";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_col.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string TableColumn::GetCol() const
{
    return m_col;
}

void TableColumn::SetCol(const string& _col)
{
    m_col = _col;
    m_colHasBeenSet = true;
}

bool TableColumn::ColHasBeenSet() const
{
    return m_colHasBeenSet;
}

string TableColumn::GetType() const
{
    return m_type;
}

void TableColumn::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TableColumn::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

