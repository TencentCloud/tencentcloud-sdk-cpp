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

#include <tencentcloud/trro/v20220325/model/VideoParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

VideoParams::VideoParams() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_videoListHasBeenSet(false)
{
}

CoreInternalOutcome VideoParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoParams.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoParams.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoParams.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoParams.BitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetInt64();
        m_bitRateHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoParams.Gop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetInt64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("VideoList") && !value["VideoList"].IsNull())
    {
        if (!value["VideoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoParams.VideoList` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoList.push_back(item);
        }
        m_videoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
    }

    if (m_videoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoList.begin(); itr != m_videoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t VideoParams::GetWidth() const
{
    return m_width;
}

void VideoParams::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoParams::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VideoParams::GetHeight() const
{
    return m_height;
}

void VideoParams::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoParams::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t VideoParams::GetFps() const
{
    return m_fps;
}

void VideoParams::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoParams::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t VideoParams::GetBitRate() const
{
    return m_bitRate;
}

void VideoParams::SetBitRate(const int64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool VideoParams::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

int64_t VideoParams::GetGop() const
{
    return m_gop;
}

void VideoParams::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool VideoParams::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

vector<VideoList> VideoParams::GetVideoList() const
{
    return m_videoList;
}

void VideoParams::SetVideoList(const vector<VideoList>& _videoList)
{
    m_videoList = _videoList;
    m_videoListHasBeenSet = true;
}

bool VideoParams::VideoListHasBeenSet() const
{
    return m_videoListHasBeenSet;
}

