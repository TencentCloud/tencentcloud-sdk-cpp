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

#include <tencentcloud/redis/v20180412/model/InstanceParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

InstanceParam::InstanceParam() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome InstanceParam::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceParam.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceParam.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceParam::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string InstanceParam::GetKey() const
{
    return m_key;
}

void InstanceParam::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool InstanceParam::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string InstanceParam::GetValue() const
{
    return m_value;
}

void InstanceParam::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InstanceParam::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

