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

#include <tencentcloud/faceid/v20180301/model/VideoDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

VideoDetailData::VideoDetailData() :
    m_seqHasBeenSet(false),
    m_videoHasBeenSet(false)
{
}

CoreInternalOutcome VideoDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDetailData.Seq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seq = string(value["Seq"].GetString());
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDetailData.Video` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_video = string(value["Video"].GetString());
        m_videoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seq.c_str(), allocator).Move(), allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

}


string VideoDetailData::GetSeq() const
{
    return m_seq;
}

void VideoDetailData::SetSeq(const string& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool VideoDetailData::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string VideoDetailData::GetVideo() const
{
    return m_video;
}

void VideoDetailData::SetVideo(const string& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool VideoDetailData::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

