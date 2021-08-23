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

#include <tencentcloud/cme/v20191029/model/SwitcherPgmOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

SwitcherPgmOutputConfig::SwitcherPgmOutputConfig() :
    m_templateIdHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitRateHasBeenSet(false)
{
}

CoreInternalOutcome SwitcherPgmOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherPgmOutputConfig.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherPgmOutputConfig.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherPgmOutputConfig.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherPgmOutputConfig.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherPgmOutputConfig.BitRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetUint64();
        m_bitRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitcherPgmOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_bitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitRate, allocator);
    }

}


int64_t SwitcherPgmOutputConfig::GetTemplateId() const
{
    return m_templateId;
}

void SwitcherPgmOutputConfig::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SwitcherPgmOutputConfig::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t SwitcherPgmOutputConfig::GetWidth() const
{
    return m_width;
}

void SwitcherPgmOutputConfig::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SwitcherPgmOutputConfig::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t SwitcherPgmOutputConfig::GetHeight() const
{
    return m_height;
}

void SwitcherPgmOutputConfig::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool SwitcherPgmOutputConfig::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t SwitcherPgmOutputConfig::GetFps() const
{
    return m_fps;
}

void SwitcherPgmOutputConfig::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool SwitcherPgmOutputConfig::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t SwitcherPgmOutputConfig::GetBitRate() const
{
    return m_bitRate;
}

void SwitcherPgmOutputConfig::SetBitRate(const uint64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool SwitcherPgmOutputConfig::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

