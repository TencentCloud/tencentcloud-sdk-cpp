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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskProcessHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskProcessHistoryRequest::DescribeDSPAAssessmentRiskProcessHistoryRequest() :
    m_dspaIdHasBeenSet(false),
    m_riskIdHasBeenSet(false)
{
}

string DescribeDSPAAssessmentRiskProcessHistoryRequest::ToJsonString() const
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

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAAssessmentRiskProcessHistoryRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAAssessmentRiskProcessHistoryRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskProcessHistoryRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskProcessHistoryRequest::GetRiskId() const
{
    return m_riskId;
}

void DescribeDSPAAssessmentRiskProcessHistoryRequest::SetRiskId(const int64_t& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskProcessHistoryRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}


