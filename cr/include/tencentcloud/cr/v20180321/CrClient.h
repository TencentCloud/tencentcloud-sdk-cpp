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

#ifndef TENCENTCLOUD_CR_V20180321_CRCLIENT_H_
#define TENCENTCLOUD_CR_V20180321_CRCLIENT_H_

#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/cr/v20180321/model/ApplyBlackListRequest.h>
#include <tencentcloud/cr/v20180321/model/ApplyBlackListResponse.h>
#include <tencentcloud/cr/v20180321/model/ApplyCreditAuditRequest.h>
#include <tencentcloud/cr/v20180321/model/ApplyCreditAuditResponse.h>
#include <tencentcloud/cr/v20180321/model/DescribeCreditResultRequest.h>
#include <tencentcloud/cr/v20180321/model/DescribeCreditResultResponse.h>
#include <tencentcloud/cr/v20180321/model/DescribeRecordsRequest.h>
#include <tencentcloud/cr/v20180321/model/DescribeRecordsResponse.h>
#include <tencentcloud/cr/v20180321/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/cr/v20180321/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/cr/v20180321/model/DownloadReportRequest.h>
#include <tencentcloud/cr/v20180321/model/DownloadReportResponse.h>
#include <tencentcloud/cr/v20180321/model/UploadDataFileRequest.h>
#include <tencentcloud/cr/v20180321/model/UploadDataFileResponse.h>
#include <tencentcloud/cr/v20180321/model/UploadFileRequest.h>
#include <tencentcloud/cr/v20180321/model/UploadFileResponse.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            class CrClient : public AbstractClient
            {
            public:
                CrClient(const Credential &credential, const std::string &region);
                CrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ApplyBlackListResponse> ApplyBlackListOutcome;
                typedef Outcome<Error, Model::ApplyCreditAuditResponse> ApplyCreditAuditOutcome;
                typedef Outcome<Error, Model::DescribeCreditResultResponse> DescribeCreditResultOutcome;
                typedef Outcome<Error, Model::DescribeRecordsResponse> DescribeRecordsOutcome;
                typedef Outcome<Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef Outcome<Error, Model::DownloadReportResponse> DownloadReportOutcome;
                typedef Outcome<Error, Model::UploadDataFileResponse> UploadDataFileOutcome;
                typedef Outcome<Error, Model::UploadFileResponse> UploadFileOutcome;



                /**
                 *加入黑名单的客户，将停止拨打。用于：
将客户进行黑名单的增加和移除，用于对某些客户阶段性停催。

                 * @param req ApplyBlackListRequest
                 * @return ApplyBlackListOutcome
                 */
                ApplyBlackListOutcome ApplyBlackList(const Model::ApplyBlackListRequest &request);

                /**
                 *提交信审外呼申请，返回当次请求日期。
                 * @param req ApplyCreditAuditRequest
                 * @return ApplyCreditAuditOutcome
                 */
                ApplyCreditAuditOutcome ApplyCreditAudit(const Model::ApplyCreditAuditRequest &request);

                /**
                 *根据信审任务ID和请求日期，获取相关信审结果。
                 * @param req DescribeCreditResultRequest
                 * @return DescribeCreditResultOutcome
                 */
                DescribeCreditResultOutcome DescribeCreditResult(const Model::DescribeCreditResultRequest &request);

                /**
                 *用于获取指定案件的录音地址，次日早上8:00后可查询前日录音。
                 * @param req DescribeRecordsRequest
                 * @return DescribeRecordsOutcome
                 */
                DescribeRecordsOutcome DescribeRecords(const Model::DescribeRecordsRequest &request);

                /**
                 *根据上传文件接口的输出参数DataResId，获取相关上传结果。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);

                /**
                 *用于下载当日催收和回访结果报表。当日23:00后，可获取当日催收结果，次日00:30后，可获取昨日回访结果。
                 * @param req DownloadReportRequest
                 * @return DownloadReportOutcome
                 */
                DownloadReportOutcome DownloadReport(const Model::DownloadReportRequest &request);

                /**
                 *<p>该接口包含上传下列文件：</p>
<ol style="margin-bottom:10px;">
  <li>入催文件：用于每天入催文件的上传</li>
  <li>回访文件：用于每天贷中回访文件的上传</li>
  <li>还款文件：实时上传当前已还款客户，用于还款客户的实时停催</li>
</ol>
接口返回数据任务ID，支持xlsx、xls、csv、zip格式，文档大小不超过50MB。
                 * @param req UploadDataFileRequest
                 * @return UploadDataFileOutcome
                 */
                UploadDataFileOutcome UploadDataFile(const Model::UploadDataFileRequest &request);

                /**
                 *客户通过调用该接口上传需催收文档，格式需为excel格式。接口返回任务ID。
                 * @param req UploadFileRequest
                 * @return UploadFileOutcome
                 */
                UploadFileOutcome UploadFile(const Model::UploadFileRequest &request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_CRCLIENT_H_
