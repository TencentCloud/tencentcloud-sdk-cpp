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

#include <tencentcloud/waf/v20180125/model/UCBEntryValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UCBEntryValue::UCBEntryValue() :
    m_basicValueHasBeenSet(false),
    m_logicValueHasBeenSet(false),
    m_belongValueHasBeenSet(false),
    m_validKeyHasBeenSet(false),
    m_multiValueHasBeenSet(false)
{
}

CoreInternalOutcome UCBEntryValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicValue") && !value["BasicValue"].IsNull())
    {
        if (!value["BasicValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UCBEntryValue.BasicValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basicValue = string(value["BasicValue"].GetString());
        m_basicValueHasBeenSet = true;
    }

    if (value.HasMember("LogicValue") && !value["LogicValue"].IsNull())
    {
        if (!value["LogicValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UCBEntryValue.LogicValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logicValue = value["LogicValue"].GetBool();
        m_logicValueHasBeenSet = true;
    }

    if (value.HasMember("BelongValue") && !value["BelongValue"].IsNull())
    {
        if (!value["BelongValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UCBEntryValue.BelongValue` is not array type"));

        const rapidjson::Value &tmpValue = value["BelongValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_belongValue.push_back((*itr).GetString());
        }
        m_belongValueHasBeenSet = true;
    }

    if (value.HasMember("ValidKey") && !value["ValidKey"].IsNull())
    {
        if (!value["ValidKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UCBEntryValue.ValidKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validKey = string(value["ValidKey"].GetString());
        m_validKeyHasBeenSet = true;
    }

    if (value.HasMember("MultiValue") && !value["MultiValue"].IsNull())
    {
        if (!value["MultiValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UCBEntryValue.MultiValue` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_multiValue.push_back((*itr).GetString());
        }
        m_multiValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UCBEntryValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basicValue.c_str(), allocator).Move(), allocator);
    }

    if (m_logicValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicValue, allocator);
    }

    if (m_belongValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_belongValue.begin(); itr != m_belongValue.end(); ++itr)
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

}


string UCBEntryValue::GetBasicValue() const
{
    return m_basicValue;
}

void UCBEntryValue::SetBasicValue(const string& _basicValue)
{
    m_basicValue = _basicValue;
    m_basicValueHasBeenSet = true;
}

bool UCBEntryValue::BasicValueHasBeenSet() const
{
    return m_basicValueHasBeenSet;
}

bool UCBEntryValue::GetLogicValue() const
{
    return m_logicValue;
}

void UCBEntryValue::SetLogicValue(const bool& _logicValue)
{
    m_logicValue = _logicValue;
    m_logicValueHasBeenSet = true;
}

bool UCBEntryValue::LogicValueHasBeenSet() const
{
    return m_logicValueHasBeenSet;
}

vector<string> UCBEntryValue::GetBelongValue() const
{
    return m_belongValue;
}

void UCBEntryValue::SetBelongValue(const vector<string>& _belongValue)
{
    m_belongValue = _belongValue;
    m_belongValueHasBeenSet = true;
}

bool UCBEntryValue::BelongValueHasBeenSet() const
{
    return m_belongValueHasBeenSet;
}

string UCBEntryValue::GetValidKey() const
{
    return m_validKey;
}

void UCBEntryValue::SetValidKey(const string& _validKey)
{
    m_validKey = _validKey;
    m_validKeyHasBeenSet = true;
}

bool UCBEntryValue::ValidKeyHasBeenSet() const
{
    return m_validKeyHasBeenSet;
}

vector<string> UCBEntryValue::GetMultiValue() const
{
    return m_multiValue;
}

void UCBEntryValue::SetMultiValue(const vector<string>& _multiValue)
{
    m_multiValue = _multiValue;
    m_multiValueHasBeenSet = true;
}

bool UCBEntryValue::MultiValueHasBeenSet() const
{
    return m_multiValueHasBeenSet;
}

