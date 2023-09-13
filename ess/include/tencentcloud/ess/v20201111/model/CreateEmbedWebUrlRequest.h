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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/ReviewerInfo.h>
#include <tencentcloud/ess/v20201111/model/EmbedUrlOption.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateEmbedWebUrl请求参数结构体
                */
                class CreateEmbedWebUrlRequest : public AbstractModel
                {
                public:
                    CreateEmbedWebUrlRequest();
                    ~CreateEmbedWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @return Operator 执行本接口操作的员工信息。
<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @param _operator 执行本接口操作的员工信息。
<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取WEB嵌入资源类型。
<br/>CREATE_SEAL: 生成创建印章的嵌入页面
<br/>CREATE_TEMPLATE：生成创建模板的嵌入页面
<br/>MODIFY_TEMPLATE：生成编辑模板的嵌入页面
<br/>PREVIEW_TEMPLATE：生成预览模板的嵌入页面
<br/>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面
<br/>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面
<br/>EXTEND_SERVICE：生成拓展服务的嵌入页面
<br/>PREVIEW_FLOW：生成预览合同的嵌入页面
<br/>PREVIEW_FLOW_DETAIL：生成查看合同详情的嵌入页面

                     * @return EmbedType WEB嵌入资源类型。
<br/>CREATE_SEAL: 生成创建印章的嵌入页面
<br/>CREATE_TEMPLATE：生成创建模板的嵌入页面
<br/>MODIFY_TEMPLATE：生成编辑模板的嵌入页面
<br/>PREVIEW_TEMPLATE：生成预览模板的嵌入页面
<br/>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面
<br/>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面
<br/>EXTEND_SERVICE：生成拓展服务的嵌入页面
<br/>PREVIEW_FLOW：生成预览合同的嵌入页面
<br/>PREVIEW_FLOW_DETAIL：生成查看合同详情的嵌入页面

                     * 
                     */
                    std::string GetEmbedType() const;

                    /**
                     * 设置WEB嵌入资源类型。
<br/>CREATE_SEAL: 生成创建印章的嵌入页面
<br/>CREATE_TEMPLATE：生成创建模板的嵌入页面
<br/>MODIFY_TEMPLATE：生成编辑模板的嵌入页面
<br/>PREVIEW_TEMPLATE：生成预览模板的嵌入页面
<br/>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面
<br/>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面
<br/>EXTEND_SERVICE：生成拓展服务的嵌入页面
<br/>PREVIEW_FLOW：生成预览合同的嵌入页面
<br/>PREVIEW_FLOW_DETAIL：生成查看合同详情的嵌入页面

                     * @param _embedType WEB嵌入资源类型。
<br/>CREATE_SEAL: 生成创建印章的嵌入页面
<br/>CREATE_TEMPLATE：生成创建模板的嵌入页面
<br/>MODIFY_TEMPLATE：生成编辑模板的嵌入页面
<br/>PREVIEW_TEMPLATE：生成预览模板的嵌入页面
<br/>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面
<br/>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面
<br/>EXTEND_SERVICE：生成拓展服务的嵌入页面
<br/>PREVIEW_FLOW：生成预览合同的嵌入页面
<br/>PREVIEW_FLOW_DETAIL：生成查看合同详情的嵌入页面

                     * 
                     */
                    void SetEmbedType(const std::string& _embedType);

                    /**
                     * 判断参数 EmbedType 是否已赋值
                     * @return EmbedType 是否已赋值
                     * 
                     */
                    bool EmbedTypeHasBeenSet() const;

                    /**
                     * 获取WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
<br/>MODIFY_TEMPLATE，PREVIEW_TEMPLATE，必填，取值为模板id
<br/>PREVIEW_FLOW，PREVIEW_FLOW_DETAIL，必填，取值为合同id
                     * @return BusinessId WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
<br/>MODIFY_TEMPLATE，PREVIEW_TEMPLATE，必填，取值为模板id
<br/>PREVIEW_FLOW，PREVIEW_FLOW_DETAIL，必填，取值为合同id
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
<br/>MODIFY_TEMPLATE，PREVIEW_TEMPLATE，必填，取值为模板id
<br/>PREVIEW_FLOW，PREVIEW_FLOW_DETAIL，必填，取值为合同id
                     * @param _businessId WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
<br/>MODIFY_TEMPLATE，PREVIEW_TEMPLATE，必填，取值为模板id
<br/>PREVIEW_FLOW，PREVIEW_FLOW_DETAIL，必填，取值为合同id
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取抄送方信息
                     * @return Reviewer 抄送方信息
                     * 
                     */
                    ReviewerInfo GetReviewer() const;

                    /**
                     * 设置抄送方信息
                     * @param _reviewer 抄送方信息
                     * 
                     */
                    void SetReviewer(const ReviewerInfo& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

                    /**
                     * 获取个性化参数，用于控制页面展示内容
                     * @return Option 个性化参数，用于控制页面展示内容
                     * 
                     */
                    EmbedUrlOption GetOption() const;

                    /**
                     * 设置个性化参数，用于控制页面展示内容
                     * @param _option 个性化参数，用于控制页面展示内容
                     * 
                     */
                    void SetOption(const EmbedUrlOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * WEB嵌入资源类型。
<br/>CREATE_SEAL: 生成创建印章的嵌入页面
<br/>CREATE_TEMPLATE：生成创建模板的嵌入页面
<br/>MODIFY_TEMPLATE：生成编辑模板的嵌入页面
<br/>PREVIEW_TEMPLATE：生成预览模板的嵌入页面
<br/>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面
<br/>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面
<br/>EXTEND_SERVICE：生成拓展服务的嵌入页面
<br/>PREVIEW_FLOW：生成预览合同的嵌入页面
<br/>PREVIEW_FLOW_DETAIL：生成查看合同详情的嵌入页面

                     */
                    std::string m_embedType;
                    bool m_embedTypeHasBeenSet;

                    /**
                     * WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
<br/>MODIFY_TEMPLATE，PREVIEW_TEMPLATE，必填，取值为模板id
<br/>PREVIEW_FLOW，PREVIEW_FLOW_DETAIL，必填，取值为合同id
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 抄送方信息
                     */
                    ReviewerInfo m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 个性化参数，用于控制页面展示内容
                     */
                    EmbedUrlOption m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLREQUEST_H_
