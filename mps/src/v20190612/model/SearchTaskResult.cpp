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

#include <tencentcloud/mps/v20190612/model/SearchTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SearchTaskResult::SearchTaskResult() :
    m_scoreHasBeenSet(false),
    m_videoIdHasBeenSet(false)
{
}

CoreInternalOutcome SearchTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTaskResult.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("VideoId") && !value["VideoId"].IsNull())
    {
        if (!value["VideoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTaskResult.VideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoId = string(value["VideoId"].GetString());
        m_videoIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_videoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoId.c_str(), allocator).Move(), allocator);
    }

}


double SearchTaskResult::GetScore() const
{
    return m_score;
}

void SearchTaskResult::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool SearchTaskResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string SearchTaskResult::GetVideoId() const
{
    return m_videoId;
}

void SearchTaskResult::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool SearchTaskResult::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

