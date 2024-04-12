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

#include <tencentcloud/lke/v20231130/model/ReleaseConfigs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReleaseConfigs::ReleaseConfigs() :
    m_configItemHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_lastValueHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseConfigs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigItem") && !value["ConfigItem"].IsNull())
    {
        if (!value["ConfigItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.ConfigItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configItem = string(value["ConfigItem"].GetString());
        m_configItemHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("LastValue") && !value["LastValue"].IsNull())
    {
        if (!value["LastValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.LastValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastValue = string(value["LastValue"].GetString());
        m_lastValueHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseConfigs.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseConfigs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configItem.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_lastValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastValue.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseConfigs::GetConfigItem() const
{
    return m_configItem;
}

void ReleaseConfigs::SetConfigItem(const string& _configItem)
{
    m_configItem = _configItem;
    m_configItemHasBeenSet = true;
}

bool ReleaseConfigs::ConfigItemHasBeenSet() const
{
    return m_configItemHasBeenSet;
}

string ReleaseConfigs::GetUpdateTime() const
{
    return m_updateTime;
}

void ReleaseConfigs::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReleaseConfigs::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ReleaseConfigs::GetAction() const
{
    return m_action;
}

void ReleaseConfigs::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ReleaseConfigs::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ReleaseConfigs::GetValue() const
{
    return m_value;
}

void ReleaseConfigs::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ReleaseConfigs::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ReleaseConfigs::GetLastValue() const
{
    return m_lastValue;
}

void ReleaseConfigs::SetLastValue(const string& _lastValue)
{
    m_lastValue = _lastValue;
    m_lastValueHasBeenSet = true;
}

bool ReleaseConfigs::LastValueHasBeenSet() const
{
    return m_lastValueHasBeenSet;
}

string ReleaseConfigs::GetContent() const
{
    return m_content;
}

void ReleaseConfigs::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ReleaseConfigs::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ReleaseConfigs::GetMessage() const
{
    return m_message;
}

void ReleaseConfigs::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ReleaseConfigs::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

