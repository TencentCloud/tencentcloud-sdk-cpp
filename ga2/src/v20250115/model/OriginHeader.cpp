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

#include <tencentcloud/ga2/v20250115/model/OriginHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

OriginHeader::OriginHeader() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome OriginHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginHeader.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginHeader.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string OriginHeader::GetKey() const
{
    return m_key;
}

void OriginHeader::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool OriginHeader::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string OriginHeader::GetValue() const
{
    return m_value;
}

void OriginHeader::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OriginHeader::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

