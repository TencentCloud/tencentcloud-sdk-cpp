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

#include <tencentcloud/tse/v20201207/model/TrafficGray.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

TrafficGray::TrafficGray() :
    m_modeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_intervalSecondHasBeenSet(false),
    m_curvatureHasBeenSet(false)
{
}

CoreInternalOutcome TrafficGray::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficGray.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficGray.Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("IntervalSecond") && !value["IntervalSecond"].IsNull())
    {
        if (!value["IntervalSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficGray.IntervalSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalSecond = value["IntervalSecond"].GetInt64();
        m_intervalSecondHasBeenSet = true;
    }

    if (value.HasMember("Curvature") && !value["Curvature"].IsNull())
    {
        if (!value["Curvature"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficGray.Curvature` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_curvature = value["Curvature"].GetInt64();
        m_curvatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficGray::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_intervalSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalSecond, allocator);
    }

    if (m_curvatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Curvature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_curvature, allocator);
    }

}


string TrafficGray::GetMode() const
{
    return m_mode;
}

void TrafficGray::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TrafficGray::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t TrafficGray::GetPercent() const
{
    return m_percent;
}

void TrafficGray::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool TrafficGray::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

int64_t TrafficGray::GetIntervalSecond() const
{
    return m_intervalSecond;
}

void TrafficGray::SetIntervalSecond(const int64_t& _intervalSecond)
{
    m_intervalSecond = _intervalSecond;
    m_intervalSecondHasBeenSet = true;
}

bool TrafficGray::IntervalSecondHasBeenSet() const
{
    return m_intervalSecondHasBeenSet;
}

int64_t TrafficGray::GetCurvature() const
{
    return m_curvature;
}

void TrafficGray::SetCurvature(const int64_t& _curvature)
{
    m_curvature = _curvature;
    m_curvatureHasBeenSet = true;
}

bool TrafficGray::CurvatureHasBeenSet() const
{
    return m_curvatureHasBeenSet;
}

