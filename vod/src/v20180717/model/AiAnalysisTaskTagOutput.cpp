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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiAnalysisTaskTagOutput::AiAnalysisTaskTagOutput() :
    m_tagSetHasBeenSet(false),
    m_tagSetFileUrlHasBeenSet(false),
    m_tagSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskTagOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskTagOutput.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("TagSetFileUrl") && !value["TagSetFileUrl"].IsNull())
    {
        if (!value["TagSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskTagOutput.TagSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagSetFileUrl = string(value["TagSetFileUrl"].GetString());
        m_tagSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("TagSetFileUrlExpireTime") && !value["TagSetFileUrlExpireTime"].IsNull())
    {
        if (!value["TagSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskTagOutput.TagSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagSetFileUrlExpireTime = string(value["TagSetFileUrlExpireTime"].GetString());
        m_tagSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskTagOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


vector<MediaAiAnalysisTagItem> AiAnalysisTaskTagOutput::GetTagSet() const
{
    return m_tagSet;
}

void AiAnalysisTaskTagOutput::SetTagSet(const vector<MediaAiAnalysisTagItem>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool AiAnalysisTaskTagOutput::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string AiAnalysisTaskTagOutput::GetTagSetFileUrl() const
{
    return m_tagSetFileUrl;
}

void AiAnalysisTaskTagOutput::SetTagSetFileUrl(const string& _tagSetFileUrl)
{
    m_tagSetFileUrl = _tagSetFileUrl;
    m_tagSetFileUrlHasBeenSet = true;
}

bool AiAnalysisTaskTagOutput::TagSetFileUrlHasBeenSet() const
{
    return m_tagSetFileUrlHasBeenSet;
}

string AiAnalysisTaskTagOutput::GetTagSetFileUrlExpireTime() const
{
    return m_tagSetFileUrlExpireTime;
}

void AiAnalysisTaskTagOutput::SetTagSetFileUrlExpireTime(const string& _tagSetFileUrlExpireTime)
{
    m_tagSetFileUrlExpireTime = _tagSetFileUrlExpireTime;
    m_tagSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiAnalysisTaskTagOutput::TagSetFileUrlExpireTimeHasBeenSet() const
{
    return m_tagSetFileUrlExpireTimeHasBeenSet;
}

