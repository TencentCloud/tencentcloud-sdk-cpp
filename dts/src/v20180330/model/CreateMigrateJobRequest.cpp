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

#include <tencentcloud/dts/v20180330/model/CreateMigrateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

CreateMigrateJobRequest::CreateMigrateJobRequest() :
    m_jobNameHasBeenSet(false),
    m_migrateOptionHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_databaseInfoHasBeenSet(false)
{
}

string CreateMigrateJobRequest::ToJsonString() const
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

    if (m_migrateOptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_migrateOption.ToJsonObject(d[key.c_str()], allocator);
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


string CreateMigrateJobRequest::GetJobName() const
{
    return m_jobName;
}

void CreateMigrateJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CreateMigrateJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

MigrateOption CreateMigrateJobRequest::GetMigrateOption() const
{
    return m_migrateOption;
}

void CreateMigrateJobRequest::SetMigrateOption(const MigrateOption& _migrateOption)
{
    m_migrateOption = _migrateOption;
    m_migrateOptionHasBeenSet = true;
}

bool CreateMigrateJobRequest::MigrateOptionHasBeenSet() const
{
    return m_migrateOptionHasBeenSet;
}

string CreateMigrateJobRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void CreateMigrateJobRequest::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool CreateMigrateJobRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string CreateMigrateJobRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void CreateMigrateJobRequest::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool CreateMigrateJobRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

SrcInfo CreateMigrateJobRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void CreateMigrateJobRequest::SetSrcInfo(const SrcInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool CreateMigrateJobRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string CreateMigrateJobRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void CreateMigrateJobRequest::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool CreateMigrateJobRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string CreateMigrateJobRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void CreateMigrateJobRequest::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool CreateMigrateJobRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

DstInfo CreateMigrateJobRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void CreateMigrateJobRequest::SetDstInfo(const DstInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool CreateMigrateJobRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string CreateMigrateJobRequest::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void CreateMigrateJobRequest::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool CreateMigrateJobRequest::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}


