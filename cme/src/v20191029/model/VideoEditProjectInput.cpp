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

#include <tencentcloud/cme/v20191029/model/VideoEditProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEditProjectInput::VideoEditProjectInput() :
    m_aspectRatioHasBeenSet(false),
    m_videoEditTemplateIdHasBeenSet(false),
    m_initTracksHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectInput.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("VideoEditTemplateId") && !value["VideoEditTemplateId"].IsNull())
    {
        if (!value["VideoEditTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectInput.VideoEditTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoEditTemplateId = string(value["VideoEditTemplateId"].GetString());
        m_videoEditTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("InitTracks") && !value["InitTracks"].IsNull())
    {
        if (!value["InitTracks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectInput.InitTracks` is not array type"));

        const rapidjson::Value &tmpValue = value["InitTracks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaTrack item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_initTracks.push_back(item);
        }
        m_initTracksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEditTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEditTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoEditTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_initTracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitTracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initTracks.begin(); itr != m_initTracks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VideoEditProjectInput::GetAspectRatio() const
{
    return m_aspectRatio;
}

void VideoEditProjectInput::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool VideoEditProjectInput::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string VideoEditProjectInput::GetVideoEditTemplateId() const
{
    return m_videoEditTemplateId;
}

void VideoEditProjectInput::SetVideoEditTemplateId(const string& _videoEditTemplateId)
{
    m_videoEditTemplateId = _videoEditTemplateId;
    m_videoEditTemplateIdHasBeenSet = true;
}

bool VideoEditProjectInput::VideoEditTemplateIdHasBeenSet() const
{
    return m_videoEditTemplateIdHasBeenSet;
}

vector<MediaTrack> VideoEditProjectInput::GetInitTracks() const
{
    return m_initTracks;
}

void VideoEditProjectInput::SetInitTracks(const vector<MediaTrack>& _initTracks)
{
    m_initTracks = _initTracks;
    m_initTracksHasBeenSet = true;
}

bool VideoEditProjectInput::InitTracksHasBeenSet() const
{
    return m_initTracksHasBeenSet;
}

