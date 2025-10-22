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

#include <tencentcloud/waf/v20180125/model/TokenRuleEntryValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TokenRuleEntryValue::TokenRuleEntryValue() :
    m_logicValueHasBeenSet(false),
    m_multiValueHasBeenSet(false),
    m_validKeyHasBeenSet(false)
{
}

CoreInternalOutcome TokenRuleEntryValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogicValue") && !value["LogicValue"].IsNull())
    {
        if (!value["LogicValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TokenRuleEntryValue.LogicValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logicValue = value["LogicValue"].GetBool();
        m_logicValueHasBeenSet = true;
    }

    if (value.HasMember("MultiValue") && !value["MultiValue"].IsNull())
    {
        if (!value["MultiValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TokenRuleEntryValue.MultiValue` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_multiValue.push_back((*itr).GetString());
        }
        m_multiValueHasBeenSet = true;
    }

    if (value.HasMember("ValidKey") && !value["ValidKey"].IsNull())
    {
        if (!value["ValidKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenRuleEntryValue.ValidKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validKey = string(value["ValidKey"].GetString());
        m_validKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenRuleEntryValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logicValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicValue, allocator);
    }

    if (m_multiValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_multiValue.begin(); itr != m_multiValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_validKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validKey.c_str(), allocator).Move(), allocator);
    }

}


bool TokenRuleEntryValue::GetLogicValue() const
{
    return m_logicValue;
}

void TokenRuleEntryValue::SetLogicValue(const bool& _logicValue)
{
    m_logicValue = _logicValue;
    m_logicValueHasBeenSet = true;
}

bool TokenRuleEntryValue::LogicValueHasBeenSet() const
{
    return m_logicValueHasBeenSet;
}

vector<string> TokenRuleEntryValue::GetMultiValue() const
{
    return m_multiValue;
}

void TokenRuleEntryValue::SetMultiValue(const vector<string>& _multiValue)
{
    m_multiValue = _multiValue;
    m_multiValueHasBeenSet = true;
}

bool TokenRuleEntryValue::MultiValueHasBeenSet() const
{
    return m_multiValueHasBeenSet;
}

string TokenRuleEntryValue::GetValidKey() const
{
    return m_validKey;
}

void TokenRuleEntryValue::SetValidKey(const string& _validKey)
{
    m_validKey = _validKey;
    m_validKeyHasBeenSet = true;
}

bool TokenRuleEntryValue::ValidKeyHasBeenSet() const
{
    return m_validKeyHasBeenSet;
}

