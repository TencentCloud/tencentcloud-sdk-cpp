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

#include <tencentcloud/wedata/v20210820/model/SqlExpression.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SqlExpression::SqlExpression() :
    m_tableExpressionsHasBeenSet(false),
    m_paramExpressionsHasBeenSet(false)
{
}

CoreInternalOutcome SqlExpression::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableExpressions") && !value["TableExpressions"].IsNull())
    {
        if (!value["TableExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlExpression.TableExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["TableExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlExpressionTable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableExpressions.push_back(item);
        }
        m_tableExpressionsHasBeenSet = true;
    }

    if (value.HasMember("ParamExpressions") && !value["ParamExpressions"].IsNull())
    {
        if (!value["ParamExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlExpression.ParamExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_paramExpressions.push_back((*itr).GetString());
        }
        m_paramExpressionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlExpression::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableExpressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableExpressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableExpressions.begin(); itr != m_tableExpressions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramExpressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamExpressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_paramExpressions.begin(); itr != m_paramExpressions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<SqlExpressionTable> SqlExpression::GetTableExpressions() const
{
    return m_tableExpressions;
}

void SqlExpression::SetTableExpressions(const vector<SqlExpressionTable>& _tableExpressions)
{
    m_tableExpressions = _tableExpressions;
    m_tableExpressionsHasBeenSet = true;
}

bool SqlExpression::TableExpressionsHasBeenSet() const
{
    return m_tableExpressionsHasBeenSet;
}

vector<string> SqlExpression::GetParamExpressions() const
{
    return m_paramExpressions;
}

void SqlExpression::SetParamExpressions(const vector<string>& _paramExpressions)
{
    m_paramExpressions = _paramExpressions;
    m_paramExpressionsHasBeenSet = true;
}

bool SqlExpression::ParamExpressionsHasBeenSet() const
{
    return m_paramExpressionsHasBeenSet;
}

