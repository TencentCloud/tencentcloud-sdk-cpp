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

#include <tencentcloud/csip/v20221121/model/BatchModifyBaselinePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BatchModifyBaselinePolicyRequest::BatchModifyBaselinePolicyRequest() :
    m_policyIDListHasBeenSet(false),
    m_cycleScanConfHasBeenSet(false),
    m_autoSyncItemHasBeenSet(false),
    m_categoryConfHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_customItemConfHasBeenSet(false)
{
}

string BatchModifyBaselinePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIDList.begin(); itr != m_policyIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_cycleScanConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleScanConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cycleScanConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSyncItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSyncItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSyncItem, allocator);
    }

    if (m_categoryConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryConf.begin(); itr != m_categoryConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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

    if (m_customItemConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomItemConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customItemConf.begin(); itr != m_customItemConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> BatchModifyBaselinePolicyRequest::GetPolicyIDList() const
{
    return m_policyIDList;
}

void BatchModifyBaselinePolicyRequest::SetPolicyIDList(const vector<uint64_t>& _policyIDList)
{
    m_policyIDList = _policyIDList;
    m_policyIDListHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::PolicyIDListHasBeenSet() const
{
    return m_policyIDListHasBeenSet;
}

CycleScanConf BatchModifyBaselinePolicyRequest::GetCycleScanConf() const
{
    return m_cycleScanConf;
}

void BatchModifyBaselinePolicyRequest::SetCycleScanConf(const CycleScanConf& _cycleScanConf)
{
    m_cycleScanConf = _cycleScanConf;
    m_cycleScanConfHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::CycleScanConfHasBeenSet() const
{
    return m_cycleScanConfHasBeenSet;
}

bool BatchModifyBaselinePolicyRequest::GetAutoSyncItem() const
{
    return m_autoSyncItem;
}

void BatchModifyBaselinePolicyRequest::SetAutoSyncItem(const bool& _autoSyncItem)
{
    m_autoSyncItem = _autoSyncItem;
    m_autoSyncItemHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::AutoSyncItemHasBeenSet() const
{
    return m_autoSyncItemHasBeenSet;
}

vector<BaselinePolicySystemCategoryConf> BatchModifyBaselinePolicyRequest::GetCategoryConf() const
{
    return m_categoryConf;
}

void BatchModifyBaselinePolicyRequest::SetCategoryConf(const vector<BaselinePolicySystemCategoryConf>& _categoryConf)
{
    m_categoryConf = _categoryConf;
    m_categoryConfHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::CategoryConfHasBeenSet() const
{
    return m_categoryConfHasBeenSet;
}

vector<string> BatchModifyBaselinePolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void BatchModifyBaselinePolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<BaselineCustomItemConf> BatchModifyBaselinePolicyRequest::GetCustomItemConf() const
{
    return m_customItemConf;
}

void BatchModifyBaselinePolicyRequest::SetCustomItemConf(const vector<BaselineCustomItemConf>& _customItemConf)
{
    m_customItemConf = _customItemConf;
    m_customItemConfHasBeenSet = true;
}

bool BatchModifyBaselinePolicyRequest::CustomItemConfHasBeenSet() const
{
    return m_customItemConfHasBeenSet;
}


