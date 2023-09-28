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

#include <tencentcloud/tcb/v20180608/model/CustomRequestToAdd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CustomRequestToAdd::CustomRequestToAdd() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_appendActionHasBeenSet(false)
{
}

CoreInternalOutcome CustomRequestToAdd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRequestToAdd.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRequestToAdd.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("AppendAction") && !value["AppendAction"].IsNull())
    {
        if (!value["AppendAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRequestToAdd.AppendAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appendAction = string(value["AppendAction"].GetString());
        m_appendActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomRequestToAdd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_appendActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppendAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appendAction.c_str(), allocator).Move(), allocator);
    }

}


string CustomRequestToAdd::GetKey() const
{
    return m_key;
}

void CustomRequestToAdd::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CustomRequestToAdd::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CustomRequestToAdd::GetValue() const
{
    return m_value;
}

void CustomRequestToAdd::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CustomRequestToAdd::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CustomRequestToAdd::GetAppendAction() const
{
    return m_appendAction;
}

void CustomRequestToAdd::SetAppendAction(const string& _appendAction)
{
    m_appendAction = _appendAction;
    m_appendActionHasBeenSet = true;
}

bool CustomRequestToAdd::AppendActionHasBeenSet() const
{
    return m_appendActionHasBeenSet;
}

