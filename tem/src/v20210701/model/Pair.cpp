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

#include <tencentcloud/tem/v20210701/model/Pair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

Pair::Pair() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_secretHasBeenSet(false)
{
}

CoreInternalOutcome Pair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pair.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pair.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pair.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pair.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pair.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Pair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

}


string Pair::GetKey() const
{
    return m_key;
}

void Pair::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Pair::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string Pair::GetValue() const
{
    return m_value;
}

void Pair::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Pair::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string Pair::GetType() const
{
    return m_type;
}

void Pair::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Pair::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Pair::GetConfig() const
{
    return m_config;
}

void Pair::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool Pair::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string Pair::GetSecret() const
{
    return m_secret;
}

void Pair::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool Pair::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

