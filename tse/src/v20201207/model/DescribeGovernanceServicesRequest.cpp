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

#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeGovernanceServicesRequest::DescribeGovernanceServicesRequest() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_onlyExistHealthyInstanceHasBeenSet(false),
    m_syncToGlobalRegistryHasBeenSet(false)
{
}

string DescribeGovernanceServicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyExistHealthyInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyExistHealthyInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyExistHealthyInstance, allocator);
    }

    if (m_syncToGlobalRegistryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncToGlobalRegistry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncToGlobalRegistry.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGovernanceServicesRequest::GetName() const
{
    return m_name;
}

void DescribeGovernanceServicesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeGovernanceServicesRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<Metadata> DescribeGovernanceServicesRequest::GetMetadatas() const
{
    return m_metadatas;
}

void DescribeGovernanceServicesRequest::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

uint64_t DescribeGovernanceServicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGovernanceServicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeGovernanceServicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGovernanceServicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGovernanceServicesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetDepartment() const
{
    return m_department;
}

void DescribeGovernanceServicesRequest::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetBusiness() const
{
    return m_business;
}

void DescribeGovernanceServicesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetHost() const
{
    return m_host;
}

void DescribeGovernanceServicesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

bool DescribeGovernanceServicesRequest::GetOnlyExistHealthyInstance() const
{
    return m_onlyExistHealthyInstance;
}

void DescribeGovernanceServicesRequest::SetOnlyExistHealthyInstance(const bool& _onlyExistHealthyInstance)
{
    m_onlyExistHealthyInstance = _onlyExistHealthyInstance;
    m_onlyExistHealthyInstanceHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::OnlyExistHealthyInstanceHasBeenSet() const
{
    return m_onlyExistHealthyInstanceHasBeenSet;
}

string DescribeGovernanceServicesRequest::GetSyncToGlobalRegistry() const
{
    return m_syncToGlobalRegistry;
}

void DescribeGovernanceServicesRequest::SetSyncToGlobalRegistry(const string& _syncToGlobalRegistry)
{
    m_syncToGlobalRegistry = _syncToGlobalRegistry;
    m_syncToGlobalRegistryHasBeenSet = true;
}

bool DescribeGovernanceServicesRequest::SyncToGlobalRegistryHasBeenSet() const
{
    return m_syncToGlobalRegistryHasBeenSet;
}


