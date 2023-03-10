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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_CLOUDHSMCLIENT_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_CLOUDHSMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeHSMBySubnetIdRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeHSMBySubnetIdResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeHSMByVpcIdRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeHSMByVpcIdResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeSubnetRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeSubnetResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeSupportedHsmRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeSupportedHsmResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeUsgRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeUsgResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeUsgRuleRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeUsgRuleResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVpcRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVpcResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmAttributesRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmAttributesResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmsRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmsResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/GetAlarmEventRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/GetAlarmEventResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/GetVsmMonitorInfoRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/GetVsmMonitorInfoResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/ModifyAlarmEventRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/ModifyAlarmEventResponse.h>
#include <tencentcloud/cloudhsm/v20191112/model/ModifyVsmAttributesRequest.h>
#include <tencentcloud/cloudhsm/v20191112/model/ModifyVsmAttributesResponse.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            class CloudhsmClient : public AbstractClient
            {
            public:
                CloudhsmClient(const Credential &credential, const std::string &region);
                CloudhsmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeHSMBySubnetIdResponse> DescribeHSMBySubnetIdOutcome;
                typedef std::future<DescribeHSMBySubnetIdOutcome> DescribeHSMBySubnetIdOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeHSMBySubnetIdRequest&, DescribeHSMBySubnetIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHSMBySubnetIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHSMByVpcIdResponse> DescribeHSMByVpcIdOutcome;
                typedef std::future<DescribeHSMByVpcIdOutcome> DescribeHSMByVpcIdOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeHSMByVpcIdRequest&, DescribeHSMByVpcIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHSMByVpcIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetResponse> DescribeSubnetOutcome;
                typedef std::future<DescribeSubnetOutcome> DescribeSubnetOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeSubnetRequest&, DescribeSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedHsmResponse> DescribeSupportedHsmOutcome;
                typedef std::future<DescribeSupportedHsmOutcome> DescribeSupportedHsmOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeSupportedHsmRequest&, DescribeSupportedHsmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedHsmAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsgResponse> DescribeUsgOutcome;
                typedef std::future<DescribeUsgOutcome> DescribeUsgOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeUsgRequest&, DescribeUsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsgRuleResponse> DescribeUsgRuleOutcome;
                typedef std::future<DescribeUsgRuleOutcome> DescribeUsgRuleOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeUsgRuleRequest&, DescribeUsgRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsgRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcResponse> DescribeVpcOutcome;
                typedef std::future<DescribeVpcOutcome> DescribeVpcOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeVpcRequest&, DescribeVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVsmAttributesResponse> DescribeVsmAttributesOutcome;
                typedef std::future<DescribeVsmAttributesOutcome> DescribeVsmAttributesOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeVsmAttributesRequest&, DescribeVsmAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsmAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVsmsResponse> DescribeVsmsOutcome;
                typedef std::future<DescribeVsmsOutcome> DescribeVsmsOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::DescribeVsmsRequest&, DescribeVsmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsmsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAlarmEventResponse> GetAlarmEventOutcome;
                typedef std::future<GetAlarmEventOutcome> GetAlarmEventOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::GetAlarmEventRequest&, GetAlarmEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmEventAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVsmMonitorInfoResponse> GetVsmMonitorInfoOutcome;
                typedef std::future<GetVsmMonitorInfoOutcome> GetVsmMonitorInfoOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::GetVsmMonitorInfoRequest&, GetVsmMonitorInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVsmMonitorInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceBuyVsmResponse> InquiryPriceBuyVsmOutcome;
                typedef std::future<InquiryPriceBuyVsmOutcome> InquiryPriceBuyVsmOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::InquiryPriceBuyVsmRequest&, InquiryPriceBuyVsmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceBuyVsmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmEventResponse> ModifyAlarmEventOutcome;
                typedef std::future<ModifyAlarmEventOutcome> ModifyAlarmEventOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::ModifyAlarmEventRequest&, ModifyAlarmEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVsmAttributesResponse> ModifyVsmAttributesOutcome;
                typedef std::future<ModifyVsmAttributesOutcome> ModifyVsmAttributesOutcomeCallable;
                typedef std::function<void(const CloudhsmClient*, const Model::ModifyVsmAttributesRequest&, ModifyVsmAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVsmAttributesAsyncHandler;



                /**
                 *通过SubnetId获取Hsm资源数
                 * @param req DescribeHSMBySubnetIdRequest
                 * @return DescribeHSMBySubnetIdOutcome
                 */
                DescribeHSMBySubnetIdOutcome DescribeHSMBySubnetId(const Model::DescribeHSMBySubnetIdRequest &request);
                void DescribeHSMBySubnetIdAsync(const Model::DescribeHSMBySubnetIdRequest& request, const DescribeHSMBySubnetIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHSMBySubnetIdOutcomeCallable DescribeHSMBySubnetIdCallable(const Model::DescribeHSMBySubnetIdRequest& request);

                /**
                 *通过VpcId获取Hsm资源数
                 * @param req DescribeHSMByVpcIdRequest
                 * @return DescribeHSMByVpcIdOutcome
                 */
                DescribeHSMByVpcIdOutcome DescribeHSMByVpcId(const Model::DescribeHSMByVpcIdRequest &request);
                void DescribeHSMByVpcIdAsync(const Model::DescribeHSMByVpcIdRequest& request, const DescribeHSMByVpcIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHSMByVpcIdOutcomeCallable DescribeHSMByVpcIdCallable(const Model::DescribeHSMByVpcIdRequest& request);

                /**
                 *查询子网列表
                 * @param req DescribeSubnetRequest
                 * @return DescribeSubnetOutcome
                 */
                DescribeSubnetOutcome DescribeSubnet(const Model::DescribeSubnetRequest &request);
                void DescribeSubnetAsync(const Model::DescribeSubnetRequest& request, const DescribeSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetOutcomeCallable DescribeSubnetCallable(const Model::DescribeSubnetRequest& request);

                /**
                 *获取当前地域所支持的设备列表
                 * @param req DescribeSupportedHsmRequest
                 * @return DescribeSupportedHsmOutcome
                 */
                DescribeSupportedHsmOutcome DescribeSupportedHsm(const Model::DescribeSupportedHsmRequest &request);
                void DescribeSupportedHsmAsync(const Model::DescribeSupportedHsmRequest& request, const DescribeSupportedHsmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedHsmOutcomeCallable DescribeSupportedHsmCallable(const Model::DescribeSupportedHsmRequest& request);

                /**
                 *根据用户的AppId获取用户安全组列表
                 * @param req DescribeUsgRequest
                 * @return DescribeUsgOutcome
                 */
                DescribeUsgOutcome DescribeUsg(const Model::DescribeUsgRequest &request);
                void DescribeUsgAsync(const Model::DescribeUsgRequest& request, const DescribeUsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsgOutcomeCallable DescribeUsgCallable(const Model::DescribeUsgRequest& request);

                /**
                 *获取安全组详情
                 * @param req DescribeUsgRuleRequest
                 * @return DescribeUsgRuleOutcome
                 */
                DescribeUsgRuleOutcome DescribeUsgRule(const Model::DescribeUsgRuleRequest &request);
                void DescribeUsgRuleAsync(const Model::DescribeUsgRuleRequest& request, const DescribeUsgRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsgRuleOutcomeCallable DescribeUsgRuleCallable(const Model::DescribeUsgRuleRequest& request);

                /**
                 *查询用户的私有网络列表
                 * @param req DescribeVpcRequest
                 * @return DescribeVpcOutcome
                 */
                DescribeVpcOutcome DescribeVpc(const Model::DescribeVpcRequest &request);
                void DescribeVpcAsync(const Model::DescribeVpcRequest& request, const DescribeVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcOutcomeCallable DescribeVpcCallable(const Model::DescribeVpcRequest& request);

                /**
                 *获取VSM属性
                 * @param req DescribeVsmAttributesRequest
                 * @return DescribeVsmAttributesOutcome
                 */
                DescribeVsmAttributesOutcome DescribeVsmAttributes(const Model::DescribeVsmAttributesRequest &request);
                void DescribeVsmAttributesAsync(const Model::DescribeVsmAttributesRequest& request, const DescribeVsmAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVsmAttributesOutcomeCallable DescribeVsmAttributesCallable(const Model::DescribeVsmAttributesRequest& request);

                /**
                 *获取用户VSM列表
                 * @param req DescribeVsmsRequest
                 * @return DescribeVsmsOutcome
                 */
                DescribeVsmsOutcome DescribeVsms(const Model::DescribeVsmsRequest &request);
                void DescribeVsmsAsync(const Model::DescribeVsmsRequest& request, const DescribeVsmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVsmsOutcomeCallable DescribeVsmsCallable(const Model::DescribeVsmsRequest& request);

                /**
                 *获取告警事件
                 * @param req GetAlarmEventRequest
                 * @return GetAlarmEventOutcome
                 */
                GetAlarmEventOutcome GetAlarmEvent(const Model::GetAlarmEventRequest &request);
                void GetAlarmEventAsync(const Model::GetAlarmEventRequest& request, const GetAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmEventOutcomeCallable GetAlarmEventCallable(const Model::GetAlarmEventRequest& request);

                /**
                 *获取VSM监控信息
                 * @param req GetVsmMonitorInfoRequest
                 * @return GetVsmMonitorInfoOutcome
                 */
                GetVsmMonitorInfoOutcome GetVsmMonitorInfo(const Model::GetVsmMonitorInfoRequest &request);
                void GetVsmMonitorInfoAsync(const Model::GetVsmMonitorInfoRequest& request, const GetVsmMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVsmMonitorInfoOutcomeCallable GetVsmMonitorInfoCallable(const Model::GetVsmMonitorInfoRequest& request);

                /**
                 *购买询价接口
                 * @param req InquiryPriceBuyVsmRequest
                 * @return InquiryPriceBuyVsmOutcome
                 */
                InquiryPriceBuyVsmOutcome InquiryPriceBuyVsm(const Model::InquiryPriceBuyVsmRequest &request);
                void InquiryPriceBuyVsmAsync(const Model::InquiryPriceBuyVsmRequest& request, const InquiryPriceBuyVsmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceBuyVsmOutcomeCallable InquiryPriceBuyVsmCallable(const Model::InquiryPriceBuyVsmRequest& request);

                /**
                 *修改告警事件
                 * @param req ModifyAlarmEventRequest
                 * @return ModifyAlarmEventOutcome
                 */
                ModifyAlarmEventOutcome ModifyAlarmEvent(const Model::ModifyAlarmEventRequest &request);
                void ModifyAlarmEventAsync(const Model::ModifyAlarmEventRequest& request, const ModifyAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmEventOutcomeCallable ModifyAlarmEventCallable(const Model::ModifyAlarmEventRequest& request);

                /**
                 *修改VSM属性
                 * @param req ModifyVsmAttributesRequest
                 * @return ModifyVsmAttributesOutcome
                 */
                ModifyVsmAttributesOutcome ModifyVsmAttributes(const Model::ModifyVsmAttributesRequest &request);
                void ModifyVsmAttributesAsync(const Model::ModifyVsmAttributesRequest& request, const ModifyVsmAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVsmAttributesOutcomeCallable ModifyVsmAttributesCallable(const Model::ModifyVsmAttributesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_CLOUDHSMCLIENT_H_
