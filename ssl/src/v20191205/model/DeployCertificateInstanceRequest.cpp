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

#include <tencentcloud/ssl/v20191205/model/DeployCertificateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeployCertificateInstanceRequest::DeployCertificateInstanceRequest() :
    m_certificateIdHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isCacheHasBeenSet(false)
{
}

string DeployCertificateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_isCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCache, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployCertificateInstanceRequest::GetCertificateId() const
{
    return m_certificateId;
}

void DeployCertificateInstanceRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DeployCertificateInstanceRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

vector<string> DeployCertificateInstanceRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void DeployCertificateInstanceRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool DeployCertificateInstanceRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string DeployCertificateInstanceRequest::GetResourceType() const
{
    return m_resourceType;
}

void DeployCertificateInstanceRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DeployCertificateInstanceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

int64_t DeployCertificateInstanceRequest::GetStatus() const
{
    return m_status;
}

void DeployCertificateInstanceRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeployCertificateInstanceRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DeployCertificateInstanceRequest::GetIsCache() const
{
    return m_isCache;
}

void DeployCertificateInstanceRequest::SetIsCache(const uint64_t& _isCache)
{
    m_isCache = _isCache;
    m_isCacheHasBeenSet = true;
}

bool DeployCertificateInstanceRequest::IsCacheHasBeenSet() const
{
    return m_isCacheHasBeenSet;
}


