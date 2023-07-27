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
                     * 获取操作者信息
                     * @return Operator 操作者信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者信息
                     * @param _operator 操作者信息
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
<br/>CREATE_SEAL: 创建印章
<br/>PREVIEW_SEAL_LIST：预览印章列表
<br/>PREVIEW_SEAL_DETAIL：预览印章详情
<br/>EXTEND_SERVICE：拓展服务

                     * @return EmbedType WEB嵌入资源类型。
<br/>CREATE_SEAL: 创建印章
<br/>PREVIEW_SEAL_LIST：预览印章列表
<br/>PREVIEW_SEAL_DETAIL：预览印章详情
<br/>EXTEND_SERVICE：拓展服务

                     * 
                     */
                    std::string GetEmbedType() const;

                    /**
                     * 设置WEB嵌入资源类型。
<br/>CREATE_SEAL: 创建印章
<br/>PREVIEW_SEAL_LIST：预览印章列表
<br/>PREVIEW_SEAL_DETAIL：预览印章详情
<br/>EXTEND_SERVICE：拓展服务

                     * @param _embedType WEB嵌入资源类型。
<br/>CREATE_SEAL: 创建印章
<br/>PREVIEW_SEAL_LIST：预览印章列表
<br/>PREVIEW_SEAL_DETAIL：预览印章详情
<br/>EXTEND_SERVICE：拓展服务

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
                     * @return BusinessId WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
                     * @param _businessId WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
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
                     * 获取代理相关应用信息，如集团主企业代子企业操作
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作
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

                private:

                    /**
                     * 操作者信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * WEB嵌入资源类型。
<br/>CREATE_SEAL: 创建印章
<br/>PREVIEW_SEAL_LIST：预览印章列表
<br/>PREVIEW_SEAL_DETAIL：预览印章详情
<br/>EXTEND_SERVICE：拓展服务

                     */
                    std::string m_embedType;
                    bool m_embedTypeHasBeenSet;

                    /**
                     * WEB嵌入的业务资源ID
<br/>PREVIEW_SEAL_DETAIL，必填，取值为印章id
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 抄送方信息
                     */
                    ReviewerInfo m_reviewer;
                    bool m_reviewerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEEMBEDWEBURLREQUEST_H_
