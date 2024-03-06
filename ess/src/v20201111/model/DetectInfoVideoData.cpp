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

#include <tencentcloud/ess/v20201111/model/DetectInfoVideoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DetectInfoVideoData::DetectInfoVideoData() :
    m_liveNessVideoHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoVideoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LiveNessVideo") && !value["LiveNessVideo"].IsNull())
    {
        if (!value["LiveNessVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoVideoData.LiveNessVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveNessVideo = string(value["LiveNessVideo"].GetString());
        m_liveNessVideoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoVideoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_liveNessVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveNessVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveNessVideo.c_str(), allocator).Move(), allocator);
    }

}


string DetectInfoVideoData::GetLiveNessVideo() const
{
    return m_liveNessVideo;
}

void DetectInfoVideoData::SetLiveNessVideo(const string& _liveNessVideo)
{
    m_liveNessVideo = _liveNessVideo;
    m_liveNessVideoHasBeenSet = true;
}

bool DetectInfoVideoData::LiveNessVideoHasBeenSet() const
{
    return m_liveNessVideoHasBeenSet;
}

