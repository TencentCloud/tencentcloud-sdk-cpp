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

#include <tencentcloud/teo/v20220901/model/CustomExpressionField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomExpressionField::CustomExpressionField() :
    m_nameHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome CustomExpressionField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomExpressionField.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomExpressionField.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomExpressionField.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomExpressionField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string CustomExpressionField::GetName() const
{
    return m_name;
}

void CustomExpressionField::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomExpressionField::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomExpressionField::GetExpression() const
{
    return m_expression;
}

void CustomExpressionField::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool CustomExpressionField::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

bool CustomExpressionField::GetEnabled() const
{
    return m_enabled;
}

void CustomExpressionField::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CustomExpressionField::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

