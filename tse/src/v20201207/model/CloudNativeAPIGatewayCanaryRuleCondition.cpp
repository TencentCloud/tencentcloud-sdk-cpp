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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayCanaryRuleCondition::CloudNativeAPIGatewayCanaryRuleCondition() :
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_globalConfigIdHasBeenSet(false),
    m_globalConfigNameHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayCanaryRuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("GlobalConfigId") && !value["GlobalConfigId"].IsNull())
    {
        if (!value["GlobalConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.GlobalConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalConfigId = string(value["GlobalConfigId"].GetString());
        m_globalConfigIdHasBeenSet = true;
    }

    if (value.HasMember("GlobalConfigName") && !value["GlobalConfigName"].IsNull())
    {
        if (!value["GlobalConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRuleCondition.GlobalConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalConfigName = string(value["GlobalConfigName"].GetString());
        m_globalConfigNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayCanaryRuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_globalConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalConfigName.c_str(), allocator).Move(), allocator);
    }

}


string CloudNativeAPIGatewayCanaryRuleCondition::GetType() const
{
    return m_type;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetKey() const
{
    return m_key;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetOperator() const
{
    return m_operator;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetValue() const
{
    return m_value;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetDelimiter() const
{
    return m_delimiter;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetGlobalConfigId() const
{
    return m_globalConfigId;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetGlobalConfigId(const string& _globalConfigId)
{
    m_globalConfigId = _globalConfigId;
    m_globalConfigIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::GlobalConfigIdHasBeenSet() const
{
    return m_globalConfigIdHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRuleCondition::GetGlobalConfigName() const
{
    return m_globalConfigName;
}

void CloudNativeAPIGatewayCanaryRuleCondition::SetGlobalConfigName(const string& _globalConfigName)
{
    m_globalConfigName = _globalConfigName;
    m_globalConfigNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRuleCondition::GlobalConfigNameHasBeenSet() const
{
    return m_globalConfigNameHasBeenSet;
}

