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

#include <tencentcloud/live/v20180801/model/SceneVideoReferenceVideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SceneVideoReferenceVideoInfo::SceneVideoReferenceVideoInfo() :
    m_videoUrlHasBeenSet(false)
{
}

CoreInternalOutcome SceneVideoReferenceVideoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoReferenceVideoInfo.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneVideoReferenceVideoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

}


string SceneVideoReferenceVideoInfo::GetVideoUrl() const
{
    return m_videoUrl;
}

void SceneVideoReferenceVideoInfo::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool SceneVideoReferenceVideoInfo::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

