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

#include <tencentcloud/lke/v20231130/model/Widget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Widget::Widget() :
    m_widgetIdHasBeenSet(false),
    m_widgetRunIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_encodedWidgetHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

CoreInternalOutcome Widget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }

    if (value.HasMember("WidgetRunId") && !value["WidgetRunId"].IsNull())
    {
        if (!value["WidgetRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.WidgetRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetRunId = string(value["WidgetRunId"].GetString());
        m_widgetRunIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("EncodedWidget") && !value["EncodedWidget"].IsNull())
    {
        if (!value["EncodedWidget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.EncodedWidget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedWidget = string(value["EncodedWidget"].GetString());
        m_encodedWidgetHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Widget.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Widget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_encodedWidgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedWidget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedWidget.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

}


string Widget::GetWidgetId() const
{
    return m_widgetId;
}

void Widget::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool Widget::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

string Widget::GetWidgetRunId() const
{
    return m_widgetRunId;
}

void Widget::SetWidgetRunId(const string& _widgetRunId)
{
    m_widgetRunId = _widgetRunId;
    m_widgetRunIdHasBeenSet = true;
}

bool Widget::WidgetRunIdHasBeenSet() const
{
    return m_widgetRunIdHasBeenSet;
}

string Widget::GetState() const
{
    return m_state;
}

void Widget::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Widget::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t Widget::GetPosition() const
{
    return m_position;
}

void Widget::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Widget::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string Widget::GetEncodedWidget() const
{
    return m_encodedWidget;
}

void Widget::SetEncodedWidget(const string& _encodedWidget)
{
    m_encodedWidget = _encodedWidget;
    m_encodedWidgetHasBeenSet = true;
}

bool Widget::EncodedWidgetHasBeenSet() const
{
    return m_encodedWidgetHasBeenSet;
}

string Widget::GetPayload() const
{
    return m_payload;
}

void Widget::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool Widget::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

