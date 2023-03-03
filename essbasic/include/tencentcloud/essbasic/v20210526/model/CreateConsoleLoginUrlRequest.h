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
                     * 获取子客企业名称，最大长度64个字符
                     * @return ProxyOrganizationName 子客企业名称，最大长度64个字符
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置子客企业名称，最大长度64个字符
                     * @param ProxyOrganizationName 子客企业名称，最大长度64个字符
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取子客企业经办人的姓名，最大长度50个字符
                     * @return ProxyOperatorName 子客企业经办人的姓名，最大长度50个字符
                     */
                    std::string GetProxyOperatorName() const;

                    /**
                     * 设置子客企业经办人的姓名，最大长度50个字符
                     * @param ProxyOperatorName 子客企业经办人的姓名，最大长度50个字符
                     */
                    void SetProxyOperatorName(const std::string& _proxyOperatorName);

                    /**
                     * 判断参数 ProxyOperatorName 是否已赋值
                     * @return ProxyOperatorName 是否已赋值
                     */
                    bool ProxyOperatorNameHasBeenSet() const;

                    /**
                     * 获取PC控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"。 EndPoint为"CHANNEL"/"APP"只支持"SEAL"-印章管理
                     * @return Module PC控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"。 EndPoint为"CHANNEL"/"APP"只支持"SEAL"-印章管理
                     */
                    std::string GetModule() const;

                    /**
                     * 设置PC控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"。 EndPoint为"CHANNEL"/"APP"只支持"SEAL"-印章管理
                     * @param Module PC控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"。 EndPoint为"CHANNEL"/"APP"只支持"SEAL"-印章管理
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
                     * 获取子客企业统一社会信用代码，最大长度200个字符
                     * @return UniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置子客企业统一社会信用代码，最大长度200个字符
                     * @param UniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取是否展示左侧菜单栏 是：ENABLE（默认） 否：DISABLE
                     * @return MenuStatus 是否展示左侧菜单栏 是：ENABLE（默认） 否：DISABLE
                     */
                    std::string GetMenuStatus() const;

                    /**
                     * 设置是否展示左侧菜单栏 是：ENABLE（默认） 否：DISABLE
                     * @param MenuStatus 是否展示左侧菜单栏 是：ENABLE（默认） 否：DISABLE
                     */
                    void SetMenuStatus(const std::string& _menuStatus);

                    /**
                     * 判断参数 MenuStatus 是否已赋值
                     * @return MenuStatus 是否已赋值
                     */
                    bool MenuStatusHasBeenSet() const;

                    /**
                     * 获取链接跳转类型："PC"-PC控制台，“CHANNEL”-H5跳转到电子签小程序；“APP”-第三方APP或小程序跳转电子签小程序，默认为PC控制台
                     * @return Endpoint 链接跳转类型："PC"-PC控制台，“CHANNEL”-H5跳转到电子签小程序；“APP”-第三方APP或小程序跳转电子签小程序，默认为PC控制台
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置链接跳转类型："PC"-PC控制台，“CHANNEL”-H5跳转到电子签小程序；“APP”-第三方APP或小程序跳转电子签小程序，默认为PC控制台
                     * @param Endpoint 链接跳转类型："PC"-PC控制台，“CHANNEL”-H5跳转到电子签小程序；“APP”-第三方APP或小程序跳转电子签小程序，默认为PC控制台
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取触发自动跳转事件，仅对App类型有效，"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * @return AutoJumpBackEvent 触发自动跳转事件，仅对App类型有效，"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     */
                    std::string GetAutoJumpBackEvent() const;

                    /**
                     * 设置触发自动跳转事件，仅对App类型有效，"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * @param AutoJumpBackEvent 触发自动跳转事件，仅对App类型有效，"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     */
                    void SetAutoJumpBackEvent(const std::string& _autoJumpBackEvent);

                    /**
                     * 判断参数 AutoJumpBackEvent 是否已赋值
                     * @return AutoJumpBackEvent 是否已赋值
                     */
                    bool AutoJumpBackEventHasBeenSet() const;

                    /**
                     * 获取支持的授权方式,授权方式: "1" - 上传授权书认证  "2" - 法定代表人认证
                     * @return AuthorizationTypes 支持的授权方式,授权方式: "1" - 上传授权书认证  "2" - 法定代表人认证
                     */
                    std::vector<int64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置支持的授权方式,授权方式: "1" - 上传授权书认证  "2" - 法定代表人认证
                     * @param AuthorizationTypes 支持的授权方式,授权方式: "1" - 上传授权书认证  "2" - 法定代表人认证
                     */
                    void SetAuthorizationTypes(const std::vector<int64_t>& _authorizationTypes);

                    /**
                     * 判断参数 AuthorizationTypes 是否已赋值
                     * @return AuthorizationTypes 是否已赋值
                     */
                    bool AuthorizationTypesHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param Operator 暂未开放
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
                     * 子客企业名称，最大长度64个字符
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 子客企业经办人的姓名，最大长度50个字符
                     */
                    std::string m_proxyOperatorName;
                    bool m_proxyOperatorNameHasBeenSet;

                    /**
                     * PC控制台指定模块，文件/合同管理:"DOCUMENT"，模板管理:"TEMPLATE"，印章管理:"SEAL"，组织架构/人员:"OPERATOR"，空字符串："账号信息"。 EndPoint为"CHANNEL"/"APP"只支持"SEAL"-印章管理
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 控制台指定模块Id
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 子客企业统一社会信用代码，最大长度200个字符
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 是否展示左侧菜单栏 是：ENABLE（默认） 否：DISABLE
                     */
                    std::string m_menuStatus;
                    bool m_menuStatusHasBeenSet;

                    /**
                     * 链接跳转类型："PC"-PC控制台，“CHANNEL”-H5跳转到电子签小程序；“APP”-第三方APP或小程序跳转电子签小程序，默认为PC控制台
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 触发自动跳转事件，仅对App类型有效，"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     */
                    std::string m_autoJumpBackEvent;
                    bool m_autoJumpBackEventHasBeenSet;

                    /**
                     * 支持的授权方式,授权方式: "1" - 上传授权书认证  "2" - 法定代表人认证
                     */
                    std::vector<int64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_
