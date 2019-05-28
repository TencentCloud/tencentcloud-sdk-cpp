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

#include <tencentcloud/dts/v20180330/model/ModifySyncJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

ModifySyncJobRequest::ModifySyncJobRequest() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_syncOptionHasBeenSet(false),
    m_databaseInfoHasBeenSet(false)
{
}

string ModifySyncJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_syncOptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SyncOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_syncOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_databaseInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_databaseInfo.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySyncJobRequest::GetJobId() const
{
    return m_jobId;
}

void ModifySyncJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifySyncJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ModifySyncJobRequest::GetJobName() const
{
    return m_jobName;
}

void ModifySyncJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ModifySyncJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

SyncOption ModifySyncJobRequest::GetSyncOption() const
{
    return m_syncOption;
}

void ModifySyncJobRequest::SetSyncOption(const SyncOption& _syncOption)
{
    m_syncOption = _syncOption;
    m_syncOptionHasBeenSet = true;
}

bool ModifySyncJobRequest::SyncOptionHasBeenSet() const
{
    return m_syncOptionHasBeenSet;
}

string ModifySyncJobRequest::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void ModifySyncJobRequest::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool ModifySyncJobRequest::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}


