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

#include <tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeScanTaskReportUrlResponse::DescribeScanTaskReportUrlResponse() :
    m_resultHasBeenSet(false),
    m_reportUrlHasBeenSet(false),
    m_reportTitleHasBeenSet(false),
    m_reportResultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanTaskReportUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("ReportUrl") && !rsp["ReportUrl"].IsNull())
    {
        if (!rsp["ReportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportUrl = string(rsp["ReportUrl"].GetString());
        m_reportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ReportTitle") && !rsp["ReportTitle"].IsNull())
    {
        if (!rsp["ReportTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTitle = string(rsp["ReportTitle"].GetString());
        m_reportTitleHasBeenSet = true;
    }

    if (rsp.HasMember("ReportResult") && !rsp["ReportResult"].IsNull())
    {
        if (!rsp["ReportResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportResult = string(rsp["ReportResult"].GetString());
        m_reportResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScanTaskReportUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_reportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_reportResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportResult.c_str(), allocator).Move(), allocator);
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


int64_t DescribeScanTaskReportUrlResponse::GetResult() const
{
    return m_result;
}

bool DescribeScanTaskReportUrlResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeScanTaskReportUrlResponse::GetReportUrl() const
{
    return m_reportUrl;
}

bool DescribeScanTaskReportUrlResponse::ReportUrlHasBeenSet() const
{
    return m_reportUrlHasBeenSet;
}

string DescribeScanTaskReportUrlResponse::GetReportTitle() const
{
    return m_reportTitle;
}

bool DescribeScanTaskReportUrlResponse::ReportTitleHasBeenSet() const
{
    return m_reportTitleHasBeenSet;
}

string DescribeScanTaskReportUrlResponse::GetReportResult() const
{
    return m_reportResult;
}

bool DescribeScanTaskReportUrlResponse::ReportResultHasBeenSet() const
{
    return m_reportResultHasBeenSet;
}


