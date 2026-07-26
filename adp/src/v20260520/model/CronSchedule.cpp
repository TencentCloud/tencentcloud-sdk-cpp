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

#include <tencentcloud/adp/v20260520/model/CronSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CronSchedule::CronSchedule() :
    m_expressionHasBeenSet(false)
{
}

CoreInternalOutcome CronSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronSchedule.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

}


string CronSchedule::GetExpression() const
{
    return m_expression;
}

void CronSchedule::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool CronSchedule::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

