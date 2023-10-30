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
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时,  此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识, 建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时,  此时的Agent.ProxyOrganizationOpenId将会是员工认证加入企业后的唯一标识, 建议开发者保存此员工的penId, 后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下,企业唯一标识ProxyOrganizationOpenId需要保持唯一, 员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)`
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时,  此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识, 建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时,  此时的Agent.ProxyOrganizationOpenId将会是员工认证加入企业后的唯一标识, 建议开发者保存此员工的penId, 后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下,企业唯一标识ProxyOrganizationOpenId需要保持唯一, 员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)`
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时,  此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识, 建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时,  此时的Agent.ProxyOrganizationOpenId将会是员工认证加入企业后的唯一标识, 建议开发者保存此员工的penId, 后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下,企业唯一标识ProxyOrganizationOpenId需要保持唯一, 员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)`
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时,  此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识, 建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时,  此时的Agent.ProxyOrganizationOpenId将会是员工认证加入企业后的唯一标识, 建议开发者保存此员工的penId, 后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下,企业唯一标识ProxyOrganizationOpenId需要保持唯一, 员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)`
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
                     * 获取第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * @return ProxyOrganizationName 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。

注:
 `1. 如果名称中包含英文括号()，请使用中文括号（）代替。`
 `2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。 `
                     * @param _proxyOrganizationName 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。

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
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模版的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * @return ModuleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模版的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模版的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。

                     * @param _moduleId 该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。

根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模版的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
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
生成链接的类型
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接,  一般用于发送短信中带的链接,  打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li></ul>
                     * @return Endpoint 生成链接的类型：
生成链接的类型
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接,  一般用于发送短信中带的链接,  打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置生成链接的类型：
生成链接的类型
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接,  一般用于发送短信中带的链接,  打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li></ul>
                     * @param _endpoint 生成链接的类型：
生成链接的类型
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接,  一般用于发送短信中带的链接,  打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li></ul>
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
<ul><li>1：上传授权书</li>
<li>2：转法定代表人授权</li>
<li>4：企业实名认证（信任第三方认证源）（此项有排他性, 选择后不能增添其他的方式）</li></ul>
注:<ul>
<li>未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不对此法人生效`</li>
<li>选择信任第三方认证源时，请先通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganization" target="_blank">同步企业信息</a>接口同步信息。</li>
<li>该参数仅在企业未激活时生效</li>
</ul>
                     * @return AuthorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
<ul><li>1：上传授权书</li>
<li>2：转法定代表人授权</li>
<li>4：企业实名认证（信任第三方认证源）（此项有排他性, 选择后不能增添其他的方式）</li></ul>
注:<ul>
<li>未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不对此法人生效`</li>
<li>选择信任第三方认证源时，请先通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganization" target="_blank">同步企业信息</a>接口同步信息。</li>
<li>该参数仅在企业未激活时生效</li>
</ul>
                     * 
                     */
                    std::vector<int64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置可选的此企业允许的授权方式, 可以设置的方式有:
<ul><li>1：上传授权书</li>
<li>2：转法定代表人授权</li>
<li>4：企业实名认证（信任第三方认证源）（此项有排他性, 选择后不能增添其他的方式）</li></ul>
注:<ul>
<li>未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不对此法人生效`</li>
<li>选择信任第三方认证源时，请先通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganization" target="_blank">同步企业信息</a>接口同步信息。</li>
<li>该参数仅在企业未激活时生效</li>
</ul>
                     * @param _authorizationTypes 可选的此企业允许的授权方式, 可以设置的方式有:
<ul><li>1：上传授权书</li>
<li>2：转法定代表人授权</li>
<li>4：企业实名认证（信任第三方认证源）（此项有排他性, 选择后不能增添其他的方式）</li></ul>
注:<ul>
<li>未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不对此法人生效`</li>
<li>选择信任第三方认证源时，请先通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganization" target="_blank">同步企业信息</a>接口同步信息。</li>
<li>该参数仅在企业未激活时生效</li>
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

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容
此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>注:
`1. 企业激活时,  此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识, 建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。 `
`2. 员工认证时,  此时的Agent.ProxyOrganizationOpenId将会是员工认证加入企业后的唯一标识, 建议开发者保存此员工的penId, 后续各项接口调用皆需要此参数。 `
`3. 同渠道应用(Agent.AppId)下,企业唯一标识ProxyOrganizationOpenId需要保持唯一, 员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)`
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 第三方平台子客企业名称，请确认该名称与企业营业执照中注册的名称一致。

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
<table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模版的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>
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
生成链接的类型
<ul><li>**PC**：(默认)web控制台链接, 需要在PC浏览器中打开</li>
<li>**CHANNEL**：H5跳转到电子签小程序链接,  一般用于发送短信中带的链接,  打开后进入腾讯电子签小程序</li>
<li>**APP**：第三方APP或小程序跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li></ul>
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
<ul><li>1：上传授权书</li>
<li>2：转法定代表人授权</li>
<li>4：企业实名认证（信任第三方认证源）（此项有排他性, 选择后不能增添其他的方式）</li></ul>
注:<ul>
<li>未选择信任第三方认证源时，如果是法人进行企业激活，仅支持法人扫脸直接授权，该配置不对此法人生效`</li>
<li>选择信任第三方认证源时，请先通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganization" target="_blank">同步企业信息</a>接口同步信息。</li>
<li>该参数仅在企业未激活时生效</li>
</ul>
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
