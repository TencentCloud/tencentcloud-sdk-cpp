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

#include <tencentcloud/lke/v20231130/model/WidgetAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WidgetAction::WidgetAction() :
    m_widgetIdHasBeenSet(false),
    m_widgetRunIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

CoreInternalOutcome WidgetAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetAction.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetRunId") && !value["WidgetRunId"].IsNull())
    {
        if (!value["WidgetRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetAction.WidgetRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetRunId = string(value["WidgetRunId"].GetString());
        m_widgetRunIdHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WidgetAction.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WidgetAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


string WidgetAction::GetWidgetId() const
{
    return m_widgetId;
}

void WidgetAction::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool WidgetAction::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

string WidgetAction::GetWidgetRunId() const
{
    return m_widgetRunId;
}

void WidgetAction::SetWidgetRunId(const string& _widgetRunId)
{
    m_widgetRunId = _widgetRunId;
    m_widgetRunIdHasBeenSet = true;
}

bool WidgetAction::WidgetRunIdHasBeenSet() const
{
    return m_widgetRunIdHasBeenSet;
}

string WidgetAction::GetActionType() const
{
    return m_actionType;
}

void WidgetAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool WidgetAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string WidgetAction::GetPayload() const
{
    return m_payload;
}

void WidgetAction::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool WidgetAction::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

