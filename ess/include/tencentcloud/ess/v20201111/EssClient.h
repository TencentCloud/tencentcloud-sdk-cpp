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

#ifndef TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_
#define TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ess/v20201111/model/CancelFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/StartFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/StartFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/UploadFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/UploadFilesResponse.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            class EssClient : public AbstractClient
            {
            public:
                EssClient(const Credential &credential, const std::string &region);
                EssClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelFlowResponse> CancelFlowOutcome;
                typedef std::future<CancelFlowOutcome> CancelFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelFlowRequest&, CancelFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelMultiFlowSignQRCodeResponse> CancelMultiFlowSignQRCodeOutcome;
                typedef std::future<CancelMultiFlowSignQRCodeOutcome> CancelMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelMultiFlowSignQRCodeRequest&, CancelMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowResponse> CreateFlowOutcome;
                typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowRequest&, CreateFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowByFilesResponse> CreateFlowByFilesOutcome;
                typedef std::future<CreateFlowByFilesOutcome> CreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowByFilesRequest&, CreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiFlowSignQRCodeResponse> CreateMultiFlowSignQRCodeOutcome;
                typedef std::future<CreateMultiFlowSignQRCodeOutcome> CreateMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateMultiFlowSignQRCodeRequest&, CreateMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchemeUrlResponse> CreateSchemeUrlOutcome;
                typedef std::future<CreateSchemeUrlOutcome> CreateSchemeUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSchemeUrlRequest&, CreateSchemeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileUrlsResponse> DescribeFileUrlsOutcome;
                typedef std::future<DescribeFileUrlsOutcome> DescribeFileUrlsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFileUrlsRequest&, DescribeFileUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowBriefsResponse> DescribeFlowBriefsOutcome;
                typedef std::future<DescribeFlowBriefsOutcome> DescribeFlowBriefsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowBriefsRequest&, DescribeFlowBriefsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowBriefsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowTemplatesResponse> DescribeFlowTemplatesOutcome;
                typedef std::future<DescribeFlowTemplatesOutcome> DescribeFlowTemplatesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowTemplatesRequest&, DescribeFlowTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdPartyAuthCodeResponse> DescribeThirdPartyAuthCodeOutcome;
                typedef std::future<DescribeThirdPartyAuthCodeOutcome> DescribeThirdPartyAuthCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeThirdPartyAuthCodeRequest&, DescribeThirdPartyAuthCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdPartyAuthCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartFlowResponse> StartFlowOutcome;
                typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::StartFlowRequest&, StartFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;



                /**
                 *用于撤销流程
                 * @param req CancelFlowRequest
                 * @return CancelFlowOutcome
                 */
                CancelFlowOutcome CancelFlow(const Model::CancelFlowRequest &request);
                void CancelFlowAsync(const Model::CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFlowOutcomeCallable CancelFlowCallable(const Model::CancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于取消一码多扫二维码。该接口对传入的二维码ID，若还在有效期内，可以提前失效。
                 * @param req CancelMultiFlowSignQRCodeRequest
                 * @return CancelMultiFlowSignQRCodeOutcome
                 */
                CancelMultiFlowSignQRCodeOutcome CancelMultiFlowSignQRCode(const Model::CancelMultiFlowSignQRCodeRequest &request);
                void CancelMultiFlowSignQRCodeAsync(const Model::CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelMultiFlowSignQRCodeOutcomeCallable CancelMultiFlowSignQRCodeCallable(const Model::CancelMultiFlowSignQRCodeRequest& request);

                /**
                 *创建电子文档
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *创建签署流程
                 * @param req CreateFlowRequest
                 * @return CreateFlowOutcome
                 */
                CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest &request);
                void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request);

                /**
                 *此接口（CreateFlowByFiles）用来通过上传后的pdf资源编号来创建流程。
                 * @param req CreateFlowByFilesRequest
                 * @return CreateFlowByFilesOutcome
                 */
                CreateFlowByFilesOutcome CreateFlowByFiles(const Model::CreateFlowByFilesRequest &request);
                void CreateFlowByFilesAsync(const Model::CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowByFilesOutcomeCallable CreateFlowByFilesCallable(const Model::CreateFlowByFilesRequest& request);

                /**
                 *此接口（CreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。
适用的模版仅限于B2C（1、无序签署，2、顺序签署时B静默签署，3、顺序签署时B非首位签署）、单C的模版，且模版中发起方没有填写控件。
                 * @param req CreateMultiFlowSignQRCodeRequest
                 * @return CreateMultiFlowSignQRCodeOutcome
                 */
                CreateMultiFlowSignQRCodeOutcome CreateMultiFlowSignQRCode(const Model::CreateMultiFlowSignQRCodeRequest &request);
                void CreateMultiFlowSignQRCodeAsync(const Model::CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiFlowSignQRCodeOutcomeCallable CreateMultiFlowSignQRCodeCallable(const Model::CreateMultiFlowSignQRCodeRequest& request);

                /**
                 *获取小程序跳转链接

跳转到小程序的实现，参考官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式）


如您需要自主配置小程序跳转链接，请参考: <a href="https://tcloud-doc.isd.com/document/product/1323/74774">跳转小程序链接配置说明</a>
                 * @param req CreateSchemeUrlRequest
                 * @return CreateSchemeUrlOutcome
                 */
                CreateSchemeUrlOutcome CreateSchemeUrl(const Model::CreateSchemeUrlRequest &request);
                void CreateSchemeUrlAsync(const Model::CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchemeUrlOutcomeCallable CreateSchemeUrlCallable(const Model::CreateSchemeUrlRequest& request);

                /**
                 *查询文件下载URL
                 * @param req DescribeFileUrlsRequest
                 * @return DescribeFileUrlsOutcome
                 */
                DescribeFileUrlsOutcome DescribeFileUrls(const Model::DescribeFileUrlsRequest &request);
                void DescribeFileUrlsAsync(const Model::DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileUrlsOutcomeCallable DescribeFileUrlsCallable(const Model::DescribeFileUrlsRequest& request);

                /**
                 *查询流程摘要
                 * @param req DescribeFlowBriefsRequest
                 * @return DescribeFlowBriefsOutcome
                 */
                DescribeFlowBriefsOutcome DescribeFlowBriefs(const Model::DescribeFlowBriefsRequest &request);
                void DescribeFlowBriefsAsync(const Model::DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowBriefsOutcomeCallable DescribeFlowBriefsCallable(const Model::DescribeFlowBriefsRequest& request);

                /**
                 *二期接口-查询模板
                 * @param req DescribeFlowTemplatesRequest
                 * @return DescribeFlowTemplatesOutcome
                 */
                DescribeFlowTemplatesOutcome DescribeFlowTemplates(const Model::DescribeFlowTemplatesRequest &request);
                void DescribeFlowTemplatesAsync(const Model::DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTemplatesOutcomeCallable DescribeFlowTemplatesCallable(const Model::DescribeFlowTemplatesRequest& request);

                /**
                 *通过AuthCode查询用户是否实名
                 * @param req DescribeThirdPartyAuthCodeRequest
                 * @return DescribeThirdPartyAuthCodeOutcome
                 */
                DescribeThirdPartyAuthCodeOutcome DescribeThirdPartyAuthCode(const Model::DescribeThirdPartyAuthCodeRequest &request);
                void DescribeThirdPartyAuthCodeAsync(const Model::DescribeThirdPartyAuthCodeRequest& request, const DescribeThirdPartyAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThirdPartyAuthCodeOutcomeCallable DescribeThirdPartyAuthCodeCallable(const Model::DescribeThirdPartyAuthCodeRequest& request);

                /**
                 *此接口用于发起流程
                 * @param req StartFlowRequest
                 * @return StartFlowOutcome
                 */
                StartFlowOutcome StartFlow(const Model::StartFlowRequest &request);
                void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request);

                /**
                 *此接口（UploadFiles）用于文件上传。
调用时需要设置Domain 为 file.ess.tencent.cn，设置Version为2020-12-22
                 * @param req UploadFilesRequest
                 * @return UploadFilesOutcome
                 */
                UploadFilesOutcome UploadFiles(const Model::UploadFilesRequest &request);
                void UploadFilesAsync(const Model::UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesOutcomeCallable UploadFilesCallable(const Model::UploadFilesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_
