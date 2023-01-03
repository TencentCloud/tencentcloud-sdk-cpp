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

#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UnBindingAllPolicyObjectRequest::UnBindingAllPolicyObjectRequest() :
    m_moduleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ebSubjectHasBeenSet(false),
    m_ebEventFlagHasBeenSet(false)
{
}

string UnBindingAllPolicyObjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ebSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ebSubject.c_str(), allocator).Move(), allocator);
    }

    if (m_ebEventFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbEventFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ebEventFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindingAllPolicyObjectRequest::GetModule() const
{
    return m_module;
}

void UnBindingAllPolicyObjectRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool UnBindingAllPolicyObjectRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t UnBindingAllPolicyObjectRequest::GetGroupId() const
{
    return m_groupId;
}

void UnBindingAllPolicyObjectRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UnBindingAllPolicyObjectRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UnBindingAllPolicyObjectRequest::GetPolicyId() const
{
    return m_policyId;
}

void UnBindingAllPolicyObjectRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool UnBindingAllPolicyObjectRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string UnBindingAllPolicyObjectRequest::GetEbSubject() const
{
    return m_ebSubject;
}

void UnBindingAllPolicyObjectRequest::SetEbSubject(const string& _ebSubject)
{
    m_ebSubject = _ebSubject;
    m_ebSubjectHasBeenSet = true;
}

bool UnBindingAllPolicyObjectRequest::EbSubjectHasBeenSet() const
{
    return m_ebSubjectHasBeenSet;
}

int64_t UnBindingAllPolicyObjectRequest::GetEbEventFlag() const
{
    return m_ebEventFlag;
}

void UnBindingAllPolicyObjectRequest::SetEbEventFlag(const int64_t& _ebEventFlag)
{
    m_ebEventFlag = _ebEventFlag;
    m_ebEventFlagHasBeenSet = true;
}

bool UnBindingAllPolicyObjectRequest::EbEventFlagHasBeenSet() const
{
    return m_ebEventFlagHasBeenSet;
}


