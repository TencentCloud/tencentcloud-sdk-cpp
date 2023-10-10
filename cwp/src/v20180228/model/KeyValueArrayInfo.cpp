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

#include <tencentcloud/cwp/v20180228/model/KeyValueArrayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

KeyValueArrayInfo::KeyValueArrayInfo() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome KeyValueArrayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyValueArrayInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KeyValueArrayInfo.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyValueArrayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

}


string KeyValueArrayInfo::GetKey() const
{
    return m_key;
}

void KeyValueArrayInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool KeyValueArrayInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

ValueInfo KeyValueArrayInfo::GetValue() const
{
    return m_value;
}

void KeyValueArrayInfo::SetValue(const ValueInfo& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool KeyValueArrayInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

