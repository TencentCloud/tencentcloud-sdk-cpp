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

#include <tencentcloud/adp/v20260520/model/ConversationWidgetAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationWidgetAction::ConversationWidgetAction() :
    m_actionTypeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_widgetIdHasBeenSet(false),
    m_widgetRunIdHasBeenSet(false)
{
}

CoreInternalOutcome ConversationWidgetAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationWidgetAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationWidgetAction.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationWidgetAction.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetRunId") && !value["WidgetRunId"].IsNull())
    {
        if (!value["WidgetRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationWidgetAction.WidgetRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetRunId = string(value["WidgetRunId"].GetString());
        m_widgetRunIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationWidgetAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetRunId.c_str(), allocator).Move(), allocator);
    }

}


string ConversationWidgetAction::GetActionType() const
{
    return m_actionType;
}

void ConversationWidgetAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ConversationWidgetAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ConversationWidgetAction::GetPayload() const
{
    return m_payload;
}

void ConversationWidgetAction::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool ConversationWidgetAction::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string ConversationWidgetAction::GetWidgetId() const
{
    return m_widgetId;
}

void ConversationWidgetAction::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool ConversationWidgetAction::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

string ConversationWidgetAction::GetWidgetRunId() const
{
    return m_widgetRunId;
}

void ConversationWidgetAction::SetWidgetRunId(const string& _widgetRunId)
{
    m_widgetRunId = _widgetRunId;
    m_widgetRunIdHasBeenSet = true;
}

bool ConversationWidgetAction::WidgetRunIdHasBeenSet() const
{
    return m_widgetRunIdHasBeenSet;
}

