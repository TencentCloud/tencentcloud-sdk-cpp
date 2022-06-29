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

#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ModifyMigrateJobRequest::ModifyMigrateJobRequest() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_migrateOptionHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_databaseInfoHasBeenSet(false),
    m_srcNodeTypeHasBeenSet(false),
    m_srcInfoMultiHasBeenSet(false)
{
}

string ModifyMigrateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_databaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_srcNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoMultiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfoMulti";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_srcInfoMulti.begin(); itr != m_srcInfoMulti.end(); ++itr, ++i)
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


string ModifyMigrateJobRequest::GetJobId() const
{
    return m_jobId;
}

void ModifyMigrateJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifyMigrateJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ModifyMigrateJobRequest::GetJobName() const
{
    return m_jobName;
}

void ModifyMigrateJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ModifyMigrateJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

MigrateOption ModifyMigrateJobRequest::GetMigrateOption() const
{
    return m_migrateOption;
}

void ModifyMigrateJobRequest::SetMigrateOption(const MigrateOption& _migrateOption)
{
    m_migrateOption = _migrateOption;
    m_migrateOptionHasBeenSet = true;
}

bool ModifyMigrateJobRequest::MigrateOptionHasBeenSet() const
{
    return m_migrateOptionHasBeenSet;
}

string ModifyMigrateJobRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void ModifyMigrateJobRequest::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool ModifyMigrateJobRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

SrcInfo ModifyMigrateJobRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void ModifyMigrateJobRequest::SetSrcInfo(const SrcInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool ModifyMigrateJobRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string ModifyMigrateJobRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void ModifyMigrateJobRequest::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool ModifyMigrateJobRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

DstInfo ModifyMigrateJobRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void ModifyMigrateJobRequest::SetDstInfo(const DstInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool ModifyMigrateJobRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string ModifyMigrateJobRequest::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void ModifyMigrateJobRequest::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool ModifyMigrateJobRequest::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}

string ModifyMigrateJobRequest::GetSrcNodeType() const
{
    return m_srcNodeType;
}

void ModifyMigrateJobRequest::SetSrcNodeType(const string& _srcNodeType)
{
    m_srcNodeType = _srcNodeType;
    m_srcNodeTypeHasBeenSet = true;
}

bool ModifyMigrateJobRequest::SrcNodeTypeHasBeenSet() const
{
    return m_srcNodeTypeHasBeenSet;
}

vector<SrcInfo> ModifyMigrateJobRequest::GetSrcInfoMulti() const
{
    return m_srcInfoMulti;
}

void ModifyMigrateJobRequest::SetSrcInfoMulti(const vector<SrcInfo>& _srcInfoMulti)
{
    m_srcInfoMulti = _srcInfoMulti;
    m_srcInfoMultiHasBeenSet = true;
}

bool ModifyMigrateJobRequest::SrcInfoMultiHasBeenSet() const
{
    return m_srcInfoMultiHasBeenSet;
}


