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

#include <tencentcloud/ig/v20210518/model/ReportFileInfoReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

ReportFileInfoReq::ReportFileInfoReq() :
    m_reportFileUrlHasBeenSet(false),
    m_reportFileTypeHasBeenSet(false),
    m_reportIdHasBeenSet(false)
{
}

CoreInternalOutcome ReportFileInfoReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportFileUrl") && !value["ReportFileUrl"].IsNull())
    {
        if (!value["ReportFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoReq.ReportFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportFileUrl = string(value["ReportFileUrl"].GetString());
        m_reportFileUrlHasBeenSet = true;
    }

    if (value.HasMember("ReportFileType") && !value["ReportFileType"].IsNull())
    {
        if (!value["ReportFileType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoReq.ReportFileType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportFileType = value["ReportFileType"].GetInt64();
        m_reportFileTypeHasBeenSet = true;
    }

    if (value.HasMember("ReportId") && !value["ReportId"].IsNull())
    {
        if (!value["ReportId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFileInfoReq.ReportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportId = string(value["ReportId"].GetString());
        m_reportIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportFileInfoReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_reportFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportFileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportFileType, allocator);
    }

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

}


string ReportFileInfoReq::GetReportFileUrl() const
{
    return m_reportFileUrl;
}

void ReportFileInfoReq::SetReportFileUrl(const string& _reportFileUrl)
{
    m_reportFileUrl = _reportFileUrl;
    m_reportFileUrlHasBeenSet = true;
}

bool ReportFileInfoReq::ReportFileUrlHasBeenSet() const
{
    return m_reportFileUrlHasBeenSet;
}

int64_t ReportFileInfoReq::GetReportFileType() const
{
    return m_reportFileType;
}

void ReportFileInfoReq::SetReportFileType(const int64_t& _reportFileType)
{
    m_reportFileType = _reportFileType;
    m_reportFileTypeHasBeenSet = true;
}

bool ReportFileInfoReq::ReportFileTypeHasBeenSet() const
{
    return m_reportFileTypeHasBeenSet;
}

string ReportFileInfoReq::GetReportId() const
{
    return m_reportId;
}

void ReportFileInfoReq::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool ReportFileInfoReq::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

