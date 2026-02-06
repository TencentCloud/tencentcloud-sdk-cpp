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

#include <tencentcloud/waf/v20180125/model/BotDataFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotDataFilter::BotDataFilter() :
    m_entityHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome BotDataFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Entity") && !value["Entity"].IsNull())
    {
        if (!value["Entity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotDataFilter.Entity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entity = string(value["Entity"].GetString());
        m_entityHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotDataFilter.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotDataFilter.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotDataFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
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

}


string BotDataFilter::GetEntity() const
{
    return m_entity;
}

void BotDataFilter::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool BotDataFilter::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

string BotDataFilter::GetOperator() const
{
    return m_operator;
}

void BotDataFilter::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool BotDataFilter::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string BotDataFilter::GetValue() const
{
    return m_value;
}

void BotDataFilter::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BotDataFilter::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

