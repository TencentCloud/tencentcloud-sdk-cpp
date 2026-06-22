/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/essbasic/v20210526/model/OrganizationAuthorizationOptions.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/JumpEvent.h>


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
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容<br>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容<br>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容<br>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容<br>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code>
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
                     * 获取<p>第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。<br><font color="red"><br>在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。<br>企业名称请使用以下名称, 以下名称可以不用走收录。<br><strong>子客测试专用企业1 - 子客测试专用企业9</strong></font></p><p>注:<br> <code>1. 如果名称中包含英文括号()，请使用中文括号（）代替。</code><br> <code>2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。</code></p>
                     * @return ProxyOrganizationName <p>第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。<br><font color="red"><br>在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。<br>企业名称请使用以下名称, 以下名称可以不用走收录。<br><strong>子客测试专用企业1 - 子客测试专用企业9</strong></font></p><p>注:<br> <code>1. 如果名称中包含英文括号()，请使用中文括号（）代替。</code><br> <code>2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。</code></p>
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置<p>第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。<br><font color="red"><br>在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。<br>企业名称请使用以下名称, 以下名称可以不用走收录。<br><strong>子客测试专用企业1 - 子客测试专用企业9</strong></font></p><p>注:<br> <code>1. 如果名称中包含英文括号()，请使用中文括号（）代替。</code><br> <code>2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。</code></p>
                     * @param _proxyOrganizationName <p>第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。<br><font color="red"><br>在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。<br>企业名称请使用以下名称, 以下名称可以不用走收录。<br><strong>子客测试专用企业1 - 子客测试专用企业9</strong></font></p><p>注:<br> <code>1. 如果名称中包含英文括号()，请使用中文括号（）代替。</code><br> <code>2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。</code></p>
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
                     * 获取<p>子客企业统一社会信用代码，最大长度200个字符<br>注意：<code>如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效</code>。</p>
                     * @return UniformSocialCreditCode <p>子客企业统一社会信用代码，最大长度200个字符<br>注意：<code>如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效</code>。</p>
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置<p>子客企业统一社会信用代码，最大长度200个字符<br>注意：<code>如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效</code>。</p>
                     * @param _uniformSocialCreditCode <p>子客企业统一社会信用代码，最大长度200个字符<br>注意：<code>如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效</code>。</p>
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
                     * 获取<p>子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>注：<code>该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效</code></p>
                     * @return ProxyOperatorName <p>子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>注：<code>该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效</code></p>
                     * 
                     */
                    std::string GetProxyOperatorName() const;

                    /**
                     * 设置<p>子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>注：<code>该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效</code></p>
                     * @param _proxyOperatorName <p>子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>注：<code>该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效</code></p>
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
                     * 获取<p>子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：<code>该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效</code></p>
                     * @return ProxyOperatorMobile <p>子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：<code>该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效</code></p>
                     * 
                     */
                    std::string GetProxyOperatorMobile() const;

                    /**
                     * 设置<p>子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：<code>该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效</code></p>
                     * @param _proxyOperatorMobile <p>子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：<code>该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效</code></p>
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
                     * 获取<p>Web控制台登录后进入的功能模块,  支持的模块包括：</p><ul><li> **空值** :(默认)企业中心模块</li><li> **DOCUMENT** :合同管理模块</li><li> **TEMPLATE** :企业模板管理模块</li><li> **SEAL** :印章管理模块</li><li> **OPERATOR** :组织管理模块</li></ul>注意：1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * @return Module <p>Web控制台登录后进入的功能模块,  支持的模块包括：</p><ul><li> **空值** :(默认)企业中心模块</li><li> **DOCUMENT** :合同管理模块</li><li> **TEMPLATE** :企业模板管理模块</li><li> **SEAL** :印章管理模块</li><li> **OPERATOR** :组织管理模块</li></ul>注意：1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>Web控制台登录后进入的功能模块,  支持的模块包括：</p><ul><li> **空值** :(默认)企业中心模块</li><li> **DOCUMENT** :合同管理模块</li><li> **TEMPLATE** :企业模板管理模块</li><li> **SEAL** :印章管理模块</li><li> **OPERATOR** :组织管理模块</li></ul>注意：1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     * @param _module <p>Web控制台登录后进入的功能模块,  支持的模块包括：</p><ul><li> **空值** :(默认)企业中心模块</li><li> **DOCUMENT** :合同管理模块</li><li> **TEMPLATE** :企业模板管理模块</li><li> **SEAL** :印章管理模块</li><li> **OPERATOR** :组织管理模块</li></ul>注意：1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
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
                     * 获取<p>该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。</p><p>根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：</p><table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @return ModuleId <p>该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。</p><p>根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：</p><table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置<p>该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。</p><p>根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：</p><table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @param _moduleId <p>该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。</p><p>根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：</p><table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
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
                     * 获取<p>是否展示左侧菜单栏 </p><ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li><li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @return MenuStatus <p>是否展示左侧菜单栏 </p><ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li><li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * 
                     */
                    std::string GetMenuStatus() const;

                    /**
                     * 设置<p>是否展示左侧菜单栏 </p><ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li><li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     * @param _menuStatus <p>是否展示左侧菜单栏 </p><ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li><li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
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
                     * 获取<p>生成链接的类型：</p><ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li><li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li><li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li><li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li><li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * @return Endpoint <p>生成链接的类型：</p><ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li><li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li><li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li><li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li><li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>生成链接的类型：</p><ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li><li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li><li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li><li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li><li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     * @param _endpoint <p>生成链接的类型：</p><ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li><li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li><li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li><li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li><li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
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
                     * 获取<p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：</p><ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * @return AutoJumpBackEvent <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：</p><ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * 
                     */
                    std::string GetAutoJumpBackEvent() const;

                    /**
                     * 设置<p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：</p><ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     * @param _autoJumpBackEvent <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：</p><ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
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
                     * 获取<p>可选的此企业允许的授权方式, 可以设置的方式有:</p><ul><li>2：转法定代表人授权</li><li>5：授权书+对公打款</li></ul>
                     * @return AuthorizationTypes <p>可选的此企业允许的授权方式, 可以设置的方式有:</p><ul><li>2：转法定代表人授权</li><li>5：授权书+对公打款</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置<p>可选的此企业允许的授权方式, 可以设置的方式有:</p><ul><li>2：转法定代表人授权</li><li>5：授权书+对公打款</li></ul>
                     * @param _authorizationTypes <p>可选的此企业允许的授权方式, 可以设置的方式有:</p><ul><li>2：转法定代表人授权</li><li>5：授权书+对公打款</li></ul>
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
                     * 获取<p>子客经办人身份证<br>注意：<code>如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型</code>。</p>
                     * @return ProxyOperatorIdCardNumber <p>子客经办人身份证<br>注意：<code>如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型</code>。</p>
                     * 
                     */
                    std::string GetProxyOperatorIdCardNumber() const;

                    /**
                     * 设置<p>子客经办人身份证<br>注意：<code>如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型</code>。</p>
                     * @param _proxyOperatorIdCardNumber <p>子客经办人身份证<br>注意：<code>如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型</code>。</p>
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
                     * 获取<p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>认证完成跳转链接。<br>注意：<code>此功能仅在Endpoint参数设置成 H5 或 PC时才有效</code>。</p>
                     * @return AutoJumpUrl <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>认证完成跳转链接。<br>注意：<code>此功能仅在Endpoint参数设置成 H5 或 PC时才有效</code>。</p>
                     * 
                     */
                    std::string GetAutoJumpUrl() const;

                    /**
                     * 设置<p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>认证完成跳转链接。<br>注意：<code>此功能仅在Endpoint参数设置成 H5 或 PC时才有效</code>。</p>
                     * @param _autoJumpUrl <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>认证完成跳转链接。<br>注意：<code>此功能仅在Endpoint参数设置成 H5 或 PC时才有效</code>。</p>
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
                     * 获取<p>是否展示头顶导航栏  <ul><li> <strong>ENABLE</strong> : (默认)进入web控制台展示头顶导航栏</li> <li> <strong>DISABLE</strong> : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数<strong>仅在企业和员工激活完成，登录控制台场景才生效</strong>。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a></p>
                     * @return TopNavigationStatus <p>是否展示头顶导航栏  <ul><li> <strong>ENABLE</strong> : (默认)进入web控制台展示头顶导航栏</li> <li> <strong>DISABLE</strong> : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数<strong>仅在企业和员工激活完成，登录控制台场景才生效</strong>。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a></p>
                     * 
                     */
                    std::string GetTopNavigationStatus() const;

                    /**
                     * 设置<p>是否展示头顶导航栏  <ul><li> <strong>ENABLE</strong> : (默认)进入web控制台展示头顶导航栏</li> <li> <strong>DISABLE</strong> : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数<strong>仅在企业和员工激活完成，登录控制台场景才生效</strong>。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a></p>
                     * @param _topNavigationStatus <p>是否展示头顶导航栏  <ul><li> <strong>ENABLE</strong> : (默认)进入web控制台展示头顶导航栏</li> <li> <strong>DISABLE</strong> : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数<strong>仅在企业和员工激活完成，登录控制台场景才生效</strong>。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a></p>
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
                     * 获取<p>是否自动激活子客企业，有下面两种选项：</p><p><strong>false（默认设置）</strong>：不自动激活子客户。您需要通过控制台或调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive">激活或者续期子企业</a>接口手动完成激活过程。</p><p><strong>true</strong>：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。</p><p><b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png" alt="image"></p>
                     * @return AutoActive <p>是否自动激活子客企业，有下面两种选项：</p><p><strong>false（默认设置）</strong>：不自动激活子客户。您需要通过控制台或调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive">激活或者续期子企业</a>接口手动完成激活过程。</p><p><strong>true</strong>：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。</p><p><b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png" alt="image"></p>
                     * 
                     */
                    bool GetAutoActive() const;

                    /**
                     * 设置<p>是否自动激活子客企业，有下面两种选项：</p><p><strong>false（默认设置）</strong>：不自动激活子客户。您需要通过控制台或调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive">激活或者续期子企业</a>接口手动完成激活过程。</p><p><strong>true</strong>：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。</p><p><b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png" alt="image"></p>
                     * @param _autoActive <p>是否自动激活子客企业，有下面两种选项：</p><p><strong>false（默认设置）</strong>：不自动激活子客户。您需要通过控制台或调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive">激活或者续期子企业</a>接口手动完成激活过程。</p><p><strong>true</strong>：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。</p><p><b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png" alt="image"></p>
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
                     * 获取<p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * @return BusinessLicense <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置<p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     * @param _businessLicense <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
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
                     * 获取<p>组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。</p>
                     * @return ProxyAddress <p>组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。</p>
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置<p>组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。</p>
                     * @param _proxyAddress <p>组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。</p>
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
                     * 获取<p>组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * @return ProxyLegalName <p>组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * 
                     */
                    std::string GetProxyLegalName() const;

                    /**
                     * 设置<p>组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     * @param _proxyLegalName <p>组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
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
                     * 获取<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br> p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。 </li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * @return PowerOfAttorneys <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br> p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。 </li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * 
                     */
                    std::vector<std::string> GetPowerOfAttorneys() const;

                    /**
                     * 设置<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br> p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。 </li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     * @param _powerOfAttorneys <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br> p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。 </li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
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
                     * 获取<p>企业认证时个性化能力信息</p>
                     * @return OrganizationAuthorizationOptions <p>企业认证时个性化能力信息</p>
                     * 
                     */
                    OrganizationAuthorizationOptions GetOrganizationAuthorizationOptions() const;

                    /**
                     * 设置<p>企业认证时个性化能力信息</p>
                     * @param _organizationAuthorizationOptions <p>企业认证时个性化能力信息</p>
                     * 
                     */
                    void SetOrganizationAuthorizationOptions(const OrganizationAuthorizationOptions& _organizationAuthorizationOptions);

                    /**
                     * 判断参数 OrganizationAuthorizationOptions 是否已赋值
                     * @return OrganizationAuthorizationOptions 是否已赋值
                     * 
                     */
                    bool OrganizationAuthorizationOptionsHasBeenSet() const;

                    /**
                     * 获取<p>组织机构对公打款 账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * @return BankAccountNumber <p>组织机构对公打款 账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置<p>组织机构对公打款 账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * @param _bankAccountNumber <p>组织机构对公打款 账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return Operator <p>无</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>无</p>
                     * @param _operator <p>无</p>
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
                     * 获取<p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * @return JumpEvents <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * 
                     */
                    std::vector<JumpEvent> GetJumpEvents() const;

                    /**
                     * 设置<p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * @param _jumpEvents <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     * 
                     */
                    void SetJumpEvents(const std::vector<JumpEvent>& _jumpEvents);

                    /**
                     * 判断参数 JumpEvents 是否已赋值
                     * @return JumpEvents 是否已赋值
                     * 
                     */
                    bool JumpEventsHasBeenSet() const;

                    /**
                     * 获取<p>企业证照类型：</p><ul><li> **USCC** :(默认)工商组织营业执照</li><li> **PRACTICELICENSEOFMEDICALINSTITUTION** :医疗机构执业许可证</li><li> **CLINICFILLINGCERTIFICATE* :诊所备案证</li></ul><p>枚举值：</p><ul><li>USCC： 工商组织营业执照</li><li>PRACTICELICENSEOFMEDICALINSTITUTION： 医疗机构执业许可证</li><li>CLINICFILLINGCERTIFICATE： 诊所备案证</li></ul>
                     * @return ProxyOrganizationIdCardType <p>企业证照类型：</p><ul><li> **USCC** :(默认)工商组织营业执照</li><li> **PRACTICELICENSEOFMEDICALINSTITUTION** :医疗机构执业许可证</li><li> **CLINICFILLINGCERTIFICATE* :诊所备案证</li></ul><p>枚举值：</p><ul><li>USCC： 工商组织营业执照</li><li>PRACTICELICENSEOFMEDICALINSTITUTION： 医疗机构执业许可证</li><li>CLINICFILLINGCERTIFICATE： 诊所备案证</li></ul>
                     * 
                     */
                    std::string GetProxyOrganizationIdCardType() const;

                    /**
                     * 设置<p>企业证照类型：</p><ul><li> **USCC** :(默认)工商组织营业执照</li><li> **PRACTICELICENSEOFMEDICALINSTITUTION** :医疗机构执业许可证</li><li> **CLINICFILLINGCERTIFICATE* :诊所备案证</li></ul><p>枚举值：</p><ul><li>USCC： 工商组织营业执照</li><li>PRACTICELICENSEOFMEDICALINSTITUTION： 医疗机构执业许可证</li><li>CLINICFILLINGCERTIFICATE： 诊所备案证</li></ul>
                     * @param _proxyOrganizationIdCardType <p>企业证照类型：</p><ul><li> **USCC** :(默认)工商组织营业执照</li><li> **PRACTICELICENSEOFMEDICALINSTITUTION** :医疗机构执业许可证</li><li> **CLINICFILLINGCERTIFICATE* :诊所备案证</li></ul><p>枚举值：</p><ul><li>USCC： 工商组织营业执照</li><li>PRACTICELICENSEOFMEDICALINSTITUTION： 医疗机构执业许可证</li><li>CLINICFILLINGCERTIFICATE： 诊所备案证</li></ul>
                     * 
                     */
                    void SetProxyOrganizationIdCardType(const std::string& _proxyOrganizationIdCardType);

                    /**
                     * 判断参数 ProxyOrganizationIdCardType 是否已赋值
                     * @return ProxyOrganizationIdCardType 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationIdCardTypeHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容<br>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>第三方平台子客的企业名称，请确认该企业名称与企业营业执照中注册的名称完全一致。<br><font color="red"><br>在测试环境联调的过程中，企业名称请统一加上“测试”二字，如：典子谦示例企业测试，否则将无法审核通过。<br>企业名称请使用以下名称, 以下名称可以不用走收录。<br><strong>子客测试专用企业1 - 子客测试专用企业9</strong></font></p><p>注:<br> <code>1. 如果名称中包含英文括号()，请使用中文括号（）代替。</code><br> <code>2、该名称需要与Agent.ProxyOrganizationOpenId相匹配,  企业激活后Agent.ProxyOrganizationOpenId会跟此企业名称一一绑定; 如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效。</code></p>
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * <p>子客企业统一社会信用代码，最大长度200个字符<br>注意：<code>如果您的企业已经在认证授权中或者激活完成，这里修改子客企业名字将不会生效</code>。</p>
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * <p>子客企业员工的姓名，最大长度50个字符,  员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>注：<code>该姓名需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该姓名会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人名字传入将不会生效</code></p>
                     */
                    std::string m_proxyOperatorName;
                    bool m_proxyOperatorNameHasBeenSet;

                    /**
                     * <p>子客企业员工的手机码,  支持国内手机号11位数字(无需加+86前缀或其他字符)。注：<code>该手机号需要和Agent.ProxyOperator.OpenId相匹配,  当员工完成认证后该手机号会和Agent.ProxyOperator.OpenId一一绑定, 若员工已认证加入企业，这里修改经办人手机号传入将不会生效</code></p>
                     */
                    std::string m_proxyOperatorMobile;
                    bool m_proxyOperatorMobileHasBeenSet;

                    /**
                     * <p>Web控制台登录后进入的功能模块,  支持的模块包括：</p><ul><li> **空值** :(默认)企业中心模块</li><li> **DOCUMENT** :合同管理模块</li><li> **TEMPLATE** :企业模板管理模块</li><li> **SEAL** :印章管理模块</li><li> **OPERATOR** :组织管理模块</li></ul>注意：1、如果EndPoint选择"CHANNEL"或"APP"，该参数仅支持传递"SEAL"，进入印章管理模块2、该参数**仅在企业和员工激活已经完成，登录控制台场景才生效**。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>该参数和Module参数配合使用，用于指定模块下的资源Id，指定后链接登录将展示该资源的详情。</p><p>根据Module参数的不同所代表的含义不同(ModuleId需要和Module对应，ModuleId可以通过API或者控制台获取到)。当前支持：</p><table> <thead> <tr> <th>Module传值</th> <th>ModuleId传值</th> <th>进入的目标页面</th> </tr> </thead> <tbody> <tr> <td>SEAL</td> <td>印章ID</td> <td>查看指定印章的详情页面</td> </tr> <tr> <td>TEMPLATE</td> <td>合同模板ID</td> <td>指定模板的详情页面</td> </tr> <tr> <td>DOCUMENT</td> <td>合同ID</td> <td>指定合同的详情页面</td> </tr> </tbody> </table>注意：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * <p>是否展示左侧菜单栏 </p><ul><li> **ENABLE** : (默认)进入web控制台展示左侧菜单栏</li><li> **DISABLE** : 进入web控制台不展示左侧菜单栏</li></ul>注：该参数**仅在企业和员工激活完成，登录控制台场景才生效**。
                     */
                    std::string m_menuStatus;
                    bool m_menuStatusHasBeenSet;

                    /**
                     * <p>生成链接的类型：</p><ul><li>**PC**：(默认)<font color="red">web控制台</font>链接, 需要在PC浏览器中打开</li><li>**CHANNEL**：H5跳转到电子签小程序链接, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**SHORT_URL**：<font color="red">H5</font>跳转到电子签小程序链接的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签小程序</li><li>**WEIXIN_QRCODE_URL**：直接跳转至电子签小程序的二维码链接，无需通过中转页。<font color="red">您需要自行将其转换为二维码，使用微信扫码后可直接进入。请注意，直接点击链接是无效的。</font></li><li>**APP**：<font color="red">APP或小程序</font>跳转电子签小程序链接, 一般用于贵方小程序或者APP跳转过来,  打开后进入腾讯电子签小程序</li><li>**H5**：<font color="red">H5长链接</font>跳转H5链接, 一般用于贵方H5跳转过来,  打开后进入腾讯电子签H5页面</li><li>**SHORT_H5**：<font color="red">H5短链</font>跳转H5的短链形式, 一般用于发送短信中带的链接, 打开后进入腾讯电子签H5页面</li></ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>触发自动跳转事件，仅对EndPoint为App类型有效，可选值包括：</p><ul><li> **VERIFIED** :企业认证完成/员工认证完成后跳回原App/小程序</li></ul>
                     */
                    std::string m_autoJumpBackEvent;
                    bool m_autoJumpBackEventHasBeenSet;

                    /**
                     * <p>可选的此企业允许的授权方式, 可以设置的方式有:</p><ul><li>2：转法定代表人授权</li><li>5：授权书+对公打款</li></ul>
                     */
                    std::vector<int64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * <p>子客经办人身份证<br>注意：<code>如果已同步，这里非空会更新同步的经办人身份证号，暂时只支持中国大陆居民身份证类型</code>。</p>
                     */
                    std::string m_proxyOperatorIdCardNumber;
                    bool m_proxyOperatorIdCardNumberHasBeenSet;

                    /**
                     * <p><font color="red">已废弃</font> 请使用 JumpEvents 参数，进行替换。<br>认证完成跳转链接。<br>注意：<code>此功能仅在Endpoint参数设置成 H5 或 PC时才有效</code>。</p>
                     */
                    std::string m_autoJumpUrl;
                    bool m_autoJumpUrlHasBeenSet;

                    /**
                     * <p>是否展示头顶导航栏  <ul><li> <strong>ENABLE</strong> : (默认)进入web控制台展示头顶导航栏</li> <li> <strong>DISABLE</strong> : 进入web控制台不展示头顶导航栏</li></ul> 注：该参数<strong>仅在企业和员工激活完成，登录控制台场景才生效</strong>。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/dd54f333140c711cf6a88e3801bcd178.png" target="_blank">点击查看头顶导航栏位置</a></p>
                     */
                    std::string m_topNavigationStatus;
                    bool m_topNavigationStatusHasBeenSet;

                    /**
                     * <p>是否自动激活子客企业，有下面两种选项：</p><p><strong>false（默认设置）</strong>：不自动激活子客户。您需要通过控制台或调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateChannelSubOrganizationActive">激活或者续期子企业</a>接口手动完成激活过程。</p><p><strong>true</strong>：若持有的许可证充足，子客户企业注册完成后将自动激活，无需手动操作或访问控制台。</p><p><b>注</b>：如果<b>应用扩展服务</b>中的<b>自动激活子客企业</b>为打开态， 则忽略本接口的AutoActive这个参数（若持有的许可证充足，子客户企业注册完成后将自动激活），具体位置参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/c3639b05503d3735bac483d17aa6b0a3.png" alt="image"></p>
                     */
                    bool m_autoActive;
                    bool m_autoActiveHasBeenSet;

                    /**
                     * <p>营业执照正面照（支持PNG或JPG格式）需以base64格式提供，且文件大小不得超过5MB。</p>
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * <p>组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。</p>
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * <p>组织机构法人的姓名。 请确认该企业统一社会信用代码与企业营业执照中注册的法人姓名一致。</p>
                     */
                    std::string m_proxyLegalName;
                    bool m_proxyLegalNameHasBeenSet;

                    /**
                     * <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。<br> p.s. 如果上传授权书 ，需遵循以下条件 </p><ol><li>超管的信息（超管姓名，超管手机号）必须为必填参数。 </li><li>认证方式AuthorizationTypes必须只能是上传授权书方式</li></ol>
                     */
                    std::vector<std::string> m_powerOfAttorneys;
                    bool m_powerOfAttorneysHasBeenSet;

                    /**
                     * <p>企业认证时个性化能力信息</p>
                     */
                    OrganizationAuthorizationOptions m_organizationAuthorizationOptions;
                    bool m_organizationAuthorizationOptionsHasBeenSet;

                    /**
                     * <p>组织机构对公打款 账号，账户名跟企业名称一致。</p><p>p.s.<br>只有认证方式是授权书+对公打款时才生效。</p>
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>跳转事件，其中包括认证期间收录，授权书审核，企业认证的回跳事件。<br>p.s.Endpoint如果是APP 类型，请传递JumpUrl为<font color="red">&quot;true&quot; </font><br>如果 Endpoint 是 H5 类型，请参考文档跳转电子签H5 p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。</p>
                     */
                    std::vector<JumpEvent> m_jumpEvents;
                    bool m_jumpEventsHasBeenSet;

                    /**
                     * <p>企业证照类型：</p><ul><li> **USCC** :(默认)工商组织营业执照</li><li> **PRACTICELICENSEOFMEDICALINSTITUTION** :医疗机构执业许可证</li><li> **CLINICFILLINGCERTIFICATE* :诊所备案证</li></ul><p>枚举值：</p><ul><li>USCC： 工商组织营业执照</li><li>PRACTICELICENSEOFMEDICALINSTITUTION： 医疗机构执业许可证</li><li>CLINICFILLINGCERTIFICATE： 诊所备案证</li></ul>
                     */
                    std::string m_proxyOrganizationIdCardType;
                    bool m_proxyOrganizationIdCardTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECONSOLELOGINURLREQUEST_H_
