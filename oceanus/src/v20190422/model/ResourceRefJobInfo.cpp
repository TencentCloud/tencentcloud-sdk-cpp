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

#include <tencentcloud/oceanus/v20190422/model/ResourceRefJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ResourceRefJobInfo::ResourceRefJobInfo() :
    m_jobIdHasBeenSet(false),
    m_jobConfigVersionHasBeenSet(false),
    m_resourceVersionHasBeenSet(false)
{
}

CoreInternalOutcome ResourceRefJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobConfigVersion") && !value["JobConfigVersion"].IsNull())
    {
        if (!value["JobConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefJobInfo.JobConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfigVersion = value["JobConfigVersion"].GetInt64();
        m_jobConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("ResourceVersion") && !value["ResourceVersion"].IsNull())
    {
        if (!value["ResourceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefJobInfo.ResourceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVersion = value["ResourceVersion"].GetInt64();
        m_resourceVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceRefJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobConfigVersion, allocator);
    }

    if (m_resourceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceVersion, allocator);
    }

}


string ResourceRefJobInfo::GetJobId() const
{
    return m_jobId;
}

void ResourceRefJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ResourceRefJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t ResourceRefJobInfo::GetJobConfigVersion() const
{
    return m_jobConfigVersion;
}

void ResourceRefJobInfo::SetJobConfigVersion(const int64_t& _jobConfigVersion)
{
    m_jobConfigVersion = _jobConfigVersion;
    m_jobConfigVersionHasBeenSet = true;
}

bool ResourceRefJobInfo::JobConfigVersionHasBeenSet() const
{
    return m_jobConfigVersionHasBeenSet;
}

int64_t ResourceRefJobInfo::GetResourceVersion() const
{
    return m_resourceVersion;
}

void ResourceRefJobInfo::SetResourceVersion(const int64_t& _resourceVersion)
{
    m_resourceVersion = _resourceVersion;
    m_resourceVersionHasBeenSet = true;
}

bool ResourceRefJobInfo::ResourceVersionHasBeenSet() const
{
    return m_resourceVersionHasBeenSet;
}

