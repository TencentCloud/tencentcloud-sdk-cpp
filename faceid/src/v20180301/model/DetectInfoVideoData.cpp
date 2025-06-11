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

#include <tencentcloud/faceid/v20180301/model/DetectInfoVideoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectInfoVideoData::DetectInfoVideoData() :
    m_livenessVideoHasBeenSet(false),
    m_livenessVideosHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoVideoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LivenessVideo") && !value["LivenessVideo"].IsNull())
    {
        if (!value["LivenessVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoVideoData.LivenessVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livenessVideo = string(value["LivenessVideo"].GetString());
        m_livenessVideoHasBeenSet = true;
    }

    if (value.HasMember("LivenessVideos") && !value["LivenessVideos"].IsNull())
    {
        if (!value["LivenessVideos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectInfoVideoData.LivenessVideos` is not array type"));

        const rapidjson::Value &tmpValue = value["LivenessVideos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoDetailData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_livenessVideos.push_back(item);
        }
        m_livenessVideosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoVideoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_livenessVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livenessVideo.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessVideosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessVideos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_livenessVideos.begin(); itr != m_livenessVideos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DetectInfoVideoData::GetLivenessVideo() const
{
    return m_livenessVideo;
}

void DetectInfoVideoData::SetLivenessVideo(const string& _livenessVideo)
{
    m_livenessVideo = _livenessVideo;
    m_livenessVideoHasBeenSet = true;
}

bool DetectInfoVideoData::LivenessVideoHasBeenSet() const
{
    return m_livenessVideoHasBeenSet;
}

vector<VideoDetailData> DetectInfoVideoData::GetLivenessVideos() const
{
    return m_livenessVideos;
}

void DetectInfoVideoData::SetLivenessVideos(const vector<VideoDetailData>& _livenessVideos)
{
    m_livenessVideos = _livenessVideos;
    m_livenessVideosHasBeenSet = true;
}

bool DetectInfoVideoData::LivenessVideosHasBeenSet() const
{
    return m_livenessVideosHasBeenSet;
}

