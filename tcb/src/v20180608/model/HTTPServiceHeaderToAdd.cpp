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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceHeaderToAdd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceHeaderToAdd::HTTPServiceHeaderToAdd() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceHeaderToAdd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeaderToAdd.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeaderToAdd.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeaderToAdd.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceHeaderToAdd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string HTTPServiceHeaderToAdd::GetKey() const
{
    return m_key;
}

void HTTPServiceHeaderToAdd::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool HTTPServiceHeaderToAdd::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string HTTPServiceHeaderToAdd::GetValue() const
{
    return m_value;
}

void HTTPServiceHeaderToAdd::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool HTTPServiceHeaderToAdd::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string HTTPServiceHeaderToAdd::GetAction() const
{
    return m_action;
}

void HTTPServiceHeaderToAdd::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool HTTPServiceHeaderToAdd::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

