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
#include <tencentcloud/essbasic/v20210526/model/OrganizationAuthorizationOptions.h>


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
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。 `
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。 `
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。 `
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。 `
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
                     * 获取第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。
<font color="red">
在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。
企业名称请使用以下名称, 以下名称可以不用走收录。
**子客测试专用企业1 - 子客测试专用企业9**</font>

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * @return ProxyOrganizationName 第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。
<font color="red">
在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。
企业名称请使用以下名称, 以下名称可以不用走收录。
**子客测试专用企业1 - 子客测试专用企业9**</font>

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。
<font color="red">
在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。
企业名称请使用以下名称, 以下名称可以不用走收录。
**子客测试专用企业1 - 子客测试专用企业9**</font>

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * @param _proxyOrganizationName 第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。
<font color="red">
在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。
企业名称请使用以下名称, 以下名称可以不用走收录。
**子客测试专用企业1 - 子客测试专用企业9**</font>

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
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
注意：`如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效`。
                     * @return UniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
注意：`如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效`。
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置子客企业统一社会信用代码，最大长度200个字符
注意：`如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效`。
                     * @param _uniformSocialCreditCode 子客企业统一社会信用代码，最大长度200个字符
注意：`如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效`。
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
                     * 获取子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。

注：`该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效`
                     * @return ProxyOperatorName 子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。

注：`该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效`
                     * 
                     */
                    std::string GetProxyOperatorName() const;

                    /**
                     * 设置子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。

注：`该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效`
                     * @param _proxyOperatorName 子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。

注：`该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效`
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
                     * 获取子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：`该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效`
                     * @return ProxyOperatorMobile 子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：`该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效`
                     * 
                     */
                    std::string GetProxyOperatorMobile() const;

                    /**
                     * 设置子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：`该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效`
                     * @param _proxyOperatorMobile 子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：`该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效`
                     * 
                     */
                    void SetProxyOperatorMobile(const std::string& _proxyOperatorMobile);

                    /**
                     * 判断参数 ProxyOperatorMobile 是否已赋值
                     * @return ProxyOperatorMobile 是否已赋值
                     * 
                     */
                    bool ProxyOperatorMobileHasBeenSet() const;

                    /**
                     * 获取Web控制台登录后进入的功能模块,  支持的模块包括：
<ul>
<li> **空值** :(默认)企业中心模块</li>
<li> **DOCUMENT** :合同管理模块</li>
<li> **TEMPLATE** :企业模板管理模块</li>
<li> **SEAL** :印章管理模块</li>
<li> **OPERATOR** :组织管理模块</li></ul>
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * @return Module Web控制台登录后进入的功能模块,  支持的模块包括：
<ul>
<li> **空值** :(默认)企业中心模块</li>
<li> **DOCUMENT** :合同管理模块</li>
<li> **TEMPLATE** :企业模板管理模块</li>
<li> **SEAL** :印章管理模块</li>
<li> **OPERATOR** :组织管理模块</li></ul>
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Web控制台登录后进入的功能模块,  支持的模块包括：
<ul>
<li> **空值** :(默认)企业中心模块</li>
<li> **DOCUMENT** :合同管理模块</li>
<li> **TEMPLATE** :企业模板管理模块</li>
<li> **SEAL** :印章管理模块</li>
<li> **OPERATOR** :组织管理模块</li></ul>
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * @param _module Web控制台登录后进入的功能模块,  支持的模块包括：
<ul>
<li> **空值** :(默认)企业中心模块</li>
<li> **DOCUMENT** :合同管理模块</li>
<li> **TEMPLATE** :企业模板管理模块</li>
<li> **SEAL** :印章管理模块</li>
<li> **OPERATOR** :组织管理模块</li></ul>
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
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

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * @return ModuleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * @param _moduleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

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
<ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li>
<li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>
注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @return MenuStatus 是否展示左侧菜单栏 
<ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li>
<li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>
注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * 
                     */
                    std::string GetMenuStatus() const;

                    /**
                     * 设置是否展示左侧菜单栏 
<ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li>
<li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>
注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @param _menuStatus 是否展示左侧菜单栏 
<ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li>
<li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>
注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
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
<ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li>
<li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * @return Endpoint 生成链接的类型：
<ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li>
<li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置生成链接的类型：
<ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li>
<li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * @param _endpoint 生成链接的类型：
<ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li>
<li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
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
<ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * @return AutoJumpBackEvent 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
<ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * 
                     */
                    std::string GetAutoJumpBackEvent() const;

                    /**
                     * 设置触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
<ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * @param _autoJumpBackEvent 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
<ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
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
                     * 获取可选的此企业允许的授权方式, 可以设置的方式有:
<ul>
<li>2：转法定代表人授权</li>
<li>5：授权书+对公打款</li>
</ul>
                     * @return AuthorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
<ul>
<li>2：转法定代表人授权</li>
<li>5：授权书+对公打款</li>
</ul>
                     * 
                     */
                    std::vector<int64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置可选的此企业允许的授权方式, 可以设置的方式有:
<ul>
<li>2：转法定代表人授权</li>
<li>5：授权书+对公打款</li>
</ul>
                     * @param _authorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
<ul>
<li>2：转法定代表人授权</li>
<li>5：授权书+对公打款</li>
</ul>
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

                    /**
                     * 获取子客经办人身份证
注意：`如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型`。
                     * @return ProxyOperatorIdCardNumber 子客经办人身份证
注意：`如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型`。
                     * 
                     */
                    std::string GetProxyOperatorIdCardNumber() const;

                    /**
                     * 设置子客经办人身份证
注意：`如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型`。
                     * @param _proxyOperatorIdCardNumber 子客经办人身份证
注意：`如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型`。
                     * 
                     */
                    void SetProxyOperatorIdCardNumber(const std::string& _proxyOperatorIdCardNumber);

                    /**
                     * 判断参数 ProxyOperatorIdCardNumber 是否已赋值
                     * @return ProxyOperatorIdCardNumber 是否已赋值
                     * 
                     */
                    bool ProxyOperatorIdCardNumberHasBeenSet() const;

                    /**
                     * 获取认证完成跳转链接。
注意：`此功能仅在Endpoint参数设置成 H5 或 PC时才有效`。
                     * @return AutoJumpUrl 认证完成跳转链接。
注意：`此功能仅在Endpoint参数设置成 H5 或 PC时才有效`。
                     * 
                     */
                    std::string GetAutoJumpUrl() const;

                    /**
                     * 设置认证完成跳转链接。
注意：`此功能仅在Endpoint参数设置成 H5 或 PC时才有效`。
                     * @param _autoJumpUrl 认证完成跳转链接。
注意：`此功能仅在Endpoint参数设置成 H5 或 PC时才有效`。
                     * 
                     */
                    void SetAutoJumpUrl(const std::string& _autoJumpUrl);

                    /**
                     * 判断参数 AutoJumpUrl 是否已赋值
                     * @return AutoJumpUrl 是否已赋值
                     * 
                     */
                    bool AutoJumpUrlHasBeenSet() const;

                    /**
                     * 获取是否展示头顶导航栏  <ul><li> **ENABLE** : (默认)进入web控制台展示头顶导航栏</li> <li> **DISABLE** : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

<a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a>
                     * @return TopNavigationStatus 是否展示头顶导航栏  <ul><li> **ENABLE** : (默认)进入web控制台展示头顶导航栏</li> <li> **DISABLE** : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

<a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a>
                     * 
                     */
                    std::string GetTopNavigationStatus() const;

                    /**
                     * 设置是否展示头顶导航栏  <ul><li> **ENABLE** : (默认)进入web控制台展示头顶导航栏</li> <li> **DISABLE** : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

<a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a>
                     * @param _topNavigationStatus 是否展示头顶导航栏  <ul><li> **ENABLE** : (默认)进入web控制台展示头顶导航栏</li> <li> **DISABLE** : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

<a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a>
                     * 
                     */
                    void SetTopNavigationStatus(const std::string& _topNavigationStatus);

                    /**
                     * 判断参数 TopNavigationStatus 是否已赋值
                     * @return TopNavigationStatus 是否已赋值
                     * 
                     */
                    bool TopNavigationStatusHasBeenSet() const;

                    /**
                     * 获取是否自动激活子客企业，有下面两种选项：

**false（默认设置）**：不自动激活子客户。您需要通过控制台或调用[激活或者续期子企业](https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive)接口手动完成激活过程。

**true**：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。

<b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：
![image](https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png)
                     * @return AutoActive 是否自动激活子客企业，有下面两种选项：

**false（默认设置）**：不自动激活子客户。您需要通过控制台或调用[激活或者续期子企业](https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive)接口手动完成激活过程。

**true**：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。

<b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：
![image](https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png)
                     * 
                     */
                    bool GetAutoActive() const;

                    /**
                     * 设置是否自动激活子客企业，有下面两种选项：

**false（默认设置）**：不自动激活子客户。您需要通过控制台或调用[激活或者续期子企业](https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive)接口手动完成激活过程。

**true**：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。

<b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：
![image](https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png)
                     * @param _autoActive 是否自动激活子客企业，有下面两种选项：

**false（默认设置）**：不自动激活子客户。您需要通过控制台或调用[激活或者续期子企业](https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive)接口手动完成激活过程。

**true**：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。

<b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：
![image](https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png)
                     * 
                     */
                    void SetAutoActive(const bool& _autoActive);

                    /**
                     * 判断参数 AutoActive 是否已赋值
                     * @return AutoActive 是否已赋值
                     * 
                     */
                    bool AutoActiveHasBeenSet() const;

                    /**
                     * 获取营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * @return BusinessLicense 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * @param _businessLicense 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     * 
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     * 
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。	
                     * @return ProxyAddress 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。	
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。	
                     * @param _proxyAddress 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。	
                     * 
                     */
                    void SetProxyAddress(const std::string& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     * 
                     */
                    bool ProxyAddressHasBeenSet() const;

                    /**
                     * 获取组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。	
                     * @return ProxyLegalName 组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。	
                     * 
                     */
                    std::string GetProxyLegalName() const;

                    /**
                     * 设置组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。	
                     * @param _proxyLegalName 组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。	
                     * 
                     */
                    void SetProxyLegalName(const std::string& _proxyLegalName);

                    /**
                     * 判断参数 ProxyLegalName 是否已赋值
                     * @return ProxyLegalName 是否已赋值
                     * 
                     */
                    bool ProxyLegalNameHasBeenSet() const;

                    /**
                     * 获取授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
 p.s. 如果上传授权书 ，需遵循以下条件 
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。 
2. 认证方式AuthorizationTypes必须只能是上传授权书方式	
                     * @return PowerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
 p.s. 如果上传授权书 ，需遵循以下条件 
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。 
2. 认证方式AuthorizationTypes必须只能是上传授权书方式	
                     * 
                     */
                    std::vector<std::string> GetPowerOfAttorneys() const;

                    /**
                     * 设置授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
 p.s. 如果上传授权书 ，需遵循以下条件 
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。 
2. 认证方式AuthorizationTypes必须只能是上传授权书方式	
                     * @param _powerOfAttorneys 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
 p.s. 如果上传授权书 ，需遵循以下条件 
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。 
2. 认证方式AuthorizationTypes必须只能是上传授权书方式	
                     * 
                     */
                    void SetPowerOfAttorneys(const std::vector<std::string>& _powerOfAttorneys);

                    /**
                     * 判断参数 PowerOfAttorneys 是否已赋值
                     * @return PowerOfAttorneys 是否已赋值
                     * 
                     */
                    bool PowerOfAttorneysHasBeenSet() const;

                    /**
                     * 获取企业认证时个性化能力信息
                     * @return OrganizationAuthorizationOptions 企业认证时个性化能力信息
                     * 
                     */
                    OrganizationAuthorizationOptions GetOrganizationAuthorizationOptions() const;

                    /**
                     * 设置企业认证时个性化能力信息
                     * @param _organizationAuthorizationOptions 企业认证时个性化能力信息
                     * 
                     */
                    void SetOrganizationAuthorizationOptions(const OrganizationAuthorizationOptions& _organizationAuthorizationOptions);

                    /**
                     * 判断参数 OrganizationAuthorizationOptions 是否已赋值
                     * @return OrganizationAuthorizationOptions 是否已赋值
                     * 
                     */
                    bool OrganizationAuthorizationOptionsHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。 `
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。
<font color="red">
在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。
企业名称请使用以下名称, 以下名称可以不用走收录。
**子客测试专用企业1 - 子客测试专用企业9**</font>

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 子客企业统一社会信用代码，最大长度200个字符
注意：`如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效`。
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。

注：`该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效`
                     */
                    std::string m_proxyOperatorName;
                    bool m_proxyOperatorNameHasBeenSet;

                    /**
                     * 子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：`该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效`
                     */
                    std::string m_proxyOperatorMobile;
                    bool m_proxyOperatorMobileHasBeenSet;

                    /**
                     * Web控制台登录后进入的功能模块,  支持的模块包括：
<ul>
<li> **空值** :(默认)企业中心模块</li>
<li> **DOCUMENT** :合同管理模块</li>
<li> **TEMPLATE** :企业模板管理模块</li>
<li> **SEAL** :印章管理模块</li>
<li> **OPERATOR** :组织管理模块</li></ul>
注意：
1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块
2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 是否展示左侧菜单栏 
<ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li>
<li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>
注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     */
                    std::string m_menuStatus;
                    bool m_menuStatusHasBeenSet;

                    /**
                     * 生成链接的类型：
<ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li>
<li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li>
<li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li>
<li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li>
<li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：
<ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     */
                    std::string m_autoJumpBackEvent;
                    bool m_autoJumpBackEventHasBeenSet;

                    /**
                     * 可选的此企业允许的授权方式, 可以设置的方式有:
<ul>
<li>2：转法定代表人授权</li>
<li>5：授权书+对公打款</li>
</ul>
                     */
                    std::vector<int64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 子客经办人身份证
注意：`如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型`。
                     */
                    std::string m_proxyOperatorIdCardNumber;
                    bool m_proxyOperatorIdCardNumberHasBeenSet;

                    /**
                     * 认证完成跳转链接。
注意：`此功能仅在Endpoint参数设置成 H5 或 PC时才有效`。
                     */
                    std::string m_autoJumpUrl;
                    bool m_autoJumpUrlHasBeenSet;

                    /**
                     * 是否展示头顶导航栏  <ul><li> **ENABLE** : (默认)进入web控制台展示头顶导航栏</li> <li> **DISABLE** : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

<a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a>
                     */
                    std::string m_topNavigationStatus;
                    bool m_topNavigationStatusHasBeenSet;

                    /**
                     * 是否自动激活子客企业，有下面两种选项：

**false（默认设置）**：不自动激活子客户。您需要通过控制台或调用[激活或者续期子企业](https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive)接口手动完成激活过程。

**true**：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。

<b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：
![image](https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png)
                     */
                    bool m_autoActive;
                    bool m_autoActiveHasBeenSet;

                    /**
                     * 营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。	
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * 组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。	
                     */
                    std::string m_proxyLegalName;
                    bool m_proxyLegalNameHasBeenSet;

                    /**
                     * 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
 p.s. 如果上传授权书 ，需遵循以下条件 
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。 
2. 认证方式AuthorizationTypes必须只能是上传授权书方式	
                     */
                    std::vector<std::string> m_powerOfAttorneys;
                    bool m_powerOfAttorneysHasBeenSet;

                    /**
                     * 企业认证时个性化能力信息
                     */
                    OrganizationAuthorizationOptions m_organizationAuthorizationOptions;
                    bool m_organizationAuthorizationOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_
