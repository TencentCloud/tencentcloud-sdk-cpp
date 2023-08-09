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

#include <tencentcloud/cme/v20191029/model/MediaCastOutputMediaSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastOutputMediaSetting::MediaCastOutputMediaSetting() :
    m_videoSettingHasBeenSet(false),
    m_followSourceInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastOutputMediaSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoSetting") && !value["VideoSetting"].IsNull())
    {
        if (!value["VideoSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastOutputMediaSetting.VideoSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSetting.Deserialize(value["VideoSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSettingHasBeenSet = true;
    }

    if (value.HasMember("FollowSourceInfo") && !value["FollowSourceInfo"].IsNull())
    {
        if (!value["FollowSourceInfo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastOutputMediaSetting.FollowSourceInfo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_followSourceInfo = value["FollowSourceInfo"].GetBool();
        m_followSourceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastOutputMediaSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followSourceInfo, allocator);
    }

}


MediaCastVideoSetting MediaCastOutputMediaSetting::GetVideoSetting() const
{
    return m_videoSetting;
}

void MediaCastOutputMediaSetting::SetVideoSetting(const MediaCastVideoSetting& _videoSetting)
{
    m_videoSetting = _videoSetting;
    m_videoSettingHasBeenSet = true;
}

bool MediaCastOutputMediaSetting::VideoSettingHasBeenSet() const
{
    return m_videoSettingHasBeenSet;
}

bool MediaCastOutputMediaSetting::GetFollowSourceInfo() const
{
    return m_followSourceInfo;
}

void MediaCastOutputMediaSetting::SetFollowSourceInfo(const bool& _followSourceInfo)
{
    m_followSourceInfo = _followSourceInfo;
    m_followSourceInfoHasBeenSet = true;
}

bool MediaCastOutputMediaSetting::FollowSourceInfoHasBeenSet() const
{
    return m_followSourceInfoHasBeenSet;
}

