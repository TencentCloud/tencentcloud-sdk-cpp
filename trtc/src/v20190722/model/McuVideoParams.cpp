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

#include <tencentcloud/trtc/v20190722/model/McuVideoParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuVideoParams::McuVideoParams() :
    m_videoEncodeHasBeenSet(false),
    m_layoutParamsHasBeenSet(false),
    m_backGroundColorHasBeenSet(false),
    m_backgroundImageUrlHasBeenSet(false),
    m_waterMarkListHasBeenSet(false),
    m_backgroundRenderModeHasBeenSet(false)
{
}

CoreInternalOutcome McuVideoParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoEncode") && !value["VideoEncode"].IsNull())
    {
        if (!value["VideoEncode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.VideoEncode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEncode.Deserialize(value["VideoEncode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEncodeHasBeenSet = true;
    }

    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.LayoutParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_layoutParams.Deserialize(value["LayoutParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_layoutParamsHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColor") && !value["BackGroundColor"].IsNull())
    {
        if (!value["BackGroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.BackGroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColor = string(value["BackGroundColor"].GetString());
        m_backGroundColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImageUrl") && !value["BackgroundImageUrl"].IsNull())
    {
        if (!value["BackgroundImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.BackgroundImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImageUrl = string(value["BackgroundImageUrl"].GetString());
        m_backgroundImageUrlHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkList") && !value["WaterMarkList"].IsNull())
    {
        if (!value["WaterMarkList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.WaterMarkList` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterMarkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McuWaterMarkParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waterMarkList.push_back(item);
        }
        m_waterMarkListHasBeenSet = true;
    }

    if (value.HasMember("BackgroundRenderMode") && !value["BackgroundRenderMode"].IsNull())
    {
        if (!value["BackgroundRenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuVideoParams.BackgroundRenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundRenderMode = value["BackgroundRenderMode"].GetUint64();
        m_backgroundRenderModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuVideoParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEncode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEncode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backGroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackGroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backGroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waterMarkList.begin(); itr != m_waterMarkList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backgroundRenderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundRenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundRenderMode, allocator);
    }

}


VideoEncode McuVideoParams::GetVideoEncode() const
{
    return m_videoEncode;
}

void McuVideoParams::SetVideoEncode(const VideoEncode& _videoEncode)
{
    m_videoEncode = _videoEncode;
    m_videoEncodeHasBeenSet = true;
}

bool McuVideoParams::VideoEncodeHasBeenSet() const
{
    return m_videoEncodeHasBeenSet;
}

McuLayoutParams McuVideoParams::GetLayoutParams() const
{
    return m_layoutParams;
}

void McuVideoParams::SetLayoutParams(const McuLayoutParams& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool McuVideoParams::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

string McuVideoParams::GetBackGroundColor() const
{
    return m_backGroundColor;
}

void McuVideoParams::SetBackGroundColor(const string& _backGroundColor)
{
    m_backGroundColor = _backGroundColor;
    m_backGroundColorHasBeenSet = true;
}

bool McuVideoParams::BackGroundColorHasBeenSet() const
{
    return m_backGroundColorHasBeenSet;
}

string McuVideoParams::GetBackgroundImageUrl() const
{
    return m_backgroundImageUrl;
}

void McuVideoParams::SetBackgroundImageUrl(const string& _backgroundImageUrl)
{
    m_backgroundImageUrl = _backgroundImageUrl;
    m_backgroundImageUrlHasBeenSet = true;
}

bool McuVideoParams::BackgroundImageUrlHasBeenSet() const
{
    return m_backgroundImageUrlHasBeenSet;
}

vector<McuWaterMarkParams> McuVideoParams::GetWaterMarkList() const
{
    return m_waterMarkList;
}

void McuVideoParams::SetWaterMarkList(const vector<McuWaterMarkParams>& _waterMarkList)
{
    m_waterMarkList = _waterMarkList;
    m_waterMarkListHasBeenSet = true;
}

bool McuVideoParams::WaterMarkListHasBeenSet() const
{
    return m_waterMarkListHasBeenSet;
}

uint64_t McuVideoParams::GetBackgroundRenderMode() const
{
    return m_backgroundRenderMode;
}

void McuVideoParams::SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode)
{
    m_backgroundRenderMode = _backgroundRenderMode;
    m_backgroundRenderModeHasBeenSet = true;
}

bool McuVideoParams::BackgroundRenderModeHasBeenSet() const
{
    return m_backgroundRenderModeHasBeenSet;
}

