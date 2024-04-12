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

#include <tencentcloud/lke/v20231130/model/AppConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AppConfig::AppConfig() :
    m_knowledgeQaHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_classifyHasBeenSet(false)
{
}

CoreInternalOutcome AppConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeQa") && !value["KnowledgeQa"].IsNull())
    {
        if (!value["KnowledgeQa"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.KnowledgeQa` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeQa.Deserialize(value["KnowledgeQa"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeQaHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Classify") && !value["Classify"].IsNull())
    {
        if (!value["Classify"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Classify` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classify.Deserialize(value["Classify"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeQa.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classify.ToJsonObject(value[key.c_str()], allocator);
    }

}


KnowledgeQaConfig AppConfig::GetKnowledgeQa() const
{
    return m_knowledgeQa;
}

void AppConfig::SetKnowledgeQa(const KnowledgeQaConfig& _knowledgeQa)
{
    m_knowledgeQa = _knowledgeQa;
    m_knowledgeQaHasBeenSet = true;
}

bool AppConfig::KnowledgeQaHasBeenSet() const
{
    return m_knowledgeQaHasBeenSet;
}

SummaryConfig AppConfig::GetSummary() const
{
    return m_summary;
}

void AppConfig::SetSummary(const SummaryConfig& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool AppConfig::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

ClassifyConfig AppConfig::GetClassify() const
{
    return m_classify;
}

void AppConfig::SetClassify(const ClassifyConfig& _classify)
{
    m_classify = _classify;
    m_classifyHasBeenSet = true;
}

bool AppConfig::ClassifyHasBeenSet() const
{
    return m_classifyHasBeenSet;
}

