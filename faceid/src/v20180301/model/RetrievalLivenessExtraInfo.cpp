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

#include <tencentcloud/faceid/v20180301/model/RetrievalLivenessExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

RetrievalLivenessExtraInfo::RetrievalLivenessExtraInfo() :
    m_hitGroupHasBeenSet(false),
    m_similarityScoreHasBeenSet(false),
    m_hitTemplateHasBeenSet(false)
{
}

CoreInternalOutcome RetrievalLivenessExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HitGroup") && !value["HitGroup"].IsNull())
    {
        if (!value["HitGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalLivenessExtraInfo.HitGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitGroup = string(value["HitGroup"].GetString());
        m_hitGroupHasBeenSet = true;
    }

    if (value.HasMember("SimilarityScore") && !value["SimilarityScore"].IsNull())
    {
        if (!value["SimilarityScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalLivenessExtraInfo.SimilarityScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarityScore = value["SimilarityScore"].GetDouble();
        m_similarityScoreHasBeenSet = true;
    }

    if (value.HasMember("HitTemplate") && !value["HitTemplate"].IsNull())
    {
        if (!value["HitTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalLivenessExtraInfo.HitTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitTemplate = string(value["HitTemplate"].GetString());
        m_hitTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetrievalLivenessExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_similarityScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarityScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarityScore, allocator);
    }

    if (m_hitTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitTemplate.c_str(), allocator).Move(), allocator);
    }

}


string RetrievalLivenessExtraInfo::GetHitGroup() const
{
    return m_hitGroup;
}

void RetrievalLivenessExtraInfo::SetHitGroup(const string& _hitGroup)
{
    m_hitGroup = _hitGroup;
    m_hitGroupHasBeenSet = true;
}

bool RetrievalLivenessExtraInfo::HitGroupHasBeenSet() const
{
    return m_hitGroupHasBeenSet;
}

double RetrievalLivenessExtraInfo::GetSimilarityScore() const
{
    return m_similarityScore;
}

void RetrievalLivenessExtraInfo::SetSimilarityScore(const double& _similarityScore)
{
    m_similarityScore = _similarityScore;
    m_similarityScoreHasBeenSet = true;
}

bool RetrievalLivenessExtraInfo::SimilarityScoreHasBeenSet() const
{
    return m_similarityScoreHasBeenSet;
}

string RetrievalLivenessExtraInfo::GetHitTemplate() const
{
    return m_hitTemplate;
}

void RetrievalLivenessExtraInfo::SetHitTemplate(const string& _hitTemplate)
{
    m_hitTemplate = _hitTemplate;
    m_hitTemplateHasBeenSet = true;
}

bool RetrievalLivenessExtraInfo::HitTemplateHasBeenSet() const
{
    return m_hitTemplateHasBeenSet;
}

