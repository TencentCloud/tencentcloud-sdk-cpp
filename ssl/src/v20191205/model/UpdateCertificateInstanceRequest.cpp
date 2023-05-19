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

#include <tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UpdateCertificateInstanceRequest::UpdateCertificateInstanceRequest() :
    m_certificateIdHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_resourceTypesRegionsHasBeenSet(false)
{
}

string UpdateCertificateInstanceRequest::ToJsonString() const
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

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTypesRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypesRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTypesRegions.begin(); itr != m_resourceTypesRegions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCertificateInstanceRequest::GetCertificateId() const
{
    return m_certificateId;
}

void UpdateCertificateInstanceRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool UpdateCertificateInstanceRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string UpdateCertificateInstanceRequest::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void UpdateCertificateInstanceRequest::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool UpdateCertificateInstanceRequest::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

vector<string> UpdateCertificateInstanceRequest::GetResourceTypes() const
{
    return m_resourceTypes;
}

void UpdateCertificateInstanceRequest::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool UpdateCertificateInstanceRequest::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

vector<string> UpdateCertificateInstanceRequest::GetRegions() const
{
    return m_regions;
}

void UpdateCertificateInstanceRequest::SetRegions(const vector<string>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool UpdateCertificateInstanceRequest::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

vector<ResourceTypeRegions> UpdateCertificateInstanceRequest::GetResourceTypesRegions() const
{
    return m_resourceTypesRegions;
}

void UpdateCertificateInstanceRequest::SetResourceTypesRegions(const vector<ResourceTypeRegions>& _resourceTypesRegions)
{
    m_resourceTypesRegions = _resourceTypesRegions;
    m_resourceTypesRegionsHasBeenSet = true;
}

bool UpdateCertificateInstanceRequest::ResourceTypesRegionsHasBeenSet() const
{
    return m_resourceTypesRegionsHasBeenSet;
}


