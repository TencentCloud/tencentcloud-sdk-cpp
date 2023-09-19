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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentLatestRiskListRequest::DescribeDSPAAssessmentLatestRiskListRequest() :
    m_dspaIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_controlItemIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskSideHasBeenSet(false),
    m_timeSortHasBeenSet(false)
{
}

string DescribeDSPAAssessmentLatestRiskListRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_controlItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskSide.begin(); itr != m_riskSide.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeSort.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAAssessmentLatestRiskListRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskListRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetRiskType() const
{
    return m_riskType;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetControlItemId() const
{
    return m_controlItemId;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetControlItemId(const string& _controlItemId)
{
    m_controlItemId = _controlItemId;
    m_controlItemIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::ControlItemIdHasBeenSet() const
{
    return m_controlItemIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskListRequest::GetStatus() const
{
    return m_status;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<string> DescribeDSPAAssessmentLatestRiskListRequest::GetRiskSide() const
{
    return m_riskSide;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetRiskSide(const vector<string>& _riskSide)
{
    m_riskSide = _riskSide;
    m_riskSideHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::RiskSideHasBeenSet() const
{
    return m_riskSideHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskListRequest::GetTimeSort() const
{
    return m_timeSort;
}

void DescribeDSPAAssessmentLatestRiskListRequest::SetTimeSort(const string& _timeSort)
{
    m_timeSort = _timeSort;
    m_timeSortHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskListRequest::TimeSortHasBeenSet() const
{
    return m_timeSortHasBeenSet;
}


