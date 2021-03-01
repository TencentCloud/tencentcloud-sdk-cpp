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

#include <tencentcloud/ie/v20200304/model/VideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

VideoInfo::VideoInfo() :
    m_fpsHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_longSideHasBeenSet(false),
    m_shortSideHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_videoCodecHasBeenSet(false),
    m_picMarkInfoHasBeenSet(false),
    m_darInfoHasBeenSet(false),
    m_hdrHasBeenSet(false),
    m_videoEnhanceHasBeenSet(false),
    m_hiddenMarkInfoHasBeenSet(false)
{
}

CoreInternalOutcome VideoInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("LongSide") && !value["LongSide"].IsNull())
    {
        if (!value["LongSide"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.LongSide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_longSide = value["LongSide"].GetInt64();
        m_longSideHasBeenSet = true;
    }

    if (value.HasMember("ShortSide") && !value["ShortSide"].IsNull())
    {
        if (!value["ShortSide"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.ShortSide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shortSide = value["ShortSide"].GetInt64();
        m_shortSideHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Gop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetInt64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("VideoCodec") && !value["VideoCodec"].IsNull())
    {
        if (!value["VideoCodec"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoCodec = string(value["VideoCodec"].GetString());
        m_videoCodecHasBeenSet = true;
    }

    if (value.HasMember("PicMarkInfo") && !value["PicMarkInfo"].IsNull())
    {
        if (!value["PicMarkInfo"].IsArray())
            return CoreInternalOutcome(Error("response `VideoInfo.PicMarkInfo` is not array type"));

        const Value &tmpValue = value["PicMarkInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PicMarkInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_picMarkInfo.push_back(item);
        }
        m_picMarkInfoHasBeenSet = true;
    }

    if (value.HasMember("DarInfo") && !value["DarInfo"].IsNull())
    {
        if (!value["DarInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.DarInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_darInfo.Deserialize(value["DarInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_darInfoHasBeenSet = true;
    }

    if (value.HasMember("Hdr") && !value["Hdr"].IsNull())
    {
        if (!value["Hdr"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.Hdr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hdr = string(value["Hdr"].GetString());
        m_hdrHasBeenSet = true;
    }

    if (value.HasMember("VideoEnhance") && !value["VideoEnhance"].IsNull())
    {
        if (!value["VideoEnhance"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEnhance.Deserialize(value["VideoEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEnhanceHasBeenSet = true;
    }

    if (value.HasMember("HiddenMarkInfo") && !value["HiddenMarkInfo"].IsNull())
    {
        if (!value["HiddenMarkInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.HiddenMarkInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hiddenMarkInfo.Deserialize(value["HiddenMarkInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hiddenMarkInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
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

    if (m_longSideHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LongSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longSide, allocator);
    }

    if (m_shortSideHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShortSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortSide, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_gopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
    }

    if (m_videoCodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_picMarkInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PicMarkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_picMarkInfo.begin(); itr != m_picMarkInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_darInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DarInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_darInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hdrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Hdr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_hdr.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEnhanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hiddenMarkInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HiddenMarkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_hiddenMarkInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t VideoInfo::GetFps() const
{
    return m_fps;
}

void VideoInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t VideoInfo::GetWidth() const
{
    return m_width;
}

void VideoInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VideoInfo::GetHeight() const
{
    return m_height;
}

void VideoInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t VideoInfo::GetLongSide() const
{
    return m_longSide;
}

void VideoInfo::SetLongSide(const int64_t& _longSide)
{
    m_longSide = _longSide;
    m_longSideHasBeenSet = true;
}

bool VideoInfo::LongSideHasBeenSet() const
{
    return m_longSideHasBeenSet;
}

int64_t VideoInfo::GetShortSide() const
{
    return m_shortSide;
}

void VideoInfo::SetShortSide(const int64_t& _shortSide)
{
    m_shortSide = _shortSide;
    m_shortSideHasBeenSet = true;
}

bool VideoInfo::ShortSideHasBeenSet() const
{
    return m_shortSideHasBeenSet;
}

int64_t VideoInfo::GetBitrate() const
{
    return m_bitrate;
}

void VideoInfo::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t VideoInfo::GetGop() const
{
    return m_gop;
}

void VideoInfo::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool VideoInfo::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

string VideoInfo::GetVideoCodec() const
{
    return m_videoCodec;
}

void VideoInfo::SetVideoCodec(const string& _videoCodec)
{
    m_videoCodec = _videoCodec;
    m_videoCodecHasBeenSet = true;
}

bool VideoInfo::VideoCodecHasBeenSet() const
{
    return m_videoCodecHasBeenSet;
}

vector<PicMarkInfoItem> VideoInfo::GetPicMarkInfo() const
{
    return m_picMarkInfo;
}

void VideoInfo::SetPicMarkInfo(const vector<PicMarkInfoItem>& _picMarkInfo)
{
    m_picMarkInfo = _picMarkInfo;
    m_picMarkInfoHasBeenSet = true;
}

bool VideoInfo::PicMarkInfoHasBeenSet() const
{
    return m_picMarkInfoHasBeenSet;
}

DarInfo VideoInfo::GetDarInfo() const
{
    return m_darInfo;
}

void VideoInfo::SetDarInfo(const DarInfo& _darInfo)
{
    m_darInfo = _darInfo;
    m_darInfoHasBeenSet = true;
}

bool VideoInfo::DarInfoHasBeenSet() const
{
    return m_darInfoHasBeenSet;
}

string VideoInfo::GetHdr() const
{
    return m_hdr;
}

void VideoInfo::SetHdr(const string& _hdr)
{
    m_hdr = _hdr;
    m_hdrHasBeenSet = true;
}

bool VideoInfo::HdrHasBeenSet() const
{
    return m_hdrHasBeenSet;
}

VideoEnhance VideoInfo::GetVideoEnhance() const
{
    return m_videoEnhance;
}

void VideoInfo::SetVideoEnhance(const VideoEnhance& _videoEnhance)
{
    m_videoEnhance = _videoEnhance;
    m_videoEnhanceHasBeenSet = true;
}

bool VideoInfo::VideoEnhanceHasBeenSet() const
{
    return m_videoEnhanceHasBeenSet;
}

HiddenMarkInfo VideoInfo::GetHiddenMarkInfo() const
{
    return m_hiddenMarkInfo;
}

void VideoInfo::SetHiddenMarkInfo(const HiddenMarkInfo& _hiddenMarkInfo)
{
    m_hiddenMarkInfo = _hiddenMarkInfo;
    m_hiddenMarkInfoHasBeenSet = true;
}

bool VideoInfo::HiddenMarkInfoHasBeenSet() const
{
    return m_hiddenMarkInfoHasBeenSet;
}

