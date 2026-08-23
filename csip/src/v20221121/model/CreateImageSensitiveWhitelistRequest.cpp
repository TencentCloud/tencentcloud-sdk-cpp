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

#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateImageSensitiveWhitelistRequest::CreateImageSensitiveWhitelistRequest() :
    m_memberIdHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateImageSensitiveWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_behavior, allocator);
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


vector<string> CreateImageSensitiveWhitelistRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateImageSensitiveWhitelistRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t CreateImageSensitiveWhitelistRequest::GetBehavior() const
{
    return m_behavior;
}

void CreateImageSensitiveWhitelistRequest::SetBehavior(const uint64_t& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

vector<string> CreateImageSensitiveWhitelistRequest::GetImageIds() const
{
    return m_imageIds;
}

void CreateImageSensitiveWhitelistRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

uint64_t CreateImageSensitiveWhitelistRequest::GetScope() const
{
    return m_scope;
}

void CreateImageSensitiveWhitelistRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t CreateImageSensitiveWhitelistRequest::GetStatus() const
{
    return m_status;
}

void CreateImageSensitiveWhitelistRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateImageSensitiveWhitelistRequest::GetRemark() const
{
    return m_remark;
}

void CreateImageSensitiveWhitelistRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateImageSensitiveWhitelistRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


