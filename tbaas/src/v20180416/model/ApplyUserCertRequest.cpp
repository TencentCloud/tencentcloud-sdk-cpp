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

#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ApplyUserCertRequest::ApplyUserCertRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_applicantHasBeenSet(false),
    m_identityNumHasBeenSet(false),
    m_csrDataHasBeenSet(false),
    m_notesHasBeenSet(false)
{
}

string ApplyUserCertRequest::ToJsonString() const
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

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdentity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_applicantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Applicant";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicant.c_str(), allocator).Move(), allocator);
    }

    if (m_identityNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityNum.c_str(), allocator).Move(), allocator);
    }

    if (m_csrDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrData.c_str(), allocator).Move(), allocator);
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyUserCertRequest::GetModule() const
{
    return m_module;
}

void ApplyUserCertRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ApplyUserCertRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ApplyUserCertRequest::GetOperation() const
{
    return m_operation;
}

void ApplyUserCertRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ApplyUserCertRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string ApplyUserCertRequest::GetClusterId() const
{
    return m_clusterId;
}

void ApplyUserCertRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ApplyUserCertRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ApplyUserCertRequest::GetGroupName() const
{
    return m_groupName;
}

void ApplyUserCertRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ApplyUserCertRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ApplyUserCertRequest::GetUserIdentity() const
{
    return m_userIdentity;
}

void ApplyUserCertRequest::SetUserIdentity(const string& _userIdentity)
{
    m_userIdentity = _userIdentity;
    m_userIdentityHasBeenSet = true;
}

bool ApplyUserCertRequest::UserIdentityHasBeenSet() const
{
    return m_userIdentityHasBeenSet;
}

string ApplyUserCertRequest::GetApplicant() const
{
    return m_applicant;
}

void ApplyUserCertRequest::SetApplicant(const string& _applicant)
{
    m_applicant = _applicant;
    m_applicantHasBeenSet = true;
}

bool ApplyUserCertRequest::ApplicantHasBeenSet() const
{
    return m_applicantHasBeenSet;
}

string ApplyUserCertRequest::GetIdentityNum() const
{
    return m_identityNum;
}

void ApplyUserCertRequest::SetIdentityNum(const string& _identityNum)
{
    m_identityNum = _identityNum;
    m_identityNumHasBeenSet = true;
}

bool ApplyUserCertRequest::IdentityNumHasBeenSet() const
{
    return m_identityNumHasBeenSet;
}

string ApplyUserCertRequest::GetCsrData() const
{
    return m_csrData;
}

void ApplyUserCertRequest::SetCsrData(const string& _csrData)
{
    m_csrData = _csrData;
    m_csrDataHasBeenSet = true;
}

bool ApplyUserCertRequest::CsrDataHasBeenSet() const
{
    return m_csrDataHasBeenSet;
}

string ApplyUserCertRequest::GetNotes() const
{
    return m_notes;
}

void ApplyUserCertRequest::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool ApplyUserCertRequest::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}


