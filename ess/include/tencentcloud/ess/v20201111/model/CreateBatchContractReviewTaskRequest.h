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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/RiskIdentificationRoleInfo.h>
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
                * CreateBatchContractReviewTask请求参数结构体
                */
                class CreateBatchContractReviewTaskRequest : public AbstractModel
                {
                public:
                    CreateBatchContractReviewTaskRequest();
                    ~CreateBatchContractReviewTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取合同审查的PDF文件资源编号列表，通过[UploadFiles](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口获取PDF文件资源编号。 

注:  `目前，此接口仅支持5个文件发起。每个文件限制在10M以下，文件必须是PDF格式`
                     * @return ResourceIds 合同审查的PDF文件资源编号列表，通过[UploadFiles](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口获取PDF文件资源编号。 

注:  `目前，此接口仅支持5个文件发起。每个文件限制在10M以下，文件必须是PDF格式`
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置合同审查的PDF文件资源编号列表，通过[UploadFiles](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口获取PDF文件资源编号。 

注:  `目前，此接口仅支持5个文件发起。每个文件限制在10M以下，文件必须是PDF格式`
                     * @param _resourceIds 合同审查的PDF文件资源编号列表，通过[UploadFiles](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口获取PDF文件资源编号。 

注:  `目前，此接口仅支持5个文件发起。每个文件限制在10M以下，文件必须是PDF格式`
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * @return PolicyType 合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * @param _policyType 合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取合同审查中的角色信息，通过明确入参角色的名称和描述，可以提高合同审查的效率和准确性。
                     * @return Role 合同审查中的角色信息，通过明确入参角色的名称和描述，可以提高合同审查的效率和准确性。
                     * 
                     */
                    RiskIdentificationRoleInfo GetRole() const;

                    /**
                     * 设置合同审查中的角色信息，通过明确入参角色的名称和描述，可以提高合同审查的效率和准确性。
                     * @param _role 合同审查中的角色信息，通过明确入参角色的名称和描述，可以提高合同审查的效率和准确性。
                     * 
                     */
                    void SetRole(const RiskIdentificationRoleInfo& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取用户配置的审查清单ID，基于此清单ID批量创建合同审查任务，为32位字符串。
[点击查看审查清单ID在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/2c6588549e28ca49bd8bb7f4a072b19e.png)
                     * @return ChecklistId 用户配置的审查清单ID，基于此清单ID批量创建合同审查任务，为32位字符串。
[点击查看审查清单ID在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/2c6588549e28ca49bd8bb7f4a072b19e.png)
                     * 
                     */
                    std::string GetChecklistId() const;

                    /**
                     * 设置用户配置的审查清单ID，基于此清单ID批量创建合同审查任务，为32位字符串。
[点击查看审查清单ID在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/2c6588549e28ca49bd8bb7f4a072b19e.png)
                     * @param _checklistId 用户配置的审查清单ID，基于此清单ID批量创建合同审查任务，为32位字符串。
[点击查看审查清单ID在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/2c6588549e28ca49bd8bb7f4a072b19e.png)
                     * 
                     */
                    void SetChecklistId(const std::string& _checklistId);

                    /**
                     * 判断参数 ChecklistId 是否已赋值
                     * @return ChecklistId 是否已赋值
                     * 
                     */
                    bool ChecklistIdHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同审查的PDF文件资源编号列表，通过[UploadFiles](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口获取PDF文件资源编号。 

注:  `目前，此接口仅支持5个文件发起。每个文件限制在10M以下，文件必须是PDF格式`
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 合同审查的审查立场方。

审查立场方如下：
<ul>
    <li>**0** - 【严格】以保护己方利益为核心，对合同条款进行严格把控，尽可能争取对己方有利的条款，同时对对方提出的不合理条款可进行坚决修改或删除。</li> 
    <li>**1** - 【中立】以公平合理为原则，平衡双方的权利义务，既不过分强调己方利益，也不过度让步，力求达成双方均可接受的条款。</li>   
    <li>**2** - 【宽松】以促成交易为核心，对合同条款的修改要求较为宽松，倾向于接受对方提出的条款，以尽快达成合作。</li>  
</ul>
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 合同审查中的角色信息，通过明确入参角色的名称和描述，可以提高合同审查的效率和准确性。
                     */
                    RiskIdentificationRoleInfo m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 用户配置的审查清单ID，基于此清单ID批量创建合同审查任务，为32位字符串。
[点击查看审查清单ID在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/2c6588549e28ca49bd8bb7f4a072b19e.png)
                     */
                    std::string m_checklistId;
                    bool m_checklistIdHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKREQUEST_H_
