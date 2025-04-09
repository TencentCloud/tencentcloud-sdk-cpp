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

#include <tencentcloud/iotvideo/v20211125/model/CountDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

CountDataInfo::CountDataInfo() :
    m_videoExceptionNumHasBeenSet(false),
    m_videoSuccessNumHasBeenSet(false),
    m_videoSuccessRateHasBeenSet(false),
    m_eventExceptionNumHasBeenSet(false),
    m_eventSuccessNumHasBeenSet(false),
    m_eventSuccessRateHasBeenSet(false)
{
}

CoreInternalOutcome CountDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoExceptionNum") && !value["VideoExceptionNum"].IsNull())
    {
        if (!value["VideoExceptionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.VideoExceptionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoExceptionNum = value["VideoExceptionNum"].GetUint64();
        m_videoExceptionNumHasBeenSet = true;
    }

    if (value.HasMember("VideoSuccessNum") && !value["VideoSuccessNum"].IsNull())
    {
        if (!value["VideoSuccessNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.VideoSuccessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoSuccessNum = value["VideoSuccessNum"].GetUint64();
        m_videoSuccessNumHasBeenSet = true;
    }

    if (value.HasMember("VideoSuccessRate") && !value["VideoSuccessRate"].IsNull())
    {
        if (!value["VideoSuccessRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.VideoSuccessRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSuccessRate = string(value["VideoSuccessRate"].GetString());
        m_videoSuccessRateHasBeenSet = true;
    }

    if (value.HasMember("EventExceptionNum") && !value["EventExceptionNum"].IsNull())
    {
        if (!value["EventExceptionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.EventExceptionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventExceptionNum = value["EventExceptionNum"].GetUint64();
        m_eventExceptionNumHasBeenSet = true;
    }

    if (value.HasMember("EventSuccessNum") && !value["EventSuccessNum"].IsNull())
    {
        if (!value["EventSuccessNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.EventSuccessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventSuccessNum = value["EventSuccessNum"].GetUint64();
        m_eventSuccessNumHasBeenSet = true;
    }

    if (value.HasMember("EventSuccessRate") && !value["EventSuccessRate"].IsNull())
    {
        if (!value["EventSuccessRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountDataInfo.EventSuccessRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSuccessRate = string(value["EventSuccessRate"].GetString());
        m_eventSuccessRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CountDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoExceptionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoExceptionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoExceptionNum, allocator);
    }

    if (m_videoSuccessNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSuccessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoSuccessNum, allocator);
    }

    if (m_videoSuccessRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSuccessRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoSuccessRate.c_str(), allocator).Move(), allocator);
    }

    if (m_eventExceptionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventExceptionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventExceptionNum, allocator);
    }

    if (m_eventSuccessNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSuccessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventSuccessNum, allocator);
    }

    if (m_eventSuccessRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSuccessRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSuccessRate.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CountDataInfo::GetVideoExceptionNum() const
{
    return m_videoExceptionNum;
}

void CountDataInfo::SetVideoExceptionNum(const uint64_t& _videoExceptionNum)
{
    m_videoExceptionNum = _videoExceptionNum;
    m_videoExceptionNumHasBeenSet = true;
}

bool CountDataInfo::VideoExceptionNumHasBeenSet() const
{
    return m_videoExceptionNumHasBeenSet;
}

uint64_t CountDataInfo::GetVideoSuccessNum() const
{
    return m_videoSuccessNum;
}

void CountDataInfo::SetVideoSuccessNum(const uint64_t& _videoSuccessNum)
{
    m_videoSuccessNum = _videoSuccessNum;
    m_videoSuccessNumHasBeenSet = true;
}

bool CountDataInfo::VideoSuccessNumHasBeenSet() const
{
    return m_videoSuccessNumHasBeenSet;
}

string CountDataInfo::GetVideoSuccessRate() const
{
    return m_videoSuccessRate;
}

void CountDataInfo::SetVideoSuccessRate(const string& _videoSuccessRate)
{
    m_videoSuccessRate = _videoSuccessRate;
    m_videoSuccessRateHasBeenSet = true;
}

bool CountDataInfo::VideoSuccessRateHasBeenSet() const
{
    return m_videoSuccessRateHasBeenSet;
}

uint64_t CountDataInfo::GetEventExceptionNum() const
{
    return m_eventExceptionNum;
}

void CountDataInfo::SetEventExceptionNum(const uint64_t& _eventExceptionNum)
{
    m_eventExceptionNum = _eventExceptionNum;
    m_eventExceptionNumHasBeenSet = true;
}

bool CountDataInfo::EventExceptionNumHasBeenSet() const
{
    return m_eventExceptionNumHasBeenSet;
}

uint64_t CountDataInfo::GetEventSuccessNum() const
{
    return m_eventSuccessNum;
}

void CountDataInfo::SetEventSuccessNum(const uint64_t& _eventSuccessNum)
{
    m_eventSuccessNum = _eventSuccessNum;
    m_eventSuccessNumHasBeenSet = true;
}

bool CountDataInfo::EventSuccessNumHasBeenSet() const
{
    return m_eventSuccessNumHasBeenSet;
}

string CountDataInfo::GetEventSuccessRate() const
{
    return m_eventSuccessRate;
}

void CountDataInfo::SetEventSuccessRate(const string& _eventSuccessRate)
{
    m_eventSuccessRate = _eventSuccessRate;
    m_eventSuccessRateHasBeenSet = true;
}

bool CountDataInfo::EventSuccessRateHasBeenSet() const
{
    return m_eventSuccessRateHasBeenSet;
}

