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

#include <tencentcloud/csip/v20221121/model/AddVulWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AddVulWhitelistRequest::AddVulWhitelistRequest() :
    m_vulIdHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_assetListHasBeenSet(false)
{
}

string AddVulWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulId.begin(); itr != m_vulId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kbId.begin(); itr != m_kbId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetList.begin(); itr != m_assetList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> AddVulWhitelistRequest::GetVulId() const
{
    return m_vulId;
}

void AddVulWhitelistRequest::SetVulId(const vector<uint64_t>& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool AddVulWhitelistRequest::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<uint64_t> AddVulWhitelistRequest::GetKbId() const
{
    return m_kbId;
}

void AddVulWhitelistRequest::SetKbId(const vector<uint64_t>& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool AddVulWhitelistRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

vector<string> AddVulWhitelistRequest::GetMemberId() const
{
    return m_memberId;
}

void AddVulWhitelistRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool AddVulWhitelistRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string AddVulWhitelistRequest::GetRemark() const
{
    return m_remark;
}

void AddVulWhitelistRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddVulWhitelistRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> AddVulWhitelistRequest::GetAssetList() const
{
    return m_assetList;
}

void AddVulWhitelistRequest::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool AddVulWhitelistRequest::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}


