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

#ifndef TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
#define TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bma/v20210624/model/CreateBPFakeURLRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateBPFakeURLResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateBPFalseTicketRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateBPFalseTicketResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateBPOfflineAttachmentRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateBPOfflineAttachmentResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateBPOfflineTicketRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateBPOfflineTicketResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateBPProtectURLsRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateBPProtectURLsResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRDesktopCodeRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRDesktopCodeResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightFileRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightFileResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRTortRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRTortResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRUserVerifyRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRUserVerifyResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRWorkRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRWorkResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPCompanyInfoRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPCompanyInfoResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPFakeURLsRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPFakeURLsResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPProtectURLsRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPProtectURLsResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPReportFakeURLsRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeBPReportFakeURLsResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorsRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorsResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRObtainDetailRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRObtainDetailResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyBPOfflineAttachmentRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyBPOfflineAttachmentResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRBlockStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRBlockStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRMonitorRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRMonitorResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRObtainStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRObtainStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRRightStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRRightStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRWhiteListRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRWhiteListResponse.h>
#include <tencentcloud/bma/v20210624/model/UpdateCRWorkRequest.h>
#include <tencentcloud/bma/v20210624/model/UpdateCRWorkResponse.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            class BmaClient : public AbstractClient
            {
            public:
                BmaClient(const Credential &credential, const std::string &region);
                BmaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateBPFakeURLResponse> CreateBPFakeURLOutcome;
                typedef std::future<CreateBPFakeURLOutcome> CreateBPFakeURLOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFakeURLRequest&, CreateBPFakeURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFakeURLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPFalseTicketResponse> CreateBPFalseTicketOutcome;
                typedef std::future<CreateBPFalseTicketOutcome> CreateBPFalseTicketOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPFalseTicketRequest&, CreateBPFalseTicketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPFalseTicketAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPOfflineAttachmentResponse> CreateBPOfflineAttachmentOutcome;
                typedef std::future<CreateBPOfflineAttachmentOutcome> CreateBPOfflineAttachmentOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPOfflineAttachmentRequest&, CreateBPOfflineAttachmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPOfflineAttachmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPOfflineTicketResponse> CreateBPOfflineTicketOutcome;
                typedef std::future<CreateBPOfflineTicketOutcome> CreateBPOfflineTicketOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPOfflineTicketRequest&, CreateBPOfflineTicketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPOfflineTicketAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBPProtectURLsResponse> CreateBPProtectURLsOutcome;
                typedef std::future<CreateBPProtectURLsOutcome> CreateBPProtectURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateBPProtectURLsRequest&, CreateBPProtectURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBPProtectURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRBlockResponse> CreateCRBlockOutcome;
                typedef std::future<CreateCRBlockOutcome> CreateCRBlockOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRBlockRequest&, CreateCRBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRCompanyVerifyResponse> CreateCRCompanyVerifyOutcome;
                typedef std::future<CreateCRCompanyVerifyOutcome> CreateCRCompanyVerifyOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRCompanyVerifyRequest&, CreateCRCompanyVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRCompanyVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRDesktopCodeResponse> CreateCRDesktopCodeOutcome;
                typedef std::future<CreateCRDesktopCodeOutcome> CreateCRDesktopCodeOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRDesktopCodeRequest&, CreateCRDesktopCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRDesktopCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRRightResponse> CreateCRRightOutcome;
                typedef std::future<CreateCRRightOutcome> CreateCRRightOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRRightRequest&, CreateCRRightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRRightAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRRightFileResponse> CreateCRRightFileOutcome;
                typedef std::future<CreateCRRightFileOutcome> CreateCRRightFileOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRRightFileRequest&, CreateCRRightFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRRightFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRTortResponse> CreateCRTortOutcome;
                typedef std::future<CreateCRTortOutcome> CreateCRTortOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRTortRequest&, CreateCRTortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRTortAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRUserVerifyResponse> CreateCRUserVerifyOutcome;
                typedef std::future<CreateCRUserVerifyOutcome> CreateCRUserVerifyOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRUserVerifyRequest&, CreateCRUserVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRUserVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRWorkResponse> CreateCRWorkOutcome;
                typedef std::future<CreateCRWorkOutcome> CreateCRWorkOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRWorkRequest&, CreateCRWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRWorkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPCompanyInfoResponse> DescribeBPCompanyInfoOutcome;
                typedef std::future<DescribeBPCompanyInfoOutcome> DescribeBPCompanyInfoOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPCompanyInfoRequest&, DescribeBPCompanyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPCompanyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPFakeURLsResponse> DescribeBPFakeURLsOutcome;
                typedef std::future<DescribeBPFakeURLsOutcome> DescribeBPFakeURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPFakeURLsRequest&, DescribeBPFakeURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPFakeURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPProtectURLsResponse> DescribeBPProtectURLsOutcome;
                typedef std::future<DescribeBPProtectURLsOutcome> DescribeBPProtectURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPProtectURLsRequest&, DescribeBPProtectURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPProtectURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBPReportFakeURLsResponse> DescribeBPReportFakeURLsOutcome;
                typedef std::future<DescribeBPReportFakeURLsOutcome> DescribeBPReportFakeURLsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeBPReportFakeURLsRequest&, DescribeBPReportFakeURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBPReportFakeURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRMonitorDetailResponse> DescribeCRMonitorDetailOutcome;
                typedef std::future<DescribeCRMonitorDetailOutcome> DescribeCRMonitorDetailOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRMonitorDetailRequest&, DescribeCRMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRMonitorsResponse> DescribeCRMonitorsOutcome;
                typedef std::future<DescribeCRMonitorsOutcome> DescribeCRMonitorsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRMonitorsRequest&, DescribeCRMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRObtainDetailResponse> DescribeCRObtainDetailOutcome;
                typedef std::future<DescribeCRObtainDetailOutcome> DescribeCRObtainDetailOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRObtainDetailRequest&, DescribeCRObtainDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRObtainDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRWorkInfoResponse> DescribeCRWorkInfoOutcome;
                typedef std::future<DescribeCRWorkInfoOutcome> DescribeCRWorkInfoOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRWorkInfoRequest&, DescribeCRWorkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRWorkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBPOfflineAttachmentResponse> ModifyBPOfflineAttachmentOutcome;
                typedef std::future<ModifyBPOfflineAttachmentOutcome> ModifyBPOfflineAttachmentOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyBPOfflineAttachmentRequest&, ModifyBPOfflineAttachmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBPOfflineAttachmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRBlockStatusResponse> ModifyCRBlockStatusOutcome;
                typedef std::future<ModifyCRBlockStatusOutcome> ModifyCRBlockStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRBlockStatusRequest&, ModifyCRBlockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRBlockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRMonitorResponse> ModifyCRMonitorOutcome;
                typedef std::future<ModifyCRMonitorOutcome> ModifyCRMonitorOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRMonitorRequest&, ModifyCRMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRObtainStatusResponse> ModifyCRObtainStatusOutcome;
                typedef std::future<ModifyCRObtainStatusOutcome> ModifyCRObtainStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRObtainStatusRequest&, ModifyCRObtainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRObtainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRRightStatusResponse> ModifyCRRightStatusOutcome;
                typedef std::future<ModifyCRRightStatusOutcome> ModifyCRRightStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRRightStatusRequest&, ModifyCRRightStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRRightStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRWhiteListResponse> ModifyCRWhiteListOutcome;
                typedef std::future<ModifyCRWhiteListOutcome> ModifyCRWhiteListOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRWhiteListRequest&, ModifyCRWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCRWorkResponse> UpdateCRWorkOutcome;
                typedef std::future<UpdateCRWorkOutcome> UpdateCRWorkOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::UpdateCRWorkRequest&, UpdateCRWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCRWorkAsyncHandler;



                /**
                 *添加仿冒链接（举报）
                 * @param req CreateBPFakeURLRequest
                 * @return CreateBPFakeURLOutcome
                 */
                CreateBPFakeURLOutcome CreateBPFakeURL(const Model::CreateBPFakeURLRequest &request);
                void CreateBPFakeURLAsync(const Model::CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFakeURLOutcomeCallable CreateBPFakeURLCallable(const Model::CreateBPFakeURLRequest& request);

                /**
                 *添加误报工单
                 * @param req CreateBPFalseTicketRequest
                 * @return CreateBPFalseTicketOutcome
                 */
                CreateBPFalseTicketOutcome CreateBPFalseTicket(const Model::CreateBPFalseTicketRequest &request);
                void CreateBPFalseTicketAsync(const Model::CreateBPFalseTicketRequest& request, const CreateBPFalseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPFalseTicketOutcomeCallable CreateBPFalseTicketCallable(const Model::CreateBPFalseTicketRequest& request);

                /**
                 *添加下线材料
                 * @param req CreateBPOfflineAttachmentRequest
                 * @return CreateBPOfflineAttachmentOutcome
                 */
                CreateBPOfflineAttachmentOutcome CreateBPOfflineAttachment(const Model::CreateBPOfflineAttachmentRequest &request);
                void CreateBPOfflineAttachmentAsync(const Model::CreateBPOfflineAttachmentRequest& request, const CreateBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPOfflineAttachmentOutcomeCallable CreateBPOfflineAttachmentCallable(const Model::CreateBPOfflineAttachmentRequest& request);

                /**
                 *添加下线工单
                 * @param req CreateBPOfflineTicketRequest
                 * @return CreateBPOfflineTicketOutcome
                 */
                CreateBPOfflineTicketOutcome CreateBPOfflineTicket(const Model::CreateBPOfflineTicketRequest &request);
                void CreateBPOfflineTicketAsync(const Model::CreateBPOfflineTicketRequest& request, const CreateBPOfflineTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPOfflineTicketOutcomeCallable CreateBPOfflineTicketCallable(const Model::CreateBPOfflineTicketRequest& request);

                /**
                 *添加保护网站
                 * @param req CreateBPProtectURLsRequest
                 * @return CreateBPProtectURLsOutcome
                 */
                CreateBPProtectURLsOutcome CreateBPProtectURLs(const Model::CreateBPProtectURLsRequest &request);
                void CreateBPProtectURLsAsync(const Model::CreateBPProtectURLsRequest& request, const CreateBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBPProtectURLsOutcomeCallable CreateBPProtectURLsCallable(const Model::CreateBPProtectURLsRequest& request);

                /**
                 *新建协查处置

                 * @param req CreateCRBlockRequest
                 * @return CreateCRBlockOutcome
                 */
                CreateCRBlockOutcome CreateCRBlock(const Model::CreateCRBlockRequest &request);
                void CreateCRBlockAsync(const Model::CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRBlockOutcomeCallable CreateCRBlockCallable(const Model::CreateCRBlockRequest& request);

                /**
                 *本接口用于企业认证，新接入用户必须认证后才可以进行后续操作（个人认证和企业认证二选一），只需认证一次即可
                 * @param req CreateCRCompanyVerifyRequest
                 * @return CreateCRCompanyVerifyOutcome
                 */
                CreateCRCompanyVerifyOutcome CreateCRCompanyVerify(const Model::CreateCRCompanyVerifyRequest &request);
                void CreateCRCompanyVerifyAsync(const Model::CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRCompanyVerifyOutcomeCallable CreateCRCompanyVerifyCallable(const Model::CreateCRCompanyVerifyRequest& request);

                /**
                 *新建过程取证码
                 * @param req CreateCRDesktopCodeRequest
                 * @return CreateCRDesktopCodeOutcome
                 */
                CreateCRDesktopCodeOutcome CreateCRDesktopCode(const Model::CreateCRDesktopCodeRequest &request);
                void CreateCRDesktopCodeAsync(const Model::CreateCRDesktopCodeRequest& request, const CreateCRDesktopCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRDesktopCodeOutcomeCallable CreateCRDesktopCodeCallable(const Model::CreateCRDesktopCodeRequest& request);

                /**
                 *版权保护-新建发函接口
                 * @param req CreateCRRightRequest
                 * @return CreateCRRightOutcome
                 */
                CreateCRRightOutcome CreateCRRight(const Model::CreateCRRightRequest &request);
                void CreateCRRightAsync(const Model::CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRRightOutcomeCallable CreateCRRightCallable(const Model::CreateCRRightRequest& request);

                /**
                 *权属文件添加
                 * @param req CreateCRRightFileRequest
                 * @return CreateCRRightFileOutcome
                 */
                CreateCRRightFileOutcome CreateCRRightFile(const Model::CreateCRRightFileRequest &request);
                void CreateCRRightFileAsync(const Model::CreateCRRightFileRequest& request, const CreateCRRightFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRRightFileOutcomeCallable CreateCRRightFileCallable(const Model::CreateCRRightFileRequest& request);

                /**
                 *举报侵权链接
                 * @param req CreateCRTortRequest
                 * @return CreateCRTortOutcome
                 */
                CreateCRTortOutcome CreateCRTort(const Model::CreateCRTortRequest &request);
                void CreateCRTortAsync(const Model::CreateCRTortRequest& request, const CreateCRTortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRTortOutcomeCallable CreateCRTortCallable(const Model::CreateCRTortRequest& request);

                /**
                 *本接口用于个人认证，新接入用户必须认证后才可以进行后续操作（个人认证和企业认证二选一），只需认证一次即可
                 * @param req CreateCRUserVerifyRequest
                 * @return CreateCRUserVerifyOutcome
                 */
                CreateCRUserVerifyOutcome CreateCRUserVerify(const Model::CreateCRUserVerifyRequest &request);
                void CreateCRUserVerifyAsync(const Model::CreateCRUserVerifyRequest& request, const CreateCRUserVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRUserVerifyOutcomeCallable CreateCRUserVerifyCallable(const Model::CreateCRUserVerifyRequest& request);

                /**
                 *新建作品
                 * @param req CreateCRWorkRequest
                 * @return CreateCRWorkOutcome
                 */
                CreateCRWorkOutcome CreateCRWork(const Model::CreateCRWorkRequest &request);
                void CreateCRWorkAsync(const Model::CreateCRWorkRequest& request, const CreateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRWorkOutcomeCallable CreateCRWorkCallable(const Model::CreateCRWorkRequest& request);

                /**
                 *查询企业信息
                 * @param req DescribeBPCompanyInfoRequest
                 * @return DescribeBPCompanyInfoOutcome
                 */
                DescribeBPCompanyInfoOutcome DescribeBPCompanyInfo(const Model::DescribeBPCompanyInfoRequest &request);
                void DescribeBPCompanyInfoAsync(const Model::DescribeBPCompanyInfoRequest& request, const DescribeBPCompanyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPCompanyInfoOutcomeCallable DescribeBPCompanyInfoCallable(const Model::DescribeBPCompanyInfoRequest& request);

                /**
                 *查询仿冒链接
                 * @param req DescribeBPFakeURLsRequest
                 * @return DescribeBPFakeURLsOutcome
                 */
                DescribeBPFakeURLsOutcome DescribeBPFakeURLs(const Model::DescribeBPFakeURLsRequest &request);
                void DescribeBPFakeURLsAsync(const Model::DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPFakeURLsOutcomeCallable DescribeBPFakeURLsCallable(const Model::DescribeBPFakeURLsRequest& request);

                /**
                 *查询保护网站
                 * @param req DescribeBPProtectURLsRequest
                 * @return DescribeBPProtectURLsOutcome
                 */
                DescribeBPProtectURLsOutcome DescribeBPProtectURLs(const Model::DescribeBPProtectURLsRequest &request);
                void DescribeBPProtectURLsAsync(const Model::DescribeBPProtectURLsRequest& request, const DescribeBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPProtectURLsOutcomeCallable DescribeBPProtectURLsCallable(const Model::DescribeBPProtectURLsRequest& request);

                /**
                 *查询举报列表
                 * @param req DescribeBPReportFakeURLsRequest
                 * @return DescribeBPReportFakeURLsOutcome
                 */
                DescribeBPReportFakeURLsOutcome DescribeBPReportFakeURLs(const Model::DescribeBPReportFakeURLsRequest &request);
                void DescribeBPReportFakeURLsAsync(const Model::DescribeBPReportFakeURLsRequest& request, const DescribeBPReportFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBPReportFakeURLsOutcomeCallable DescribeBPReportFakeURLsCallable(const Model::DescribeBPReportFakeURLsRequest& request);

                /**
                 *版权保护-查询作品监测详情接口
                 * @param req DescribeCRMonitorDetailRequest
                 * @return DescribeCRMonitorDetailOutcome
                 */
                DescribeCRMonitorDetailOutcome DescribeCRMonitorDetail(const Model::DescribeCRMonitorDetailRequest &request);
                void DescribeCRMonitorDetailAsync(const Model::DescribeCRMonitorDetailRequest& request, const DescribeCRMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRMonitorDetailOutcomeCallable DescribeCRMonitorDetailCallable(const Model::DescribeCRMonitorDetailRequest& request);

                /**
                 *版权保护-查询监测列表接口
                 * @param req DescribeCRMonitorsRequest
                 * @return DescribeCRMonitorsOutcome
                 */
                DescribeCRMonitorsOutcome DescribeCRMonitors(const Model::DescribeCRMonitorsRequest &request);
                void DescribeCRMonitorsAsync(const Model::DescribeCRMonitorsRequest& request, const DescribeCRMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRMonitorsOutcomeCallable DescribeCRMonitorsCallable(const Model::DescribeCRMonitorsRequest& request);

                /**
                 *查询取证详情
                 * @param req DescribeCRObtainDetailRequest
                 * @return DescribeCRObtainDetailOutcome
                 */
                DescribeCRObtainDetailOutcome DescribeCRObtainDetail(const Model::DescribeCRObtainDetailRequest &request);
                void DescribeCRObtainDetailAsync(const Model::DescribeCRObtainDetailRequest& request, const DescribeCRObtainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRObtainDetailOutcomeCallable DescribeCRObtainDetailCallable(const Model::DescribeCRObtainDetailRequest& request);

                /**
                 *查询作品基本信息
                 * @param req DescribeCRWorkInfoRequest
                 * @return DescribeCRWorkInfoOutcome
                 */
                DescribeCRWorkInfoOutcome DescribeCRWorkInfo(const Model::DescribeCRWorkInfoRequest &request);
                void DescribeCRWorkInfoAsync(const Model::DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRWorkInfoOutcomeCallable DescribeCRWorkInfoCallable(const Model::DescribeCRWorkInfoRequest& request);

                /**
                 *修改下线材料
                 * @param req ModifyBPOfflineAttachmentRequest
                 * @return ModifyBPOfflineAttachmentOutcome
                 */
                ModifyBPOfflineAttachmentOutcome ModifyBPOfflineAttachment(const Model::ModifyBPOfflineAttachmentRequest &request);
                void ModifyBPOfflineAttachmentAsync(const Model::ModifyBPOfflineAttachmentRequest& request, const ModifyBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBPOfflineAttachmentOutcomeCallable ModifyBPOfflineAttachmentCallable(const Model::ModifyBPOfflineAttachmentRequest& request);

                /**
                 *协查处置申请
                 * @param req ModifyCRBlockStatusRequest
                 * @return ModifyCRBlockStatusOutcome
                 */
                ModifyCRBlockStatusOutcome ModifyCRBlockStatus(const Model::ModifyCRBlockStatusRequest &request);
                void ModifyCRBlockStatusAsync(const Model::ModifyCRBlockStatusRequest& request, const ModifyCRBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRBlockStatusOutcomeCallable ModifyCRBlockStatusCallable(const Model::ModifyCRBlockStatusRequest& request);

                /**
                 *开启/关闭监测
                 * @param req ModifyCRMonitorRequest
                 * @return ModifyCRMonitorOutcome
                 */
                ModifyCRMonitorOutcome ModifyCRMonitor(const Model::ModifyCRMonitorRequest &request);
                void ModifyCRMonitorAsync(const Model::ModifyCRMonitorRequest& request, const ModifyCRMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRMonitorOutcomeCallable ModifyCRMonitorCallable(const Model::ModifyCRMonitorRequest& request);

                /**
                 *取证申请
                 * @param req ModifyCRObtainStatusRequest
                 * @return ModifyCRObtainStatusOutcome
                 */
                ModifyCRObtainStatusOutcome ModifyCRObtainStatus(const Model::ModifyCRObtainStatusRequest &request);
                void ModifyCRObtainStatusAsync(const Model::ModifyCRObtainStatusRequest& request, const ModifyCRObtainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRObtainStatusOutcomeCallable ModifyCRObtainStatusCallable(const Model::ModifyCRObtainStatusRequest& request);

                /**
                 *发函申请
                 * @param req ModifyCRRightStatusRequest
                 * @return ModifyCRRightStatusOutcome
                 */
                ModifyCRRightStatusOutcome ModifyCRRightStatus(const Model::ModifyCRRightStatusRequest &request);
                void ModifyCRRightStatusAsync(const Model::ModifyCRRightStatusRequest& request, const ModifyCRRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRRightStatusOutcomeCallable ModifyCRRightStatusCallable(const Model::ModifyCRRightStatusRequest& request);

                /**
                 *修改白名单列表
                 * @param req ModifyCRWhiteListRequest
                 * @return ModifyCRWhiteListOutcome
                 */
                ModifyCRWhiteListOutcome ModifyCRWhiteList(const Model::ModifyCRWhiteListRequest &request);
                void ModifyCRWhiteListAsync(const Model::ModifyCRWhiteListRequest& request, const ModifyCRWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRWhiteListOutcomeCallable ModifyCRWhiteListCallable(const Model::ModifyCRWhiteListRequest& request);

                /**
                 *更新作品
                 * @param req UpdateCRWorkRequest
                 * @return UpdateCRWorkOutcome
                 */
                UpdateCRWorkOutcome UpdateCRWork(const Model::UpdateCRWorkRequest &request);
                void UpdateCRWorkAsync(const Model::UpdateCRWorkRequest& request, const UpdateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCRWorkOutcomeCallable UpdateCRWorkCallable(const Model::UpdateCRWorkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
