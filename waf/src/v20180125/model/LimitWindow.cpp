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

#include <tencentcloud/waf/v20180125/model/LimitWindow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LimitWindow::LimitWindow() :
    m_secondHasBeenSet(false),
    m_minuteHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_quotaShareHasBeenSet(false)
{
}

CoreInternalOutcome LimitWindow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Second") && !value["Second"].IsNull())
    {
        if (!value["Second"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitWindow.Second` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_second = value["Second"].GetInt64();
        m_secondHasBeenSet = true;
    }

    if (value.HasMember("Minute") && !value["Minute"].IsNull())
    {
        if (!value["Minute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitWindow.Minute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minute = value["Minute"].GetInt64();
        m_minuteHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitWindow.Hour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hour = value["Hour"].GetInt64();
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("QuotaShare") && !value["QuotaShare"].IsNull())
    {
        if (!value["QuotaShare"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LimitWindow.QuotaShare` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_quotaShare = value["QuotaShare"].GetBool();
        m_quotaShareHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitWindow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Second";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_second, allocator);
    }

    if (m_minuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Minute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minute, allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hour, allocator);
    }

    if (m_quotaShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaShare, allocator);
    }

}


int64_t LimitWindow::GetSecond() const
{
    return m_second;
}

void LimitWindow::SetSecond(const int64_t& _second)
{
    m_second = _second;
    m_secondHasBeenSet = true;
}

bool LimitWindow::SecondHasBeenSet() const
{
    return m_secondHasBeenSet;
}

int64_t LimitWindow::GetMinute() const
{
    return m_minute;
}

void LimitWindow::SetMinute(const int64_t& _minute)
{
    m_minute = _minute;
    m_minuteHasBeenSet = true;
}

bool LimitWindow::MinuteHasBeenSet() const
{
    return m_minuteHasBeenSet;
}

int64_t LimitWindow::GetHour() const
{
    return m_hour;
}

void LimitWindow::SetHour(const int64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool LimitWindow::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

bool LimitWindow::GetQuotaShare() const
{
    return m_quotaShare;
}

void LimitWindow::SetQuotaShare(const bool& _quotaShare)
{
    m_quotaShare = _quotaShare;
    m_quotaShareHasBeenSet = true;
}

bool LimitWindow::QuotaShareHasBeenSet() const
{
    return m_quotaShareHasBeenSet;
}

