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

#include <tencentcloud/rce/v20260130/model/BookingEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

BookingEvent::BookingEvent() :
    m_bookingSceneHasBeenSet(false),
    m_bookingTimeHasBeenSet(false),
    m_bookingIdHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome BookingEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BookingScene") && !value["BookingScene"].IsNull())
    {
        if (!value["BookingScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BookingEvent.BookingScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingScene = string(value["BookingScene"].GetString());
        m_bookingSceneHasBeenSet = true;
    }

    if (value.HasMember("BookingTime") && !value["BookingTime"].IsNull())
    {
        if (!value["BookingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BookingEvent.BookingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingTime = string(value["BookingTime"].GetString());
        m_bookingTimeHasBeenSet = true;
    }

    if (value.HasMember("BookingId") && !value["BookingId"].IsNull())
    {
        if (!value["BookingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BookingEvent.BookingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingId = string(value["BookingId"].GetString());
        m_bookingIdHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BookingEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BookingEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bookingSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingScene.c_str(), allocator).Move(), allocator);
    }

    if (m_bookingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bookingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingId.c_str(), allocator).Move(), allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BookingEvent::GetBookingScene() const
{
    return m_bookingScene;
}

void BookingEvent::SetBookingScene(const string& _bookingScene)
{
    m_bookingScene = _bookingScene;
    m_bookingSceneHasBeenSet = true;
}

bool BookingEvent::BookingSceneHasBeenSet() const
{
    return m_bookingSceneHasBeenSet;
}

string BookingEvent::GetBookingTime() const
{
    return m_bookingTime;
}

void BookingEvent::SetBookingTime(const string& _bookingTime)
{
    m_bookingTime = _bookingTime;
    m_bookingTimeHasBeenSet = true;
}

bool BookingEvent::BookingTimeHasBeenSet() const
{
    return m_bookingTimeHasBeenSet;
}

string BookingEvent::GetBookingId() const
{
    return m_bookingId;
}

void BookingEvent::SetBookingId(const string& _bookingId)
{
    m_bookingId = _bookingId;
    m_bookingIdHasBeenSet = true;
}

bool BookingEvent::BookingIdHasBeenSet() const
{
    return m_bookingIdHasBeenSet;
}

vector<Cust> BookingEvent::GetCust() const
{
    return m_cust;
}

void BookingEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool BookingEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

