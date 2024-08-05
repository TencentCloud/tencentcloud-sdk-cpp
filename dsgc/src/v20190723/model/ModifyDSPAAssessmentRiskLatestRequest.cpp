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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLatestRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPAAssessmentRiskLatestRequest::ModifyDSPAAssessmentRiskLatestRequest() :
    m_dspaIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskLatestTableIdHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_processPeopleHasBeenSet(false),
    m_bathRiskIdListHasBeenSet(false)
{
}

string ModifyDSPAAssessmentRiskLatestRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLatestTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLatestTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskLatestTableId, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_processPeopleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPeople";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processPeople.c_str(), allocator).Move(), allocator);
    }

    if (m_bathRiskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BathRiskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bathRiskIdList.begin(); itr != m_bathRiskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPAAssessmentRiskLatestRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskLatestRequest::GetStatus() const
{
    return m_status;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyDSPAAssessmentRiskLatestRequest::GetRiskLatestTableId() const
{
    return m_riskLatestTableId;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetRiskLatestTableId(const uint64_t& _riskLatestTableId)
{
    m_riskLatestTableId = _riskLatestTableId;
    m_riskLatestTableIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::RiskLatestTableIdHasBeenSet() const
{
    return m_riskLatestTableIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskLatestRequest::GetNote() const
{
    return m_note;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string ModifyDSPAAssessmentRiskLatestRequest::GetProcessPeople() const
{
    return m_processPeople;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetProcessPeople(const string& _processPeople)
{
    m_processPeople = _processPeople;
    m_processPeopleHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::ProcessPeopleHasBeenSet() const
{
    return m_processPeopleHasBeenSet;
}

vector<int64_t> ModifyDSPAAssessmentRiskLatestRequest::GetBathRiskIdList() const
{
    return m_bathRiskIdList;
}

void ModifyDSPAAssessmentRiskLatestRequest::SetBathRiskIdList(const vector<int64_t>& _bathRiskIdList)
{
    m_bathRiskIdList = _bathRiskIdList;
    m_bathRiskIdListHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLatestRequest::BathRiskIdListHasBeenSet() const
{
    return m_bathRiskIdListHasBeenSet;
}


