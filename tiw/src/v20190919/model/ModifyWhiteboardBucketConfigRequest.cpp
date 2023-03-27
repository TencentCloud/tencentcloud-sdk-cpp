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

#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

ModifyWhiteboardBucketConfigRequest::ModifyWhiteboardBucketConfigRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketLocationHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_resultDomainHasBeenSet(false)
{
}

string ModifyWhiteboardBucketConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWhiteboardBucketConfigRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyWhiteboardBucketConfigRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyWhiteboardBucketConfigRequest::GetTaskType() const
{
    return m_taskType;
}

void ModifyWhiteboardBucketConfigRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string ModifyWhiteboardBucketConfigRequest::GetBucketName() const
{
    return m_bucketName;
}

void ModifyWhiteboardBucketConfigRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ModifyWhiteboardBucketConfigRequest::GetBucketLocation() const
{
    return m_bucketLocation;
}

void ModifyWhiteboardBucketConfigRequest::SetBucketLocation(const string& _bucketLocation)
{
    m_bucketLocation = _bucketLocation;
    m_bucketLocationHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::BucketLocationHasBeenSet() const
{
    return m_bucketLocationHasBeenSet;
}

string ModifyWhiteboardBucketConfigRequest::GetBucketPrefix() const
{
    return m_bucketPrefix;
}

void ModifyWhiteboardBucketConfigRequest::SetBucketPrefix(const string& _bucketPrefix)
{
    m_bucketPrefix = _bucketPrefix;
    m_bucketPrefixHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::BucketPrefixHasBeenSet() const
{
    return m_bucketPrefixHasBeenSet;
}

string ModifyWhiteboardBucketConfigRequest::GetResultDomain() const
{
    return m_resultDomain;
}

void ModifyWhiteboardBucketConfigRequest::SetResultDomain(const string& _resultDomain)
{
    m_resultDomain = _resultDomain;
    m_resultDomainHasBeenSet = true;
}

bool ModifyWhiteboardBucketConfigRequest::ResultDomainHasBeenSet() const
{
    return m_resultDomainHasBeenSet;
}


