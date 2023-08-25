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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskTemplateDetailResponse::DescribeDSPAAssessmentRiskTemplateDetailResponse() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_riskLevelIdHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_riskItemListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_taskCitationsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskTemplateDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = rsp["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateDescription") && !rsp["TemplateDescription"].IsNull())
    {
        if (!rsp["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(rsp["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelId") && !rsp["RiskLevelId"].IsNull())
    {
        if (!rsp["RiskLevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelId = rsp["RiskLevelId"].GetInt64();
        m_riskLevelIdHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelName") && !rsp["RiskLevelName"].IsNull())
    {
        if (!rsp["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(rsp["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskItemList") && !rsp["RiskItemList"].IsNull())
    {
        if (!rsp["RiskItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskItemList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssessmentRiskItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskItemList.push_back(item);
        }
        m_riskItemListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("TaskCitations") && !rsp["TaskCitations"].IsNull())
    {
        if (!rsp["TaskCitations"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCitations` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCitations = rsp["TaskCitations"].GetInt64();
        m_taskCitationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskTemplateDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevelId, allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskItemList.begin(); itr != m_riskItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_taskCitationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCitations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCitations, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDSPAAssessmentRiskTemplateDetailResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateDetailResponse::GetTemplateName() const
{
    return m_templateName;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateDetailResponse::GetTemplateDescription() const
{
    return m_templateDescription;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskTemplateDetailResponse::GetRiskLevelId() const
{
    return m_riskLevelId;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::RiskLevelIdHasBeenSet() const
{
    return m_riskLevelIdHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateDetailResponse::GetRiskLevelName() const
{
    return m_riskLevelName;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

vector<AssessmentRiskItem> DescribeDSPAAssessmentRiskTemplateDetailResponse::GetRiskItemList() const
{
    return m_riskItemList;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::RiskItemListHasBeenSet() const
{
    return m_riskItemListHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskTemplateDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskTemplateDetailResponse::GetTaskCitations() const
{
    return m_taskCitations;
}

bool DescribeDSPAAssessmentRiskTemplateDetailResponse::TaskCitationsHasBeenSet() const
{
    return m_taskCitationsHasBeenSet;
}


