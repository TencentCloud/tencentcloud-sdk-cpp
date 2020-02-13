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

#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisCoverItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

MediaAiAnalysisCoverItem::MediaAiAnalysisCoverItem() :
    m_coverPathHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisCoverItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CoverPath") && !value["CoverPath"].IsNull())
    {
        if (!value["CoverPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisCoverItem.CoverPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverPath = string(value["CoverPath"].GetString());
        m_coverPathHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaAiAnalysisCoverItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisCoverItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_coverPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverPath.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string MediaAiAnalysisCoverItem::GetCoverPath() const
{
    return m_coverPath;
}

void MediaAiAnalysisCoverItem::SetCoverPath(const string& _coverPath)
{
    m_coverPath = _coverPath;
    m_coverPathHasBeenSet = true;
}

bool MediaAiAnalysisCoverItem::CoverPathHasBeenSet() const
{
    return m_coverPathHasBeenSet;
}

double MediaAiAnalysisCoverItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisCoverItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisCoverItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

