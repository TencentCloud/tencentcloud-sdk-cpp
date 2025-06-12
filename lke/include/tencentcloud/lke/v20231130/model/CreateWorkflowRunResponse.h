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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateWorkflowRun返回参数结构体
                */
                class CreateWorkflowRunResponse : public AbstractModel
                {
                public:
                    CreateWorkflowRunResponse();
                    ~CreateWorkflowRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取工作流运行实例的ID
                     * @return WorkflowRunId 工作流运行实例的ID
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取运行环境。0: 测试环境； 1: 正式环境
                     * @return RunEnv 运行环境。0: 测试环境； 1: 正式环境
                     * 
                     */
                    uint64_t GetRunEnv() const;

                    /**
                     * 判断参数 RunEnv 是否已赋值
                     * @return RunEnv 是否已赋值
                     * 
                     */
                    bool RunEnvHasBeenSet() const;

                    /**
                     * 获取用户输入的内容
                     * @return Query 用户输入的内容
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取API参数配置
                     * @return CustomVariables API参数配置
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取创建时间（毫秒时间戳）
                     * @return CreateTime 创建时间（毫秒时间戳）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 工作流运行实例的ID
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 运行环境。0: 测试环境； 1: 正式环境
                     */
                    uint64_t m_runEnv;
                    bool m_runEnvHasBeenSet;

                    /**
                     * 用户输入的内容
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * API参数配置
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * 创建时间（毫秒时间戳）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNRESPONSE_H_
