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
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取模板唯一标识，查询单个模板时使用
                     * @return TemplateId 模板唯一标识，查询单个模板时使用
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板唯一标识，查询单个模板时使用
                     * @param TemplateId 模板唯一标识，查询单个模板时使用
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取查询内容：0-模板列表及详情（默认），1-仅模板列表
                     * @return ContentType 查询内容：0-模板列表及详情（默认），1-仅模板列表
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置查询内容：0-模板列表及详情（默认），1-仅模板列表
                     * @param ContentType 查询内容：0-模板列表及详情（默认），1-仅模板列表
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取查询个数，默认20，最大100；在查询列表的时候有效
                     * @return Limit 查询个数，默认20，最大100；在查询列表的时候有效
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询个数，默认20，最大100；在查询列表的时候有效
                     * @param Limit 查询个数，默认20，最大100；在查询列表的时候有效
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询偏移位置，默认0；在查询列表的时候有效
                     * @return Offset 查询偏移位置，默认0；在查询列表的时候有效
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移位置，默认0；在查询列表的时候有效
                     * @param Offset 查询偏移位置，默认0；在查询列表的时候有效
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否返回所有组件信息。默认false，只返回发起方控件；true，返回所有签署方控件
                     * @return QueryAllComponents 是否返回所有组件信息。默认false，只返回发起方控件；true，返回所有签署方控件
                     */
                    bool GetQueryAllComponents() const;

                    /**
                     * 设置是否返回所有组件信息。默认false，只返回发起方控件；true，返回所有签署方控件
                     * @param QueryAllComponents 是否返回所有组件信息。默认false，只返回发起方控件；true，返回所有签署方控件
                     */
                    void SetQueryAllComponents(const bool& _queryAllComponents);

                    /**
                     * 判断参数 QueryAllComponents 是否已赋值
                     * @return QueryAllComponents 是否已赋值
                     */
                    bool QueryAllComponentsHasBeenSet() const;

                    /**
                     * 获取模糊搜索模板名称，最大长度200
                     * @return TemplateName 模糊搜索模板名称，最大长度200
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模糊搜索模板名称，最大长度200
                     * @param TemplateName 模糊搜索模板名称，最大长度200
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

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

                    /**
                     * 获取是否获取模板预览链接
                     * @return WithPreviewUrl 是否获取模板预览链接
                     */
                    bool GetWithPreviewUrl() const;

                    /**
                     * 设置是否获取模板预览链接
                     * @param WithPreviewUrl 是否获取模板预览链接
                     */
                    void SetWithPreviewUrl(const bool& _withPreviewUrl);

                    /**
                     * 判断参数 WithPreviewUrl 是否已赋值
                     * @return WithPreviewUrl 是否已赋值
                     */
                    bool WithPreviewUrlHasBeenSet() const;

                    /**
                     * 获取是否获取模板的PDF文件链接- 第三方应用集成需要开启白名单时才能使用。
                     * @return WithPdfUrl 是否获取模板的PDF文件链接- 第三方应用集成需要开启白名单时才能使用。
                     */
                    bool GetWithPdfUrl() const;

                    /**
                     * 设置是否获取模板的PDF文件链接- 第三方应用集成需要开启白名单时才能使用。
                     * @param WithPdfUrl 是否获取模板的PDF文件链接- 第三方应用集成需要开启白名单时才能使用。
                     */
                    void SetWithPdfUrl(const bool& _withPdfUrl);

                    /**
                     * 判断参数 WithPdfUrl 是否已赋值
                     * @return WithPdfUrl 是否已赋值
                     */
                    bool WithPdfUrlHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return ChannelTemplateId 模板ID
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param ChannelTemplateId 模板ID
                     */
                    void SetChannelTemplateId(const std::string& _channelTemplateId);

                    /**
                     * 判断参数 ChannelTemplateId 是否已赋值
                     * @return ChannelTemplateId 是否已赋值
                     */
                    bool ChannelTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 模板唯一标识，查询单个模板时使用
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 查询内容：0-模板列表及详情（默认），1-仅模板列表
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 查询个数，默认20，最大100；在查询列表的时候有效
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询偏移位置，默认0；在查询列表的时候有效
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否返回所有组件信息。默认false，只返回发起方控件；true，返回所有签署方控件
                     */
                    bool m_queryAllComponents;
                    bool m_queryAllComponentsHasBeenSet;

                    /**
                     * 模糊搜索模板名称，最大长度200
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否获取模板预览链接
                     */
                    bool m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * 是否获取模板的PDF文件链接- 第三方应用集成需要开启白名单时才能使用。
                     */
                    bool m_withPdfUrl;
                    bool m_withPdfUrlHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESREQUEST_H_
