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

#include <tencentcloud/waf/v20180125/model/BotActionScopeRuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotActionScopeRuleEntry::BotActionScopeRuleEntry() :
    m_keyHasBeenSet(false),
    m_opHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueArrayHasBeenSet(false)
{
}

CoreInternalOutcome BotActionScopeRuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotActionScopeRuleEntry.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotActionScopeRuleEntry.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotActionScopeRuleEntry.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotActionScopeRuleEntry.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ValueArray") && !value["ValueArray"].IsNull())
    {
        if (!value["ValueArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotActionScopeRuleEntry.ValueArray` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_valueArray.push_back((*itr).GetString());
        }
        m_valueArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotActionScopeRuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_valueArray.begin(); itr != m_valueArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BotActionScopeRuleEntry::GetKey() const
{
    return m_key;
}

void BotActionScopeRuleEntry::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool BotActionScopeRuleEntry::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string BotActionScopeRuleEntry::GetOp() const
{
    return m_op;
}

void BotActionScopeRuleEntry::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool BotActionScopeRuleEntry::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

string BotActionScopeRuleEntry::GetValue() const
{
    return m_value;
}

void BotActionScopeRuleEntry::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BotActionScopeRuleEntry::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BotActionScopeRuleEntry::GetName() const
{
    return m_name;
}

void BotActionScopeRuleEntry::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BotActionScopeRuleEntry::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> BotActionScopeRuleEntry::GetValueArray() const
{
    return m_valueArray;
}

void BotActionScopeRuleEntry::SetValueArray(const vector<string>& _valueArray)
{
    m_valueArray = _valueArray;
    m_valueArrayHasBeenSet = true;
}

bool BotActionScopeRuleEntry::ValueArrayHasBeenSet() const
{
    return m_valueArrayHasBeenSet;
}

