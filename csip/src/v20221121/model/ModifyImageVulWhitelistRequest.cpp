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

#include <tencentcloud/csip/v20221121/model/ModifyImageVulWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyImageVulWhitelistRequest::ModifyImageVulWhitelistRequest() :
    m_ruleIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_pocIdHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyImageVulWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pocId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyImageVulWhitelistRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyImageVulWhitelistRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<string> ModifyImageVulWhitelistRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyImageVulWhitelistRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyImageVulWhitelistRequest::GetPocId() const
{
    return m_pocId;
}

void ModifyImageVulWhitelistRequest::SetPocId(const string& _pocId)
{
    m_pocId = _pocId;
    m_pocIdHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::PocIdHasBeenSet() const
{
    return m_pocIdHasBeenSet;
}

vector<string> ModifyImageVulWhitelistRequest::GetImageIds() const
{
    return m_imageIds;
}

void ModifyImageVulWhitelistRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

uint64_t ModifyImageVulWhitelistRequest::GetScope() const
{
    return m_scope;
}

void ModifyImageVulWhitelistRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t ModifyImageVulWhitelistRequest::GetStatus() const
{
    return m_status;
}

void ModifyImageVulWhitelistRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyImageVulWhitelistRequest::GetRemark() const
{
    return m_remark;
}

void ModifyImageVulWhitelistRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyImageVulWhitelistRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


