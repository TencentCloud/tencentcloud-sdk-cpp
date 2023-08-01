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
                     * 获取应用相关信息。 
此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId必填。
                     * @return Agent 应用相关信息。 
此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 
此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId必填。
                     * @param _agent 应用相关信息。 
此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId必填。
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
                     * 获取模板唯一标识，查询单个模板时使用
                     * @return TemplateId 模板唯一标识，查询单个模板时使用
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板唯一标识，查询单个模板时使用
                     * @param _templateId 模板唯一标识，查询单个模板时使用
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
                     * 获取查询内容：
0-模板列表及详情（默认），
1-仅模板列表
                     * @return ContentType 查询内容：
0-模板列表及详情（默认），
1-仅模板列表
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置查询内容：
0-模板列表及详情（默认），
1-仅模板列表
                     * @param _contentType 查询内容：
0-模板列表及详情（默认），
1-仅模板列表
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
                     * 获取指定每页多少条数据，如果不传默认为20，单页最大100。
                     * @return Limit 指定每页多少条数据，如果不传默认为20，单页最大100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页多少条数据，如果不传默认为20，单页最大100。
                     * @param _limit 指定每页多少条数据，如果不传默认为20，单页最大100。
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
                     * 获取查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * @return Offset 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * @param _offset 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
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
                     * 获取是否返回所有组件信息。
默认false，只返回发起方控件；
true，返回所有签署方控件
                     * @return QueryAllComponents 是否返回所有组件信息。
默认false，只返回发起方控件；
true，返回所有签署方控件
                     * 
                     */
                    bool GetQueryAllComponents() const;

                    /**
                     * 设置是否返回所有组件信息。
默认false，只返回发起方控件；
true，返回所有签署方控件
                     * @param _queryAllComponents 是否返回所有组件信息。
默认false，只返回发起方控件；
true，返回所有签署方控件
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
                     * 获取模糊搜索模板名称，最大长度200
                     * @return TemplateName 模糊搜索模板名称，最大长度200
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模糊搜索模板名称，最大长度200
                     * @param _templateName 模糊搜索模板名称，最大长度200
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
                     * 获取是否获取模板预览链接，
默认false-不获取
true-获取
                     * @return WithPreviewUrl 是否获取模板预览链接，
默认false-不获取
true-获取
                     * 
                     */
                    bool GetWithPreviewUrl() const;

                    /**
                     * 设置是否获取模板预览链接，
默认false-不获取
true-获取
                     * @param _withPreviewUrl 是否获取模板预览链接，
默认false-不获取
true-获取
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
默认false-不获取
true-获取
请联系客户经理开白后使用。
                     * @return WithPdfUrl 是否获取模板的PDF文件链接。
默认false-不获取
true-获取
请联系客户经理开白后使用。
                     * 
                     */
                    bool GetWithPdfUrl() const;

                    /**
                     * 设置是否获取模板的PDF文件链接。
默认false-不获取
true-获取
请联系客户经理开白后使用。
                     * @param _withPdfUrl 是否获取模板的PDF文件链接。
默认false-不获取
true-获取
请联系客户经理开白后使用。
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
                     * 获取对应第三方应用平台企业的模板ID
                     * @return ChannelTemplateId 对应第三方应用平台企业的模板ID
                     * 
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置对应第三方应用平台企业的模板ID
                     * @param _channelTemplateId 对应第三方应用平台企业的模板ID
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
                     * 应用相关信息。 
此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 模板唯一标识，查询单个模板时使用
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 查询内容：
0-模板列表及详情（默认），
1-仅模板列表
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 指定每页多少条数据，如果不传默认为20，单页最大100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否返回所有组件信息。
默认false，只返回发起方控件；
true，返回所有签署方控件
                     */
                    bool m_queryAllComponents;
                    bool m_queryAllComponentsHasBeenSet;

                    /**
                     * 模糊搜索模板名称，最大长度200
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 是否获取模板预览链接，
默认false-不获取
true-获取
                     */
                    bool m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * 是否获取模板的PDF文件链接。
默认false-不获取
true-获取
请联系客户经理开白后使用。
                     */
                    bool m_withPdfUrl;
                    bool m_withPdfUrlHasBeenSet;

                    /**
                     * 对应第三方应用平台企业的模板ID
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

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
