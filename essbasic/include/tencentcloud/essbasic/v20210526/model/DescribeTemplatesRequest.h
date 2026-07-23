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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESREQUEST_H_

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
                * DescribeTemplates请求参数结构体
                */
                class DescribeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTemplatesRequest();
                    ~DescribeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取<p>合同模板ID，为32位字符串。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在企业模板中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * @return TemplateId <p>合同模板ID，为32位字符串。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在企业模板中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>合同模板ID，为32位字符串。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在企业模板中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * @param _templateId <p>合同模板ID，为32位字符串。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在企业模板中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>查询模板的内容</p><ul><li>**0**：（默认）模板列表及详情</li><li>**1**：仅模板列表, 不会返回模板中的签署控件, 填写控件, 参与方角色列表等信息</li></ul>
                     * @return ContentType <p>查询模板的内容</p><ul><li>**0**：（默认）模板列表及详情</li><li>**1**：仅模板列表, 不会返回模板中的签署控件, 填写控件, 参与方角色列表等信息</li></ul>
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置<p>查询模板的内容</p><ul><li>**0**：（默认）模板列表及详情</li><li>**1**：仅模板列表, 不会返回模板中的签署控件, 填写控件, 参与方角色列表等信息</li></ul>
                     * @param _contentType <p>查询模板的内容</p><ul><li>**0**：（默认）模板列表及详情</li><li>**1**：仅模板列表, 不会返回模板中的签署控件, 填写控件, 参与方角色列表等信息</li></ul>
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>合同模板ID数组，每一个合同模板ID为32位字符串,  最多支持100个模板的批量查询。</p><p>注意:<br>1.<code>此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。</code></p><ol start="2"><li><code>请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。</code></li><li><code>若传递此参数，分页参数(Limit,Offset)无效</code></li></ol><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * @return TemplateIds <p>合同模板ID数组，每一个合同模板ID为32位字符串,  最多支持100个模板的批量查询。</p><p>注意:<br>1.<code>此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。</code></p><ol start="2"><li><code>请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。</code></li><li><code>若传递此参数，分页参数(Limit,Offset)无效</code></li></ol><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置<p>合同模板ID数组，每一个合同模板ID为32位字符串,  最多支持100个模板的批量查询。</p><p>注意:<br>1.<code>此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。</code></p><ol start="2"><li><code>请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。</code></li><li><code>若传递此参数，分页参数(Limit,Offset)无效</code></li></ol><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * @param _templateIds <p>合同模板ID数组，每一个合同模板ID为32位字符串,  最多支持100个模板的批量查询。</p><p>注意:<br>1.<code>此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。</code></p><ol start="2"><li><code>请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。</code></li><li><code>若传递此参数，分页参数(Limit,Offset)无效</code></li></ol><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>指定每页返回的数据条数，和Offset参数配合使用。</p><p>注：<code>1.默认值为20，单页做大值为100。</code></p>
                     * @return Limit <p>指定每页返回的数据条数，和Offset参数配合使用。</p><p>注：<code>1.默认值为20，单页做大值为100。</code></p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>指定每页返回的数据条数，和Offset参数配合使用。</p><p>注：<code>1.默认值为20，单页做大值为100。</code></p>
                     * @param _limit <p>指定每页返回的数据条数，和Offset参数配合使用。</p><p>注：<code>1.默认值为20，单页做大值为100。</code></p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量:从 0 开始，最大20000。</p>
                     * @return Offset <p>偏移量:从 0 开始，最大20000。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量:从 0 开始，最大20000。</p>
                     * @param _offset <p>偏移量:从 0 开始，最大20000。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>模糊搜索的模板名称，注意是模板名的连续部分，长度不能超过200，可支持由中文、字母、数字和下划线组成字符串。</p>
                     * @return TemplateName <p>模糊搜索的模板名称，注意是模板名的连续部分，长度不能超过200，可支持由中文、字母、数字和下划线组成字符串。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模糊搜索的模板名称，注意是模板名的连续部分，长度不能超过200，可支持由中文、字母、数字和下划线组成字符串。</p>
                     * @param _templateName <p>模糊搜索的模板名称，注意是模板名的连续部分，长度不能超过200，可支持由中文、字母、数字和下划线组成字符串。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。</p>
                     * @return ChannelTemplateId <p>对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。</p>
                     * 
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置<p>对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。</p>
                     * @param _channelTemplateId <p>对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。</p>
                     * 
                     */
                    void SetChannelTemplateId(const std::string& _channelTemplateId);

                    /**
                     * 判断参数 ChannelTemplateId 是否已赋值
                     * @return ChannelTemplateId 是否已赋值
                     * 
                     */
                    bool ChannelTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>返回控件的范围, 是只返回发起方自己的还是所有参与方的</p><ul><li>**false**：（默认）只返回发起方控件</li><li>**true**：返回所有参与方(包括发起方和签署方)控件</li></ul>
                     * @return QueryAllComponents <p>返回控件的范围, 是只返回发起方自己的还是所有参与方的</p><ul><li>**false**：（默认）只返回发起方控件</li><li>**true**：返回所有参与方(包括发起方和签署方)控件</li></ul>
                     * 
                     */
                    bool GetQueryAllComponents() const;

                    /**
                     * 设置<p>返回控件的范围, 是只返回发起方自己的还是所有参与方的</p><ul><li>**false**：（默认）只返回发起方控件</li><li>**true**：返回所有参与方(包括发起方和签署方)控件</li></ul>
                     * @param _queryAllComponents <p>返回控件的范围, 是只返回发起方自己的还是所有参与方的</p><ul><li>**false**：（默认）只返回发起方控件</li><li>**true**：返回所有参与方(包括发起方和签署方)控件</li></ul>
                     * 
                     */
                    void SetQueryAllComponents(const bool& _queryAllComponents);

                    /**
                     * 判断参数 QueryAllComponents 是否已赋值
                     * @return QueryAllComponents 是否已赋值
                     * 
                     */
                    bool QueryAllComponentsHasBeenSet() const;

                    /**
                     * 获取<p>是否获取模板预览链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,  有效期5分钟。可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。</p>
                     * @return WithPreviewUrl <p>是否获取模板预览链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,  有效期5分钟。可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。</p>
                     * 
                     */
                    bool GetWithPreviewUrl() const;

                    /**
                     * 设置<p>是否获取模板预览链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,  有效期5分钟。可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。</p>
                     * @param _withPreviewUrl <p>是否获取模板预览链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,  有效期5分钟。可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。</p>
                     * 
                     */
                    void SetWithPreviewUrl(const bool& _withPreviewUrl);

                    /**
                     * 判断参数 WithPreviewUrl 是否已赋值
                     * @return WithPreviewUrl 是否已赋值
                     * 
                     */
                    bool WithPreviewUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否获取模板的PDF文件链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟, 可以用于将PDF文件下载到本地</p><p>注: <code>此功能需要开通功能白名单【第三方应用集成企业获取模板PDF下载链接】，使用前请联系对接的客户经理沟通。</code></p>
                     * @return WithPdfUrl <p>是否获取模板的PDF文件链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟, 可以用于将PDF文件下载到本地</p><p>注: <code>此功能需要开通功能白名单【第三方应用集成企业获取模板PDF下载链接】，使用前请联系对接的客户经理沟通。</code></p>
                     * 
                     */
                    bool GetWithPdfUrl() const;

                    /**
                     * 设置<p>是否获取模板的PDF文件链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟, 可以用于将PDF文件下载到本地</p><p>注: <code>此功能需要开通功能白名单【第三方应用集成企业获取模板PDF下载链接】，使用前请联系对接的客户经理沟通。</code></p>
                     * @param _withPdfUrl <p>是否获取模板的PDF文件链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟, 可以用于将PDF文件下载到本地</p><p>注: <code>此功能需要开通功能白名单【第三方应用集成企业获取模板PDF下载链接】，使用前请联系对接的客户经理沟通。</code></p>
                     * 
                     */
                    void SetWithPdfUrl(const bool& _withPdfUrl);

                    /**
                     * 判断参数 WithPdfUrl 是否已赋值
                     * @return WithPdfUrl 是否已赋值
                     * 
                     */
                    bool WithPdfUrlHasBeenSet() const;

                    /**
                     * 获取<p>操作者的信息</p>
                     * @return Operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作者的信息</p>
                     * @param _operator <p>操作者的信息</p>
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
                     * 获取<p>用户合同类型id</p>
                     * @return UserFlowTypeId <p>用户合同类型id</p>
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置<p>用户合同类型id</p>
                     * @param _userFlowTypeId <p>用户合同类型id</p>
                     * 
                     */
                    void SetUserFlowTypeId(const std::string& _userFlowTypeId);

                    /**
                     * 判断参数 UserFlowTypeId 是否已赋值
                     * @return UserFlowTypeId 是否已赋值
                     * 
                     */
                    bool UserFlowTypeIdHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>合同模板ID，为32位字符串。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在企业模板中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>查询模板的内容</p><ul><li>**0**：（默认）模板列表及详情</li><li>**1**：仅模板列表, 不会返回模板中的签署控件, 填写控件, 参与方角色列表等信息</li></ul>
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>合同模板ID数组，每一个合同模板ID为32位字符串,  最多支持100个模板的批量查询。</p><p>注意:<br>1.<code>此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。</code></p><ol start="2"><li><code>请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。</code></li><li><code>若传递此参数，分页参数(Limit,Offset)无效</code></li></ol><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击查看模板Id在控制台上的位置</a></p>
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * <p>指定每页返回的数据条数，和Offset参数配合使用。</p><p>注：<code>1.默认值为20，单页做大值为100。</code></p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量:从 0 开始，最大20000。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>模糊搜索的模板名称，注意是模板名的连续部分，长度不能超过200，可支持由中文、字母、数字和下划线组成字符串。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。</p>
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                    /**
                     * <p>返回控件的范围, 是只返回发起方自己的还是所有参与方的</p><ul><li>**false**：（默认）只返回发起方控件</li><li>**true**：返回所有参与方(包括发起方和签署方)控件</li></ul>
                     */
                    bool m_queryAllComponents;
                    bool m_queryAllComponentsHasBeenSet;

                    /**
                     * <p>是否获取模板预览链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,  有效期5分钟。可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。</p>
                     */
                    bool m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * <p>是否获取模板的PDF文件链接。</p><ul><li>**false**：不获取（默认）</li><li>**true**：获取</li></ul><p>设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟, 可以用于将PDF文件下载到本地</p><p>注: <code>此功能需要开通功能白名单【第三方应用集成企业获取模板PDF下载链接】，使用前请联系对接的客户经理沟通。</code></p>
                     */
                    bool m_withPdfUrl;
                    bool m_withPdfUrlHasBeenSet;

                    /**
                     * <p>操作者的信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>用户合同类型id</p>
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESREQUEST_H_
