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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateConsoleLoginUrl请求参数结构体
                */
                class CreateConsoleLoginUrlRequest : public AbstractModel
                {
                public:
                    CreateConsoleLoginUrlRequest();
                    ~CreateConsoleLoginUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * @return Agent 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * @param Agent 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业名称，最大长度64个字符
                     * @return ProxyOrganizationName 渠道侧合作企业名称，最大长度64个字符
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置渠道侧合作企业名称，最大长度64个字符
                     * @param ProxyOrganizationName 渠道侧合作企业名称，最大长度64个字符
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业经办人的姓名，最大长度50个字符
                     * @return ProxyOperatorName 渠道侧合作企业经办人的姓名，最大长度50个字符
                     */
                    std::string GetProxyOperatorName() const;

                    /**
                     * 设置渠道侧合作企业经办人的姓名，最大长度50个字符
                     * @param ProxyOperatorName 渠道侧合作企业经办人的姓名，最大长度50个字符
                     */
                    void SetProxyOperatorName(const std::string& _proxyOperatorName);

                    /**
                     * 判断参数 ProxyOperatorName 是否已赋值
                     * @return ProxyOperatorName 是否已赋值
                     */
                    bool ProxyOperatorNameHasBeenSet() const;

                    /**
                     * 获取控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"
                     * @return Module 控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"
                     * @param Module 控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取控制台指定模块Id
                     * @return ModuleId 控制台指定模块Id
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置控制台指定模块Id
                     * @param ModuleId 控制台指定模块Id
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业统一社会信用代码，最大长度200个字符
                     * @return UniformSocialCreditCode 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置渠道侧合作企业统一社会信用代码，最大长度200个字符
                     * @param UniformSocialCreditCode 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 渠道侧合作企业名称，最大长度64个字符
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 渠道侧合作企业经办人的姓名，最大长度50个字符
                     */
                    std::string m_proxyOperatorName;
                    bool m_proxyOperatorNameHasBeenSet;

                    /**
                     * 控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 控制台指定模块Id
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 渠道侧合作企业统一社会信用代码，最大长度200个字符
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_
