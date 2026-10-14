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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunSummary.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunOutput.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunMetadata.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流运行实例信息
                */
                class WorkflowRun : public AbstractModel
                {
                public:
                    WorkflowRun();
                    ~WorkflowRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流运行实例基本信息
                     * @return WorkflowRunSummary 工作流运行实例基本信息
                     * 
                     */
                    WorkflowRunSummary GetWorkflowRunSummary() const;

                    /**
                     * 设置工作流运行实例基本信息
                     * @param _workflowRunSummary 工作流运行实例基本信息
                     * 
                     */
                    void SetWorkflowRunSummary(const WorkflowRunSummary& _workflowRunSummary);

                    /**
                     * 判断参数 WorkflowRunSummary 是否已赋值
                     * @return WorkflowRunSummary 是否已赋值
                     * 
                     */
                    bool WorkflowRunSummaryHasBeenSet() const;

                    /**
                     * 获取工作流运行实例输出信息
                     * @return WorkflowRunOutput 工作流运行实例输出信息
                     * 
                     */
                    WorkflowRunOutput GetWorkflowRunOutput() const;

                    /**
                     * 设置工作流运行实例输出信息
                     * @param _workflowRunOutput 工作流运行实例输出信息
                     * 
                     */
                    void SetWorkflowRunOutput(const WorkflowRunOutput& _workflowRunOutput);

                    /**
                     * 判断参数 WorkflowRunOutput 是否已赋值
                     * @return WorkflowRunOutput 是否已赋值
                     * 
                     */
                    bool WorkflowRunOutputHasBeenSet() const;

                    /**
                     * 获取工作流运行实例元数据
                     * @return WorkflowRunMetadata 工作流运行实例元数据
                     * 
                     */
                    WorkflowRunMetadata GetWorkflowRunMetadata() const;

                    /**
                     * 设置工作流运行实例元数据
                     * @param _workflowRunMetadata 工作流运行实例元数据
                     * 
                     */
                    void SetWorkflowRunMetadata(const WorkflowRunMetadata& _workflowRunMetadata);

                    /**
                     * 判断参数 WorkflowRunMetadata 是否已赋值
                     * @return WorkflowRunMetadata 是否已赋值
                     * 
                     */
                    bool WorkflowRunMetadataHasBeenSet() const;

                private:

                    /**
                     * 工作流运行实例基本信息
                     */
                    WorkflowRunSummary m_workflowRunSummary;
                    bool m_workflowRunSummaryHasBeenSet;

                    /**
                     * 工作流运行实例输出信息
                     */
                    WorkflowRunOutput m_workflowRunOutput;
                    bool m_workflowRunOutputHasBeenSet;

                    /**
                     * 工作流运行实例元数据
                     */
                    WorkflowRunMetadata m_workflowRunMetadata;
                    bool m_workflowRunMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_
