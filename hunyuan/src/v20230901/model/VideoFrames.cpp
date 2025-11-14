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

#include <tencentcloud/hunyuan/v20230901/model/VideoFrames.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

VideoFrames::VideoFrames() :
    m_framesHasBeenSet(false)
{
}

CoreInternalOutcome VideoFrames::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Frames") && !value["Frames"].IsNull())
    {
        if (!value["Frames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoFrames.Frames` is not array type"));

        const rapidjson::Value &tmpValue = value["Frames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_frames.push_back((*itr).GetString());
        }
        m_framesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoFrames::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_framesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_frames.begin(); itr != m_frames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> VideoFrames::GetFrames() const
{
    return m_frames;
}

void VideoFrames::SetFrames(const vector<string>& _frames)
{
    m_frames = _frames;
    m_framesHasBeenSet = true;
}

bool VideoFrames::FramesHasBeenSet() const
{
    return m_framesHasBeenSet;
}

