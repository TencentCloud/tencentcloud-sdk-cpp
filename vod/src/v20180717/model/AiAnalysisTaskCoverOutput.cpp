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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskCoverOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiAnalysisTaskCoverOutput::AiAnalysisTaskCoverOutput() :
    m_coverSetHasBeenSet(false),
    m_coverSetFileUrlHasBeenSet(false),
    m_coverSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskCoverOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CoverSet") && !value["CoverSet"].IsNull())
    {
        if (!value["CoverSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskCoverOutput.CoverSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CoverSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisCoverItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coverSet.push_back(item);
        }
        m_coverSetHasBeenSet = true;
    }

    if (value.HasMember("CoverSetFileUrl") && !value["CoverSetFileUrl"].IsNull())
    {
        if (!value["CoverSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskCoverOutput.CoverSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverSetFileUrl = string(value["CoverSetFileUrl"].GetString());
        m_coverSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverSetFileUrlExpireTime") && !value["CoverSetFileUrlExpireTime"].IsNull())
    {
        if (!value["CoverSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskCoverOutput.CoverSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverSetFileUrlExpireTime = string(value["CoverSetFileUrlExpireTime"].GetString());
        m_coverSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskCoverOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coverSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverSet.begin(); itr != m_coverSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_coverSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


vector<MediaAiAnalysisCoverItem> AiAnalysisTaskCoverOutput::GetCoverSet() const
{
    return m_coverSet;
}

void AiAnalysisTaskCoverOutput::SetCoverSet(const vector<MediaAiAnalysisCoverItem>& _coverSet)
{
    m_coverSet = _coverSet;
    m_coverSetHasBeenSet = true;
}

bool AiAnalysisTaskCoverOutput::CoverSetHasBeenSet() const
{
    return m_coverSetHasBeenSet;
}

string AiAnalysisTaskCoverOutput::GetCoverSetFileUrl() const
{
    return m_coverSetFileUrl;
}

void AiAnalysisTaskCoverOutput::SetCoverSetFileUrl(const string& _coverSetFileUrl)
{
    m_coverSetFileUrl = _coverSetFileUrl;
    m_coverSetFileUrlHasBeenSet = true;
}

bool AiAnalysisTaskCoverOutput::CoverSetFileUrlHasBeenSet() const
{
    return m_coverSetFileUrlHasBeenSet;
}

string AiAnalysisTaskCoverOutput::GetCoverSetFileUrlExpireTime() const
{
    return m_coverSetFileUrlExpireTime;
}

void AiAnalysisTaskCoverOutput::SetCoverSetFileUrlExpireTime(const string& _coverSetFileUrlExpireTime)
{
    m_coverSetFileUrlExpireTime = _coverSetFileUrlExpireTime;
    m_coverSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiAnalysisTaskCoverOutput::CoverSetFileUrlExpireTimeHasBeenSet() const
{
    return m_coverSetFileUrlExpireTimeHasBeenSet;
}

