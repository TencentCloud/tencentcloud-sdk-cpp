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

#include <tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

RealTimeSpeechStatisticsItem::RealTimeSpeechStatisticsItem() :
    m_mainLandDauHasBeenSet(false),
    m_mainLandPcuHasBeenSet(false),
    m_mainLandDurationHasBeenSet(false),
    m_overseaDauHasBeenSet(false),
    m_overseaPcuHasBeenSet(false),
    m_overseaDurationHasBeenSet(false)
{
}

CoreInternalOutcome RealTimeSpeechStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainLandDau") && !value["MainLandDau"].IsNull())
    {
        if (!value["MainLandDau"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.MainLandDau` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainLandDau = value["MainLandDau"].GetUint64();
        m_mainLandDauHasBeenSet = true;
    }

    if (value.HasMember("MainLandPcu") && !value["MainLandPcu"].IsNull())
    {
        if (!value["MainLandPcu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.MainLandPcu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainLandPcu = value["MainLandPcu"].GetUint64();
        m_mainLandPcuHasBeenSet = true;
    }

    if (value.HasMember("MainLandDuration") && !value["MainLandDuration"].IsNull())
    {
        if (!value["MainLandDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.MainLandDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainLandDuration = value["MainLandDuration"].GetUint64();
        m_mainLandDurationHasBeenSet = true;
    }

    if (value.HasMember("OverseaDau") && !value["OverseaDau"].IsNull())
    {
        if (!value["OverseaDau"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.OverseaDau` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_overseaDau = value["OverseaDau"].GetUint64();
        m_overseaDauHasBeenSet = true;
    }

    if (value.HasMember("OverseaPcu") && !value["OverseaPcu"].IsNull())
    {
        if (!value["OverseaPcu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.OverseaPcu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_overseaPcu = value["OverseaPcu"].GetUint64();
        m_overseaPcuHasBeenSet = true;
    }

    if (value.HasMember("OverseaDuration") && !value["OverseaDuration"].IsNull())
    {
        if (!value["OverseaDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeSpeechStatisticsItem.OverseaDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_overseaDuration = value["OverseaDuration"].GetUint64();
        m_overseaDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealTimeSpeechStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainLandDauHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainLandDau";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainLandDau, allocator);
    }

    if (m_mainLandPcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainLandPcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainLandPcu, allocator);
    }

    if (m_mainLandDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainLandDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainLandDuration, allocator);
    }

    if (m_overseaDauHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverseaDau";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overseaDau, allocator);
    }

    if (m_overseaPcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverseaPcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overseaPcu, allocator);
    }

    if (m_overseaDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverseaDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overseaDuration, allocator);
    }

}


uint64_t RealTimeSpeechStatisticsItem::GetMainLandDau() const
{
    return m_mainLandDau;
}

void RealTimeSpeechStatisticsItem::SetMainLandDau(const uint64_t& _mainLandDau)
{
    m_mainLandDau = _mainLandDau;
    m_mainLandDauHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::MainLandDauHasBeenSet() const
{
    return m_mainLandDauHasBeenSet;
}

uint64_t RealTimeSpeechStatisticsItem::GetMainLandPcu() const
{
    return m_mainLandPcu;
}

void RealTimeSpeechStatisticsItem::SetMainLandPcu(const uint64_t& _mainLandPcu)
{
    m_mainLandPcu = _mainLandPcu;
    m_mainLandPcuHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::MainLandPcuHasBeenSet() const
{
    return m_mainLandPcuHasBeenSet;
}

uint64_t RealTimeSpeechStatisticsItem::GetMainLandDuration() const
{
    return m_mainLandDuration;
}

void RealTimeSpeechStatisticsItem::SetMainLandDuration(const uint64_t& _mainLandDuration)
{
    m_mainLandDuration = _mainLandDuration;
    m_mainLandDurationHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::MainLandDurationHasBeenSet() const
{
    return m_mainLandDurationHasBeenSet;
}

uint64_t RealTimeSpeechStatisticsItem::GetOverseaDau() const
{
    return m_overseaDau;
}

void RealTimeSpeechStatisticsItem::SetOverseaDau(const uint64_t& _overseaDau)
{
    m_overseaDau = _overseaDau;
    m_overseaDauHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::OverseaDauHasBeenSet() const
{
    return m_overseaDauHasBeenSet;
}

uint64_t RealTimeSpeechStatisticsItem::GetOverseaPcu() const
{
    return m_overseaPcu;
}

void RealTimeSpeechStatisticsItem::SetOverseaPcu(const uint64_t& _overseaPcu)
{
    m_overseaPcu = _overseaPcu;
    m_overseaPcuHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::OverseaPcuHasBeenSet() const
{
    return m_overseaPcuHasBeenSet;
}

uint64_t RealTimeSpeechStatisticsItem::GetOverseaDuration() const
{
    return m_overseaDuration;
}

void RealTimeSpeechStatisticsItem::SetOverseaDuration(const uint64_t& _overseaDuration)
{
    m_overseaDuration = _overseaDuration;
    m_overseaDurationHasBeenSet = true;
}

bool RealTimeSpeechStatisticsItem::OverseaDurationHasBeenSet() const
{
    return m_overseaDurationHasBeenSet;
}

