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

#include <tencentcloud/trtc/v20190722/model/ServerPushText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ServerPushText::ServerPushText() :
    m_textHasBeenSet(false),
    m_interruptHasBeenSet(false),
    m_stopAfterPlayHasBeenSet(false)
{
}

CoreInternalOutcome ServerPushText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Interrupt") && !value["Interrupt"].IsNull())
    {
        if (!value["Interrupt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Interrupt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_interrupt = value["Interrupt"].GetBool();
        m_interruptHasBeenSet = true;
    }

    if (value.HasMember("StopAfterPlay") && !value["StopAfterPlay"].IsNull())
    {
        if (!value["StopAfterPlay"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.StopAfterPlay` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stopAfterPlay = value["StopAfterPlay"].GetBool();
        m_stopAfterPlayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerPushText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interrupt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interrupt, allocator);
    }

    if (m_stopAfterPlayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopAfterPlay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopAfterPlay, allocator);
    }

}


string ServerPushText::GetText() const
{
    return m_text;
}

void ServerPushText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ServerPushText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

bool ServerPushText::GetInterrupt() const
{
    return m_interrupt;
}

void ServerPushText::SetInterrupt(const bool& _interrupt)
{
    m_interrupt = _interrupt;
    m_interruptHasBeenSet = true;
}

bool ServerPushText::InterruptHasBeenSet() const
{
    return m_interruptHasBeenSet;
}

bool ServerPushText::GetStopAfterPlay() const
{
    return m_stopAfterPlay;
}

void ServerPushText::SetStopAfterPlay(const bool& _stopAfterPlay)
{
    m_stopAfterPlay = _stopAfterPlay;
    m_stopAfterPlayHasBeenSet = true;
}

bool ServerPushText::StopAfterPlayHasBeenSet() const
{
    return m_stopAfterPlayHasBeenSet;
}

