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

#ifndef TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_
#define TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            class EcmClient : public AbstractClient
            {
            public:
                EcmClient(const Credential &credential, const std::string &region);
                EcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateModuleResponse> CreateModuleOutcome;
                typedef std::future<CreateModuleOutcome> CreateModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateModuleRequest&, CreateModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Error, Model::DeleteModuleResponse> DeleteModuleOutcome;
                typedef std::future<DeleteModuleOutcome> DeleteModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteModuleRequest&, DeleteModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeBaseOverviewResponse> DescribeBaseOverviewOutcome;
                typedef std::future<DescribeBaseOverviewOutcome> DescribeBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeBaseOverviewRequest&, DescribeBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceTypeConfigResponse> DescribeInstanceTypeConfigOutcome;
                typedef std::future<DescribeInstanceTypeConfigOutcome> DescribeInstanceTypeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceTypeConfigRequest&, DescribeInstanceTypeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeModuleResponse> DescribeModuleOutcome;
                typedef std::future<DescribeModuleOutcome> DescribeModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleRequest&, DescribeModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeModuleDetailResponse> DescribeModuleDetailOutcome;
                typedef std::future<DescribeModuleDetailOutcome> DescribeModuleDetailOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleDetailRequest&, DescribeModuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeNodeResponse> DescribeNodeOutcome;
                typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeNodeRequest&, DescribeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeAsyncHandler;
                typedef Outcome<Error, Model::DescribePeakBaseOverviewResponse> DescribePeakBaseOverviewOutcome;
                typedef std::future<DescribePeakBaseOverviewOutcome> DescribePeakBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakBaseOverviewRequest&, DescribePeakBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakBaseOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribePeakNetworkOverviewResponse> DescribePeakNetworkOverviewOutcome;
                typedef std::future<DescribePeakNetworkOverviewOutcome> DescribePeakNetworkOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakNetworkOverviewRequest&, DescribePeakNetworkOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakNetworkOverviewAsyncHandler;
                typedef Outcome<Error, Model::ImportImageResponse> ImportImageOutcome;
                typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ImportImageRequest&, ImportImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleImageResponse> ModifyModuleImageOutcome;
                typedef std::future<ModifyModuleImageOutcome> ModifyModuleImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleImageRequest&, ModifyModuleImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleImageAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNameResponse> ModifyModuleNameOutcome;
                typedef std::future<ModifyModuleNameOutcome> ModifyModuleNameOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNameRequest&, ModifyModuleNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNetworkResponse> ModifyModuleNetworkOutcome;
                typedef std::future<ModifyModuleNetworkOutcome> ModifyModuleNetworkOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNetworkRequest&, ModifyModuleNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNetworkAsyncHandler;
                typedef Outcome<Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesResponse> ResetInstancesOutcome;
                typedef std::future<ResetInstancesOutcome> ResetInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesRequest&, ResetInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesMaxBandwidthResponse> ResetInstancesMaxBandwidthOutcome;
                typedef std::future<ResetInstancesMaxBandwidthOutcome> ResetInstancesMaxBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesMaxBandwidthRequest&, ResetInstancesMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *创建模块
                 * @param req CreateModuleRequest
                 * @return CreateModuleOutcome
                 */
                CreateModuleOutcome CreateModule(const Model::CreateModuleRequest &request);
                void CreateModuleAsync(const Model::CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModuleOutcomeCallable CreateModuleCallable(const Model::CreateModuleRequest& request);

                /**
                 *删除镜像
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

                /**
                 *删除业务模块
                 * @param req DeleteModuleRequest
                 * @return DeleteModuleOutcome
                 */
                DeleteModuleOutcome DeleteModule(const Model::DeleteModuleRequest &request);
                void DeleteModuleAsync(const Model::DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModuleOutcomeCallable DeleteModuleCallable(const Model::DeleteModuleRequest& request);

                /**
                 *获取概览页统计的基本数据
                 * @param req DescribeBaseOverviewRequest
                 * @return DescribeBaseOverviewOutcome
                 */
                DescribeBaseOverviewOutcome DescribeBaseOverview(const Model::DescribeBaseOverviewRequest &request);
                void DescribeBaseOverviewAsync(const Model::DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseOverviewOutcomeCallable DescribeBaseOverviewCallable(const Model::DescribeBaseOverviewRequest& request);

                /**
                 *获取带宽硬盘等数据的限制
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *展示镜像列表
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *获取机型配置列表
                 * @param req DescribeInstanceTypeConfigRequest
                 * @return DescribeInstanceTypeConfigOutcome
                 */
                DescribeInstanceTypeConfigOutcome DescribeInstanceTypeConfig(const Model::DescribeInstanceTypeConfigRequest &request);
                void DescribeInstanceTypeConfigAsync(const Model::DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypeConfigOutcomeCallable DescribeInstanceTypeConfigCallable(const Model::DescribeInstanceTypeConfigRequest& request);

                /**
                 *获取实例的相关信息。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *通过实例id获取当前禁止的操作
                 * @param req DescribeInstancesDeniedActionsRequest
                 * @return DescribeInstancesDeniedActionsOutcome
                 */
                DescribeInstancesDeniedActionsOutcome DescribeInstancesDeniedActions(const Model::DescribeInstancesDeniedActionsRequest &request);
                void DescribeInstancesDeniedActionsAsync(const Model::DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDeniedActionsOutcomeCallable DescribeInstancesDeniedActionsCallable(const Model::DescribeInstancesDeniedActionsRequest& request);

                /**
                 *获取模块列表
                 * @param req DescribeModuleRequest
                 * @return DescribeModuleOutcome
                 */
                DescribeModuleOutcome DescribeModule(const Model::DescribeModuleRequest &request);
                void DescribeModuleAsync(const Model::DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleOutcomeCallable DescribeModuleCallable(const Model::DescribeModuleRequest& request);

                /**
                 *展示模块详细信息
                 * @param req DescribeModuleDetailRequest
                 * @return DescribeModuleDetailOutcome
                 */
                DescribeModuleDetailOutcome DescribeModuleDetail(const Model::DescribeModuleDetailRequest &request);
                void DescribeModuleDetailAsync(const Model::DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleDetailOutcomeCallable DescribeModuleDetailCallable(const Model::DescribeModuleDetailRequest& request);

                /**
                 *获取节点列表
                 * @param req DescribeNodeRequest
                 * @return DescribeNodeOutcome
                 */
                DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest &request);
                void DescribeNodeAsync(const Model::DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeOutcomeCallable DescribeNodeCallable(const Model::DescribeNodeRequest& request);

                /**
                 *CPU 内存 硬盘等基础信息峰值数据
                 * @param req DescribePeakBaseOverviewRequest
                 * @return DescribePeakBaseOverviewOutcome
                 */
                DescribePeakBaseOverviewOutcome DescribePeakBaseOverview(const Model::DescribePeakBaseOverviewRequest &request);
                void DescribePeakBaseOverviewAsync(const Model::DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakBaseOverviewOutcomeCallable DescribePeakBaseOverviewCallable(const Model::DescribePeakBaseOverviewRequest& request);

                /**
                 *获取网络峰值数据
                 * @param req DescribePeakNetworkOverviewRequest
                 * @return DescribePeakNetworkOverviewOutcome
                 */
                DescribePeakNetworkOverviewOutcome DescribePeakNetworkOverview(const Model::DescribePeakNetworkOverviewRequest &request);
                void DescribePeakNetworkOverviewAsync(const Model::DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakNetworkOverviewOutcomeCallable DescribePeakNetworkOverviewCallable(const Model::DescribePeakNetworkOverviewRequest& request);

                /**
                 *从CVM产品导入镜像到ECM
                 * @param req ImportImageRequest
                 * @return ImportImageOutcome
                 */
                ImportImageOutcome ImportImage(const Model::ImportImageRequest &request);
                void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request);

                /**
                 *修改实例的属性。
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *ModifyModuleImage
                 * @param req ModifyModuleImageRequest
                 * @return ModifyModuleImageOutcome
                 */
                ModifyModuleImageOutcome ModifyModuleImage(const Model::ModifyModuleImageRequest &request);
                void ModifyModuleImageAsync(const Model::ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleImageOutcomeCallable ModifyModuleImageCallable(const Model::ModifyModuleImageRequest& request);

                /**
                 *修改模块名称
                 * @param req ModifyModuleNameRequest
                 * @return ModifyModuleNameOutcome
                 */
                ModifyModuleNameOutcome ModifyModuleName(const Model::ModifyModuleNameRequest &request);
                void ModifyModuleNameAsync(const Model::ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNameOutcomeCallable ModifyModuleNameCallable(const Model::ModifyModuleNameRequest& request);

                /**
                 *修改模块默认带宽上限
                 * @param req ModifyModuleNetworkRequest
                 * @return ModifyModuleNetworkOutcome
                 */
                ModifyModuleNetworkOutcome ModifyModuleNetwork(const Model::ModifyModuleNetworkRequest &request);
                void ModifyModuleNetworkAsync(const Model::ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNetworkOutcomeCallable ModifyModuleNetworkCallable(const Model::ModifyModuleNetworkRequest& request);

                /**
                 *只有状态为RUNNING的实例才可以进行此操作；接口调用成功时，实例会进入REBOOTING状态；重启实例成功时，实例会进入RUNNING状态；支持强制重启，强制重启的效果等同于关闭物理计算机的电源开关再重新启动。强制重启可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常重启时使用。
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *重装实例，若指定了ImageId参数，则使用指定的镜像重装；否则按照当前实例使用的镜像进行重装；若未指定密码，则密码通过站内信形式随后发送。
                 * @param req ResetInstancesRequest
                 * @return ResetInstancesOutcome
                 */
                ResetInstancesOutcome ResetInstances(const Model::ResetInstancesRequest &request);
                void ResetInstancesAsync(const Model::ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesOutcomeCallable ResetInstancesCallable(const Model::ResetInstancesRequest& request);

                /**
                 *重置实例的最大带宽上限。
                 * @param req ResetInstancesMaxBandwidthRequest
                 * @return ResetInstancesMaxBandwidthOutcome
                 */
                ResetInstancesMaxBandwidthOutcome ResetInstancesMaxBandwidth(const Model::ResetInstancesMaxBandwidthRequest &request);
                void ResetInstancesMaxBandwidthAsync(const Model::ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesMaxBandwidthOutcomeCallable ResetInstancesMaxBandwidthCallable(const Model::ResetInstancesMaxBandwidthRequest& request);

                /**
                 *销毁实例
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_
