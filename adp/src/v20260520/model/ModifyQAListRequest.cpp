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

#include <tencentcloud/adp/v20260520/model/ModifyQAListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyQAListRequest::ModifyQAListRequest() :
    m_kbIdHasBeenSet(false),
    m_qaIdListHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_effectiveDomainHasBeenSet(false),
    m_expirationPolicyHasBeenSet(false),
    m_isAcceptedHasBeenSet(false),
    m_labelRefListHasBeenSet(false)
{
}

string ModifyQAListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_qaIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qaIdList.begin(); itr != m_qaIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_isAcceptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccepted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAccepted, allocator);
    }

    if (m_labelRefListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelRefList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_labelRefList.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyQAListRequest::GetKbId() const
{
    return m_kbId;
}

void ModifyQAListRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyQAListRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

vector<string> ModifyQAListRequest::GetQaIdList() const
{
    return m_qaIdList;
}

void ModifyQAListRequest::SetQaIdList(const vector<string>& _qaIdList)
{
    m_qaIdList = _qaIdList;
    m_qaIdListHasBeenSet = true;
}

bool ModifyQAListRequest::QaIdListHasBeenSet() const
{
    return m_qaIdListHasBeenSet;
}

string ModifyQAListRequest::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyQAListRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyQAListRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t ModifyQAListRequest::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void ModifyQAListRequest::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool ModifyQAListRequest::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

ExpirationPolicy ModifyQAListRequest::GetExpirationPolicy() const
{
    return m_expirationPolicy;
}

void ModifyQAListRequest::SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy)
{
    m_expirationPolicy = _expirationPolicy;
    m_expirationPolicyHasBeenSet = true;
}

bool ModifyQAListRequest::ExpirationPolicyHasBeenSet() const
{
    return m_expirationPolicyHasBeenSet;
}

bool ModifyQAListRequest::GetIsAccepted() const
{
    return m_isAccepted;
}

void ModifyQAListRequest::SetIsAccepted(const bool& _isAccepted)
{
    m_isAccepted = _isAccepted;
    m_isAcceptedHasBeenSet = true;
}

bool ModifyQAListRequest::IsAcceptedHasBeenSet() const
{
    return m_isAcceptedHasBeenSet;
}

LabelRefIdentityList ModifyQAListRequest::GetLabelRefList() const
{
    return m_labelRefList;
}

void ModifyQAListRequest::SetLabelRefList(const LabelRefIdentityList& _labelRefList)
{
    m_labelRefList = _labelRefList;
    m_labelRefListHasBeenSet = true;
}

bool ModifyQAListRequest::LabelRefListHasBeenSet() const
{
    return m_labelRefListHasBeenSet;
}


