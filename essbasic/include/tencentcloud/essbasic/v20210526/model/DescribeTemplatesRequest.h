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
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取合同模板ID，为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。
                     * @return TemplateId 合同模板ID，为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置合同模板ID，为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。
                     * @param _templateId 合同模板ID，为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。
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
                     * 获取查询内容控制

<ul><li>**0**：模板列表及详情（默认）</li>
<li>**1**：仅模板列表</li></ul>
                     * @return ContentType 查询内容控制

<ul><li>**0**：模板列表及详情（默认）</li>
<li>**1**：仅模板列表</li></ul>
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置查询内容控制

<ul><li>**0**：模板列表及详情（默认）</li>
<li>**1**：仅模板列表</li></ul>
                     * @param _contentType 查询内容控制

<ul><li>**0**：模板列表及详情（默认）</li>
<li>**1**：仅模板列表</li></ul>
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
                     * 获取合同模板ID数组，每一个合同模板ID为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。

```注意: 
1. 此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。
2. 请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。
3. 最多支持200个模板。
4. 若传递此参数，分页参数(Limit,Offset)无效```

                     * @return TemplateIds 合同模板ID数组，每一个合同模板ID为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。

```注意: 
1. 此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。
2. 请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。
3. 最多支持200个模板。
4. 若传递此参数，分页参数(Limit,Offset)无效```

                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置合同模板ID数组，每一个合同模板ID为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。

```注意: 
1. 此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。
2. 请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。
3. 最多支持200个模板。
4. 若传递此参数，分页参数(Limit,Offset)无效```

                     * @param _templateIds 合同模板ID数组，每一个合同模板ID为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。

```注意: 
1. 此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。
2. 请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。
3. 最多支持200个模板。
4. 若传递此参数，分页参数(Limit,Offset)无效```

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
                     * 获取指定每页返回的数据条数，和Offset参数配合使用。

注：`1.默认值为20，单页做大值为200。`
                     * @return Limit 指定每页返回的数据条数，和Offset参数配合使用。

注：`1.默认值为20，单页做大值为200。`
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页返回的数据条数，和Offset参数配合使用。

注：`1.默认值为20，单页做大值为200。`
                     * @param _limit 指定每页返回的数据条数，和Offset参数配合使用。

注：`1.默认值为20，单页做大值为200。`
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
                     * 获取查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`1.offset从0开始，即第一页为0。`
`2.默认从第一页返回。`
                     * @return Offset 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`1.offset从0开始，即第一页为0。`
`2.默认从第一页返回。`
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`1.offset从0开始，即第一页为0。`
`2.默认从第一页返回。`
                     * @param _offset 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`1.offset从0开始，即第一页为0。`
`2.默认从第一页返回。`
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
                     * 获取模糊搜索的模板名称，注意是模板名的连续部分，最大长度200
                     * @return TemplateName 模糊搜索的模板名称，注意是模板名的连续部分，最大长度200
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模糊搜索的模板名称，注意是模板名的连续部分，最大长度200
                     * @param _templateName 模糊搜索的模板名称，注意是模板名的连续部分，最大长度200
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
                     * 获取对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。
                     * @return ChannelTemplateId 对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。
                     * 
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。
                     * @param _channelTemplateId 对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。
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
                     * 获取是否返回所有控件信息。

<ul><li>**false**：只返回发起方控件（默认）</li>
<li>**true**：返回所有签署方控件</li></ul>
                     * @return QueryAllComponents 是否返回所有控件信息。

<ul><li>**false**：只返回发起方控件（默认）</li>
<li>**true**：返回所有签署方控件</li></ul>
                     * 
                     */
                    bool GetQueryAllComponents() const;

                    /**
                     * 设置是否返回所有控件信息。

<ul><li>**false**：只返回发起方控件（默认）</li>
<li>**true**：返回所有签署方控件</li></ul>
                     * @param _queryAllComponents 是否返回所有控件信息。

<ul><li>**false**：只返回发起方控件（默认）</li>
<li>**true**：返回所有签署方控件</li></ul>
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
                     * 获取是否获取模板预览链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,有效期5分钟。
可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
（此功能开放需要联系客户经理）
                     * @return WithPreviewUrl 是否获取模板预览链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,有效期5分钟。
可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
（此功能开放需要联系客户经理）
                     * 
                     */
                    bool GetWithPreviewUrl() const;

                    /**
                     * 设置是否获取模板预览链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,有效期5分钟。
可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
（此功能开放需要联系客户经理）
                     * @param _withPreviewUrl 是否获取模板预览链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,有效期5分钟。
可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
（此功能开放需要联系客户经理）
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
                     * 获取是否获取模板的PDF文件链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟。
（此功能开放需要联系客户经理）
                     * @return WithPdfUrl 是否获取模板的PDF文件链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟。
（此功能开放需要联系客户经理）
                     * 
                     */
                    bool GetWithPdfUrl() const;

                    /**
                     * 设置是否获取模板的PDF文件链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟。
（此功能开放需要联系客户经理）
                     * @param _withPdfUrl 是否获取模板的PDF文件链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟。
（此功能开放需要联系客户经理）
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
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param _operator 操作者的信息
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
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同模板ID，为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 查询内容控制

<ul><li>**0**：模板列表及详情（默认）</li>
<li>**1**：仅模板列表</li></ul>
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 合同模板ID数组，每一个合同模板ID为32位字符串。
建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。

```注意: 
1. 此参数TemplateIds与TemplateId互为独立，若两者均传入，以TemplateId为准。
2. 请确保每个模板均正确且属于当前企业，若有任一模板不存在，则返回错误。
3. 最多支持200个模板。
4. 若传递此参数，分页参数(Limit,Offset)无效```

                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * 指定每页返回的数据条数，和Offset参数配合使用。

注：`1.默认值为20，单页做大值为200。`
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`1.offset从0开始，即第一页为0。`
`2.默认从第一页返回。`
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 模糊搜索的模板名称，注意是模板名的连续部分，最大长度200
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 对应第三方应用平台企业的模板ID，通过此值可以搜索由第三方应用平台模板ID下发或领取得到的子客模板列表。
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                    /**
                     * 是否返回所有控件信息。

<ul><li>**false**：只返回发起方控件（默认）</li>
<li>**true**：返回所有签署方控件</li></ul>
                     */
                    bool m_queryAllComponents;
                    bool m_queryAllComponentsHasBeenSet;

                    /**
                     * 是否获取模板预览链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PreviewUrl，为模板的H5预览链接,有效期5分钟。
可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
（此功能开放需要联系客户经理）
                     */
                    bool m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * 是否获取模板的PDF文件链接。

<ul><li>**false**：不获取（默认）</li>
<li>**true**：获取</li></ul>

设置为true之后， 返回参数PdfUrl，为模板PDF文件链接，有效期5分钟。
（此功能开放需要联系客户经理）
                     */
                    bool m_withPdfUrl;
                    bool m_withPdfUrlHasBeenSet;

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

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESREQUEST_H_
