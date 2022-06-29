/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateWorkGroupRequest::CreateWorkGroupRequest() :
    m_workGroupNameHasBeenSet(false),
    m_workGroupDescriptionHasBeenSet(false),
    m_policySetHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
}

string CreateWorkGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_workGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workGroupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkGroupRequest::GetWorkGroupName() const
{
    return m_workGroupName;
}

void CreateWorkGroupRequest::SetWorkGroupName(const string& _workGroupName)
{
    m_workGroupName = _workGroupName;
    m_workGroupNameHasBeenSet = true;
}

bool CreateWorkGroupRequest::WorkGroupNameHasBeenSet() const
{
    return m_workGroupNameHasBeenSet;
}

string CreateWorkGroupRequest::GetWorkGroupDescription() const
{
    return m_workGroupDescription;
}

void CreateWorkGroupRequest::SetWorkGroupDescription(const string& _workGroupDescription)
{
    m_workGroupDescription = _workGroupDescription;
    m_workGroupDescriptionHasBeenSet = true;
}

bool CreateWorkGroupRequest::WorkGroupDescriptionHasBeenSet() const
{
    return m_workGroupDescriptionHasBeenSet;
}

vector<Policy> CreateWorkGroupRequest::GetPolicySet() const
{
    return m_policySet;
}

void CreateWorkGroupRequest::SetPolicySet(const vector<Policy>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool CreateWorkGroupRequest::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}

vector<string> CreateWorkGroupRequest::GetUserIds() const
{
    return m_userIds;
}

void CreateWorkGroupRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool CreateWorkGroupRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}


