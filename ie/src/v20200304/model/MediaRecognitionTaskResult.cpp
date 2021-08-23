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

#include <tencentcloud/ie/v20200304/model/MediaRecognitionTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaRecognitionTaskResult::MediaRecognitionTaskResult() :
    m_frameTagResultsHasBeenSet(false),
    m_subtitleResultsHasBeenSet(false)
{
}

CoreInternalOutcome MediaRecognitionTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrameTagResults") && !value["FrameTagResults"].IsNull())
    {
        if (!value["FrameTagResults"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaRecognitionTaskResult.FrameTagResults` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagResults.Deserialize(value["FrameTagResults"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagResultsHasBeenSet = true;
    }

    if (value.HasMember("SubtitleResults") && !value["SubtitleResults"].IsNull())
    {
        if (!value["SubtitleResults"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaRecognitionTaskResult.SubtitleResults` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleResults.Deserialize(value["SubtitleResults"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaRecognitionTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameTagResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagResults.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleResults.ToJsonObject(value[key.c_str()], allocator);
    }

}


FrameTagResult MediaRecognitionTaskResult::GetFrameTagResults() const
{
    return m_frameTagResults;
}

void MediaRecognitionTaskResult::SetFrameTagResults(const FrameTagResult& _frameTagResults)
{
    m_frameTagResults = _frameTagResults;
    m_frameTagResultsHasBeenSet = true;
}

bool MediaRecognitionTaskResult::FrameTagResultsHasBeenSet() const
{
    return m_frameTagResultsHasBeenSet;
}

SubtitleResult MediaRecognitionTaskResult::GetSubtitleResults() const
{
    return m_subtitleResults;
}

void MediaRecognitionTaskResult::SetSubtitleResults(const SubtitleResult& _subtitleResults)
{
    m_subtitleResults = _subtitleResults;
    m_subtitleResultsHasBeenSet = true;
}

bool MediaRecognitionTaskResult::SubtitleResultsHasBeenSet() const
{
    return m_subtitleResultsHasBeenSet;
}

