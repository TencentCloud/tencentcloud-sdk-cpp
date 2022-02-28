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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_

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
                * CreateSchemeUrl请求参数结构体
                */
                class CreateSchemeUrlRequest : public AbstractModel
                {
                public:
                    CreateSchemeUrlRequest();
                    ~CreateSchemeUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，参考通用结构
                     * @return Operator 调用方用户信息，参考通用结构
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，参考通用结构
                     * @param Operator 调用方用户信息，参考通用结构
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取调用方渠道信息，参考通用结构
                     * @return Agent 调用方渠道信息，参考通用结构
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置调用方渠道信息，参考通用结构
                     * @param Agent 调用方渠道信息，参考通用结构
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param Name 姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Mobile 手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号
                     * @param Mobile 手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     * @return PathType 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    uint64_t GetPathType() const;

                    /**
                     * 设置跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     * @param PathType 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    void SetPathType(const uint64_t& _pathType);

                    /**
                     * 判断参数 PathType 是否已赋值
                     * @return PathType 是否已赋值
                     */
                    bool PathTypeHasBeenSet() const;

                    /**
                     * 获取合同详情 id (PathType=1时必传)
                     * @return FlowId 合同详情 id (PathType=1时必传)
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同详情 id (PathType=1时必传)
                     * @param FlowId 合同详情 id (PathType=1时必传)
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，参考通用结构
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 调用方渠道信息，参考通用结构
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    uint64_t m_pathType;
                    bool m_pathTypeHasBeenSet;

                    /**
                     * 合同详情 id (PathType=1时必传)
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
