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

#include <tencentcloud/rum/v20210622/model/ProjectLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ProjectLimit::ProjectLimit() :
    m_projectInterfaceHasBeenSet(false),
    m_reportRateHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_projectIDHasBeenSet(false)
{
}

CoreInternalOutcome ProjectLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectInterface") && !value["ProjectInterface"].IsNull())
    {
        if (!value["ProjectInterface"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectLimit.ProjectInterface` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectInterface = string(value["ProjectInterface"].GetString());
        m_projectInterfaceHasBeenSet = true;
    }

    if (value.HasMember("ReportRate") && !value["ReportRate"].IsNull())
    {
        if (!value["ReportRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectLimit.ReportRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportRate = value["ReportRate"].GetInt64();
        m_reportRateHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectLimit.ReportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = value["ReportType"].GetInt64();
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectLimit.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectLimit.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInterface";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectInterface.c_str(), allocator).Move(), allocator);
    }

    if (m_reportRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportRate, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportType, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

}


string ProjectLimit::GetProjectInterface() const
{
    return m_projectInterface;
}

void ProjectLimit::SetProjectInterface(const string& _projectInterface)
{
    m_projectInterface = _projectInterface;
    m_projectInterfaceHasBeenSet = true;
}

bool ProjectLimit::ProjectInterfaceHasBeenSet() const
{
    return m_projectInterfaceHasBeenSet;
}

int64_t ProjectLimit::GetReportRate() const
{
    return m_reportRate;
}

void ProjectLimit::SetReportRate(const int64_t& _reportRate)
{
    m_reportRate = _reportRate;
    m_reportRateHasBeenSet = true;
}

bool ProjectLimit::ReportRateHasBeenSet() const
{
    return m_reportRateHasBeenSet;
}

int64_t ProjectLimit::GetReportType() const
{
    return m_reportType;
}

void ProjectLimit::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ProjectLimit::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t ProjectLimit::GetID() const
{
    return m_iD;
}

void ProjectLimit::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ProjectLimit::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t ProjectLimit::GetProjectID() const
{
    return m_projectID;
}

void ProjectLimit::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool ProjectLimit::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

