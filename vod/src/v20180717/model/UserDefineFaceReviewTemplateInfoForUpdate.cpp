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

#include <tencentcloud/vod/v20180717/model/UserDefineFaceReviewTemplateInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

UserDefineFaceReviewTemplateInfoForUpdate::UserDefineFaceReviewTemplateInfoForUpdate() :
    m_switchHasBeenSet(false),
    m_labelSetHasBeenSet(false),
    m_blockConfidenceHasBeenSet(false),
    m_reviewConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome UserDefineFaceReviewTemplateInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineFaceReviewTemplateInfoForUpdate.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserDefineFaceReviewTemplateInfoForUpdate.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }

    if (value.HasMember("BlockConfidence") && !value["BlockConfidence"].IsNull())
    {
        if (!value["BlockConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineFaceReviewTemplateInfoForUpdate.BlockConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockConfidence = value["BlockConfidence"].GetInt64();
        m_blockConfidenceHasBeenSet = true;
    }

    if (value.HasMember("ReviewConfidence") && !value["ReviewConfidence"].IsNull())
    {
        if (!value["ReviewConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineFaceReviewTemplateInfoForUpdate.ReviewConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reviewConfidence = value["ReviewConfidence"].GetInt64();
        m_reviewConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDefineFaceReviewTemplateInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockConfidence, allocator);
    }

    if (m_reviewConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reviewConfidence, allocator);
    }

}


string UserDefineFaceReviewTemplateInfoForUpdate::GetSwitch() const
{
    return m_switch;
}

void UserDefineFaceReviewTemplateInfoForUpdate::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool UserDefineFaceReviewTemplateInfoForUpdate::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> UserDefineFaceReviewTemplateInfoForUpdate::GetLabelSet() const
{
    return m_labelSet;
}

void UserDefineFaceReviewTemplateInfoForUpdate::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool UserDefineFaceReviewTemplateInfoForUpdate::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

int64_t UserDefineFaceReviewTemplateInfoForUpdate::GetBlockConfidence() const
{
    return m_blockConfidence;
}

void UserDefineFaceReviewTemplateInfoForUpdate::SetBlockConfidence(const int64_t& _blockConfidence)
{
    m_blockConfidence = _blockConfidence;
    m_blockConfidenceHasBeenSet = true;
}

bool UserDefineFaceReviewTemplateInfoForUpdate::BlockConfidenceHasBeenSet() const
{
    return m_blockConfidenceHasBeenSet;
}

int64_t UserDefineFaceReviewTemplateInfoForUpdate::GetReviewConfidence() const
{
    return m_reviewConfidence;
}

void UserDefineFaceReviewTemplateInfoForUpdate::SetReviewConfidence(const int64_t& _reviewConfidence)
{
    m_reviewConfidence = _reviewConfidence;
    m_reviewConfidenceHasBeenSet = true;
}

bool UserDefineFaceReviewTemplateInfoForUpdate::ReviewConfidenceHasBeenSet() const
{
    return m_reviewConfidenceHasBeenSet;
}

