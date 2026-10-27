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

#include <tencentcloud/cvd/v20201104/model/UpdatePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

UpdatePolicyRequest::UpdatePolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyInfoListHasBeenSet(false),
    m_bindUserIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false)
{
}

string UpdatePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_policyInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyInfoList.begin(); itr != m_policyInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bindUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindUserIds.begin(); itr != m_bindUserIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_removeUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removeUserIds.begin(); itr != m_removeUserIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void UpdatePolicyRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool UpdatePolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string UpdatePolicyRequest::GetName() const
{
    return m_name;
}

void UpdatePolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdatePolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdatePolicyRequest::GetDescription() const
{
    return m_description;
}

void UpdatePolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdatePolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<PolicyInfo> UpdatePolicyRequest::GetPolicyInfoList() const
{
    return m_policyInfoList;
}

void UpdatePolicyRequest::SetPolicyInfoList(const vector<PolicyInfo>& _policyInfoList)
{
    m_policyInfoList = _policyInfoList;
    m_policyInfoListHasBeenSet = true;
}

bool UpdatePolicyRequest::PolicyInfoListHasBeenSet() const
{
    return m_policyInfoListHasBeenSet;
}

vector<string> UpdatePolicyRequest::GetBindUserIds() const
{
    return m_bindUserIds;
}

void UpdatePolicyRequest::SetBindUserIds(const vector<string>& _bindUserIds)
{
    m_bindUserIds = _bindUserIds;
    m_bindUserIdsHasBeenSet = true;
}

bool UpdatePolicyRequest::BindUserIdsHasBeenSet() const
{
    return m_bindUserIdsHasBeenSet;
}

vector<string> UpdatePolicyRequest::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void UpdatePolicyRequest::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool UpdatePolicyRequest::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}


