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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYAGENTINSTANCEPARAMETERSREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYAGENTINSTANCEPARAMETERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/Parameter.h>
#include <tencentcloud/tdai/v20250717/model/SqlAgentParameter.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * ModifyAgentInstanceParameters请求参数结构体
                */
                class ModifyAgentInstanceParametersRequest : public AbstractModel
                {
                public:
                    ModifyAgentInstanceParametersRequest();
                    ~ModifyAgentInstanceParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务类型, 可选，默认default
                     * @return TaskType 任务类型, 可选，默认default
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型, 可选，默认default
                     * @param _taskType 任务类型, 可选，默认default
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取更新的参数列表
                     * @return Parameters 更新的参数列表
                     * 
                     */
                    Parameter GetParameters() const;

                    /**
                     * 设置更新的参数列表
                     * @param _parameters 更新的参数列表
                     * 
                     */
                    void SetParameters(const Parameter& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取风险SQL智能体参数列表
                     * @return SqlAgentParameter 风险SQL智能体参数列表
                     * 
                     */
                    SqlAgentParameter GetSqlAgentParameter() const;

                    /**
                     * 设置风险SQL智能体参数列表
                     * @param _sqlAgentParameter 风险SQL智能体参数列表
                     * 
                     */
                    void SetSqlAgentParameter(const SqlAgentParameter& _sqlAgentParameter);

                    /**
                     * 判断参数 SqlAgentParameter 是否已赋值
                     * @return SqlAgentParameter 是否已赋值
                     * 
                     */
                    bool SqlAgentParameterHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务类型, 可选，默认default
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 更新的参数列表
                     */
                    Parameter m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 风险SQL智能体参数列表
                     */
                    SqlAgentParameter m_sqlAgentParameter;
                    bool m_sqlAgentParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYAGENTINSTANCEPARAMETERSREQUEST_H_
