/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/CreateCosObjectScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateCosObjectScanTaskRequest::CreateCosObjectScanTaskRequest() :
    m_taskTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_bucketSetHasBeenSet(false),
    m_taskArgsHasBeenSet(false),
    m_isScanAllHasBeenSet(false),
    m_deleteBucketSetHasBeenSet(false)
{
}

string CreateCosObjectScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bucketSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bucketSet.begin(); itr != m_bucketSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_isScanAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScanAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isScanAll, allocator);
    }

    if (m_deleteBucketSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteBucketSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteBucketSet.begin(); itr != m_deleteBucketSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCosObjectScanTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateCosObjectScanTaskRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CreateCosObjectScanTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateCosObjectScanTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> CreateCosObjectScanTaskRequest::GetBucketSet() const
{
    return m_bucketSet;
}

void CreateCosObjectScanTaskRequest::SetBucketSet(const vector<string>& _bucketSet)
{
    m_bucketSet = _bucketSet;
    m_bucketSetHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::BucketSetHasBeenSet() const
{
    return m_bucketSetHasBeenSet;
}

string CreateCosObjectScanTaskRequest::GetTaskArgs() const
{
    return m_taskArgs;
}

void CreateCosObjectScanTaskRequest::SetTaskArgs(const string& _taskArgs)
{
    m_taskArgs = _taskArgs;
    m_taskArgsHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::TaskArgsHasBeenSet() const
{
    return m_taskArgsHasBeenSet;
}

bool CreateCosObjectScanTaskRequest::GetIsScanAll() const
{
    return m_isScanAll;
}

void CreateCosObjectScanTaskRequest::SetIsScanAll(const bool& _isScanAll)
{
    m_isScanAll = _isScanAll;
    m_isScanAllHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::IsScanAllHasBeenSet() const
{
    return m_isScanAllHasBeenSet;
}

vector<string> CreateCosObjectScanTaskRequest::GetDeleteBucketSet() const
{
    return m_deleteBucketSet;
}

void CreateCosObjectScanTaskRequest::SetDeleteBucketSet(const vector<string>& _deleteBucketSet)
{
    m_deleteBucketSet = _deleteBucketSet;
    m_deleteBucketSetHasBeenSet = true;
}

bool CreateCosObjectScanTaskRequest::DeleteBucketSetHasBeenSet() const
{
    return m_deleteBucketSetHasBeenSet;
}


