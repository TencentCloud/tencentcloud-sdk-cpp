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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateRequest.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateResponse.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFilesResponse.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            class EssbasicClient : public AbstractClient
            {
            public:
                EssbasicClient(const Credential &credential, const std::string &region);
                EssbasicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChannelCancelMultiFlowSignQRCodeResponse> ChannelCancelMultiFlowSignQRCodeOutcome;
                typedef std::future<ChannelCancelMultiFlowSignQRCodeOutcome> ChannelCancelMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCancelMultiFlowSignQRCodeRequest&, ChannelCancelMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCancelMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBatchCancelFlowUrlResponse> ChannelCreateBatchCancelFlowUrlOutcome;
                typedef std::future<ChannelCreateBatchCancelFlowUrlOutcome> ChannelCreateBatchCancelFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBatchCancelFlowUrlRequest&, ChannelCreateBatchCancelFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBatchCancelFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateConvertTaskApiResponse> ChannelCreateConvertTaskApiOutcome;
                typedef std::future<ChannelCreateConvertTaskApiOutcome> ChannelCreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateConvertTaskApiRequest&, ChannelCreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowByFilesResponse> ChannelCreateFlowByFilesOutcome;
                typedef std::future<ChannelCreateFlowByFilesOutcome> ChannelCreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowByFilesRequest&, ChannelCreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateMultiFlowSignQRCodeResponse> ChannelCreateMultiFlowSignQRCodeOutcome;
                typedef std::future<ChannelCreateMultiFlowSignQRCodeOutcome> ChannelCreateMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateMultiFlowSignQRCodeRequest&, ChannelCreateMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelGetTaskResultApiResponse> ChannelGetTaskResultApiOutcome;
                typedef std::future<ChannelGetTaskResultApiOutcome> ChannelGetTaskResultApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelGetTaskResultApiRequest&, ChannelGetTaskResultApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelGetTaskResultApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleLoginUrlResponse> CreateConsoleLoginUrlOutcome;
                typedef std::future<CreateConsoleLoginUrlOutcome> CreateConsoleLoginUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateConsoleLoginUrlRequest&, CreateConsoleLoginUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleLoginUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowsByTemplatesResponse> CreateFlowsByTemplatesOutcome;
                typedef std::future<CreateFlowsByTemplatesOutcome> CreateFlowsByTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowsByTemplatesRequest&, CreateFlowsByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowsByTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealByImageResponse> CreateSealByImageOutcome;
                typedef std::future<CreateSealByImageOutcome> CreateSealByImageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSealByImageRequest&, CreateSealByImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealByImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignUrlsResponse> CreateSignUrlsOutcome;
                typedef std::future<CreateSignUrlsOutcome> CreateSignUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSignUrlsRequest&, CreateSignUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowDetailInfoResponse> DescribeFlowDetailInfoOutcome;
                typedef std::future<DescribeFlowDetailInfoOutcome> DescribeFlowDetailInfoOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFlowDetailInfoRequest&, DescribeFlowDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUrlsByFlowsResponse> DescribeResourceUrlsByFlowsOutcome;
                typedef std::future<DescribeResourceUrlsByFlowsOutcome> DescribeResourceUrlsByFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeResourceUrlsByFlowsRequest&, DescribeResourceUrlsByFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUrlsByFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplatesResponse> DescribeTemplatesOutcome;
                typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeTemplatesRequest&, DescribeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageResponse> DescribeUsageOutcome;
                typedef std::future<DescribeUsageOutcome> DescribeUsageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeUsageRequest&, DescribeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDownloadFlowUrlResponse> GetDownloadFlowUrlOutcome;
                typedef std::future<GetDownloadFlowUrlOutcome> GetDownloadFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::GetDownloadFlowUrlRequest&, GetDownloadFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDownloadFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateChannelTemplateResponse> OperateChannelTemplateOutcome;
                typedef std::future<OperateChannelTemplateOutcome> OperateChannelTemplateOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::OperateChannelTemplateRequest&, OperateChannelTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateChannelTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::PrepareFlowsResponse> PrepareFlowsOutcome;
                typedef std::future<PrepareFlowsOutcome> PrepareFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::PrepareFlowsRequest&, PrepareFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PrepareFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationResponse> SyncProxyOrganizationOutcome;
                typedef std::future<SyncProxyOrganizationOutcome> SyncProxyOrganizationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationRequest&, SyncProxyOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationOperatorsResponse> SyncProxyOrganizationOperatorsOutcome;
                typedef std::future<SyncProxyOrganizationOperatorsOutcome> SyncProxyOrganizationOperatorsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationOperatorsRequest&, SyncProxyOrganizationOperatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationOperatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;



                /**
                 *此接口（ChannelCancelMultiFlowSignQRCode）用于取消一码多扫二维码。该接口对传入的二维码ID，若还在有效期内，可以提前失效。
                 * @param req ChannelCancelMultiFlowSignQRCodeRequest
                 * @return ChannelCancelMultiFlowSignQRCodeOutcome
                 */
                ChannelCancelMultiFlowSignQRCodeOutcome ChannelCancelMultiFlowSignQRCode(const Model::ChannelCancelMultiFlowSignQRCodeRequest &request);
                void ChannelCancelMultiFlowSignQRCodeAsync(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request, const ChannelCancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelMultiFlowSignQRCodeOutcomeCallable ChannelCancelMultiFlowSignQRCodeCallable(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request);

                /**
                 *指定需要批量撤销的签署流程Id，获取批量撤销链接
客户指定需要撤销的签署流程Id，最多100个，超过100不处理；接口调用成功返回批量撤销合同的链接，通过链接跳转到电子签小程序完成批量撤销
                 * @param req ChannelCreateBatchCancelFlowUrlRequest
                 * @return ChannelCreateBatchCancelFlowUrlOutcome
                 */
                ChannelCreateBatchCancelFlowUrlOutcome ChannelCreateBatchCancelFlowUrl(const Model::ChannelCreateBatchCancelFlowUrlRequest &request);
                void ChannelCreateBatchCancelFlowUrlAsync(const Model::ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchCancelFlowUrlOutcomeCallable ChannelCreateBatchCancelFlowUrlCallable(const Model::ChannelCreateBatchCancelFlowUrlRequest& request);

                /**
                 *渠道创建文件转换任务
                 * @param req ChannelCreateConvertTaskApiRequest
                 * @return ChannelCreateConvertTaskApiOutcome
                 */
                ChannelCreateConvertTaskApiOutcome ChannelCreateConvertTaskApi(const Model::ChannelCreateConvertTaskApiRequest &request);
                void ChannelCreateConvertTaskApiAsync(const Model::ChannelCreateConvertTaskApiRequest& request, const ChannelCreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateConvertTaskApiOutcomeCallable ChannelCreateConvertTaskApiCallable(const Model::ChannelCreateConvertTaskApiRequest& request);

                /**
                 *接口（ChannelCreateFlowByFiles）用于渠道版通过文件创建签署流程。此接口不可直接使用，需要运营申请
                 * @param req ChannelCreateFlowByFilesRequest
                 * @return ChannelCreateFlowByFilesOutcome
                 */
                ChannelCreateFlowByFilesOutcome ChannelCreateFlowByFiles(const Model::ChannelCreateFlowByFilesRequest &request);
                void ChannelCreateFlowByFilesAsync(const Model::ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowByFilesOutcomeCallable ChannelCreateFlowByFilesCallable(const Model::ChannelCreateFlowByFilesRequest& request);

                /**
                 *此接口（ChannelCreateMultiFlowSignQRCode）用于创建一码多扫签署流程二维码。
适用的模版仅限于B2C（1、无序签署，2、顺序签署时B静默签署，3、顺序签署时B非首位签署）、单C的模版，且模版中发起方没有填写控件。
                 * @param req ChannelCreateMultiFlowSignQRCodeRequest
                 * @return ChannelCreateMultiFlowSignQRCodeOutcome
                 */
                ChannelCreateMultiFlowSignQRCodeOutcome ChannelCreateMultiFlowSignQRCode(const Model::ChannelCreateMultiFlowSignQRCodeRequest &request);
                void ChannelCreateMultiFlowSignQRCodeAsync(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateMultiFlowSignQRCodeOutcomeCallable ChannelCreateMultiFlowSignQRCodeCallable(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request);

                /**
                 *渠道版查询转换任务状态
                 * @param req ChannelGetTaskResultApiRequest
                 * @return ChannelGetTaskResultApiOutcome
                 */
                ChannelGetTaskResultApiOutcome ChannelGetTaskResultApi(const Model::ChannelGetTaskResultApiRequest &request);
                void ChannelGetTaskResultApiAsync(const Model::ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelGetTaskResultApiOutcomeCallable ChannelGetTaskResultApiCallable(const Model::ChannelGetTaskResultApiRequest& request);

                /**
                 *此接口（CreateConsoleLoginUrl）用于创建电子签控制台登录链接。若企业未激活，调用同步企业信息、同步经办人信息

                 * @param req CreateConsoleLoginUrlRequest
                 * @return CreateConsoleLoginUrlOutcome
                 */
                CreateConsoleLoginUrlOutcome CreateConsoleLoginUrl(const Model::CreateConsoleLoginUrlRequest &request);
                void CreateConsoleLoginUrlAsync(const Model::CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleLoginUrlOutcomeCallable CreateConsoleLoginUrlCallable(const Model::CreateConsoleLoginUrlRequest& request);

                /**
                 *接口（CreateFlowsByTemplates）用于使用多个模板批量创建签署流程。当前可批量发起合同（签署流程）数量最大为20个。

                 * @param req CreateFlowsByTemplatesRequest
                 * @return CreateFlowsByTemplatesOutcome
                 */
                CreateFlowsByTemplatesOutcome CreateFlowsByTemplates(const Model::CreateFlowsByTemplatesRequest &request);
                void CreateFlowsByTemplatesAsync(const Model::CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowsByTemplatesOutcomeCallable CreateFlowsByTemplatesCallable(const Model::CreateFlowsByTemplatesRequest& request);

                /**
                 *渠道通过图片为子客代创建印章，图片最大5m；此接口不可直接使用，需要运营申请
                 * @param req CreateSealByImageRequest
                 * @return CreateSealByImageOutcome
                 */
                CreateSealByImageOutcome CreateSealByImage(const Model::CreateSealByImageRequest &request);
                void CreateSealByImageAsync(const Model::CreateSealByImageRequest& request, const CreateSealByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealByImageOutcomeCallable CreateSealByImageCallable(const Model::CreateSealByImageRequest& request);

                /**
                 *创建跳转小程序查看或签署的链接；自动签署的签署方不创建签署链接；
                 * @param req CreateSignUrlsRequest
                 * @return CreateSignUrlsOutcome
                 */
                CreateSignUrlsOutcome CreateSignUrls(const Model::CreateSignUrlsRequest &request);
                void CreateSignUrlsAsync(const Model::CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignUrlsOutcomeCallable CreateSignUrlsCallable(const Model::CreateSignUrlsRequest& request);

                /**
                 *此接口（DescribeFlowDetailInfo）用于查询合同(签署流程)的详细信息。
                 * @param req DescribeFlowDetailInfoRequest
                 * @return DescribeFlowDetailInfoOutcome
                 */
                DescribeFlowDetailInfoOutcome DescribeFlowDetailInfo(const Model::DescribeFlowDetailInfoRequest &request);
                void DescribeFlowDetailInfoAsync(const Model::DescribeFlowDetailInfoRequest& request, const DescribeFlowDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowDetailInfoOutcomeCallable DescribeFlowDetailInfoCallable(const Model::DescribeFlowDetailInfoRequest& request);

                /**
                 *根据签署流程信息批量获取资源下载链接，需合作企业先进行授权
                 * @param req DescribeResourceUrlsByFlowsRequest
                 * @return DescribeResourceUrlsByFlowsOutcome
                 */
                DescribeResourceUrlsByFlowsOutcome DescribeResourceUrlsByFlows(const Model::DescribeResourceUrlsByFlowsRequest &request);
                void DescribeResourceUrlsByFlowsAsync(const Model::DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUrlsByFlowsOutcomeCallable DescribeResourceUrlsByFlowsCallable(const Model::DescribeResourceUrlsByFlowsRequest& request);

                /**
                 *通过此接口（DescribeTemplates）查询该企业在电子签渠道版中配置的有效模板列表
                 * @param req DescribeTemplatesRequest
                 * @return DescribeTemplatesOutcome
                 */
                DescribeTemplatesOutcome DescribeTemplates(const Model::DescribeTemplatesRequest &request);
                void DescribeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplatesOutcomeCallable DescribeTemplatesCallable(const Model::DescribeTemplatesRequest& request);

                /**
                 *此接口（DescribeUsage）用于获取渠道所有合作企业流量消耗情况。
 注: 此接口每日限频2次，若要扩大限制次数,请提前与客服经理或邮件至e-contract@tencent.com进行联系。
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *此接口（GetDownloadFlowUrl）用于创建电子签批量下载地址，让合作企业进入控制台直接下载，支持客户合同（流程）按照自定义文件夹形式 分类下载。
当前接口限制最多合同（流程）50个.

                 * @param req GetDownloadFlowUrlRequest
                 * @return GetDownloadFlowUrlOutcome
                 */
                GetDownloadFlowUrlOutcome GetDownloadFlowUrl(const Model::GetDownloadFlowUrlRequest &request);
                void GetDownloadFlowUrlAsync(const Model::GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDownloadFlowUrlOutcomeCallable GetDownloadFlowUrlCallable(const Model::GetDownloadFlowUrlRequest& request);

                /**
                 *此接口（OperateChannelTemplate）用于渠道侧将模板库中的模板对合作企业进行查询和设置, 其中包括可见性的修改以及对合作企业的设置.
1、同步标识=select时：
返回渠道侧模板库当前模板的属性.
2、同步标识=update或者delete时：
对渠道子客进行模板库中模板授权,修改操作
                 * @param req OperateChannelTemplateRequest
                 * @return OperateChannelTemplateOutcome
                 */
                OperateChannelTemplateOutcome OperateChannelTemplate(const Model::OperateChannelTemplateRequest &request);
                void OperateChannelTemplateAsync(const Model::OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateChannelTemplateOutcomeCallable OperateChannelTemplateCallable(const Model::OperateChannelTemplateRequest& request);

                /**
                 *该接口 (PrepareFlows) 用于创建待发起文件
用户通过该接口进入签署流程发起的确认页面，进行发起信息二次确认， 如果确认则进行正常发起。
目前该接口只支持B2C，不建议使用。
                 * @param req PrepareFlowsRequest
                 * @return PrepareFlowsOutcome
                 */
                PrepareFlowsOutcome PrepareFlows(const Model::PrepareFlowsRequest &request);
                void PrepareFlowsAsync(const Model::PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PrepareFlowsOutcomeCallable PrepareFlowsCallable(const Model::PrepareFlowsRequest& request);

                /**
                 *此接口（SyncProxyOrganization）用于同步渠道侧企业信息
                 * @param req SyncProxyOrganizationRequest
                 * @return SyncProxyOrganizationOutcome
                 */
                SyncProxyOrganizationOutcome SyncProxyOrganization(const Model::SyncProxyOrganizationRequest &request);
                void SyncProxyOrganizationAsync(const Model::SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOutcomeCallable SyncProxyOrganizationCallable(const Model::SyncProxyOrganizationRequest& request);

                /**
                 *此接口（SyncProxyOrganizationOperators）用于同步渠道合作企业经办人列表
                 * @param req SyncProxyOrganizationOperatorsRequest
                 * @return SyncProxyOrganizationOperatorsOutcome
                 */
                SyncProxyOrganizationOperatorsOutcome SyncProxyOrganizationOperators(const Model::SyncProxyOrganizationOperatorsRequest &request);
                void SyncProxyOrganizationOperatorsAsync(const Model::SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOperatorsOutcomeCallable SyncProxyOrganizationOperatorsCallable(const Model::SyncProxyOrganizationOperatorsRequest& request);

                /**
                 *此接口（UploadFiles）用于文件上传。
调用时需要设置Domain 为 file.ess.tencent.cn
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

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
