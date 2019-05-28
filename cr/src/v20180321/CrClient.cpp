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

#include <tencentcloud/cr/v20180321/CrClient.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-21";
    const string ENDPOINT = "cr.tencentcloudapi.com";
}

CrClient::CrClient(const Credential &credential, const string &region) :
    CrClient(credential, region, ClientProfile())
{
}

CrClient::CrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CrClient::ApplyBlackListOutcome CrClient::ApplyBlackList(const ApplyBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyBlackListResponse rsp = ApplyBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyBlackListOutcome(rsp);
        else
            return ApplyBlackListOutcome(o.GetError());
    }
    else
    {
        return ApplyBlackListOutcome(outcome.GetError());
    }
}

CrClient::ApplyCreditAuditOutcome CrClient::ApplyCreditAudit(const ApplyCreditAuditRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyCreditAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyCreditAuditResponse rsp = ApplyCreditAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyCreditAuditOutcome(rsp);
        else
            return ApplyCreditAuditOutcome(o.GetError());
    }
    else
    {
        return ApplyCreditAuditOutcome(outcome.GetError());
    }
}

CrClient::DescribeCreditResultOutcome CrClient::DescribeCreditResult(const DescribeCreditResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreditResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreditResultResponse rsp = DescribeCreditResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreditResultOutcome(rsp);
        else
            return DescribeCreditResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCreditResultOutcome(outcome.GetError());
    }
}

CrClient::DescribeRecordsOutcome CrClient::DescribeRecords(const DescribeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordsResponse rsp = DescribeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordsOutcome(rsp);
        else
            return DescribeRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordsOutcome(outcome.GetError());
    }
}

CrClient::DescribeTaskStatusOutcome CrClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

CrClient::DownloadReportOutcome CrClient::DownloadReport(const DownloadReportRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadReportResponse rsp = DownloadReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadReportOutcome(rsp);
        else
            return DownloadReportOutcome(o.GetError());
    }
    else
    {
        return DownloadReportOutcome(outcome.GetError());
    }
}

CrClient::UploadDataFileOutcome CrClient::UploadDataFile(const UploadDataFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadDataFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadDataFileResponse rsp = UploadDataFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadDataFileOutcome(rsp);
        else
            return UploadDataFileOutcome(o.GetError());
    }
    else
    {
        return UploadDataFileOutcome(outcome.GetError());
    }
}

CrClient::UploadFileOutcome CrClient::UploadFile(const UploadFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFileResponse rsp = UploadFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFileOutcome(rsp);
        else
            return UploadFileOutcome(o.GetError());
    }
    else
    {
        return UploadFileOutcome(outcome.GetError());
    }
}

