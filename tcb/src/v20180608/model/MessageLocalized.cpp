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

#include <tencentcloud/tcb/v20180608/model/MessageLocalized.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MessageLocalized::MessageLocalized() :
    m_messageHasBeenSet(false),
    m_localeHasBeenSet(false)
{
}

CoreInternalOutcome MessageLocalized::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageLocalized.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Locale") && !value["Locale"].IsNull())
    {
        if (!value["Locale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageLocalized.Locale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locale = string(value["Locale"].GetString());
        m_localeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageLocalized::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_localeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locale.c_str(), allocator).Move(), allocator);
    }

}


string MessageLocalized::GetMessage() const
{
    return m_message;
}

void MessageLocalized::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MessageLocalized::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string MessageLocalized::GetLocale() const
{
    return m_locale;
}

void MessageLocalized::SetLocale(const string& _locale)
{
    m_locale = _locale;
    m_localeHasBeenSet = true;
}

bool MessageLocalized::LocaleHasBeenSet() const
{
    return m_localeHasBeenSet;
}

