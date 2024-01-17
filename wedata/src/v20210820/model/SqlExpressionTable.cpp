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

#include <tencentcloud/wedata/v20210820/model/SqlExpressionTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SqlExpressionTable::SqlExpressionTable() :
    m_tableExpressionHasBeenSet(false),
    m_columnExpressionHasBeenSet(false)
{
}

CoreInternalOutcome SqlExpressionTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableExpression") && !value["TableExpression"].IsNull())
    {
        if (!value["TableExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlExpressionTable.TableExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableExpression = string(value["TableExpression"].GetString());
        m_tableExpressionHasBeenSet = true;
    }

    if (value.HasMember("ColumnExpression") && !value["ColumnExpression"].IsNull())
    {
        if (!value["ColumnExpression"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlExpressionTable.ColumnExpression` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnExpression"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columnExpression.push_back((*itr).GetString());
        }
        m_columnExpressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlExpressionTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_columnExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columnExpression.begin(); itr != m_columnExpression.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SqlExpressionTable::GetTableExpression() const
{
    return m_tableExpression;
}

void SqlExpressionTable::SetTableExpression(const string& _tableExpression)
{
    m_tableExpression = _tableExpression;
    m_tableExpressionHasBeenSet = true;
}

bool SqlExpressionTable::TableExpressionHasBeenSet() const
{
    return m_tableExpressionHasBeenSet;
}

vector<string> SqlExpressionTable::GetColumnExpression() const
{
    return m_columnExpression;
}

void SqlExpressionTable::SetColumnExpression(const vector<string>& _columnExpression)
{
    m_columnExpression = _columnExpression;
    m_columnExpressionHasBeenSet = true;
}

bool SqlExpressionTable::ColumnExpressionHasBeenSet() const
{
    return m_columnExpressionHasBeenSet;
}

