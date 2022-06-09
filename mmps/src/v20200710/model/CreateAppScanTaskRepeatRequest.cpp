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

#include <tencentcloud/mmps/v20200710/model/CreateAppScanTaskRepeatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

CreateAppScanTaskRepeatRequest::CreateAppScanTaskRepeatRequest() :
    m_taskTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_appPackageHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_orgTaskIDHasBeenSet(false)
{
}

string CreateAppScanTaskRepeatRequest::ToJsonString() const
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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_appPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_orgTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgTaskID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAppScanTaskRepeatRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateAppScanTaskRepeatRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t CreateAppScanTaskRepeatRequest::GetSource() const
{
    return m_source;
}

void CreateAppScanTaskRepeatRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetAppPackage() const
{
    return m_appPackage;
}

void CreateAppScanTaskRepeatRequest::SetAppPackage(const string& _appPackage)
{
    m_appPackage = _appPackage;
    m_appPackageHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::AppPackageHasBeenSet() const
{
    return m_appPackageHasBeenSet;
}

int64_t CreateAppScanTaskRepeatRequest::GetPlatform() const
{
    return m_platform;
}

void CreateAppScanTaskRepeatRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetOrgTaskID() const
{
    return m_orgTaskID;
}

void CreateAppScanTaskRepeatRequest::SetOrgTaskID(const string& _orgTaskID)
{
    m_orgTaskID = _orgTaskID;
    m_orgTaskIDHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::OrgTaskIDHasBeenSet() const
{
    return m_orgTaskIDHasBeenSet;
}


