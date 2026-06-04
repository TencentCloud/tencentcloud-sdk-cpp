/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/SkillAnalysisInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillAnalysisInfo::SkillAnalysisInfo() :
    m_analysisStatusHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_securityReportUrlHasBeenSet(false)
{
}

CoreInternalOutcome SkillAnalysisInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnalysisStatus") && !value["AnalysisStatus"].IsNull())
    {
        if (!value["AnalysisStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillAnalysisInfo.AnalysisStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_analysisStatus = value["AnalysisStatus"].GetInt64();
        m_analysisStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskDescription") && !value["RiskDescription"].IsNull())
    {
        if (!value["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillAnalysisInfo.RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(value["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillAnalysisInfo.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("SecurityReportUrl") && !value["SecurityReportUrl"].IsNull())
    {
        if (!value["SecurityReportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillAnalysisInfo.SecurityReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityReportUrl = string(value["SecurityReportUrl"].GetString());
        m_securityReportUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillAnalysisInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_analysisStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysisStatus, allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_securityReportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityReportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityReportUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t SkillAnalysisInfo::GetAnalysisStatus() const
{
    return m_analysisStatus;
}

void SkillAnalysisInfo::SetAnalysisStatus(const int64_t& _analysisStatus)
{
    m_analysisStatus = _analysisStatus;
    m_analysisStatusHasBeenSet = true;
}

bool SkillAnalysisInfo::AnalysisStatusHasBeenSet() const
{
    return m_analysisStatusHasBeenSet;
}

string SkillAnalysisInfo::GetRiskDescription() const
{
    return m_riskDescription;
}

void SkillAnalysisInfo::SetRiskDescription(const string& _riskDescription)
{
    m_riskDescription = _riskDescription;
    m_riskDescriptionHasBeenSet = true;
}

bool SkillAnalysisInfo::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

int64_t SkillAnalysisInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void SkillAnalysisInfo::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SkillAnalysisInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string SkillAnalysisInfo::GetSecurityReportUrl() const
{
    return m_securityReportUrl;
}

void SkillAnalysisInfo::SetSecurityReportUrl(const string& _securityReportUrl)
{
    m_securityReportUrl = _securityReportUrl;
    m_securityReportUrlHasBeenSet = true;
}

bool SkillAnalysisInfo::SecurityReportUrlHasBeenSet() const
{
    return m_securityReportUrlHasBeenSet;
}

