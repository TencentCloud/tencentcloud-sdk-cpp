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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ModifyExtendedService请求参数结构体
                */
                class ModifyExtendedServiceRequest : public AbstractModel
                {
                public:
                    ModifyExtendedServiceRequest();
                    ~ModifyExtendedServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取  扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权渠道下载合同 
                     * @return ServiceType   扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权渠道下载合同 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置  扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权渠道下载合同 
                     * @param ServiceType   扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权渠道下载合同 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取操作类型 
OPEN:开通 
CLOSE:关闭
                     * @return Operate 操作类型 
OPEN:开通 
CLOSE:关闭
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作类型 
OPEN:开通 
CLOSE:关闭
                     * @param Operate 操作类型 
OPEN:开通 
CLOSE:关闭
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     *   扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权渠道下载合同 
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 操作类型 
OPEN:开通 
CLOSE:关闭
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_
