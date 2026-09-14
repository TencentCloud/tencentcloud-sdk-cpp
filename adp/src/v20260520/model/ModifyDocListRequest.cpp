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

#include <tencentcloud/adp/v20260520/model/ModifyDocListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyDocListRequest::ModifyDocListRequest() :
    m_docIdListHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_effectiveDomainHasBeenSet(false),
    m_expirationPolicyHasBeenSet(false),
    m_externalLinkHasBeenSet(false),
    m_labelRefListHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

string ModifyDocListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_docIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_docIdList.begin(); itr != m_docIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_effectiveDomain, allocator);
    }

    if (m_expirationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expirationPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalLink.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_labelRefListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelRefList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_labelRefList.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_switch.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDocListRequest::GetDocIdList() const
{
    return m_docIdList;
}

void ModifyDocListRequest::SetDocIdList(const vector<string>& _docIdList)
{
    m_docIdList = _docIdList;
    m_docIdListHasBeenSet = true;
}

bool ModifyDocListRequest::DocIdListHasBeenSet() const
{
    return m_docIdListHasBeenSet;
}

string ModifyDocListRequest::GetKbId() const
{
    return m_kbId;
}

void ModifyDocListRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyDocListRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string ModifyDocListRequest::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyDocListRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyDocListRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t ModifyDocListRequest::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void ModifyDocListRequest::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool ModifyDocListRequest::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

ExpirationPolicy ModifyDocListRequest::GetExpirationPolicy() const
{
    return m_expirationPolicy;
}

void ModifyDocListRequest::SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy)
{
    m_expirationPolicy = _expirationPolicy;
    m_expirationPolicyHasBeenSet = true;
}

bool ModifyDocListRequest::ExpirationPolicyHasBeenSet() const
{
    return m_expirationPolicyHasBeenSet;
}

DocExternalLink ModifyDocListRequest::GetExternalLink() const
{
    return m_externalLink;
}

void ModifyDocListRequest::SetExternalLink(const DocExternalLink& _externalLink)
{
    m_externalLink = _externalLink;
    m_externalLinkHasBeenSet = true;
}

bool ModifyDocListRequest::ExternalLinkHasBeenSet() const
{
    return m_externalLinkHasBeenSet;
}

LabelRefIdentityList ModifyDocListRequest::GetLabelRefList() const
{
    return m_labelRefList;
}

void ModifyDocListRequest::SetLabelRefList(const LabelRefIdentityList& _labelRefList)
{
    m_labelRefList = _labelRefList;
    m_labelRefListHasBeenSet = true;
}

bool ModifyDocListRequest::LabelRefListHasBeenSet() const
{
    return m_labelRefListHasBeenSet;
}

DocSwitch ModifyDocListRequest::GetSwitch() const
{
    return m_switch;
}

void ModifyDocListRequest::SetSwitch(const DocSwitch& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ModifyDocListRequest::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}


