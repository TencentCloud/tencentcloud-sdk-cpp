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

#include <tencentcloud/csip/v20221121/model/CreateImageVirusWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateImageVirusWhitelistRequest::CreateImageVirusWhitelistRequest() :
    m_memberIdHasBeenSet(false),
    m_md5ListHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_virusIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string CreateImageVirusWhitelistRequest::ToJsonString() const
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

    if (m_md5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_md5List.begin(); itr != m_md5List.end(); ++itr)
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

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_virusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virusId.begin(); itr != m_virusId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateImageVirusWhitelistRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateImageVirusWhitelistRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> CreateImageVirusWhitelistRequest::GetMd5List() const
{
    return m_md5List;
}

void CreateImageVirusWhitelistRequest::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

uint64_t CreateImageVirusWhitelistRequest::GetScope() const
{
    return m_scope;
}

void CreateImageVirusWhitelistRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<uint64_t> CreateImageVirusWhitelistRequest::GetImageIds() const
{
    return m_imageIds;
}

void CreateImageVirusWhitelistRequest::SetImageIds(const vector<uint64_t>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string CreateImageVirusWhitelistRequest::GetRemark() const
{
    return m_remark;
}

void CreateImageVirusWhitelistRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<uint64_t> CreateImageVirusWhitelistRequest::GetVirusId() const
{
    return m_virusId;
}

void CreateImageVirusWhitelistRequest::SetVirusId(const vector<uint64_t>& _virusId)
{
    m_virusId = _virusId;
    m_virusIdHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::VirusIdHasBeenSet() const
{
    return m_virusIdHasBeenSet;
}

string CreateImageVirusWhitelistRequest::GetName() const
{
    return m_name;
}

void CreateImageVirusWhitelistRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateImageVirusWhitelistRequest::GetStatus() const
{
    return m_status;
}

void CreateImageVirusWhitelistRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateImageVirusWhitelistRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


