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

#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeSgSnapshotFileContentRequest::DescribeSgSnapshotFileContentRequest() :
    m_snapshotPolicyIdHasBeenSet(false),
    m_snapshotFileIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false)
{
}

string DescribeSgSnapshotFileContentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSgSnapshotFileContentRequest::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

void DescribeSgSnapshotFileContentRequest::SetSnapshotPolicyId(const string& _snapshotPolicyId)
{
    m_snapshotPolicyId = _snapshotPolicyId;
    m_snapshotPolicyIdHasBeenSet = true;
}

bool DescribeSgSnapshotFileContentRequest::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

string DescribeSgSnapshotFileContentRequest::GetSnapshotFileId() const
{
    return m_snapshotFileId;
}

void DescribeSgSnapshotFileContentRequest::SetSnapshotFileId(const string& _snapshotFileId)
{
    m_snapshotFileId = _snapshotFileId;
    m_snapshotFileIdHasBeenSet = true;
}

bool DescribeSgSnapshotFileContentRequest::SnapshotFileIdHasBeenSet() const
{
    return m_snapshotFileIdHasBeenSet;
}

string DescribeSgSnapshotFileContentRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void DescribeSgSnapshotFileContentRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool DescribeSgSnapshotFileContentRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}


