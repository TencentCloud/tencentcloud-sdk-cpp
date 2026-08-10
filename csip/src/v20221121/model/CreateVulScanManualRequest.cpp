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

#include <tencentcloud/csip/v20221121/model/CreateVulScanManualRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateVulScanManualRequest::CreateVulScanManualRequest() :
    m_timeoutHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_kbNoHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_assetListHasBeenSet(false),
    m_tagIdsHasBeenSet(false)
{
}

string CreateVulScanManualRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_method.begin(); itr != m_method.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_kbNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kbNo.begin(); itr != m_kbNo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCategory.begin(); itr != m_vulCategory.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateVulScanManualRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateVulScanManualRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateVulScanManualRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t CreateVulScanManualRequest::GetAssetRange() const
{
    return m_assetRange;
}

void CreateVulScanManualRequest::SetAssetRange(const int64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool CreateVulScanManualRequest::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetMethod() const
{
    return m_method;
}

void CreateVulScanManualRequest::SetMethod(const vector<string>& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateVulScanManualRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateVulScanManualRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateVulScanManualRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<uint64_t> CreateVulScanManualRequest::GetVulId() const
{
    return m_vulId;
}

void CreateVulScanManualRequest::SetVulId(const vector<uint64_t>& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool CreateVulScanManualRequest::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetKbNo() const
{
    return m_kbNo;
}

void CreateVulScanManualRequest::SetKbNo(const vector<string>& _kbNo)
{
    m_kbNo = _kbNo;
    m_kbNoHasBeenSet = true;
}

bool CreateVulScanManualRequest::KbNoHasBeenSet() const
{
    return m_kbNoHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetVulCategory() const
{
    return m_vulCategory;
}

void CreateVulScanManualRequest::SetVulCategory(const vector<string>& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool CreateVulScanManualRequest::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetLevel() const
{
    return m_level;
}

void CreateVulScanManualRequest::SetLevel(const vector<string>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool CreateVulScanManualRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> CreateVulScanManualRequest::GetAssetList() const
{
    return m_assetList;
}

void CreateVulScanManualRequest::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool CreateVulScanManualRequest::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

vector<uint64_t> CreateVulScanManualRequest::GetTagIds() const
{
    return m_tagIds;
}

void CreateVulScanManualRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool CreateVulScanManualRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}


