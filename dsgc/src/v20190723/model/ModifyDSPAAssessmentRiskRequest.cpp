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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPAAssessmentRiskRequest::ModifyDSPAAssessmentRiskRequest() :
    m_dspaIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDSPAAssessmentRiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPAAssessmentRiskRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPAAssessmentRiskRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyDSPAAssessmentRiskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskRequest::GetRiskId() const
{
    return m_riskId;
}

void ModifyDSPAAssessmentRiskRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskRequest::GetStatus() const
{
    return m_status;
}

void ModifyDSPAAssessmentRiskRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


