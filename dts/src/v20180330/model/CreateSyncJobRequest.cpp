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

#include <tencentcloud/dts/v20180330/model/CreateSyncJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

CreateSyncJobRequest::CreateSyncJobRequest() :
    m_jobNameHasBeenSet(false),
    m_syncOptionHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_databaseInfoHasBeenSet(false)
{
}

string CreateSyncJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_srcDatabaseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
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


string CreateSyncJobRequest::GetJobName() const
{
    return m_jobName;
}

void CreateSyncJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CreateSyncJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

SyncOption CreateSyncJobRequest::GetSyncOption() const
{
    return m_syncOption;
}

void CreateSyncJobRequest::SetSyncOption(const SyncOption& _syncOption)
{
    m_syncOption = _syncOption;
    m_syncOptionHasBeenSet = true;
}

bool CreateSyncJobRequest::SyncOptionHasBeenSet() const
{
    return m_syncOptionHasBeenSet;
}

string CreateSyncJobRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void CreateSyncJobRequest::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string CreateSyncJobRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void CreateSyncJobRequest::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

SyncInstanceInfo CreateSyncJobRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void CreateSyncJobRequest::SetSrcInfo(const SyncInstanceInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool CreateSyncJobRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string CreateSyncJobRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void CreateSyncJobRequest::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string CreateSyncJobRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void CreateSyncJobRequest::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool CreateSyncJobRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

SyncInstanceInfo CreateSyncJobRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void CreateSyncJobRequest::SetDstInfo(const SyncInstanceInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool CreateSyncJobRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string CreateSyncJobRequest::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void CreateSyncJobRequest::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool CreateSyncJobRequest::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}


