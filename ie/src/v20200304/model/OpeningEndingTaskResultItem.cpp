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

#include <tencentcloud/ie/v20200304/model/OpeningEndingTaskResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

OpeningEndingTaskResultItem::OpeningEndingTaskResultItem() :
    m_openingTimeOffsetHasBeenSet(false),
    m_openingConfidenceHasBeenSet(false),
    m_endingTimeOffsetHasBeenSet(false),
    m_endingConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome OpeningEndingTaskResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpeningTimeOffset") && !value["OpeningTimeOffset"].IsNull())
    {
        if (!value["OpeningTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpeningEndingTaskResultItem.OpeningTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_openingTimeOffset = value["OpeningTimeOffset"].GetDouble();
        m_openingTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("OpeningConfidence") && !value["OpeningConfidence"].IsNull())
    {
        if (!value["OpeningConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpeningEndingTaskResultItem.OpeningConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_openingConfidence = value["OpeningConfidence"].GetDouble();
        m_openingConfidenceHasBeenSet = true;
    }

    if (value.HasMember("EndingTimeOffset") && !value["EndingTimeOffset"].IsNull())
    {
        if (!value["EndingTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpeningEndingTaskResultItem.EndingTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endingTimeOffset = value["EndingTimeOffset"].GetDouble();
        m_endingTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndingConfidence") && !value["EndingConfidence"].IsNull())
    {
        if (!value["EndingConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OpeningEndingTaskResultItem.EndingConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endingConfidence = value["EndingConfidence"].GetDouble();
        m_endingConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpeningEndingTaskResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openingTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openingTimeOffset, allocator);
    }

    if (m_openingConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openingConfidence, allocator);
    }

    if (m_endingTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndingTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endingTimeOffset, allocator);
    }

    if (m_endingConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndingConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endingConfidence, allocator);
    }

}


double OpeningEndingTaskResultItem::GetOpeningTimeOffset() const
{
    return m_openingTimeOffset;
}

void OpeningEndingTaskResultItem::SetOpeningTimeOffset(const double& _openingTimeOffset)
{
    m_openingTimeOffset = _openingTimeOffset;
    m_openingTimeOffsetHasBeenSet = true;
}

bool OpeningEndingTaskResultItem::OpeningTimeOffsetHasBeenSet() const
{
    return m_openingTimeOffsetHasBeenSet;
}

double OpeningEndingTaskResultItem::GetOpeningConfidence() const
{
    return m_openingConfidence;
}

void OpeningEndingTaskResultItem::SetOpeningConfidence(const double& _openingConfidence)
{
    m_openingConfidence = _openingConfidence;
    m_openingConfidenceHasBeenSet = true;
}

bool OpeningEndingTaskResultItem::OpeningConfidenceHasBeenSet() const
{
    return m_openingConfidenceHasBeenSet;
}

double OpeningEndingTaskResultItem::GetEndingTimeOffset() const
{
    return m_endingTimeOffset;
}

void OpeningEndingTaskResultItem::SetEndingTimeOffset(const double& _endingTimeOffset)
{
    m_endingTimeOffset = _endingTimeOffset;
    m_endingTimeOffsetHasBeenSet = true;
}

bool OpeningEndingTaskResultItem::EndingTimeOffsetHasBeenSet() const
{
    return m_endingTimeOffsetHasBeenSet;
}

double OpeningEndingTaskResultItem::GetEndingConfidence() const
{
    return m_endingConfidence;
}

void OpeningEndingTaskResultItem::SetEndingConfidence(const double& _endingConfidence)
{
    m_endingConfidence = _endingConfidence;
    m_endingConfidenceHasBeenSet = true;
}

bool OpeningEndingTaskResultItem::EndingConfidenceHasBeenSet() const
{
    return m_endingConfidenceHasBeenSet;
}

