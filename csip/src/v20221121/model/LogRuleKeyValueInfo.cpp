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

#include <tencentcloud/csip/v20221121/model/LogRuleKeyValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogRuleKeyValueInfo::LogRuleKeyValueInfo() :
    m_caseSensitiveHasBeenSet(false),
    m_keyValuesHasBeenSet(false)
{
}

CoreInternalOutcome LogRuleKeyValueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseSensitive") && !value["CaseSensitive"].IsNull())
    {
        if (!value["CaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogRuleKeyValueInfo.CaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caseSensitive = value["CaseSensitive"].GetBool();
        m_caseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("KeyValues") && !value["KeyValues"].IsNull())
    {
        if (!value["KeyValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogRuleKeyValueInfo.KeyValues` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogKeyValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyValues.push_back(item);
        }
        m_keyValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogRuleKeyValueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_keyValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyValues.begin(); itr != m_keyValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool LogRuleKeyValueInfo::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void LogRuleKeyValueInfo::SetCaseSensitive(const bool& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool LogRuleKeyValueInfo::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

vector<LogKeyValueInfo> LogRuleKeyValueInfo::GetKeyValues() const
{
    return m_keyValues;
}

void LogRuleKeyValueInfo::SetKeyValues(const vector<LogKeyValueInfo>& _keyValues)
{
    m_keyValues = _keyValues;
    m_keyValuesHasBeenSet = true;
}

bool LogRuleKeyValueInfo::KeyValuesHasBeenSet() const
{
    return m_keyValuesHasBeenSet;
}

