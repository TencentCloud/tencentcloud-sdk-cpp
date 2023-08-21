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
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * @param _agent 应用信息
此接口Agent.AppId、Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取子客企业名称，最大长度64个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
2、该名称需要与Agent.ProxyOrganizationOpenId相匹配。
                     * @return ProxyOrganizationName 子客企业名称，最大长度64个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
2、该名称需要与Agent.ProxyOrganizationOpenId相匹配。
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置子客企业名称，最大长度64个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
2、该名称需要与Agent.ProxyOrganizationOpenId相匹配。
                     * @param _proxyOrganizationName 子客企业名称，最大长度64个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
2、该名称需要与Agent.ProxyOrganizationOpenId相匹配。
                     * 
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取子客企业统一社会信用代码，最大长度200个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
                     * @return UniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置子客企业统一社会信用代码，最大长度200个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
                     * @param _uniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取子客企业经办人的姓名，最大长度50个字符
注意：
1、若经办人已经实名，这里修改经办人名字传入将不会生效。
2、该名称需要和Agent. ProxyOperator.OpenId相匹配
                     * @return ProxyOperatorName 子客企业经办人的姓名，最大长度50个字符
注意：
1、若经办人已经实名，这里修改经办人名字传入将不会生效。
2、该名称需要和Agent. ProxyOperator.OpenId相匹配
                     * 
                     */
                    std::string GetProxyOperatorName() const;

                    /**
                     * 设置子客企业经办人的姓名，最大长度50个字符
注意：
1、若经办人已经实名，这里修改经办人名字传入将不会生效。
2、该名称需要和Agent. ProxyOperator.OpenId相匹配
                     * @param _proxyOperatorName 子客企业经办人的姓名，最大长度50个字符
注意：
1、若经办人已经实名，这里修改经办人名字传入将不会生效。
2、该名称需要和Agent. ProxyOperator.OpenId相匹配
                     * 
                     */
                    void SetProxyOperatorName(const std::string& _proxyOperatorName);

                    /**
                     * 判断参数 ProxyOperatorName 是否已赋值
                     * @return ProxyOperatorName 是否已赋值
                     * 
                     */
                    bool ProxyOperatorNameHasBeenSet() const;

                    /**
                     * 获取PC控制台登录后进入该参数指定的模块，如果不传递，将默认进入控制台首页。支持的模块包括：
1、DOCUMENT:合同管理模块，
2、TEMPLATE:企业模板管理模块，
3、SEAL:印章管理模块，
4、OPERATOR:组织管理模块，
默认将进入企业中心模块
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * @return Module PC控制台登录后进入该参数指定的模块，如果不传递，将默认进入控制台首页。支持的模块包括：
1、DOCUMENT:合同管理模块，
2、TEMPLATE:企业模板管理模块，
3、SEAL:印章管理模块，
4、OPERATOR:组织管理模块，
默认将进入企业中心模块
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置PC控制台登录后进入该参数指定的模块，如果不传递，将默认进入控制台首页。支持的模块包括：
1、DOCUMENT:合同管理模块，
2、TEMPLATE:企业模板管理模块，
3、SEAL:印章管理模块，
4、OPERATOR:组织管理模块，
默认将进入企业中心模块
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * @param _module PC控制台登录后进入该参数指定的模块，如果不传递，将默认进入控制台首页。支持的模块包括：
1、DOCUMENT:合同管理模块，
2、TEMPLATE:企业模板管理模块，
3、SEAL:印章管理模块，
4、OPERATOR:组织管理模块，
默认将进入企业中心模块
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。
根据Module参数的不同所代表的含义不同。当前支持：
1、如果Module="SEAL"，ModuleId代表印章Id, 登录链接将直接查看指定印章的详情。
2、如果Module="TEMPLATE"，ModuleId代表模版Id，登录链接将直接查看指定模版的详情。
3、如果Module="1、DOCUMENT"，ModuleId代表合同Id，登录链接将直接查看指定合同的详情。
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
2、ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到。
                     * @return ModuleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。
根据Module参数的不同所代表的含义不同。当前支持：
1、如果Module="SEAL"，ModuleId代表印章Id, 登录链接将直接查看指定印章的详情。
2、如果Module="TEMPLATE"，ModuleId代表模版Id，登录链接将直接查看指定模版的详情。
3、如果Module="1、DOCUMENT"，ModuleId代表合同Id，登录链接将直接查看指定合同的详情。
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
2、ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。
根据Module参数的不同所代表的含义不同。当前支持：
1、如果Module="SEAL"，ModuleId代表印章Id, 登录链接将直接查看指定印章的详情。
2、如果Module="TEMPLATE"，ModuleId代表模版Id，登录链接将直接查看指定模版的详情。
3、如果Module="1、DOCUMENT"，ModuleId代表合同Id，登录链接将直接查看指定合同的详情。
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
2、ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到。
                     * @param _moduleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。
根据Module参数的不同所代表的含义不同。当前支持：
1、如果Module="SEAL"，ModuleId代表印章Id, 登录链接将直接查看指定印章的详情。
2、如果Module="TEMPLATE"，ModuleId代表模版Id，登录链接将直接查看指定模版的详情。
3、如果Module="1、DOCUMENT"，ModuleId代表合同Id，登录链接将直接查看指定合同的详情。
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
2、ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取是否展示左侧菜单栏 
"ENABLE": 是，展示 
“DISABLE”: 否，不展示
默认值为ENABLE
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * @return MenuStatus 是否展示左侧菜单栏 
"ENABLE": 是，展示 
“DISABLE”: 否，不展示
默认值为ENABLE
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * 
                     */
                    std::string GetMenuStatus() const;

                    /**
                     * 设置是否展示左侧菜单栏 
"ENABLE": 是，展示 
“DISABLE”: 否，不展示
默认值为ENABLE
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * @param _menuStatus 是否展示左侧菜单栏 
"ENABLE": 是，展示 
“DISABLE”: 否，不展示
默认值为ENABLE
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     * 
                     */
                    void SetMenuStatus(const std::string& _menuStatus);

                    /**
                     * 判断参数 MenuStatus 是否已赋值
                     * @return MenuStatus 是否已赋值
                     * 
                     */
                    bool MenuStatusHasBeenSet() const;

                    /**
                     * 获取生成链接的类型：
"PC"：PC控制台链接
"CHANNEL"：H5跳转到电子签小程序链接
"APP"：第三方APP或小程序跳转电子签小程序链接
默认将生成PC控制台链接
                     * @return Endpoint 生成链接的类型：
"PC"：PC控制台链接
"CHANNEL"：H5跳转到电子签小程序链接
"APP"：第三方APP或小程序跳转电子签小程序链接
默认将生成PC控制台链接
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置生成链接的类型：
"PC"：PC控制台链接
"CHANNEL"：H5跳转到电子签小程序链接
"APP"：第三方APP或小程序跳转电子签小程序链接
默认将生成PC控制台链接
                     * @param _endpoint 生成链接的类型：
"PC"：PC控制台链接
"CHANNEL"：H5跳转到电子签小程序链接
"APP"：第三方APP或小程序跳转电子签小程序链接
默认将生成PC控制台链接
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * @return AutoJumpBackEvent 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * 
                     */
                    std::string GetAutoJumpBackEvent() const;

                    /**
                     * 设置触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * @param _autoJumpBackEvent 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     * 
                     */
                    void SetAutoJumpBackEvent(const std::string& _autoJumpBackEvent);

                    /**
                     * 判断参数 AutoJumpBackEvent 是否已赋值
                     * @return AutoJumpBackEvent 是否已赋值
                     * 
                     */
                    bool AutoJumpBackEventHasBeenSet() const;

                    /**
                     * 获取可选的企业授权方式: 
1：上传授权书 
2：转法定代表人授权
4：企业实名认证（信任第三方认证源）（此项仅支持单选）
未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不生效；选择信任第三方认证源时，请先通过“同步企业信息”接口同步信息。
该参数仅在企业激活场景生效
                     * @return AuthorizationTypes 可选的企业授权方式: 
1：上传授权书 
2：转法定代表人授权
4：企业实名认证（信任第三方认证源）（此项仅支持单选）
未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不生效；选择信任第三方认证源时，请先通过“同步企业信息”接口同步信息。
该参数仅在企业激活场景生效
                     * 
                     */
                    std::vector<int64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置可选的企业授权方式: 
1：上传授权书 
2：转法定代表人授权
4：企业实名认证（信任第三方认证源）（此项仅支持单选）
未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不生效；选择信任第三方认证源时，请先通过“同步企业信息”接口同步信息。
该参数仅在企业激活场景生效
                     * @param _authorizationTypes 可选的企业授权方式: 
1：上传授权书 
2：转法定代表人授权
4：企业实名认证（信任第三方认证源）（此项仅支持单选）
未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不生效；选择信任第三方认证源时，请先通过“同步企业信息”接口同步信息。
该参数仅在企业激活场景生效
                     * 
                     */
                    void SetAuthorizationTypes(const std::vector<int64_t>& _authorizationTypes);

                    /**
                     * 判断参数 AuthorizationTypes 是否已赋值
                     * @return AuthorizationTypes 是否已赋值
                     * 
                     */
                    bool AuthorizationTypesHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
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
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
2、该名称需要与Agent.ProxyOrganizationOpenId相匹配。
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 子客企业统一社会信用代码，最大长度200个字符
注意：
1、如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 子客企业经办人的姓名，最大长度50个字符
注意：
1、若经办人已经实名，这里修改经办人名字传入将不会生效。
2、该名称需要和Agent. ProxyOperator.OpenId相匹配
                     */
                    std::string m_proxyOperatorName;
                    bool m_proxyOperatorNameHasBeenSet;

                    /**
                     * PC控制台登录后进入该参数指定的模块，如果不传递，将默认进入控制台首页。支持的模块包括：
1、DOCUMENT:合同管理模块，
2、TEMPLATE:企业模板管理模块，
3、SEAL:印章管理模块，
4、OPERATOR:组织管理模块，
默认将进入企业中心模块
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。
根据Module参数的不同所代表的含义不同。当前支持：
1、如果Module="SEAL"，ModuleId代表印章Id, 登录链接将直接查看指定印章的详情。
2、如果Module="TEMPLATE"，ModuleId代表模版Id，登录链接将直接查看指定模版的详情。
3、如果Module="1、DOCUMENT"，ModuleId代表合同Id，登录链接将直接查看指定合同的详情。
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
2、ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 是否展示左侧菜单栏 
"ENABLE": 是，展示 
“DISABLE”: 否，不展示
默认值为ENABLE
注意：
1、该参数仅在企业和员工激活完成，登录控制台场景才生效。
                     */
                    std::string m_menuStatus;
                    bool m_menuStatusHasBeenSet;

                    /**
                     * 生成链接的类型：
"PC"：PC控制台链接
"CHANNEL"：H5跳转到电子签小程序链接
"APP"：第三方APP或小程序跳转电子签小程序链接
默认将生成PC控制台链接
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
"VERIFIED":企业认证完成/员工认证完成后跳回原App/小程序
                     */
                    std::string m_autoJumpBackEvent;
                    bool m_autoJumpBackEventHasBeenSet;

                    /**
                     * 可选的企业授权方式: 
1：上传授权书 
2：转法定代表人授权
4：企业实名认证（信任第三方认证源）（此项仅支持单选）
未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不生效；选择信任第三方认证源时，请先通过“同步企业信息”接口同步信息。
该参数仅在企业激活场景生效
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
