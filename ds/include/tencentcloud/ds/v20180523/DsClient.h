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

#ifndef TENCENTCLOUD_DS_V20180523_DSCLIENT_H_
#define TENCENTCLOUD_DS_V20180523_DSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ds/v20180523/model/CheckVcodeRequest.h>
#include <tencentcloud/ds/v20180523/model/CheckVcodeResponse.h>
#include <tencentcloud/ds/v20180523/model/CreateContractByUploadRequest.h>
#include <tencentcloud/ds/v20180523/model/CreateContractByUploadResponse.h>
#include <tencentcloud/ds/v20180523/model/CreateEnterpriseAccountRequest.h>
#include <tencentcloud/ds/v20180523/model/CreateEnterpriseAccountResponse.h>
#include <tencentcloud/ds/v20180523/model/CreatePersonalAccountRequest.h>
#include <tencentcloud/ds/v20180523/model/CreatePersonalAccountResponse.h>
#include <tencentcloud/ds/v20180523/model/CreateSealRequest.h>
#include <tencentcloud/ds/v20180523/model/CreateSealResponse.h>
#include <tencentcloud/ds/v20180523/model/DeleteAccountRequest.h>
#include <tencentcloud/ds/v20180523/model/DeleteAccountResponse.h>
#include <tencentcloud/ds/v20180523/model/DeleteSealRequest.h>
#include <tencentcloud/ds/v20180523/model/DeleteSealResponse.h>
#include <tencentcloud/ds/v20180523/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/ds/v20180523/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/ds/v20180523/model/DownloadContractRequest.h>
#include <tencentcloud/ds/v20180523/model/DownloadContractResponse.h>
#include <tencentcloud/ds/v20180523/model/SendVcodeRequest.h>
#include <tencentcloud/ds/v20180523/model/SendVcodeResponse.h>
#include <tencentcloud/ds/v20180523/model/SignContractByCoordinateRequest.h>
#include <tencentcloud/ds/v20180523/model/SignContractByCoordinateResponse.h>
#include <tencentcloud/ds/v20180523/model/SignContractByKeywordRequest.h>
#include <tencentcloud/ds/v20180523/model/SignContractByKeywordResponse.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            class DsClient : public AbstractClient
            {
            public:
                DsClient(const Credential &credential, const std::string &region);
                DsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckVcodeResponse> CheckVcodeOutcome;
                typedef std::future<CheckVcodeOutcome> CheckVcodeOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::CheckVcodeRequest&, CheckVcodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckVcodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContractByUploadResponse> CreateContractByUploadOutcome;
                typedef std::future<CreateContractByUploadOutcome> CreateContractByUploadOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::CreateContractByUploadRequest&, CreateContractByUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContractByUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnterpriseAccountResponse> CreateEnterpriseAccountOutcome;
                typedef std::future<CreateEnterpriseAccountOutcome> CreateEnterpriseAccountOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::CreateEnterpriseAccountRequest&, CreateEnterpriseAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnterpriseAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonalAccountResponse> CreatePersonalAccountOutcome;
                typedef std::future<CreatePersonalAccountOutcome> CreatePersonalAccountOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::CreatePersonalAccountRequest&, CreatePersonalAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonalAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealResponse> CreateSealOutcome;
                typedef std::future<CreateSealOutcome> CreateSealOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::CreateSealRequest&, CreateSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSealResponse> DeleteSealOutcome;
                typedef std::future<DeleteSealOutcome> DeleteSealOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::DeleteSealRequest&, DeleteSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSealAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadContractResponse> DownloadContractOutcome;
                typedef std::future<DownloadContractOutcome> DownloadContractOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::DownloadContractRequest&, DownloadContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadContractAsyncHandler;
                typedef Outcome<Core::Error, Model::SendVcodeResponse> SendVcodeOutcome;
                typedef std::future<SendVcodeOutcome> SendVcodeOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::SendVcodeRequest&, SendVcodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendVcodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SignContractByCoordinateResponse> SignContractByCoordinateOutcome;
                typedef std::future<SignContractByCoordinateOutcome> SignContractByCoordinateOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::SignContractByCoordinateRequest&, SignContractByCoordinateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignContractByCoordinateAsyncHandler;
                typedef Outcome<Core::Error, Model::SignContractByKeywordResponse> SignContractByKeywordOutcome;
                typedef std::future<SignContractByKeywordOutcome> SignContractByKeywordOutcomeCallable;
                typedef std::function<void(const DsClient*, const Model::SignContractByKeywordRequest&, SignContractByKeywordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignContractByKeywordAsyncHandler;



                /**
                 *检测验证码接口。此接口用于企业电子合同平台通过给用户发送短信验证码，以短信授权方式签署合同。此接口配合发送验证码接口使用。

用户在企业电子合同平台输入收到的验证码后，由企业电子合同平台调用该接口向腾讯云提交确认受托签署合同验证码命令。验证码验证正确时，本次合同签署的授权成功。
                 * @param req CheckVcodeRequest
                 * @return CheckVcodeOutcome
                 */
                CheckVcodeOutcome CheckVcode(const Model::CheckVcodeRequest &request);
                void CheckVcodeAsync(const Model::CheckVcodeRequest& request, const CheckVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckVcodeOutcomeCallable CheckVcodeCallable(const Model::CheckVcodeRequest& request);

                /**
                 *此接口适用于：客户平台通过上传PDF文件作为合同，以备未来进行签署。接口返回任务号，可调用DescribeTaskStatus接口查看任务执行结果。
                 * @param req CreateContractByUploadRequest
                 * @return CreateContractByUploadOutcome
                 */
                CreateContractByUploadOutcome CreateContractByUpload(const Model::CreateContractByUploadRequest &request);
                void CreateContractByUploadAsync(const Model::CreateContractByUploadRequest& request, const CreateContractByUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContractByUploadOutcomeCallable CreateContractByUploadCallable(const Model::CreateContractByUploadRequest& request);

                /**
                 *为企业电子合同平台的最终企业用户进行开户。在企业电子合同平台进行操作的企业用户，企业电子合同平台向腾讯云发送企业用户的信息，提交开户命令。腾讯云接到请求后，自动为企业电子合同平台的企业用户生成一张数字证书。
                 * @param req CreateEnterpriseAccountRequest
                 * @return CreateEnterpriseAccountOutcome
                 */
                CreateEnterpriseAccountOutcome CreateEnterpriseAccount(const Model::CreateEnterpriseAccountRequest &request);
                void CreateEnterpriseAccountAsync(const Model::CreateEnterpriseAccountRequest& request, const CreateEnterpriseAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnterpriseAccountOutcomeCallable CreateEnterpriseAccountCallable(const Model::CreateEnterpriseAccountRequest& request);

                /**
                 *为企业电子合同平台的最终个人用户进行开户。在企业电子合同平台进行操作的个人用户，企业电子合同平台向腾讯云发送个人用户的信息，提交开户命令。腾讯云接到请求后，自动为企业电子合同平台的个人用户生成一张数字证书。
                 * @param req CreatePersonalAccountRequest
                 * @return CreatePersonalAccountOutcome
                 */
                CreatePersonalAccountOutcome CreatePersonalAccount(const Model::CreatePersonalAccountRequest &request);
                void CreatePersonalAccountAsync(const Model::CreatePersonalAccountRequest& request, const CreatePersonalAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonalAccountOutcomeCallable CreatePersonalAccountCallable(const Model::CreatePersonalAccountRequest& request);

                /**
                 *此接口用于客户电子合同平台增加某用户的印章图片。客户平台可以调用此接口增加某用户的印章图片。
                 * @param req CreateSealRequest
                 * @return CreateSealOutcome
                 */
                CreateSealOutcome CreateSeal(const Model::CreateSealRequest &request);
                void CreateSealAsync(const Model::CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealOutcomeCallable CreateSealCallable(const Model::CreateSealRequest& request);

                /**
                 *删除企业电子合同平台的最终用户。调用该接口后，腾讯云将删除该用户账号。删除账号后，已经签名的合同不受影响。
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *删除印章接口，删除指定账号的某个印章
                 * @param req DeleteSealRequest
                 * @return DeleteSealOutcome
                 */
                DeleteSealOutcome DeleteSeal(const Model::DeleteSealRequest &request);
                void DeleteSealAsync(const Model::DeleteSealRequest& request, const DeleteSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSealOutcomeCallable DeleteSealCallable(const Model::DeleteSealRequest& request);

                /**
                 *接口使用于：客户平台可使用该接口查询任务执行状态或者执行结果
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *下载合同接口。调用该接口可以下载签署中和签署完成的合同。接口返回任务号，可调用DescribeTaskStatus接口查看任务执行结果。
                 * @param req DownloadContractRequest
                 * @return DownloadContractOutcome
                 */
                DownloadContractOutcome DownloadContract(const Model::DownloadContractRequest &request);
                void DownloadContractAsync(const Model::DownloadContractRequest& request, const DownloadContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadContractOutcomeCallable DownloadContractCallable(const Model::DownloadContractRequest& request);

                /**
                 *发送验证码接口。此接口用于：企业电子合同平台需要腾讯云发送验证码对其用户进行验证时调用，腾讯云将向其用户联系手机(企业电子合同平台为用户开户时通过接口传入)发送验证码，以验证码授权方式签署合同。用户验证工作由企业电子合同平台自身完成。
                 * @param req SendVcodeRequest
                 * @return SendVcodeOutcome
                 */
                SendVcodeOutcome SendVcode(const Model::SendVcodeRequest &request);
                void SendVcodeAsync(const Model::SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendVcodeOutcomeCallable SendVcodeCallable(const Model::SendVcodeRequest& request);

                /**
                 *此接口适用于：客户平台在创建好合同后，由合同签署方对创建的合同内容进行确认，无误后再进行签署。客户平台使用该接口提供详细的PDF文档签名坐标进行签署。
                 * @param req SignContractByCoordinateRequest
                 * @return SignContractByCoordinateOutcome
                 */
                SignContractByCoordinateOutcome SignContractByCoordinate(const Model::SignContractByCoordinateRequest &request);
                void SignContractByCoordinateAsync(const Model::SignContractByCoordinateRequest& request, const SignContractByCoordinateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignContractByCoordinateOutcomeCallable SignContractByCoordinateCallable(const Model::SignContractByCoordinateRequest& request);

                /**
                 *此接口适用于：客户平台在创建好合同后，由合同签署方对创建的合同内容进行确认，无误后再进行签署。客户平台使用该接口对PDF合同文档按照关键字和坐标进行签署。
                 * @param req SignContractByKeywordRequest
                 * @return SignContractByKeywordOutcome
                 */
                SignContractByKeywordOutcome SignContractByKeyword(const Model::SignContractByKeywordRequest &request);
                void SignContractByKeywordAsync(const Model::SignContractByKeywordRequest& request, const SignContractByKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignContractByKeywordOutcomeCallable SignContractByKeywordCallable(const Model::SignContractByKeywordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_DSCLIENT_H_
