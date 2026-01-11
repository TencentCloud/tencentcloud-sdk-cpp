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

#include <tencentcloud/vod/v20180717/model/FrameRateWithDenInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FrameRateWithDenInfo::FrameRateWithDenInfo() :
    m_switchHasBeenSet(false),
    m_fpsNumHasBeenSet(false),
    m_fpsDenHasBeenSet(false)
{
}

CoreInternalOutcome FrameRateWithDenInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameRateWithDenInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("FpsNum") && !value["FpsNum"].IsNull())
    {
        if (!value["FpsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameRateWithDenInfo.FpsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsNum = value["FpsNum"].GetInt64();
        m_fpsNumHasBeenSet = true;
    }

    if (value.HasMember("FpsDen") && !value["FpsDen"].IsNull())
    {
        if (!value["FpsDen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameRateWithDenInfo.FpsDen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsDen = value["FpsDen"].GetInt64();
        m_fpsDenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameRateWithDenInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsNum, allocator);
    }

    if (m_fpsDenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsDen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsDen, allocator);
    }

}


string FrameRateWithDenInfo::GetSwitch() const
{
    return m_switch;
}

void FrameRateWithDenInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FrameRateWithDenInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t FrameRateWithDenInfo::GetFpsNum() const
{
    return m_fpsNum;
}

void FrameRateWithDenInfo::SetFpsNum(const int64_t& _fpsNum)
{
    m_fpsNum = _fpsNum;
    m_fpsNumHasBeenSet = true;
}

bool FrameRateWithDenInfo::FpsNumHasBeenSet() const
{
    return m_fpsNumHasBeenSet;
}

int64_t FrameRateWithDenInfo::GetFpsDen() const
{
    return m_fpsDen;
}

void FrameRateWithDenInfo::SetFpsDen(const int64_t& _fpsDen)
{
    m_fpsDen = _fpsDen;
    m_fpsDenHasBeenSet = true;
}

bool FrameRateWithDenInfo::FpsDenHasBeenSet() const
{
    return m_fpsDenHasBeenSet;
}

