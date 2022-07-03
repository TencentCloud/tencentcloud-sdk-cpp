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

#include <tencentcloud/tke/v20180525/model/Toleration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Toleration::Toleration() :
    m_keyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_effectHasBeenSet(false)
{
}

CoreInternalOutcome Toleration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Toleration.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Toleration.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Effect") && !value["Effect"].IsNull())
    {
        if (!value["Effect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Toleration.Effect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effect = string(value["Effect"].GetString());
        m_effectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Toleration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string Toleration::GetKey() const
{
    return m_key;
}

void Toleration::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Toleration::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string Toleration::GetOperator() const
{
    return m_operator;
}

void Toleration::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Toleration::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string Toleration::GetEffect() const
{
    return m_effect;
}

void Toleration::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool Toleration::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

