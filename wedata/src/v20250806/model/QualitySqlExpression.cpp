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

#include <tencentcloud/wedata/v20250806/model/QualitySqlExpression.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualitySqlExpression::QualitySqlExpression() :
    m_tableExpressionsHasBeenSet(false),
    m_paramExpressionsHasBeenSet(false),
    m_systemTemplateExpressionsHasBeenSet(false)
{
}

CoreInternalOutcome QualitySqlExpression::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableExpressions") && !value["TableExpressions"].IsNull())
    {
        if (!value["TableExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualitySqlExpression.TableExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["TableExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualitySqlExpressionTable item;
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
            return CoreInternalOutcome(Core::Error("response `QualitySqlExpression.ParamExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_paramExpressions.push_back((*itr).GetString());
        }
        m_paramExpressionsHasBeenSet = true;
    }

    if (value.HasMember("SystemTemplateExpressions") && !value["SystemTemplateExpressions"].IsNull())
    {
        if (!value["SystemTemplateExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualitySqlExpression.SystemTemplateExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemTemplateExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_systemTemplateExpressions.push_back((*itr).GetString());
        }
        m_systemTemplateExpressionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualitySqlExpression::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_systemTemplateExpressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemTemplateExpressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_systemTemplateExpressions.begin(); itr != m_systemTemplateExpressions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<QualitySqlExpressionTable> QualitySqlExpression::GetTableExpressions() const
{
    return m_tableExpressions;
}

void QualitySqlExpression::SetTableExpressions(const vector<QualitySqlExpressionTable>& _tableExpressions)
{
    m_tableExpressions = _tableExpressions;
    m_tableExpressionsHasBeenSet = true;
}

bool QualitySqlExpression::TableExpressionsHasBeenSet() const
{
    return m_tableExpressionsHasBeenSet;
}

vector<string> QualitySqlExpression::GetParamExpressions() const
{
    return m_paramExpressions;
}

void QualitySqlExpression::SetParamExpressions(const vector<string>& _paramExpressions)
{
    m_paramExpressions = _paramExpressions;
    m_paramExpressionsHasBeenSet = true;
}

bool QualitySqlExpression::ParamExpressionsHasBeenSet() const
{
    return m_paramExpressionsHasBeenSet;
}

vector<string> QualitySqlExpression::GetSystemTemplateExpressions() const
{
    return m_systemTemplateExpressions;
}

void QualitySqlExpression::SetSystemTemplateExpressions(const vector<string>& _systemTemplateExpressions)
{
    m_systemTemplateExpressions = _systemTemplateExpressions;
    m_systemTemplateExpressionsHasBeenSet = true;
}

bool QualitySqlExpression::SystemTemplateExpressionsHasBeenSet() const
{
    return m_systemTemplateExpressionsHasBeenSet;
}

