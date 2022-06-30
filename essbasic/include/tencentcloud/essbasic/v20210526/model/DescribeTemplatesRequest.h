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
                     * 获取渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取模板唯一标识
                     * @return TemplateId 模板唯一标识
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板唯一标识
                     * @param TemplateId 模板唯一标识
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
                     * 获取查询个数，默认20，最大100
                     * @return Limit 查询个数，默认20，最大100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询个数，默认20，最大100
                     * @param Limit 查询个数，默认20，最大100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询偏移位置，默认0
                     * @return Offset 查询偏移位置，默认0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移位置，默认0
                     * @param Offset 查询偏移位置，默认0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

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
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 模板唯一标识
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 查询内容：0-模板列表及详情（默认），1-仅模板列表
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 查询个数，默认20，最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询偏移位置，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

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
