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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHeadTailOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskHeadTailOutput::AiAnalysisTaskHeadTailOutput() :
    m_headTimeOffsetHasBeenSet(false),
    m_tailTimeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskHeadTailOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadTimeOffset") && !value["HeadTimeOffset"].IsNull())
    {
        if (!value["HeadTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskHeadTailOutput.HeadTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_headTimeOffset = value["HeadTimeOffset"].GetDouble();
        m_headTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("TailTimeOffset") && !value["TailTimeOffset"].IsNull())
    {
        if (!value["TailTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskHeadTailOutput.TailTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tailTimeOffset = value["TailTimeOffset"].GetDouble();
        m_tailTimeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskHeadTailOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headTimeOffset, allocator);
    }

    if (m_tailTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tailTimeOffset, allocator);
    }

}


double AiAnalysisTaskHeadTailOutput::GetHeadTimeOffset() const
{
    return m_headTimeOffset;
}

void AiAnalysisTaskHeadTailOutput::SetHeadTimeOffset(const double& _headTimeOffset)
{
    m_headTimeOffset = _headTimeOffset;
    m_headTimeOffsetHasBeenSet = true;
}

bool AiAnalysisTaskHeadTailOutput::HeadTimeOffsetHasBeenSet() const
{
    return m_headTimeOffsetHasBeenSet;
}

double AiAnalysisTaskHeadTailOutput::GetTailTimeOffset() const
{
    return m_tailTimeOffset;
}

void AiAnalysisTaskHeadTailOutput::SetTailTimeOffset(const double& _tailTimeOffset)
{
    m_tailTimeOffset = _tailTimeOffset;
    m_tailTimeOffsetHasBeenSet = true;
}

bool AiAnalysisTaskHeadTailOutput::TailTimeOffsetHasBeenSet() const
{
    return m_tailTimeOffsetHasBeenSet;
}

