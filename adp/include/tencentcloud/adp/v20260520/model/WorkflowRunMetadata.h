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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流运行实例元数据
                */
                class WorkflowRunMetadata : public AbstractModel
                {
                public:
                    WorkflowRunMetadata();
                    ~WorkflowRunMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户的输入
                     * @return Query 用户的输入
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置用户的输入
                     * @param _query 用户的输入
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取主模型名称
                     * @return MainModelName 主模型名称
                     * 
                     */
                    std::string GetMainModelName() const;

                    /**
                     * 设置主模型名称
                     * @param _mainModelName 主模型名称
                     * 
                     */
                    void SetMainModelName(const std::string& _mainModelName);

                    /**
                     * 判断参数 MainModelName 是否已赋值
                     * @return MainModelName 是否已赋值
                     * 
                     */
                    bool MainModelNameHasBeenSet() const;

                    /**
                     * 获取API参数配置
                     * @return CustomVariableList API参数配置
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariableList() const;

                    /**
                     * 设置API参数配置
                     * @param _customVariableList API参数配置
                     * 
                     */
                    void SetCustomVariableList(const std::vector<CustomVariable>& _customVariableList);

                    /**
                     * 判断参数 CustomVariableList 是否已赋值
                     * @return CustomVariableList 是否已赋值
                     * 
                     */
                    bool CustomVariableListHasBeenSet() const;

                    /**
                     * 获取工作流的流程图
                     * @return WorkflowGraph 工作流的流程图
                     * 
                     */
                    std::string GetWorkflowGraph() const;

                    /**
                     * 设置工作流的流程图
                     * @param _workflowGraph 工作流的流程图
                     * 
                     */
                    void SetWorkflowGraph(const std::string& _workflowGraph);

                    /**
                     * 判断参数 WorkflowGraph 是否已赋值
                     * @return WorkflowGraph 是否已赋值
                     * 
                     */
                    bool WorkflowGraphHasBeenSet() const;

                private:

                    /**
                     * 用户的输入
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 主模型名称
                     */
                    std::string m_mainModelName;
                    bool m_mainModelNameHasBeenSet;

                    /**
                     * API参数配置
                     */
                    std::vector<CustomVariable> m_customVariableList;
                    bool m_customVariableListHasBeenSet;

                    /**
                     * 工作流的流程图
                     */
                    std::string m_workflowGraph;
                    bool m_workflowGraphHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_
