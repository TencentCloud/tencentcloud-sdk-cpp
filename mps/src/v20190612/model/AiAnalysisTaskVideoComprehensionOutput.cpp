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
    m_videoComprehensionAnalysisResultHasBeenSet(false)
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

