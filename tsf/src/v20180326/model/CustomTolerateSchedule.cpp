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

#include <tencentcloud/tsf/v20180326/model/CustomTolerateSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CustomTolerateSchedule::CustomTolerateSchedule() :
    m_keyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_effectHasBeenSet(false),
    m_tolerationSecondsHasBeenSet(false)
{
}

CoreInternalOutcome CustomTolerateSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTolerateSchedule.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTolerateSchedule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTolerateSchedule.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Effect") && !value["Effect"].IsNull())
    {
        if (!value["Effect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTolerateSchedule.Effect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effect = string(value["Effect"].GetString());
        m_effectHasBeenSet = true;
    }

    if (value.HasMember("TolerationSeconds") && !value["TolerationSeconds"].IsNull())
    {
        if (!value["TolerationSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTolerateSchedule.TolerationSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tolerationSeconds = value["TolerationSeconds"].GetInt64();
        m_tolerationSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomTolerateSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_effectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effect.c_str(), allocator).Move(), allocator);
    }

    if (m_tolerationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TolerationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tolerationSeconds, allocator);
    }

}


string CustomTolerateSchedule::GetKey() const
{
    return m_key;
}

void CustomTolerateSchedule::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CustomTolerateSchedule::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CustomTolerateSchedule::GetOperator() const
{
    return m_operator;
}

void CustomTolerateSchedule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CustomTolerateSchedule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CustomTolerateSchedule::GetValue() const
{
    return m_value;
}

void CustomTolerateSchedule::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CustomTolerateSchedule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CustomTolerateSchedule::GetEffect() const
{
    return m_effect;
}

void CustomTolerateSchedule::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool CustomTolerateSchedule::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

int64_t CustomTolerateSchedule::GetTolerationSeconds() const
{
    return m_tolerationSeconds;
}

void CustomTolerateSchedule::SetTolerationSeconds(const int64_t& _tolerationSeconds)
{
    m_tolerationSeconds = _tolerationSeconds;
    m_tolerationSecondsHasBeenSet = true;
}

bool CustomTolerateSchedule::TolerationSecondsHasBeenSet() const
{
    return m_tolerationSecondsHasBeenSet;
}

