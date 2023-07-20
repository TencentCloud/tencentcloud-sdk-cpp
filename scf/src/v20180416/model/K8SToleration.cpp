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

#include <tencentcloud/scf/v20180416/model/K8SToleration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

K8SToleration::K8SToleration() :
    m_keyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_effectHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_tolerationSecondsHasBeenSet(false)
{
}

CoreInternalOutcome K8SToleration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SToleration.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SToleration.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Effect") && !value["Effect"].IsNull())
    {
        if (!value["Effect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SToleration.Effect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effect = string(value["Effect"].GetString());
        m_effectHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SToleration.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("TolerationSeconds") && !value["TolerationSeconds"].IsNull())
    {
        if (!value["TolerationSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8SToleration.TolerationSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tolerationSeconds = value["TolerationSeconds"].GetUint64();
        m_tolerationSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8SToleration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_effectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effect.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_tolerationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TolerationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tolerationSeconds, allocator);
    }

}


string K8SToleration::GetKey() const
{
    return m_key;
}

void K8SToleration::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool K8SToleration::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string K8SToleration::GetOperator() const
{
    return m_operator;
}

void K8SToleration::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool K8SToleration::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string K8SToleration::GetEffect() const
{
    return m_effect;
}

void K8SToleration::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool K8SToleration::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

string K8SToleration::GetValue() const
{
    return m_value;
}

void K8SToleration::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool K8SToleration::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t K8SToleration::GetTolerationSeconds() const
{
    return m_tolerationSeconds;
}

void K8SToleration::SetTolerationSeconds(const uint64_t& _tolerationSeconds)
{
    m_tolerationSeconds = _tolerationSeconds;
    m_tolerationSecondsHasBeenSet = true;
}

bool K8SToleration::TolerationSecondsHasBeenSet() const
{
    return m_tolerationSecondsHasBeenSet;
}

