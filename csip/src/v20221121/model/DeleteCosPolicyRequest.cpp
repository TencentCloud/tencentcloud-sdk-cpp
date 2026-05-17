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

#include <tencentcloud/csip/v20221121/model/DeleteCosPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteCosPolicyRequest::DeleteCosPolicyRequest() :
    m_policyIdSetHasBeenSet(false),
    m_isDeleteAllHasBeenSet(false)
{
}

string DeleteCosPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIdSet.begin(); itr != m_policyIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isDeleteAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DeleteCosPolicyRequest::GetPolicyIdSet() const
{
    return m_policyIdSet;
}

void DeleteCosPolicyRequest::SetPolicyIdSet(const vector<int64_t>& _policyIdSet)
{
    m_policyIdSet = _policyIdSet;
    m_policyIdSetHasBeenSet = true;
}

bool DeleteCosPolicyRequest::PolicyIdSetHasBeenSet() const
{
    return m_policyIdSetHasBeenSet;
}

int64_t DeleteCosPolicyRequest::GetIsDeleteAll() const
{
    return m_isDeleteAll;
}

void DeleteCosPolicyRequest::SetIsDeleteAll(const int64_t& _isDeleteAll)
{
    m_isDeleteAll = _isDeleteAll;
    m_isDeleteAllHasBeenSet = true;
}

bool DeleteCosPolicyRequest::IsDeleteAllHasBeenSet() const
{
    return m_isDeleteAllHasBeenSet;
}


