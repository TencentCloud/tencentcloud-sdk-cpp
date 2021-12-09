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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskClassificationOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiAnalysisTaskClassificationOutput::AiAnalysisTaskClassificationOutput() :
    m_classificationSetHasBeenSet(false),
    m_classificationSetFileUrlHasBeenSet(false),
    m_classificationSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskClassificationOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClassificationSet") && !value["ClassificationSet"].IsNull())
    {
        if (!value["ClassificationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskClassificationOutput.ClassificationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassificationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisClassificationItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classificationSet.push_back(item);
        }
        m_classificationSetHasBeenSet = true;
    }

    if (value.HasMember("ClassificationSetFileUrl") && !value["ClassificationSetFileUrl"].IsNull())
    {
        if (!value["ClassificationSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskClassificationOutput.ClassificationSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationSetFileUrl = string(value["ClassificationSetFileUrl"].GetString());
        m_classificationSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("ClassificationSetFileUrlExpireTime") && !value["ClassificationSetFileUrlExpireTime"].IsNull())
    {
        if (!value["ClassificationSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskClassificationOutput.ClassificationSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationSetFileUrlExpireTime = string(value["ClassificationSetFileUrlExpireTime"].GetString());
        m_classificationSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskClassificationOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classificationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classificationSet.begin(); itr != m_classificationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_classificationSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


vector<MediaAiAnalysisClassificationItem> AiAnalysisTaskClassificationOutput::GetClassificationSet() const
{
    return m_classificationSet;
}

void AiAnalysisTaskClassificationOutput::SetClassificationSet(const vector<MediaAiAnalysisClassificationItem>& _classificationSet)
{
    m_classificationSet = _classificationSet;
    m_classificationSetHasBeenSet = true;
}

bool AiAnalysisTaskClassificationOutput::ClassificationSetHasBeenSet() const
{
    return m_classificationSetHasBeenSet;
}

string AiAnalysisTaskClassificationOutput::GetClassificationSetFileUrl() const
{
    return m_classificationSetFileUrl;
}

void AiAnalysisTaskClassificationOutput::SetClassificationSetFileUrl(const string& _classificationSetFileUrl)
{
    m_classificationSetFileUrl = _classificationSetFileUrl;
    m_classificationSetFileUrlHasBeenSet = true;
}

bool AiAnalysisTaskClassificationOutput::ClassificationSetFileUrlHasBeenSet() const
{
    return m_classificationSetFileUrlHasBeenSet;
}

string AiAnalysisTaskClassificationOutput::GetClassificationSetFileUrlExpireTime() const
{
    return m_classificationSetFileUrlExpireTime;
}

void AiAnalysisTaskClassificationOutput::SetClassificationSetFileUrlExpireTime(const string& _classificationSetFileUrlExpireTime)
{
    m_classificationSetFileUrlExpireTime = _classificationSetFileUrlExpireTime;
    m_classificationSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiAnalysisTaskClassificationOutput::ClassificationSetFileUrlExpireTimeHasBeenSet() const
{
    return m_classificationSetFileUrlExpireTimeHasBeenSet;
}

