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

#include <tencentcloud/csip/v20221121/model/CreateVulReScanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateVulReScanRequest::CreateVulReScanRequest() :
    m_vulIdHasBeenSet(false),
    m_kbNoHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_assetListHasBeenSet(false)
{
}

string CreateVulReScanRequest::ToJsonString() const
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


vector<uint64_t> CreateVulReScanRequest::GetVulId() const
{
    return m_vulId;
}

void CreateVulReScanRequest::SetVulId(const vector<uint64_t>& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool CreateVulReScanRequest::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<string> CreateVulReScanRequest::GetKbNo() const
{
    return m_kbNo;
}

void CreateVulReScanRequest::SetKbNo(const vector<string>& _kbNo)
{
    m_kbNo = _kbNo;
    m_kbNoHasBeenSet = true;
}

bool CreateVulReScanRequest::KbNoHasBeenSet() const
{
    return m_kbNoHasBeenSet;
}

vector<string> CreateVulReScanRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateVulReScanRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateVulReScanRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> CreateVulReScanRequest::GetAssetList() const
{
    return m_assetList;
}

void CreateVulReScanRequest::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool CreateVulReScanRequest::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}


