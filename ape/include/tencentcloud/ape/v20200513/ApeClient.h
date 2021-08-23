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

#ifndef TENCENTCLOUD_APE_V20200513_APECLIENT_H_
#define TENCENTCLOUD_APE_V20200513_APECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ape/v20200513/model/BatchDescribeOrderCertificateRequest.h>
#include <tencentcloud/ape/v20200513/model/BatchDescribeOrderCertificateResponse.h>
#include <tencentcloud/ape/v20200513/model/BatchDescribeOrderImageRequest.h>
#include <tencentcloud/ape/v20200513/model/BatchDescribeOrderImageResponse.h>
#include <tencentcloud/ape/v20200513/model/CreateOrderAndDownloadsRequest.h>
#include <tencentcloud/ape/v20200513/model/CreateOrderAndDownloadsResponse.h>
#include <tencentcloud/ape/v20200513/model/CreateOrderAndPayRequest.h>
#include <tencentcloud/ape/v20200513/model/CreateOrderAndPayResponse.h>
#include <tencentcloud/ape/v20200513/model/DescribeAuthUsersRequest.h>
#include <tencentcloud/ape/v20200513/model/DescribeAuthUsersResponse.h>
#include <tencentcloud/ape/v20200513/model/DescribeDownloadInfosRequest.h>
#include <tencentcloud/ape/v20200513/model/DescribeDownloadInfosResponse.h>
#include <tencentcloud/ape/v20200513/model/DescribeImageRequest.h>
#include <tencentcloud/ape/v20200513/model/DescribeImageResponse.h>
#include <tencentcloud/ape/v20200513/model/DescribeImagesRequest.h>
#include <tencentcloud/ape/v20200513/model/DescribeImagesResponse.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            class ApeClient : public AbstractClient
            {
            public:
                ApeClient(const Credential &credential, const std::string &region);
                ApeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDescribeOrderCertificateResponse> BatchDescribeOrderCertificateOutcome;
                typedef std::future<BatchDescribeOrderCertificateOutcome> BatchDescribeOrderCertificateOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::BatchDescribeOrderCertificateRequest&, BatchDescribeOrderCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeOrderCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDescribeOrderImageResponse> BatchDescribeOrderImageOutcome;
                typedef std::future<BatchDescribeOrderImageOutcome> BatchDescribeOrderImageOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::BatchDescribeOrderImageRequest&, BatchDescribeOrderImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeOrderImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrderAndDownloadsResponse> CreateOrderAndDownloadsOutcome;
                typedef std::future<CreateOrderAndDownloadsOutcome> CreateOrderAndDownloadsOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::CreateOrderAndDownloadsRequest&, CreateOrderAndDownloadsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAndDownloadsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrderAndPayResponse> CreateOrderAndPayOutcome;
                typedef std::future<CreateOrderAndPayOutcome> CreateOrderAndPayOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::CreateOrderAndPayRequest&, CreateOrderAndPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAndPayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthUsersResponse> DescribeAuthUsersOutcome;
                typedef std::future<DescribeAuthUsersOutcome> DescribeAuthUsersOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::DescribeAuthUsersRequest&, DescribeAuthUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDownloadInfosResponse> DescribeDownloadInfosOutcome;
                typedef std::future<DescribeDownloadInfosOutcome> DescribeDownloadInfosOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::DescribeDownloadInfosRequest&, DescribeDownloadInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const ApeClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;



                /**
                 *批量获取授权书下载地址
                 * @param req BatchDescribeOrderCertificateRequest
                 * @return BatchDescribeOrderCertificateOutcome
                 */
                BatchDescribeOrderCertificateOutcome BatchDescribeOrderCertificate(const Model::BatchDescribeOrderCertificateRequest &request);
                void BatchDescribeOrderCertificateAsync(const Model::BatchDescribeOrderCertificateRequest& request, const BatchDescribeOrderCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeOrderCertificateOutcomeCallable BatchDescribeOrderCertificateCallable(const Model::BatchDescribeOrderCertificateRequest& request);

                /**
                 *批量获取图片下载地址
                 * @param req BatchDescribeOrderImageRequest
                 * @return BatchDescribeOrderImageOutcome
                 */
                BatchDescribeOrderImageOutcome BatchDescribeOrderImage(const Model::BatchDescribeOrderImageRequest &request);
                void BatchDescribeOrderImageAsync(const Model::BatchDescribeOrderImageRequest& request, const BatchDescribeOrderImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeOrderImageOutcomeCallable BatchDescribeOrderImageCallable(const Model::BatchDescribeOrderImageRequest& request);

                /**
                 *核销图片，获取原图URL地址
                 * @param req CreateOrderAndDownloadsRequest
                 * @return CreateOrderAndDownloadsOutcome
                 */
                CreateOrderAndDownloadsOutcome CreateOrderAndDownloads(const Model::CreateOrderAndDownloadsRequest &request);
                void CreateOrderAndDownloadsAsync(const Model::CreateOrderAndDownloadsRequest& request, const CreateOrderAndDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrderAndDownloadsOutcomeCallable CreateOrderAndDownloadsCallable(const Model::CreateOrderAndDownloadsRequest& request);

                /**
                 *购买一张图片并且支付
                 * @param req CreateOrderAndPayRequest
                 * @return CreateOrderAndPayOutcome
                 */
                CreateOrderAndPayOutcome CreateOrderAndPay(const Model::CreateOrderAndPayRequest &request);
                void CreateOrderAndPayAsync(const Model::CreateOrderAndPayRequest& request, const CreateOrderAndPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrderAndPayOutcomeCallable CreateOrderAndPayCallable(const Model::CreateOrderAndPayRequest& request);

                /**
                 *分页查询授权人列表
                 * @param req DescribeAuthUsersRequest
                 * @return DescribeAuthUsersOutcome
                 */
                DescribeAuthUsersOutcome DescribeAuthUsers(const Model::DescribeAuthUsersRequest &request);
                void DescribeAuthUsersAsync(const Model::DescribeAuthUsersRequest& request, const DescribeAuthUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthUsersOutcomeCallable DescribeAuthUsersCallable(const Model::DescribeAuthUsersRequest& request);

                /**
                 *获取用户图片下载记录
                 * @param req DescribeDownloadInfosRequest
                 * @return DescribeDownloadInfosOutcome
                 */
                DescribeDownloadInfosOutcome DescribeDownloadInfos(const Model::DescribeDownloadInfosRequest &request);
                void DescribeDownloadInfosAsync(const Model::DescribeDownloadInfosRequest& request, const DescribeDownloadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDownloadInfosOutcomeCallable DescribeDownloadInfosCallable(const Model::DescribeDownloadInfosRequest& request);

                /**
                 *根据ID查询一张图片的详细信息
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *根据关键字搜索图片列表
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_APECLIENT_H_
