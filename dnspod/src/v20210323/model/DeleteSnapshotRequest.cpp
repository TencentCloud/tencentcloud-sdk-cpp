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

#include <tencentcloud/dnspod/v20210323/model/DeleteSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DeleteSnapshotRequest::DeleteSnapshotRequest() :
    m_domainHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DeleteSnapshotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSnapshotRequest::GetDomain() const
{
    return m_domain;
}

void DeleteSnapshotRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteSnapshotRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DeleteSnapshotRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void DeleteSnapshotRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool DeleteSnapshotRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

uint64_t DeleteSnapshotRequest::GetDomainId() const
{
    return m_domainId;
}

void DeleteSnapshotRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DeleteSnapshotRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


