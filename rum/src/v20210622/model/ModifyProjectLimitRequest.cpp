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

#include <tencentcloud/rum/v20210622/model/ModifyProjectLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyProjectLimitRequest::ModifyProjectLimitRequest() :
    m_projectIDHasBeenSet(false),
    m_projectInterfaceHasBeenSet(false),
    m_reportRateHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string ModifyProjectLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectID, allocator);
    }

    if (m_projectInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInterface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectInterface.c_str(), allocator).Move(), allocator);
    }

    if (m_reportRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportRate, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyProjectLimitRequest::GetProjectID() const
{
    return m_projectID;
}

void ModifyProjectLimitRequest::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool ModifyProjectLimitRequest::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string ModifyProjectLimitRequest::GetProjectInterface() const
{
    return m_projectInterface;
}

void ModifyProjectLimitRequest::SetProjectInterface(const string& _projectInterface)
{
    m_projectInterface = _projectInterface;
    m_projectInterfaceHasBeenSet = true;
}

bool ModifyProjectLimitRequest::ProjectInterfaceHasBeenSet() const
{
    return m_projectInterfaceHasBeenSet;
}

int64_t ModifyProjectLimitRequest::GetReportRate() const
{
    return m_reportRate;
}

void ModifyProjectLimitRequest::SetReportRate(const int64_t& _reportRate)
{
    m_reportRate = _reportRate;
    m_reportRateHasBeenSet = true;
}

bool ModifyProjectLimitRequest::ReportRateHasBeenSet() const
{
    return m_reportRateHasBeenSet;
}

int64_t ModifyProjectLimitRequest::GetReportType() const
{
    return m_reportType;
}

void ModifyProjectLimitRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ModifyProjectLimitRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t ModifyProjectLimitRequest::GetID() const
{
    return m_iD;
}

void ModifyProjectLimitRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyProjectLimitRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


