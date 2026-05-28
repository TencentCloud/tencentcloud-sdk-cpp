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

#include <tencentcloud/ig/v20210518/model/ReportFileInfoRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

ReportFileInfoRsp::ReportFileInfoRsp() :
    m_reportIdHasBeenSet(false),
    m_isAnalysisHasBeenSet(false),
    m_errInfoHasBeenSet(false)
{
}

CoreInternalOutcome ReportFileInfoRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportId") && !value["ReportId"].IsNull())
    {
        if (!value["ReportId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoRsp.ReportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportId = string(value["ReportId"].GetString());
        m_reportIdHasBeenSet = true;
    }

    if (value.HasMember("IsAnalysis") && !value["IsAnalysis"].IsNull())
    {
        if (!value["IsAnalysis"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoRsp.IsAnalysis` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAnalysis = value["IsAnalysis"].GetBool();
        m_isAnalysisHasBeenSet = true;
    }

    if (value.HasMember("ErrInfo") && !value["ErrInfo"].IsNull())
    {
        if (!value["ErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoRsp.ErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errInfo = string(value["ErrInfo"].GetString());
        m_errInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportFileInfoRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAnalysis, allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errInfo.c_str(), allocator).Move(), allocator);
    }

}


string ReportFileInfoRsp::GetReportId() const
{
    return m_reportId;
}

void ReportFileInfoRsp::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool ReportFileInfoRsp::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

bool ReportFileInfoRsp::GetIsAnalysis() const
{
    return m_isAnalysis;
}

void ReportFileInfoRsp::SetIsAnalysis(const bool& _isAnalysis)
{
    m_isAnalysis = _isAnalysis;
    m_isAnalysisHasBeenSet = true;
}

bool ReportFileInfoRsp::IsAnalysisHasBeenSet() const
{
    return m_isAnalysisHasBeenSet;
}

string ReportFileInfoRsp::GetErrInfo() const
{
    return m_errInfo;
}

void ReportFileInfoRsp::SetErrInfo(const string& _errInfo)
{
    m_errInfo = _errInfo;
    m_errInfoHasBeenSet = true;
}

bool ReportFileInfoRsp::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}

