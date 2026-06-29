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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_

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
                * DescribeCancelFlowsTask请求参数结构体
                */
                class DescribeCancelFlowsTaskRequest : public AbstractModel
                {
                public:
                    DescribeCancelFlowsTaskRequest();
                    ~DescribeCancelFlowsTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br><br>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @return Operator <p>执行本接口操作的员工信息。<br><br>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br><br>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @param _operator <p>执行本接口操作的员工信息。<br><br>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
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
                     * 获取<p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>和接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * @return TaskId <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>和接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>和接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * @param _taskId <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>和接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br><br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br><br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br><br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br><br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * @return CancelType <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * 
                     */
                    uint64_t GetCancelType() const;

                    /**
                     * 设置<p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * @param _cancelType <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     * 
                     */
                    void SetCancelType(const uint64_t& _cancelType);

                    /**
                     * 判断参数 CancelType 是否已赋值
                     * @return CancelType 是否已赋值
                     * 
                     */
                    bool CancelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br><br>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>和接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CancelOrganizationFlows">全量撤销企业合同</a>获得。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br><br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>撤销任务类型</p><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，批量撤销合同任务或者获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul><p>枚举值：</p><ul><li>0： 默认类型，获取批量撤销合同小程序链接的批量撤销任务</li><li>1： 全量撤销任务</li></ul>
                     */
                    uint64_t m_cancelType;
                    bool m_cancelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKREQUEST_H_
