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

#include <tencentcloud/ie/v20200304/model/MediaRecognitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaRecognitionInfo::MediaRecognitionInfo() :
    m_frameTagRecHasBeenSet(false),
    m_subtitleRecHasBeenSet(false)
{
}

CoreInternalOutcome MediaRecognitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrameTagRec") && !value["FrameTagRec"].IsNull())
    {
        if (!value["FrameTagRec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaRecognitionInfo.FrameTagRec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagRec.Deserialize(value["FrameTagRec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagRecHasBeenSet = true;
    }

    if (value.HasMember("SubtitleRec") && !value["SubtitleRec"].IsNull())
    {
        if (!value["SubtitleRec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaRecognitionInfo.SubtitleRec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleRec.Deserialize(value["SubtitleRec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleRecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaRecognitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameTagRecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagRec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagRec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleRecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleRec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleRec.ToJsonObject(value[key.c_str()], allocator);
    }

}


FrameTagRec MediaRecognitionInfo::GetFrameTagRec() const
{
    return m_frameTagRec;
}

void MediaRecognitionInfo::SetFrameTagRec(const FrameTagRec& _frameTagRec)
{
    m_frameTagRec = _frameTagRec;
    m_frameTagRecHasBeenSet = true;
}

bool MediaRecognitionInfo::FrameTagRecHasBeenSet() const
{
    return m_frameTagRecHasBeenSet;
}

SubtitleRec MediaRecognitionInfo::GetSubtitleRec() const
{
    return m_subtitleRec;
}

void MediaRecognitionInfo::SetSubtitleRec(const SubtitleRec& _subtitleRec)
{
    m_subtitleRec = _subtitleRec;
    m_subtitleRecHasBeenSet = true;
}

bool MediaRecognitionInfo::SubtitleRecHasBeenSet() const
{
    return m_subtitleRecHasBeenSet;
}

