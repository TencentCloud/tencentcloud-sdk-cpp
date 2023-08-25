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

#include <tencentcloud/dsgc/v20190723/model/VerifyDSPADiscoveryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

VerifyDSPADiscoveryRuleRequest::VerifyDSPADiscoveryRuleRequest() :
    m_dspaIdHasBeenSet(false),
    m_matchOperatorHasBeenSet(false),
    m_metaRuleHasBeenSet(false),
    m_contentRuleHasBeenSet(false),
    m_verifyMetaHasBeenSet(false),
    m_verifyContentHasBeenSet(false)
{
}

string VerifyDSPADiscoveryRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_matchOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_metaRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_contentRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_verifyMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyMeta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyMeta.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyDSPADiscoveryRuleRequest::GetDspaId() const
{
    return m_dspaId;
}

void VerifyDSPADiscoveryRuleRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string VerifyDSPADiscoveryRuleRequest::GetMatchOperator() const
{
    return m_matchOperator;
}

void VerifyDSPADiscoveryRuleRequest::SetMatchOperator(const string& _matchOperator)
{
    m_matchOperator = _matchOperator;
    m_matchOperatorHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::MatchOperatorHasBeenSet() const
{
    return m_matchOperatorHasBeenSet;
}

DataRules VerifyDSPADiscoveryRuleRequest::GetMetaRule() const
{
    return m_metaRule;
}

void VerifyDSPADiscoveryRuleRequest::SetMetaRule(const DataRules& _metaRule)
{
    m_metaRule = _metaRule;
    m_metaRuleHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::MetaRuleHasBeenSet() const
{
    return m_metaRuleHasBeenSet;
}

DataRules VerifyDSPADiscoveryRuleRequest::GetContentRule() const
{
    return m_contentRule;
}

void VerifyDSPADiscoveryRuleRequest::SetContentRule(const DataRules& _contentRule)
{
    m_contentRule = _contentRule;
    m_contentRuleHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::ContentRuleHasBeenSet() const
{
    return m_contentRuleHasBeenSet;
}

string VerifyDSPADiscoveryRuleRequest::GetVerifyMeta() const
{
    return m_verifyMeta;
}

void VerifyDSPADiscoveryRuleRequest::SetVerifyMeta(const string& _verifyMeta)
{
    m_verifyMeta = _verifyMeta;
    m_verifyMetaHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::VerifyMetaHasBeenSet() const
{
    return m_verifyMetaHasBeenSet;
}

string VerifyDSPADiscoveryRuleRequest::GetVerifyContent() const
{
    return m_verifyContent;
}

void VerifyDSPADiscoveryRuleRequest::SetVerifyContent(const string& _verifyContent)
{
    m_verifyContent = _verifyContent;
    m_verifyContentHasBeenSet = true;
}

bool VerifyDSPADiscoveryRuleRequest::VerifyContentHasBeenSet() const
{
    return m_verifyContentHasBeenSet;
}


