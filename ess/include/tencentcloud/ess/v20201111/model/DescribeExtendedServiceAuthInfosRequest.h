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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeExtendedServiceAuthInfos请求参数结构体
                */
                class DescribeExtendedServiceAuthInfosRequest : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthInfosRequest();
                    ~DescribeExtendedServiceAuthInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
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
                     * 获取扩展服务类型，默认为空，查询目前支持的所有扩展服务信息，单个指定则查询单个扩展服务开通信息，取值：
OPEN_SERVER_SIGN：开通企业静默签署
OVERSEA_SIGN：企业与港澳台居民签署合同
MOBILE_CHECK_APPROVER：使用手机号验证签署方身份
PAGING_SEAL：骑缝章
BATCH_SIGN：批量签署
                     * @return ExtendServiceType 扩展服务类型，默认为空，查询目前支持的所有扩展服务信息，单个指定则查询单个扩展服务开通信息，取值：
OPEN_SERVER_SIGN：开通企业静默签署
OVERSEA_SIGN：企业与港澳台居民签署合同
MOBILE_CHECK_APPROVER：使用手机号验证签署方身份
PAGING_SEAL：骑缝章
BATCH_SIGN：批量签署
                     * 
                     */
                    std::string GetExtendServiceType() const;

                    /**
                     * 设置扩展服务类型，默认为空，查询目前支持的所有扩展服务信息，单个指定则查询单个扩展服务开通信息，取值：
OPEN_SERVER_SIGN：开通企业静默签署
OVERSEA_SIGN：企业与港澳台居民签署合同
MOBILE_CHECK_APPROVER：使用手机号验证签署方身份
PAGING_SEAL：骑缝章
BATCH_SIGN：批量签署
                     * @param _extendServiceType 扩展服务类型，默认为空，查询目前支持的所有扩展服务信息，单个指定则查询单个扩展服务开通信息，取值：
OPEN_SERVER_SIGN：开通企业静默签署
OVERSEA_SIGN：企业与港澳台居民签署合同
MOBILE_CHECK_APPROVER：使用手机号验证签署方身份
PAGING_SEAL：骑缝章
BATCH_SIGN：批量签署
                     * 
                     */
                    void SetExtendServiceType(const std::string& _extendServiceType);

                    /**
                     * 判断参数 ExtendServiceType 是否已赋值
                     * @return ExtendServiceType 是否已赋值
                     * 
                     */
                    bool ExtendServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 扩展服务类型，默认为空，查询目前支持的所有扩展服务信息，单个指定则查询单个扩展服务开通信息，取值：
OPEN_SERVER_SIGN：开通企业静默签署
OVERSEA_SIGN：企业与港澳台居民签署合同
MOBILE_CHECK_APPROVER：使用手机号验证签署方身份
PAGING_SEAL：骑缝章
BATCH_SIGN：批量签署
                     */
                    std::string m_extendServiceType;
                    bool m_extendServiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_
