/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dts/v20211206/model/TableFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

TableFilter::TableFilter() :
    m_tableNameHasBeenSet(false),
    m_opFilterHasBeenSet(false)
{
}

CoreInternalOutcome TableFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableFilter.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("OpFilter") && !value["OpFilter"].IsNull())
    {
        if (!value["OpFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableFilter.OpFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_opFilter.Deserialize(value["OpFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_opFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_opFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_opFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TableFilter::GetTableName() const
{
    return m_tableName;
}

void TableFilter::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableFilter::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

OpFilter TableFilter::GetOpFilter() const
{
    return m_opFilter;
}

void TableFilter::SetOpFilter(const OpFilter& _opFilter)
{
    m_opFilter = _opFilter;
    m_opFilterHasBeenSet = true;
}

bool TableFilter::OpFilterHasBeenSet() const
{
    return m_opFilterHasBeenSet;
}

