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

#include <tencentcloud/weilingwith/v20230427/model/ReportMsgRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ReportMsgRes::ReportMsgRes() :
    m_reportIdHasBeenSet(false),
    m_reportStatusHasBeenSet(false)
{
}

CoreInternalOutcome ReportMsgRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportId") && !value["ReportId"].IsNull())
    {
        if (!value["ReportId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMsgRes.ReportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportId = string(value["ReportId"].GetString());
        m_reportIdHasBeenSet = true;
    }

    if (value.HasMember("ReportStatus") && !value["ReportStatus"].IsNull())
    {
        if (!value["ReportStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportMsgRes.ReportStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportStatus = value["ReportStatus"].GetInt64();
        m_reportStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportMsgRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_reportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportStatus, allocator);
    }

}


string ReportMsgRes::GetReportId() const
{
    return m_reportId;
}

void ReportMsgRes::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool ReportMsgRes::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

int64_t ReportMsgRes::GetReportStatus() const
{
    return m_reportStatus;
}

void ReportMsgRes::SetReportStatus(const int64_t& _reportStatus)
{
    m_reportStatus = _reportStatus;
    m_reportStatusHasBeenSet = true;
}

bool ReportMsgRes::ReportStatusHasBeenSet() const
{
    return m_reportStatusHasBeenSet;
}

