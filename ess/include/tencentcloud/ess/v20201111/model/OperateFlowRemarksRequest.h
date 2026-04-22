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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_OPERATEFLOWREMARKSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_OPERATEFLOWREMARKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/FlowRemarkItem.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * OperateFlowRemarks请求参数结构体
                */
                class OperateFlowRemarksRequest : public AbstractModel
                {
                public:
                    OperateFlowRemarksRequest();
                    ~OperateFlowRemarksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * @return OperateType <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置<p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * @param _operateType <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取<p>对应的合同流程id</p><p>目标合同为合同组时此参数不填</p>
                     * @return FlowId <p>对应的合同流程id</p><p>目标合同为合同组时此参数不填</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>对应的合同流程id</p><p>目标合同为合同组时此参数不填</p>
                     * @param _flowId <p>对应的合同流程id</p><p>目标合同为合同组时此参数不填</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>对应合同组id</p><p>目标合同为单份合同时此参数不填</p>
                     * @return FlowGroupId <p>对应合同组id</p><p>目标合同为单份合同时此参数不填</p>
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置<p>对应合同组id</p><p>目标合同为单份合同时此参数不填</p>
                     * @param _flowGroupId <p>对应合同组id</p><p>目标合同为单份合同时此参数不填</p>
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>合同备注信息。</p><p>入参限制：当OperateType为UPDATE和DELETE时，通过该结构体进行对应备注操作，合同备注数量范围为 1 - 5个。</p>
                     * @return FlowItem <p>合同备注信息。</p><p>入参限制：当OperateType为UPDATE和DELETE时，通过该结构体进行对应备注操作，合同备注数量范围为 1 - 5个。</p>
                     * 
                     */
                    FlowRemarkItem GetFlowItem() const;

                    /**
                     * 设置<p>合同备注信息。</p><p>入参限制：当OperateType为UPDATE和DELETE时，通过该结构体进行对应备注操作，合同备注数量范围为 1 - 5个。</p>
                     * @param _flowItem <p>合同备注信息。</p><p>入参限制：当OperateType为UPDATE和DELETE时，通过该结构体进行对应备注操作，合同备注数量范围为 1 - 5个。</p>
                     * 
                     */
                    void SetFlowItem(const FlowRemarkItem& _flowItem);

                    /**
                     * 判断参数 FlowItem 是否已赋值
                     * @return FlowItem 是否已赋值
                     * 
                     */
                    bool FlowItemHasBeenSet() const;

                    /**
                     * 获取<p>合同备注列表。</p><p>入参限制：当OperateType为CREATE时，通过该参数进行全量的合同备注创建。</p>
                     * @return FlowItems <p>合同备注列表。</p><p>入参限制：当OperateType为CREATE时，通过该参数进行全量的合同备注创建。</p>
                     * 
                     */
                    std::vector<std::string> GetFlowItems() const;

                    /**
                     * 设置<p>合同备注列表。</p><p>入参限制：当OperateType为CREATE时，通过该参数进行全量的合同备注创建。</p>
                     * @param _flowItems <p>合同备注列表。</p><p>入参限制：当OperateType为CREATE时，通过该参数进行全量的合同备注创建。</p>
                     * 
                     */
                    void SetFlowItems(const std::vector<std::string>& _flowItems);

                    /**
                     * 判断参数 FlowItems 是否已赋值
                     * @return FlowItems 是否已赋值
                     * 
                     */
                    bool FlowItemsHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * <p>对应的合同流程id</p><p>目标合同为合同组时此参数不填</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>对应合同组id</p><p>目标合同为单份合同时此参数不填</p>
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * <p>合同备注信息。</p><p>入参限制：当OperateType为UPDATE和DELETE时，通过该结构体进行对应备注操作，合同备注数量范围为 1 - 5个。</p>
                     */
                    FlowRemarkItem m_flowItem;
                    bool m_flowItemHasBeenSet;

                    /**
                     * <p>合同备注列表。</p><p>入参限制：当OperateType为CREATE时，通过该参数进行全量的合同备注创建。</p>
                     */
                    std::vector<std::string> m_flowItems;
                    bool m_flowItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_OPERATEFLOWREMARKSREQUEST_H_
