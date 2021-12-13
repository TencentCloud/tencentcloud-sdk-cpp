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

#include <tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

CreateAutoClassifyStructureTaskRequest::CreateAutoClassifyStructureTaskRequest() :
    m_serviceTypeHasBeenSet(false),
    m_taskInfosHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_insuranceTypesHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

string CreateAutoClassifyStructureTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfos.begin(); itr != m_taskInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_insuranceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsuranceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_insuranceTypes.begin(); itr != m_insuranceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAutoClassifyStructureTaskRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateAutoClassifyStructureTaskRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<CreateAutoClassifyStructureTaskInfo> CreateAutoClassifyStructureTaskRequest::GetTaskInfos() const
{
    return m_taskInfos;
}

void CreateAutoClassifyStructureTaskRequest::SetTaskInfos(const vector<CreateAutoClassifyStructureTaskInfo>& _taskInfos)
{
    m_taskInfos = _taskInfos;
    m_taskInfosHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::TaskInfosHasBeenSet() const
{
    return m_taskInfosHasBeenSet;
}

string CreateAutoClassifyStructureTaskRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreateAutoClassifyStructureTaskRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreateAutoClassifyStructureTaskRequest::GetTriggerType() const
{
    return m_triggerType;
}

void CreateAutoClassifyStructureTaskRequest::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

vector<string> CreateAutoClassifyStructureTaskRequest::GetInsuranceTypes() const
{
    return m_insuranceTypes;
}

void CreateAutoClassifyStructureTaskRequest::SetInsuranceTypes(const vector<string>& _insuranceTypes)
{
    m_insuranceTypes = _insuranceTypes;
    m_insuranceTypesHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::InsuranceTypesHasBeenSet() const
{
    return m_insuranceTypesHasBeenSet;
}

string CreateAutoClassifyStructureTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateAutoClassifyStructureTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}


