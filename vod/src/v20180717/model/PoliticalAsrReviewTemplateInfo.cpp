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

#include <tencentcloud/vod/v20180717/model/PoliticalAsrReviewTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

PoliticalAsrReviewTemplateInfo::PoliticalAsrReviewTemplateInfo() :
    m_switchHasBeenSet(false),
    m_reviewConfidenceHasBeenSet(false),
    m_blockConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome PoliticalAsrReviewTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticalAsrReviewTemplateInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ReviewConfidence") && !value["ReviewConfidence"].IsNull())
    {
        if (!value["ReviewConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticalAsrReviewTemplateInfo.ReviewConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reviewConfidence = value["ReviewConfidence"].GetInt64();
        m_reviewConfidenceHasBeenSet = true;
    }

    if (value.HasMember("BlockConfidence") && !value["BlockConfidence"].IsNull())
    {
        if (!value["BlockConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticalAsrReviewTemplateInfo.BlockConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockConfidence = value["BlockConfidence"].GetInt64();
        m_blockConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PoliticalAsrReviewTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reviewConfidence, allocator);
    }

    if (m_blockConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockConfidence, allocator);
    }

}


string PoliticalAsrReviewTemplateInfo::GetSwitch() const
{
    return m_switch;
}

void PoliticalAsrReviewTemplateInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool PoliticalAsrReviewTemplateInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t PoliticalAsrReviewTemplateInfo::GetReviewConfidence() const
{
    return m_reviewConfidence;
}

void PoliticalAsrReviewTemplateInfo::SetReviewConfidence(const int64_t& _reviewConfidence)
{
    m_reviewConfidence = _reviewConfidence;
    m_reviewConfidenceHasBeenSet = true;
}

bool PoliticalAsrReviewTemplateInfo::ReviewConfidenceHasBeenSet() const
{
    return m_reviewConfidenceHasBeenSet;
}

int64_t PoliticalAsrReviewTemplateInfo::GetBlockConfidence() const
{
    return m_blockConfidence;
}

void PoliticalAsrReviewTemplateInfo::SetBlockConfidence(const int64_t& _blockConfidence)
{
    m_blockConfidence = _blockConfidence;
    m_blockConfidenceHasBeenSet = true;
}

bool PoliticalAsrReviewTemplateInfo::BlockConfidenceHasBeenSet() const
{
    return m_blockConfidenceHasBeenSet;
}

