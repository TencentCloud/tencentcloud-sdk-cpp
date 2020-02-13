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

#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

VideoInfo::VideoInfo() :
    m_videoPlayTimeHasBeenSet(false),
    m_videoSizeHasBeenSet(false),
    m_videoFormatHasBeenSet(false),
    m_videoDurationHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_videoIdHasBeenSet(false),
    m_videoTypeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoPlayTime") && !value["VideoPlayTime"].IsNull())
    {
        if (!value["VideoPlayTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoPlayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoPlayTime = value["VideoPlayTime"].GetInt64();
        m_videoPlayTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoSize") && !value["VideoSize"].IsNull())
    {
        if (!value["VideoSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoSize = value["VideoSize"].GetInt64();
        m_videoSizeHasBeenSet = true;
    }

    if (value.HasMember("VideoFormat") && !value["VideoFormat"].IsNull())
    {
        if (!value["VideoFormat"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoFormat = string(value["VideoFormat"].GetString());
        m_videoFormatHasBeenSet = true;
    }

    if (value.HasMember("VideoDuration") && !value["VideoDuration"].IsNull())
    {
        if (!value["VideoDuration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoDuration = value["VideoDuration"].GetInt64();
        m_videoDurationHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoId") && !value["VideoId"].IsNull())
    {
        if (!value["VideoId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoId = string(value["VideoId"].GetString());
        m_videoIdHasBeenSet = true;
    }

    if (value.HasMember("VideoType") && !value["VideoType"].IsNull())
    {
        if (!value["VideoType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.VideoType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoType = value["VideoType"].GetInt64();
        m_videoTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_videoPlayTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoPlayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoPlayTime, allocator);
    }

    if (m_videoSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoSize, allocator);
    }

    if (m_videoFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_videoDurationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDuration, allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoId.c_str(), allocator).Move(), allocator);
    }

    if (m_videoTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


int64_t VideoInfo::GetVideoPlayTime() const
{
    return m_videoPlayTime;
}

void VideoInfo::SetVideoPlayTime(const int64_t& _videoPlayTime)
{
    m_videoPlayTime = _videoPlayTime;
    m_videoPlayTimeHasBeenSet = true;
}

bool VideoInfo::VideoPlayTimeHasBeenSet() const
{
    return m_videoPlayTimeHasBeenSet;
}

int64_t VideoInfo::GetVideoSize() const
{
    return m_videoSize;
}

void VideoInfo::SetVideoSize(const int64_t& _videoSize)
{
    m_videoSize = _videoSize;
    m_videoSizeHasBeenSet = true;
}

bool VideoInfo::VideoSizeHasBeenSet() const
{
    return m_videoSizeHasBeenSet;
}

string VideoInfo::GetVideoFormat() const
{
    return m_videoFormat;
}

void VideoInfo::SetVideoFormat(const string& _videoFormat)
{
    m_videoFormat = _videoFormat;
    m_videoFormatHasBeenSet = true;
}

bool VideoInfo::VideoFormatHasBeenSet() const
{
    return m_videoFormatHasBeenSet;
}

int64_t VideoInfo::GetVideoDuration() const
{
    return m_videoDuration;
}

void VideoInfo::SetVideoDuration(const int64_t& _videoDuration)
{
    m_videoDuration = _videoDuration;
    m_videoDurationHasBeenSet = true;
}

bool VideoInfo::VideoDurationHasBeenSet() const
{
    return m_videoDurationHasBeenSet;
}

string VideoInfo::GetVideoUrl() const
{
    return m_videoUrl;
}

void VideoInfo::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool VideoInfo::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string VideoInfo::GetVideoId() const
{
    return m_videoId;
}

void VideoInfo::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool VideoInfo::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

int64_t VideoInfo::GetVideoType() const
{
    return m_videoType;
}

void VideoInfo::SetVideoType(const int64_t& _videoType)
{
    m_videoType = _videoType;
    m_videoTypeHasBeenSet = true;
}

bool VideoInfo::VideoTypeHasBeenSet() const
{
    return m_videoTypeHasBeenSet;
}

string VideoInfo::GetUserId() const
{
    return m_userId;
}

void VideoInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool VideoInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

