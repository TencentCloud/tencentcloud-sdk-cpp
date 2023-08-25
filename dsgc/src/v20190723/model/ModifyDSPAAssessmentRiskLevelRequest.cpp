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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLevelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPAAssessmentRiskLevelRequest::ModifyDSPAAssessmentRiskLevelRequest() :
    m_dspaIdHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_riskLevelDescriptionHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_modifyRiskItemHasBeenSet(false)
{
}

string ModifyDSPAAssessmentRiskLevelRequest::ToJsonString() const
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

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevelDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskId, allocator);
    }

    if (m_modifyRiskItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyRiskItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyRiskItem.begin(); itr != m_modifyRiskItem.end(); ++itr, ++i)
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


string ModifyDSPAAssessmentRiskLevelRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPAAssessmentRiskLevelRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLevelRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string ModifyDSPAAssessmentRiskLevelRequest::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void ModifyDSPAAssessmentRiskLevelRequest::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLevelRequest::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

string ModifyDSPAAssessmentRiskLevelRequest::GetRiskLevelDescription() const
{
    return m_riskLevelDescription;
}

void ModifyDSPAAssessmentRiskLevelRequest::SetRiskLevelDescription(const string& _riskLevelDescription)
{
    m_riskLevelDescription = _riskLevelDescription;
    m_riskLevelDescriptionHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLevelRequest::RiskLevelDescriptionHasBeenSet() const
{
    return m_riskLevelDescriptionHasBeenSet;
}

int64_t ModifyDSPAAssessmentRiskLevelRequest::GetRiskId() const
{
    return m_riskId;
}

void ModifyDSPAAssessmentRiskLevelRequest::SetRiskId(const int64_t& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLevelRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

vector<RiskLevelMatrix> ModifyDSPAAssessmentRiskLevelRequest::GetModifyRiskItem() const
{
    return m_modifyRiskItem;
}

void ModifyDSPAAssessmentRiskLevelRequest::SetModifyRiskItem(const vector<RiskLevelMatrix>& _modifyRiskItem)
{
    m_modifyRiskItem = _modifyRiskItem;
    m_modifyRiskItemHasBeenSet = true;
}

bool ModifyDSPAAssessmentRiskLevelRequest::ModifyRiskItemHasBeenSet() const
{
    return m_modifyRiskItemHasBeenSet;
}


