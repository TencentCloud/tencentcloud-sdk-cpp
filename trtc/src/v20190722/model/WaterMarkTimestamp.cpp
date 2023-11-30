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

#include <tencentcloud/trtc/v20190722/model/WaterMarkTimestamp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WaterMarkTimestamp::WaterMarkTimestamp() :
    m_posHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_fontHasBeenSet(false)
{
}

CoreInternalOutcome WaterMarkTimestamp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pos") && !value["Pos"].IsNull())
    {
        if (!value["Pos"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkTimestamp.Pos` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pos = value["Pos"].GetUint64();
        m_posHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkTimestamp.TimeZone` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = value["TimeZone"].GetUint64();
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("Font") && !value["Font"].IsNull())
    {
        if (!value["Font"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkTimestamp.Font` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_font = string(value["Font"].GetString());
        m_fontHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterMarkTimestamp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_posHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pos, allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_fontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Font";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_font.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WaterMarkTimestamp::GetPos() const
{
    return m_pos;
}

void WaterMarkTimestamp::SetPos(const uint64_t& _pos)
{
    m_pos = _pos;
    m_posHasBeenSet = true;
}

bool WaterMarkTimestamp::PosHasBeenSet() const
{
    return m_posHasBeenSet;
}

uint64_t WaterMarkTimestamp::GetTimeZone() const
{
    return m_timeZone;
}

void WaterMarkTimestamp::SetTimeZone(const uint64_t& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool WaterMarkTimestamp::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string WaterMarkTimestamp::GetFont() const
{
    return m_font;
}

void WaterMarkTimestamp::SetFont(const string& _font)
{
    m_font = _font;
    m_fontHasBeenSet = true;
}

bool WaterMarkTimestamp::FontHasBeenSet() const
{
    return m_fontHasBeenSet;
}

