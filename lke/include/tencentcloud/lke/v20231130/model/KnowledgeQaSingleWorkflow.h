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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 问答知识库单工作流模式下指定单工作流配置
                */
                class KnowledgeQaSingleWorkflow : public AbstractModel
                {
                public:
                    KnowledgeQaSingleWorkflow();
                    ~KnowledgeQaSingleWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称
                     * @return WorkflowName 工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
                     * @param _workflowName 工作流名称
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流描述
                     * @return WorkflowDesc 工作流描述
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置工作流描述
                     * @param _workflowDesc 工作流描述
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取工作流状态，发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 FAIL:发布失败)
                     * @return Status 工作流状态，发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 FAIL:发布失败)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置工作流状态，发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 FAIL:发布失败)
                     * @param _status 工作流状态，发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 FAIL:发布失败)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取工作流是否启用
                     * @return IsEnable 工作流是否启用
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置工作流是否启用
                     * @param _isEnable 工作流是否启用
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取是否开启异步调用工作流
                     * @return AsyncWorkflow 是否开启异步调用工作流
                     * 
                     */
                    bool GetAsyncWorkflow() const;

                    /**
                     * 设置是否开启异步调用工作流
                     * @param _asyncWorkflow 是否开启异步调用工作流
                     * 
                     */
                    void SetAsyncWorkflow(const bool& _asyncWorkflow);

                    /**
                     * 判断参数 AsyncWorkflow 是否已赋值
                     * @return AsyncWorkflow 是否已赋值
                     * 
                     */
                    bool AsyncWorkflowHasBeenSet() const;

                private:

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流描述
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流状态，发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 FAIL:发布失败)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作流是否启用
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 是否开启异步调用工作流
                     */
                    bool m_asyncWorkflow;
                    bool m_asyncWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_
