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

#include <tencentcloud/iecp/v20210914/model/EdgeNodeLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodeLabel::EdgeNodeLabel() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_protectedHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodeLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeLabel.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeLabel.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Protected") && !value["Protected"].IsNull())
    {
        if (!value["Protected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeLabel.Protected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protected = value["Protected"].GetBool();
        m_protectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodeLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_protectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protected, allocator);
    }

}


string EdgeNodeLabel::GetKey() const
{
    return m_key;
}

void EdgeNodeLabel::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EdgeNodeLabel::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EdgeNodeLabel::GetValue() const
{
    return m_value;
}

void EdgeNodeLabel::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool EdgeNodeLabel::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool EdgeNodeLabel::GetProtected() const
{
    return m_protected;
}

void EdgeNodeLabel::SetProtected(const bool& _protected)
{
    m_protected = _protected;
    m_protectedHasBeenSet = true;
}

bool EdgeNodeLabel::ProtectedHasBeenSet() const
{
    return m_protectedHasBeenSet;
}

