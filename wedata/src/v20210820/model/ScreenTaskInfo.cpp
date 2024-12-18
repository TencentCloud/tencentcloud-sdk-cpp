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

#include <tencentcloud/wedata/v20210820/model/ScreenTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ScreenTaskInfo::ScreenTaskInfo() :
    m_countTagHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_runningNumHasBeenSet(false),
    m_stoppingNumHasBeenSet(false),
    m_stoppedNumHasBeenSet(false),
    m_frozenNumHasBeenSet(false),
    m_invalidNumHasBeenSet(false),
    m_yearNumHasBeenSet(false),
    m_monthNumHasBeenSet(false),
    m_weekNumHasBeenSet(false),
    m_dayNumHasBeenSet(false),
    m_hourNumHasBeenSet(false),
    m_minuteNumHasBeenSet(false)
{
}

CoreInternalOutcome ScreenTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountTag") && !value["CountTag"].IsNull())
    {
        if (!value["CountTag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.CountTag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countTag = value["CountTag"].GetUint64();
        m_countTagHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("RunningNum") && !value["RunningNum"].IsNull())
    {
        if (!value["RunningNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.RunningNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningNum = value["RunningNum"].GetUint64();
        m_runningNumHasBeenSet = true;
    }

    if (value.HasMember("StoppingNum") && !value["StoppingNum"].IsNull())
    {
        if (!value["StoppingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.StoppingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoppingNum = value["StoppingNum"].GetUint64();
        m_stoppingNumHasBeenSet = true;
    }

    if (value.HasMember("StoppedNum") && !value["StoppedNum"].IsNull())
    {
        if (!value["StoppedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.StoppedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoppedNum = value["StoppedNum"].GetUint64();
        m_stoppedNumHasBeenSet = true;
    }

    if (value.HasMember("FrozenNum") && !value["FrozenNum"].IsNull())
    {
        if (!value["FrozenNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.FrozenNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frozenNum = value["FrozenNum"].GetUint64();
        m_frozenNumHasBeenSet = true;
    }

    if (value.HasMember("InvalidNum") && !value["InvalidNum"].IsNull())
    {
        if (!value["InvalidNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.InvalidNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidNum = value["InvalidNum"].GetUint64();
        m_invalidNumHasBeenSet = true;
    }

    if (value.HasMember("YearNum") && !value["YearNum"].IsNull())
    {
        if (!value["YearNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.YearNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_yearNum = value["YearNum"].GetUint64();
        m_yearNumHasBeenSet = true;
    }

    if (value.HasMember("MonthNum") && !value["MonthNum"].IsNull())
    {
        if (!value["MonthNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.MonthNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monthNum = value["MonthNum"].GetUint64();
        m_monthNumHasBeenSet = true;
    }

    if (value.HasMember("WeekNum") && !value["WeekNum"].IsNull())
    {
        if (!value["WeekNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.WeekNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weekNum = value["WeekNum"].GetUint64();
        m_weekNumHasBeenSet = true;
    }

    if (value.HasMember("DayNum") && !value["DayNum"].IsNull())
    {
        if (!value["DayNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.DayNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dayNum = value["DayNum"].GetUint64();
        m_dayNumHasBeenSet = true;
    }

    if (value.HasMember("HourNum") && !value["HourNum"].IsNull())
    {
        if (!value["HourNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.HourNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hourNum = value["HourNum"].GetUint64();
        m_hourNumHasBeenSet = true;
    }

    if (value.HasMember("MinuteNum") && !value["MinuteNum"].IsNull())
    {
        if (!value["MinuteNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTaskInfo.MinuteNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minuteNum = value["MinuteNum"].GetUint64();
        m_minuteNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countTag, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_runningNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningNum, allocator);
    }

    if (m_stoppingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoppingNum, allocator);
    }

    if (m_stoppedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoppedNum, allocator);
    }

    if (m_frozenNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frozenNum, allocator);
    }

    if (m_invalidNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidNum, allocator);
    }

    if (m_yearNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YearNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yearNum, allocator);
    }

    if (m_monthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthNum, allocator);
    }

    if (m_weekNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekNum, allocator);
    }

    if (m_dayNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayNum, allocator);
    }

    if (m_hourNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hourNum, allocator);
    }

    if (m_minuteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinuteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minuteNum, allocator);
    }

}


uint64_t ScreenTaskInfo::GetCountTag() const
{
    return m_countTag;
}

void ScreenTaskInfo::SetCountTag(const uint64_t& _countTag)
{
    m_countTag = _countTag;
    m_countTagHasBeenSet = true;
}

bool ScreenTaskInfo::CountTagHasBeenSet() const
{
    return m_countTagHasBeenSet;
}

uint64_t ScreenTaskInfo::GetTotalNum() const
{
    return m_totalNum;
}

void ScreenTaskInfo::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool ScreenTaskInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetRunningNum() const
{
    return m_runningNum;
}

void ScreenTaskInfo::SetRunningNum(const uint64_t& _runningNum)
{
    m_runningNum = _runningNum;
    m_runningNumHasBeenSet = true;
}

bool ScreenTaskInfo::RunningNumHasBeenSet() const
{
    return m_runningNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetStoppingNum() const
{
    return m_stoppingNum;
}

void ScreenTaskInfo::SetStoppingNum(const uint64_t& _stoppingNum)
{
    m_stoppingNum = _stoppingNum;
    m_stoppingNumHasBeenSet = true;
}

bool ScreenTaskInfo::StoppingNumHasBeenSet() const
{
    return m_stoppingNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetStoppedNum() const
{
    return m_stoppedNum;
}

void ScreenTaskInfo::SetStoppedNum(const uint64_t& _stoppedNum)
{
    m_stoppedNum = _stoppedNum;
    m_stoppedNumHasBeenSet = true;
}

bool ScreenTaskInfo::StoppedNumHasBeenSet() const
{
    return m_stoppedNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetFrozenNum() const
{
    return m_frozenNum;
}

void ScreenTaskInfo::SetFrozenNum(const uint64_t& _frozenNum)
{
    m_frozenNum = _frozenNum;
    m_frozenNumHasBeenSet = true;
}

bool ScreenTaskInfo::FrozenNumHasBeenSet() const
{
    return m_frozenNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetInvalidNum() const
{
    return m_invalidNum;
}

void ScreenTaskInfo::SetInvalidNum(const uint64_t& _invalidNum)
{
    m_invalidNum = _invalidNum;
    m_invalidNumHasBeenSet = true;
}

bool ScreenTaskInfo::InvalidNumHasBeenSet() const
{
    return m_invalidNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetYearNum() const
{
    return m_yearNum;
}

void ScreenTaskInfo::SetYearNum(const uint64_t& _yearNum)
{
    m_yearNum = _yearNum;
    m_yearNumHasBeenSet = true;
}

bool ScreenTaskInfo::YearNumHasBeenSet() const
{
    return m_yearNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetMonthNum() const
{
    return m_monthNum;
}

void ScreenTaskInfo::SetMonthNum(const uint64_t& _monthNum)
{
    m_monthNum = _monthNum;
    m_monthNumHasBeenSet = true;
}

bool ScreenTaskInfo::MonthNumHasBeenSet() const
{
    return m_monthNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetWeekNum() const
{
    return m_weekNum;
}

void ScreenTaskInfo::SetWeekNum(const uint64_t& _weekNum)
{
    m_weekNum = _weekNum;
    m_weekNumHasBeenSet = true;
}

bool ScreenTaskInfo::WeekNumHasBeenSet() const
{
    return m_weekNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetDayNum() const
{
    return m_dayNum;
}

void ScreenTaskInfo::SetDayNum(const uint64_t& _dayNum)
{
    m_dayNum = _dayNum;
    m_dayNumHasBeenSet = true;
}

bool ScreenTaskInfo::DayNumHasBeenSet() const
{
    return m_dayNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetHourNum() const
{
    return m_hourNum;
}

void ScreenTaskInfo::SetHourNum(const uint64_t& _hourNum)
{
    m_hourNum = _hourNum;
    m_hourNumHasBeenSet = true;
}

bool ScreenTaskInfo::HourNumHasBeenSet() const
{
    return m_hourNumHasBeenSet;
}

uint64_t ScreenTaskInfo::GetMinuteNum() const
{
    return m_minuteNum;
}

void ScreenTaskInfo::SetMinuteNum(const uint64_t& _minuteNum)
{
    m_minuteNum = _minuteNum;
    m_minuteNumHasBeenSet = true;
}

bool ScreenTaskInfo::MinuteNumHasBeenSet() const
{
    return m_minuteNumHasBeenSet;
}

