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

#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

BindingPolicyObjectRequest::BindingPolicyObjectRequest() :
    m_moduleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_ebSubjectHasBeenSet(false),
    m_ebEventFlagHasBeenSet(false)
{
}

string BindingPolicyObjectRequest::ToJsonString() const
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

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string BindingPolicyObjectRequest::GetModule() const
{
    return m_module;
}

void BindingPolicyObjectRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool BindingPolicyObjectRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t BindingPolicyObjectRequest::GetGroupId() const
{
    return m_groupId;
}

void BindingPolicyObjectRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool BindingPolicyObjectRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string BindingPolicyObjectRequest::GetPolicyId() const
{
    return m_policyId;
}

void BindingPolicyObjectRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool BindingPolicyObjectRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t BindingPolicyObjectRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void BindingPolicyObjectRequest::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool BindingPolicyObjectRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

vector<BindingPolicyObjectDimension> BindingPolicyObjectRequest::GetDimensions() const
{
    return m_dimensions;
}

void BindingPolicyObjectRequest::SetDimensions(const vector<BindingPolicyObjectDimension>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool BindingPolicyObjectRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string BindingPolicyObjectRequest::GetEbSubject() const
{
    return m_ebSubject;
}

void BindingPolicyObjectRequest::SetEbSubject(const string& _ebSubject)
{
    m_ebSubject = _ebSubject;
    m_ebSubjectHasBeenSet = true;
}

bool BindingPolicyObjectRequest::EbSubjectHasBeenSet() const
{
    return m_ebSubjectHasBeenSet;
}

int64_t BindingPolicyObjectRequest::GetEbEventFlag() const
{
    return m_ebEventFlag;
}

void BindingPolicyObjectRequest::SetEbEventFlag(const int64_t& _ebEventFlag)
{
    m_ebEventFlag = _ebEventFlag;
    m_ebEventFlagHasBeenSet = true;
}

bool BindingPolicyObjectRequest::EbEventFlagHasBeenSet() const
{
    return m_ebEventFlagHasBeenSet;
}


