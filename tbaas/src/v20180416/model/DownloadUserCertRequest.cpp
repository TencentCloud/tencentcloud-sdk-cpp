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

#include <tencentcloud/tbaas/v20180416/model/DownloadUserCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DownloadUserCertRequest::DownloadUserCertRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certDnHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

string DownloadUserCertRequest::ToJsonString() const
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

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certId, allocator);
    }

    if (m_certDnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertDn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certDn.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DownloadUserCertRequest::GetModule() const
{
    return m_module;
}

void DownloadUserCertRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DownloadUserCertRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DownloadUserCertRequest::GetOperation() const
{
    return m_operation;
}

void DownloadUserCertRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DownloadUserCertRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t DownloadUserCertRequest::GetCertId() const
{
    return m_certId;
}

void DownloadUserCertRequest::SetCertId(const uint64_t& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DownloadUserCertRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DownloadUserCertRequest::GetCertDn() const
{
    return m_certDn;
}

void DownloadUserCertRequest::SetCertDn(const string& _certDn)
{
    m_certDn = _certDn;
    m_certDnHasBeenSet = true;
}

bool DownloadUserCertRequest::CertDnHasBeenSet() const
{
    return m_certDnHasBeenSet;
}

string DownloadUserCertRequest::GetClusterId() const
{
    return m_clusterId;
}

void DownloadUserCertRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DownloadUserCertRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DownloadUserCertRequest::GetGroupName() const
{
    return m_groupName;
}

void DownloadUserCertRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DownloadUserCertRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}


