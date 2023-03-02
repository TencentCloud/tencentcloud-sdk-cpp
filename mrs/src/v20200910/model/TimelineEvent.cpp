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

#include <tencentcloud/mrs/v20200910/model/TimelineEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TimelineEvent::TimelineEvent() :
    m_typeHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rectangleHasBeenSet(false),
    m_placeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TimelineEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Rectangle") && !value["Rectangle"].IsNull())
    {
        if (!value["Rectangle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Rectangle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rectangle.Deserialize(value["Rectangle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectangleHasBeenSet = true;
    }

    if (value.HasMember("Place") && !value["Place"].IsNull())
    {
        if (!value["Place"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.Place` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_place = string(value["Place"].GetString());
        m_placeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineEvent.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimelineEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_rectangleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rectangle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rectangle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Place";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_place.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string TimelineEvent::GetType() const
{
    return m_type;
}

void TimelineEvent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TimelineEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TimelineEvent::GetSrc() const
{
    return m_src;
}

void TimelineEvent::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool TimelineEvent::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string TimelineEvent::GetSubType() const
{
    return m_subType;
}

void TimelineEvent::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool TimelineEvent::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string TimelineEvent::GetTime() const
{
    return m_time;
}

void TimelineEvent::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TimelineEvent::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string TimelineEvent::GetValue() const
{
    return m_value;
}

void TimelineEvent::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TimelineEvent::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

Rectangle TimelineEvent::GetRectangle() const
{
    return m_rectangle;
}

void TimelineEvent::SetRectangle(const Rectangle& _rectangle)
{
    m_rectangle = _rectangle;
    m_rectangleHasBeenSet = true;
}

bool TimelineEvent::RectangleHasBeenSet() const
{
    return m_rectangleHasBeenSet;
}

string TimelineEvent::GetPlace() const
{
    return m_place;
}

void TimelineEvent::SetPlace(const string& _place)
{
    m_place = _place;
    m_placeHasBeenSet = true;
}

bool TimelineEvent::PlaceHasBeenSet() const
{
    return m_placeHasBeenSet;
}

string TimelineEvent::GetEndTime() const
{
    return m_endTime;
}

void TimelineEvent::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimelineEvent::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

