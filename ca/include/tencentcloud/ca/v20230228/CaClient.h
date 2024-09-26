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

#ifndef TENCENTCLOUD_CA_V20230228_CACLIENT_H_
#define TENCENTCLOUD_CA_V20230228_CACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ca/v20230228/model/CreateVerifyReportRequest.h>
#include <tencentcloud/ca/v20230228/model/CreateVerifyReportResponse.h>
#include <tencentcloud/ca/v20230228/model/DescribeVerifyReportRequest.h>
#include <tencentcloud/ca/v20230228/model/DescribeVerifyReportResponse.h>
#include <tencentcloud/ca/v20230228/model/UploadFileRequest.h>
#include <tencentcloud/ca/v20230228/model/UploadFileResponse.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            class CaClient : public AbstractClient
            {
            public:
                CaClient(const Credential &credential, const std::string &region);
                CaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateVerifyReportResponse> CreateVerifyReportOutcome;
                typedef std::future<CreateVerifyReportOutcome> CreateVerifyReportOutcomeCallable;
                typedef std::function<void(const CaClient*, const Model::CreateVerifyReportRequest&, CreateVerifyReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifyReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVerifyReportResponse> DescribeVerifyReportOutcome;
                typedef std::future<DescribeVerifyReportOutcome> DescribeVerifyReportOutcomeCallable;
                typedef std::function<void(const CaClient*, const Model::DescribeVerifyReportRequest&, DescribeVerifyReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyReportAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFileResponse> UploadFileOutcome;
                typedef std::future<UploadFileOutcome> UploadFileOutcomeCallable;
                typedef std::function<void(const CaClient*, const Model::UploadFileRequest&, UploadFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileAsyncHandler;



                /**
                 *创建签名验证报告任务，此接口为异步盖章接口，盖章时效24小时。
                 * @param req CreateVerifyReportRequest
                 * @return CreateVerifyReportOutcome
                 */
                CreateVerifyReportOutcome CreateVerifyReport(const Model::CreateVerifyReportRequest &request);
                void CreateVerifyReportAsync(const Model::CreateVerifyReportRequest& request, const CreateVerifyReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVerifyReportOutcomeCallable CreateVerifyReportCallable(const Model::CreateVerifyReportRequest& request);

                /**
                 *下载验签报告url，url有效期默认12小时
                 * @param req DescribeVerifyReportRequest
                 * @return DescribeVerifyReportOutcome
                 */
                DescribeVerifyReportOutcome DescribeVerifyReport(const Model::DescribeVerifyReportRequest &request);
                void DescribeVerifyReportAsync(const Model::DescribeVerifyReportRequest& request, const DescribeVerifyReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVerifyReportOutcomeCallable DescribeVerifyReportCallable(const Model::DescribeVerifyReportRequest& request);

                /**
                 *文件上传接口
                 * @param req UploadFileRequest
                 * @return UploadFileOutcome
                 */
                UploadFileOutcome UploadFile(const Model::UploadFileRequest &request);
                void UploadFileAsync(const Model::UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFileOutcomeCallable UploadFileCallable(const Model::UploadFileRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_CACLIENT_H_
