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

#include <tencentcloud/cdwdoris/v20211228/model/ConfigKeyValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ConfigKeyValue::ConfigKeyValue() :
    m_keyNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_displayHasBeenSet(false),
    m_supportHotUpdateHasBeenSet(false)
{
}

CoreInternalOutcome ConfigKeyValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigKeyValue.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigKeyValue.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigKeyValue.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Display") && !value["Display"].IsNull())
    {
        if (!value["Display"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigKeyValue.Display` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_display = value["Display"].GetInt64();
        m_displayHasBeenSet = true;
    }

    if (value.HasMember("SupportHotUpdate") && !value["SupportHotUpdate"].IsNull())
    {
        if (!value["SupportHotUpdate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigKeyValue.SupportHotUpdate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportHotUpdate = value["SupportHotUpdate"].GetInt64();
        m_supportHotUpdateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigKeyValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_displayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Display";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_display, allocator);
    }

    if (m_supportHotUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHotUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportHotUpdate, allocator);
    }

}


string ConfigKeyValue::GetKeyName() const
{
    return m_keyName;
}

void ConfigKeyValue::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool ConfigKeyValue::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string ConfigKeyValue::GetValue() const
{
    return m_value;
}

void ConfigKeyValue::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ConfigKeyValue::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ConfigKeyValue::GetMessage() const
{
    return m_message;
}

void ConfigKeyValue::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ConfigKeyValue::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t ConfigKeyValue::GetDisplay() const
{
    return m_display;
}

void ConfigKeyValue::SetDisplay(const int64_t& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool ConfigKeyValue::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

int64_t ConfigKeyValue::GetSupportHotUpdate() const
{
    return m_supportHotUpdate;
}

void ConfigKeyValue::SetSupportHotUpdate(const int64_t& _supportHotUpdate)
{
    m_supportHotUpdate = _supportHotUpdate;
    m_supportHotUpdateHasBeenSet = true;
}

bool ConfigKeyValue::SupportHotUpdateHasBeenSet() const
{
    return m_supportHotUpdateHasBeenSet;
}

