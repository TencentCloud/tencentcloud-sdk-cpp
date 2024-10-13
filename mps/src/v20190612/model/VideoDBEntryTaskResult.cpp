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

#include <tencentcloud/mps/v20190612/model/VideoDBEntryTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoDBEntryTaskResult::VideoDBEntryTaskResult() :
    m_videoIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoDBEntryTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoId") && !value["VideoId"].IsNull())
    {
        if (!value["VideoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDBEntryTaskResult.VideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoId = string(value["VideoId"].GetString());
        m_videoIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDBEntryTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoId.c_str(), allocator).Move(), allocator);
    }

}


string VideoDBEntryTaskResult::GetVideoId() const
{
    return m_videoId;
}

void VideoDBEntryTaskResult::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool VideoDBEntryTaskResult::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

