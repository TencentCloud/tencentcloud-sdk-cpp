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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskHeadTailResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskHeadTailResultOutput::AiRecognitionTaskHeadTailResultOutput() :
    m_headConfidenceHasBeenSet(false),
    m_headTimeOffsetHasBeenSet(false),
    m_tailConfidenceHasBeenSet(false),
    m_tailTimeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskHeadTailResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadConfidence") && !value["HeadConfidence"].IsNull())
    {
        if (!value["HeadConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskHeadTailResultOutput.HeadConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_headConfidence = value["HeadConfidence"].GetDouble();
        m_headConfidenceHasBeenSet = true;
    }

    if (value.HasMember("HeadTimeOffset") && !value["HeadTimeOffset"].IsNull())
    {
        if (!value["HeadTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskHeadTailResultOutput.HeadTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_headTimeOffset = value["HeadTimeOffset"].GetDouble();
        m_headTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("TailConfidence") && !value["TailConfidence"].IsNull())
    {
        if (!value["TailConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskHeadTailResultOutput.TailConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tailConfidence = value["TailConfidence"].GetDouble();
        m_tailConfidenceHasBeenSet = true;
    }

    if (value.HasMember("TailTimeOffset") && !value["TailTimeOffset"].IsNull())
    {
        if (!value["TailTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskHeadTailResultOutput.TailTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tailTimeOffset = value["TailTimeOffset"].GetDouble();
        m_tailTimeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskHeadTailResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headConfidence, allocator);
    }

    if (m_headTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headTimeOffset, allocator);
    }

    if (m_tailConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tailConfidence, allocator);
    }

    if (m_tailTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tailTimeOffset, allocator);
    }

}


double AiRecognitionTaskHeadTailResultOutput::GetHeadConfidence() const
{
    return m_headConfidence;
}

void AiRecognitionTaskHeadTailResultOutput::SetHeadConfidence(const double& _headConfidence)
{
    m_headConfidence = _headConfidence;
    m_headConfidenceHasBeenSet = true;
}

bool AiRecognitionTaskHeadTailResultOutput::HeadConfidenceHasBeenSet() const
{
    return m_headConfidenceHasBeenSet;
}

double AiRecognitionTaskHeadTailResultOutput::GetHeadTimeOffset() const
{
    return m_headTimeOffset;
}

void AiRecognitionTaskHeadTailResultOutput::SetHeadTimeOffset(const double& _headTimeOffset)
{
    m_headTimeOffset = _headTimeOffset;
    m_headTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskHeadTailResultOutput::HeadTimeOffsetHasBeenSet() const
{
    return m_headTimeOffsetHasBeenSet;
}

double AiRecognitionTaskHeadTailResultOutput::GetTailConfidence() const
{
    return m_tailConfidence;
}

void AiRecognitionTaskHeadTailResultOutput::SetTailConfidence(const double& _tailConfidence)
{
    m_tailConfidence = _tailConfidence;
    m_tailConfidenceHasBeenSet = true;
}

bool AiRecognitionTaskHeadTailResultOutput::TailConfidenceHasBeenSet() const
{
    return m_tailConfidenceHasBeenSet;
}

double AiRecognitionTaskHeadTailResultOutput::GetTailTimeOffset() const
{
    return m_tailTimeOffset;
}

void AiRecognitionTaskHeadTailResultOutput::SetTailTimeOffset(const double& _tailTimeOffset)
{
    m_tailTimeOffset = _tailTimeOffset;
    m_tailTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskHeadTailResultOutput::TailTimeOffsetHasBeenSet() const
{
    return m_tailTimeOffsetHasBeenSet;
}

