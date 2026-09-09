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

#include <tencentcloud/adp/v20260520/model/WecomRobotChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WecomRobotChannelConfig::WecomRobotChannelConfig() :
    m_callbackHasBeenSet(false),
    m_websocketHasBeenSet(false)
{
}

CoreInternalOutcome WecomRobotChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotChannelConfig.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("Websocket") && !value["Websocket"].IsNull())
    {
        if (!value["Websocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotChannelConfig.Websocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_websocket.Deserialize(value["Websocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_websocketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WecomRobotChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_websocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Websocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_websocket.ToJsonObject(value[key.c_str()], allocator);
    }

}


WecomRobotCallbackAccess WecomRobotChannelConfig::GetCallback() const
{
    return m_callback;
}

void WecomRobotChannelConfig::SetCallback(const WecomRobotCallbackAccess& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool WecomRobotChannelConfig::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

WecomRobotWebsocketAccess WecomRobotChannelConfig::GetWebsocket() const
{
    return m_websocket;
}

void WecomRobotChannelConfig::SetWebsocket(const WecomRobotWebsocketAccess& _websocket)
{
    m_websocket = _websocket;
    m_websocketHasBeenSet = true;
}

bool WecomRobotChannelConfig::WebsocketHasBeenSet() const
{
    return m_websocketHasBeenSet;
}

