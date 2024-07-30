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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaSearch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaSearch::KnowledgeQaSearch() :
    m_typeHasBeenSet(false),
    m_replyFlexibilityHasBeenSet(false),
    m_useSearchEngineHasBeenSet(false),
    m_showSearchEngineHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_qaTopNHasBeenSet(false),
    m_docTopNHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_resourceStatusHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaSearch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ReplyFlexibility") && !value["ReplyFlexibility"].IsNull())
    {
        if (!value["ReplyFlexibility"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.ReplyFlexibility` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replyFlexibility = value["ReplyFlexibility"].GetUint64();
        m_replyFlexibilityHasBeenSet = true;
    }

    if (value.HasMember("UseSearchEngine") && !value["UseSearchEngine"].IsNull())
    {
        if (!value["UseSearchEngine"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.UseSearchEngine` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useSearchEngine = value["UseSearchEngine"].GetBool();
        m_useSearchEngineHasBeenSet = true;
    }

    if (value.HasMember("ShowSearchEngine") && !value["ShowSearchEngine"].IsNull())
    {
        if (!value["ShowSearchEngine"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.ShowSearchEngine` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showSearchEngine = value["ShowSearchEngine"].GetBool();
        m_showSearchEngineHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.IsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetBool();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("QaTopN") && !value["QaTopN"].IsNull())
    {
        if (!value["QaTopN"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.QaTopN` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qaTopN = value["QaTopN"].GetUint64();
        m_qaTopNHasBeenSet = true;
    }

    if (value.HasMember("DocTopN") && !value["DocTopN"].IsNull())
    {
        if (!value["DocTopN"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.DocTopN` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_docTopN = value["DocTopN"].GetUint64();
        m_docTopNHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSearch.ResourceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetUint64();
        m_resourceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaSearch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_replyFlexibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyFlexibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyFlexibility, allocator);
    }

    if (m_useSearchEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseSearchEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useSearchEngine, allocator);
    }

    if (m_showSearchEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowSearchEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showSearchEngine, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_qaTopNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaTopN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qaTopN, allocator);
    }

    if (m_docTopNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocTopN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docTopN, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

}


string KnowledgeQaSearch::GetType() const
{
    return m_type;
}

void KnowledgeQaSearch::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool KnowledgeQaSearch::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t KnowledgeQaSearch::GetReplyFlexibility() const
{
    return m_replyFlexibility;
}

void KnowledgeQaSearch::SetReplyFlexibility(const uint64_t& _replyFlexibility)
{
    m_replyFlexibility = _replyFlexibility;
    m_replyFlexibilityHasBeenSet = true;
}

bool KnowledgeQaSearch::ReplyFlexibilityHasBeenSet() const
{
    return m_replyFlexibilityHasBeenSet;
}

bool KnowledgeQaSearch::GetUseSearchEngine() const
{
    return m_useSearchEngine;
}

void KnowledgeQaSearch::SetUseSearchEngine(const bool& _useSearchEngine)
{
    m_useSearchEngine = _useSearchEngine;
    m_useSearchEngineHasBeenSet = true;
}

bool KnowledgeQaSearch::UseSearchEngineHasBeenSet() const
{
    return m_useSearchEngineHasBeenSet;
}

bool KnowledgeQaSearch::GetShowSearchEngine() const
{
    return m_showSearchEngine;
}

void KnowledgeQaSearch::SetShowSearchEngine(const bool& _showSearchEngine)
{
    m_showSearchEngine = _showSearchEngine;
    m_showSearchEngineHasBeenSet = true;
}

bool KnowledgeQaSearch::ShowSearchEngineHasBeenSet() const
{
    return m_showSearchEngineHasBeenSet;
}

bool KnowledgeQaSearch::GetIsEnabled() const
{
    return m_isEnabled;
}

void KnowledgeQaSearch::SetIsEnabled(const bool& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool KnowledgeQaSearch::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

uint64_t KnowledgeQaSearch::GetQaTopN() const
{
    return m_qaTopN;
}

void KnowledgeQaSearch::SetQaTopN(const uint64_t& _qaTopN)
{
    m_qaTopN = _qaTopN;
    m_qaTopNHasBeenSet = true;
}

bool KnowledgeQaSearch::QaTopNHasBeenSet() const
{
    return m_qaTopNHasBeenSet;
}

uint64_t KnowledgeQaSearch::GetDocTopN() const
{
    return m_docTopN;
}

void KnowledgeQaSearch::SetDocTopN(const uint64_t& _docTopN)
{
    m_docTopN = _docTopN;
    m_docTopNHasBeenSet = true;
}

bool KnowledgeQaSearch::DocTopNHasBeenSet() const
{
    return m_docTopNHasBeenSet;
}

double KnowledgeQaSearch::GetConfidence() const
{
    return m_confidence;
}

void KnowledgeQaSearch::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool KnowledgeQaSearch::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

uint64_t KnowledgeQaSearch::GetResourceStatus() const
{
    return m_resourceStatus;
}

void KnowledgeQaSearch::SetResourceStatus(const uint64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool KnowledgeQaSearch::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

