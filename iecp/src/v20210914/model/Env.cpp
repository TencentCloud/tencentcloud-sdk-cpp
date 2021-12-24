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

#include <tencentcloud/iecp/v20210914/model/Env.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

Env::Env() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueFromHasBeenSet(false)
{
}

CoreInternalOutcome Env::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Env.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Env.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueFrom") && !value["ValueFrom"].IsNull())
    {
        if (!value["ValueFrom"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Env.ValueFrom` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_valueFrom.Deserialize(value["ValueFrom"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueFromHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Env::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_valueFrom.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Env::GetName() const
{
    return m_name;
}

void Env::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Env::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Env::GetValue() const
{
    return m_value;
}

void Env::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Env::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

EnvValueSelector Env::GetValueFrom() const
{
    return m_valueFrom;
}

void Env::SetValueFrom(const EnvValueSelector& _valueFrom)
{
    m_valueFrom = _valueFrom;
    m_valueFromHasBeenSet = true;
}

bool Env::ValueFromHasBeenSet() const
{
    return m_valueFromHasBeenSet;
}

