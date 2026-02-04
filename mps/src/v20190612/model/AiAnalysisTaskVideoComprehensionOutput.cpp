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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoComprehensionOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskVideoComprehensionOutput::AiAnalysisTaskVideoComprehensionOutput() :
    m_videoComprehensionAnalysisResultHasBeenSet(false),
    m_videoComprehensionExtInfoHasBeenSet(false),
    m_videoComprehensionResultListHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskVideoComprehensionOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoComprehensionAnalysisResult") && !value["VideoComprehensionAnalysisResult"].IsNull())
    {
        if (!value["VideoComprehensionAnalysisResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskVideoComprehensionOutput.VideoComprehensionAnalysisResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoComprehensionAnalysisResult = string(value["VideoComprehensionAnalysisResult"].GetString());
        m_videoComprehensionAnalysisResultHasBeenSet = true;
    }

    if (value.HasMember("VideoComprehensionExtInfo") && !value["VideoComprehensionExtInfo"].IsNull())
    {
        if (!value["VideoComprehensionExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskVideoComprehensionOutput.VideoComprehensionExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoComprehensionExtInfo = string(value["VideoComprehensionExtInfo"].GetString());
        m_videoComprehensionExtInfoHasBeenSet = true;
    }

    if (value.HasMember("VideoComprehensionResultList") && !value["VideoComprehensionResultList"].IsNull())
    {
        if (!value["VideoComprehensionResultList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskVideoComprehensionOutput.VideoComprehensionResultList` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoComprehensionResultList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoComprehensionResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoComprehensionResultList.push_back(item);
        }
        m_videoComprehensionResultListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskVideoComprehensionOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoComprehensionAnalysisResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoComprehensionAnalysisResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoComprehensionAnalysisResult.c_str(), allocator).Move(), allocator);
    }

    if (m_videoComprehensionExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoComprehensionExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoComprehensionExtInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_videoComprehensionResultListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoComprehensionResultList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoComprehensionResultList.begin(); itr != m_videoComprehensionResultList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AiAnalysisTaskVideoComprehensionOutput::GetVideoComprehensionAnalysisResult() const
{
    return m_videoComprehensionAnalysisResult;
}

void AiAnalysisTaskVideoComprehensionOutput::SetVideoComprehensionAnalysisResult(const string& _videoComprehensionAnalysisResult)
{
    m_videoComprehensionAnalysisResult = _videoComprehensionAnalysisResult;
    m_videoComprehensionAnalysisResultHasBeenSet = true;
}

bool AiAnalysisTaskVideoComprehensionOutput::VideoComprehensionAnalysisResultHasBeenSet() const
{
    return m_videoComprehensionAnalysisResultHasBeenSet;
}

string AiAnalysisTaskVideoComprehensionOutput::GetVideoComprehensionExtInfo() const
{
    return m_videoComprehensionExtInfo;
}

void AiAnalysisTaskVideoComprehensionOutput::SetVideoComprehensionExtInfo(const string& _videoComprehensionExtInfo)
{
    m_videoComprehensionExtInfo = _videoComprehensionExtInfo;
    m_videoComprehensionExtInfoHasBeenSet = true;
}

bool AiAnalysisTaskVideoComprehensionOutput::VideoComprehensionExtInfoHasBeenSet() const
{
    return m_videoComprehensionExtInfoHasBeenSet;
}

vector<VideoComprehensionResultItem> AiAnalysisTaskVideoComprehensionOutput::GetVideoComprehensionResultList() const
{
    return m_videoComprehensionResultList;
}

void AiAnalysisTaskVideoComprehensionOutput::SetVideoComprehensionResultList(const vector<VideoComprehensionResultItem>& _videoComprehensionResultList)
{
    m_videoComprehensionResultList = _videoComprehensionResultList;
    m_videoComprehensionResultListHasBeenSet = true;
}

bool AiAnalysisTaskVideoComprehensionOutput::VideoComprehensionResultListHasBeenSet() const
{
    return m_videoComprehensionResultListHasBeenSet;
}

