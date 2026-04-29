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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/ChecklistCategory.h>
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
                * ImportContractReviewChecklist请求参数结构体
                */
                class ImportContractReviewChecklistRequest : public AbstractModel
                {
                public:
                    ImportContractReviewChecklistRequest();
                    ~ImportContractReviewChecklistRequest() = default;
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
                     * 获取<p>导入的合同审查清单名称</p>
                     * @return Name <p>导入的合同审查清单名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>导入的合同审查清单名称</p>
                     * @param _name <p>导入的合同审查清单名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>导入的合同审查清单审查点列表</p>
                     * @return Categories <p>导入的合同审查清单审查点列表</p>
                     * 
                     */
                    std::vector<ChecklistCategory> GetCategories() const;

                    /**
                     * 设置<p>导入的合同审查清单审查点列表</p>
                     * @param _categories <p>导入的合同审查清单审查点列表</p>
                     * 
                     */
                    void SetCategories(const std::vector<ChecklistCategory>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

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
                     * 获取<p>如果传值，则更新对应的合同审查清单，否则创建新的合同审查清单</p>
                     * @return ChecklistID <p>如果传值，则更新对应的合同审查清单，否则创建新的合同审查清单</p>
                     * 
                     */
                    std::string GetChecklistID() const;

                    /**
                     * 设置<p>如果传值，则更新对应的合同审查清单，否则创建新的合同审查清单</p>
                     * @param _checklistID <p>如果传值，则更新对应的合同审查清单，否则创建新的合同审查清单</p>
                     * 
                     */
                    void SetChecklistID(const std::string& _checklistID);

                    /**
                     * 判断参数 ChecklistID 是否已赋值
                     * @return ChecklistID 是否已赋值
                     * 
                     */
                    bool ChecklistIDHasBeenSet() const;

                    /**
                     * 获取<p>设置为true则启动清单，否则禁用清单</p>
                     * @return Enabled <p>设置为true则启动清单，否则禁用清单</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>设置为true则启动清单，否则禁用清单</p>
                     * @param _enabled <p>设置为true则启动清单，否则禁用清单</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>导入的合同审查清单名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>导入的合同审查清单审查点列表</p>
                     */
                    std::vector<ChecklistCategory> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>如果传值，则更新对应的合同审查清单，否则创建新的合同审查清单</p>
                     */
                    std::string m_checklistID;
                    bool m_checklistIDHasBeenSet;

                    /**
                     * <p>设置为true则启动清单，否则禁用清单</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTREQUEST_H_
