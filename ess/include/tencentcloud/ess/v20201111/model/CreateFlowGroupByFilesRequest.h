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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupOptions.h>
#include <tencentcloud/ess/v20201111/model/UserFlowType.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowGroupByFiles请求参数结构体
                */
                class CreateFlowGroupByFilesRequest : public AbstractModel
                {
                public:
                    CreateFlowGroupByFilesRequest();
                    ~CreateFlowGroupByFilesRequest() = default;
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
                     * 获取<p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @return FlowGroupName <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置<p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @param _flowGroupName <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    void SetFlowGroupName(const std::string& _flowGroupName);

                    /**
                     * 判断参数 FlowGroupName 是否已赋值
                     * @return FlowGroupName 是否已赋值
                     * 
                     */
                    bool FlowGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * @return FlowGroupInfos <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * 
                     */
                    std::vector<FlowGroupInfo> GetFlowGroupInfos() const;

                    /**
                     * 设置<p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * @param _flowGroupInfos <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     * 
                     */
                    void SetFlowGroupInfos(const std::vector<FlowGroupInfo>& _flowGroupInfos);

                    /**
                     * 判断参数 FlowGroupInfos 是否已赋值
                     * @return FlowGroupInfos 是否已赋值
                     * 
                     */
                    bool FlowGroupInfosHasBeenSet() const;

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
                     * 获取<p>合同（流程）组的配置项信息。<br>其中包括：</p><ul><li>是否通知本企业签署方</li><li>是否通知其他签署方</li></ul>
                     * @return FlowGroupOptions <p>合同（流程）组的配置项信息。<br>其中包括：</p><ul><li>是否通知本企业签署方</li><li>是否通知其他签署方</li></ul>
                     * 
                     */
                    FlowGroupOptions GetFlowGroupOptions() const;

                    /**
                     * 设置<p>合同（流程）组的配置项信息。<br>其中包括：</p><ul><li>是否通知本企业签署方</li><li>是否通知其他签署方</li></ul>
                     * @param _flowGroupOptions <p>合同（流程）组的配置项信息。<br>其中包括：</p><ul><li>是否通知本企业签署方</li><li>是否通知其他签署方</li></ul>
                     * 
                     */
                    void SetFlowGroupOptions(const FlowGroupOptions& _flowGroupOptions);

                    /**
                     * 判断参数 FlowGroupOptions 是否已赋值
                     * @return FlowGroupOptions 是否已赋值
                     * 
                     */
                    bool FlowGroupOptionsHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义合同类型。</p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p><p>注意：<br>如果传递了自定义合同类型，则每一个子合同设置的自定义合同类型将会失效，已最外层定义的为准。<br>例如：<br>这份合同组有三个子合同，设置合同类型为<font color="blue">人事/劳务</font><br>第一份子合同设置的合同自定义合同类型是<font color="blue">采购</font><br>第二份和第三份子合同设置的合同自定义合同类型是<font color="blue">人事/劳务</font><br>但最终这个合同组的合同类型是<font color="blue">人事/劳务</font></p>
                     * @return UserFlowType <p>用户自定义合同类型。</p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p><p>注意：<br>如果传递了自定义合同类型，则每一个子合同设置的自定义合同类型将会失效，已最外层定义的为准。<br>例如：<br>这份合同组有三个子合同，设置合同类型为<font color="blue">人事/劳务</font><br>第一份子合同设置的合同自定义合同类型是<font color="blue">采购</font><br>第二份和第三份子合同设置的合同自定义合同类型是<font color="blue">人事/劳务</font><br>但最终这个合同组的合同类型是<font color="blue">人事/劳务</font></p>
                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置<p>用户自定义合同类型。</p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p><p>注意：<br>如果传递了自定义合同类型，则每一个子合同设置的自定义合同类型将会失效，已最外层定义的为准。<br>例如：<br>这份合同组有三个子合同，设置合同类型为<font color="blue">人事/劳务</font><br>第一份子合同设置的合同自定义合同类型是<font color="blue">采购</font><br>第二份和第三份子合同设置的合同自定义合同类型是<font color="blue">人事/劳务</font><br>但最终这个合同组的合同类型是<font color="blue">人事/劳务</font></p>
                     * @param _userFlowType <p>用户自定义合同类型。</p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p><p>注意：<br>如果传递了自定义合同类型，则每一个子合同设置的自定义合同类型将会失效，已最外层定义的为准。<br>例如：<br>这份合同组有三个子合同，设置合同类型为<font color="blue">人事/劳务</font><br>第一份子合同设置的合同自定义合同类型是<font color="blue">采购</font><br>第二份和第三份子合同设置的合同自定义合同类型是<font color="blue">人事/劳务</font><br>但最终这个合同组的合同类型是<font color="blue">人事/劳务</font></p>
                     * 
                     */
                    void SetUserFlowType(const UserFlowType& _userFlowType);

                    /**
                     * 判断参数 UserFlowType 是否已赋值
                     * @return UserFlowType 是否已赋值
                     * 
                     */
                    bool UserFlowTypeHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同（流程）组名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                    /**
                     * <p>合同（流程）组的子合同信息，支持2-50个子合同</p>
                     */
                    std::vector<FlowGroupInfo> m_flowGroupInfos;
                    bool m_flowGroupInfosHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>合同（流程）组的配置项信息。<br>其中包括：</p><ul><li>是否通知本企业签署方</li><li>是否通知其他签署方</li></ul>
                     */
                    FlowGroupOptions m_flowGroupOptions;
                    bool m_flowGroupOptionsHasBeenSet;

                    /**
                     * <p>用户自定义合同类型。</p><p>自定义合同类型配置的地方如链接图所示。<a href="https://qcloudimg.tencent-cloud.cn/raw/36582cea03ae6a2559894844942b5d5c.png">点击查看自定义合同类型管理的位置</a></p><p>注意：<br>如果传递了自定义合同类型，则每一个子合同设置的自定义合同类型将会失效，已最外层定义的为准。<br>例如：<br>这份合同组有三个子合同，设置合同类型为<font color="blue">人事/劳务</font><br>第一份子合同设置的合同自定义合同类型是<font color="blue">采购</font><br>第二份和第三份子合同设置的合同自定义合同类型是<font color="blue">人事/劳务</font><br>但最终这个合同组的合同类型是<font color="blue">人事/劳务</font></p>
                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYFILESREQUEST_H_
