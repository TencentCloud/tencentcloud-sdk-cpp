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

#include <tencentcloud/monitor/v20180724/model/BindingPolicyTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

BindingPolicyTagRequest::BindingPolicyTagRequest() :
    m_moduleHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_batchTagHasBeenSet(false),
    m_ebEventFlagHasBeenSet(false),
    m_ebSubjectHasBeenSet(false),
    m_tagOperationHasBeenSet(false)
{
}

string BindingPolicyTagRequest::ToJsonString() const
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

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_batchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_batchTag.begin(); itr != m_batchTag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ebEventFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbEventFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ebEventFlag, allocator);
    }

    if (m_ebSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ebSubject.c_str(), allocator).Move(), allocator);
    }

    if (m_tagOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagOperation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagOperation.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindingPolicyTagRequest::GetModule() const
{
    return m_module;
}

void BindingPolicyTagRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool BindingPolicyTagRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string BindingPolicyTagRequest::GetPolicyId() const
{
    return m_policyId;
}

void BindingPolicyTagRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool BindingPolicyTagRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string BindingPolicyTagRequest::GetGroupId() const
{
    return m_groupId;
}

void BindingPolicyTagRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool BindingPolicyTagRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string BindingPolicyTagRequest::GetServiceType() const
{
    return m_serviceType;
}

void BindingPolicyTagRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool BindingPolicyTagRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

PolicyTag BindingPolicyTagRequest::GetTag() const
{
    return m_tag;
}

void BindingPolicyTagRequest::SetTag(const PolicyTag& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool BindingPolicyTagRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t BindingPolicyTagRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void BindingPolicyTagRequest::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool BindingPolicyTagRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

vector<PolicyTag> BindingPolicyTagRequest::GetBatchTag() const
{
    return m_batchTag;
}

void BindingPolicyTagRequest::SetBatchTag(const vector<PolicyTag>& _batchTag)
{
    m_batchTag = _batchTag;
    m_batchTagHasBeenSet = true;
}

bool BindingPolicyTagRequest::BatchTagHasBeenSet() const
{
    return m_batchTagHasBeenSet;
}

int64_t BindingPolicyTagRequest::GetEbEventFlag() const
{
    return m_ebEventFlag;
}

void BindingPolicyTagRequest::SetEbEventFlag(const int64_t& _ebEventFlag)
{
    m_ebEventFlag = _ebEventFlag;
    m_ebEventFlagHasBeenSet = true;
}

bool BindingPolicyTagRequest::EbEventFlagHasBeenSet() const
{
    return m_ebEventFlagHasBeenSet;
}

string BindingPolicyTagRequest::GetEbSubject() const
{
    return m_ebSubject;
}

void BindingPolicyTagRequest::SetEbSubject(const string& _ebSubject)
{
    m_ebSubject = _ebSubject;
    m_ebSubjectHasBeenSet = true;
}

bool BindingPolicyTagRequest::EbSubjectHasBeenSet() const
{
    return m_ebSubjectHasBeenSet;
}

string BindingPolicyTagRequest::GetTagOperation() const
{
    return m_tagOperation;
}

void BindingPolicyTagRequest::SetTagOperation(const string& _tagOperation)
{
    m_tagOperation = _tagOperation;
    m_tagOperationHasBeenSet = true;
}

bool BindingPolicyTagRequest::TagOperationHasBeenSet() const
{
    return m_tagOperationHasBeenSet;
}


