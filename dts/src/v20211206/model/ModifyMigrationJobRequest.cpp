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

#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ModifyMigrationJobRequest::ModifyMigrationJobRequest() :
    m_jobIdHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_migrateOptionHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_expectRunTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoRetryTimeRangeMinutesHasBeenSet(false)
{
}

string ModifyMigrationJobRequest::ToJsonString() const
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

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_expectRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectRunTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoRetryTimeRangeMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRetryTimeRangeMinutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRetryTimeRangeMinutes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMigrationJobRequest::GetJobId() const
{
    return m_jobId;
}

void ModifyMigrationJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifyMigrationJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ModifyMigrationJobRequest::GetRunMode() const
{
    return m_runMode;
}

void ModifyMigrationJobRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool ModifyMigrationJobRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

MigrateOption ModifyMigrationJobRequest::GetMigrateOption() const
{
    return m_migrateOption;
}

void ModifyMigrationJobRequest::SetMigrateOption(const MigrateOption& _migrateOption)
{
    m_migrateOption = _migrateOption;
    m_migrateOptionHasBeenSet = true;
}

bool ModifyMigrationJobRequest::MigrateOptionHasBeenSet() const
{
    return m_migrateOptionHasBeenSet;
}

DBEndpointInfo ModifyMigrationJobRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void ModifyMigrationJobRequest::SetSrcInfo(const DBEndpointInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool ModifyMigrationJobRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

DBEndpointInfo ModifyMigrationJobRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void ModifyMigrationJobRequest::SetDstInfo(const DBEndpointInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool ModifyMigrationJobRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string ModifyMigrationJobRequest::GetJobName() const
{
    return m_jobName;
}

void ModifyMigrationJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ModifyMigrationJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string ModifyMigrationJobRequest::GetExpectRunTime() const
{
    return m_expectRunTime;
}

void ModifyMigrationJobRequest::SetExpectRunTime(const string& _expectRunTime)
{
    m_expectRunTime = _expectRunTime;
    m_expectRunTimeHasBeenSet = true;
}

bool ModifyMigrationJobRequest::ExpectRunTimeHasBeenSet() const
{
    return m_expectRunTimeHasBeenSet;
}

vector<TagItem> ModifyMigrationJobRequest::GetTags() const
{
    return m_tags;
}

void ModifyMigrationJobRequest::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyMigrationJobRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ModifyMigrationJobRequest::GetAutoRetryTimeRangeMinutes() const
{
    return m_autoRetryTimeRangeMinutes;
}

void ModifyMigrationJobRequest::SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes)
{
    m_autoRetryTimeRangeMinutes = _autoRetryTimeRangeMinutes;
    m_autoRetryTimeRangeMinutesHasBeenSet = true;
}

bool ModifyMigrationJobRequest::AutoRetryTimeRangeMinutesHasBeenSet() const
{
    return m_autoRetryTimeRangeMinutesHasBeenSet;
}


