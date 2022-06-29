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

#include <tencentcloud/tcr/v20190924/model/DeleteInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DeleteInstanceRequest::DeleteInstanceRequest() :
    m_registryIdHasBeenSet(false),
    m_deleteBucketHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string DeleteInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteBucket, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteInstanceRequest::GetRegistryId() const
{
    return m_registryId;
}

void DeleteInstanceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DeleteInstanceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

bool DeleteInstanceRequest::GetDeleteBucket() const
{
    return m_deleteBucket;
}

void DeleteInstanceRequest::SetDeleteBucket(const bool& _deleteBucket)
{
    m_deleteBucket = _deleteBucket;
    m_deleteBucketHasBeenSet = true;
}

bool DeleteInstanceRequest::DeleteBucketHasBeenSet() const
{
    return m_deleteBucketHasBeenSet;
}

bool DeleteInstanceRequest::GetDryRun() const
{
    return m_dryRun;
}

void DeleteInstanceRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool DeleteInstanceRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


