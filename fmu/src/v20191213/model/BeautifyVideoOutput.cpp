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

#include <tencentcloud/fmu/v20191213/model/BeautifyVideoOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace rapidjson;
using namespace std;

BeautifyVideoOutput::BeautifyVideoOutput() :
    m_videoUrlHasBeenSet(false),
    m_videoMD5HasBeenSet(false),
    m_coverImageHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_durationInSecHasBeenSet(false)
{
}

CoreInternalOutcome BeautifyVideoOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoMD5") && !value["VideoMD5"].IsNull())
    {
        if (!value["VideoMD5"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.VideoMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoMD5 = string(value["VideoMD5"].GetString());
        m_videoMD5HasBeenSet = true;
    }

    if (value.HasMember("CoverImage") && !value["CoverImage"].IsNull())
    {
        if (!value["CoverImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.CoverImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverImage = string(value["CoverImage"].GetString());
        m_coverImageHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.Fps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetDouble();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("DurationInSec") && !value["DurationInSec"].IsNull())
    {
        if (!value["DurationInSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `BeautifyVideoOutput.DurationInSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_durationInSec = value["DurationInSec"].GetDouble();
        m_durationInSecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BeautifyVideoOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_videoUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoMD5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_coverImageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverImage.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_durationInSecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DurationInSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationInSec, allocator);
    }

}


string BeautifyVideoOutput::GetVideoUrl() const
{
    return m_videoUrl;
}

void BeautifyVideoOutput::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool BeautifyVideoOutput::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string BeautifyVideoOutput::GetVideoMD5() const
{
    return m_videoMD5;
}

void BeautifyVideoOutput::SetVideoMD5(const string& _videoMD5)
{
    m_videoMD5 = _videoMD5;
    m_videoMD5HasBeenSet = true;
}

bool BeautifyVideoOutput::VideoMD5HasBeenSet() const
{
    return m_videoMD5HasBeenSet;
}

string BeautifyVideoOutput::GetCoverImage() const
{
    return m_coverImage;
}

void BeautifyVideoOutput::SetCoverImage(const string& _coverImage)
{
    m_coverImage = _coverImage;
    m_coverImageHasBeenSet = true;
}

bool BeautifyVideoOutput::CoverImageHasBeenSet() const
{
    return m_coverImageHasBeenSet;
}

int64_t BeautifyVideoOutput::GetWidth() const
{
    return m_width;
}

void BeautifyVideoOutput::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool BeautifyVideoOutput::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t BeautifyVideoOutput::GetHeight() const
{
    return m_height;
}

void BeautifyVideoOutput::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool BeautifyVideoOutput::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

double BeautifyVideoOutput::GetFps() const
{
    return m_fps;
}

void BeautifyVideoOutput::SetFps(const double& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool BeautifyVideoOutput::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

double BeautifyVideoOutput::GetDurationInSec() const
{
    return m_durationInSec;
}

void BeautifyVideoOutput::SetDurationInSec(const double& _durationInSec)
{
    m_durationInSec = _durationInSec;
    m_durationInSecHasBeenSet = true;
}

bool BeautifyVideoOutput::DurationInSecHasBeenSet() const
{
    return m_durationInSecHasBeenSet;
}

