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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 单工作流配置
                */
                class SingleWorkflowConfig : public AbstractModel
                {
                public:
                    SingleWorkflowConfig();
                    ~SingleWorkflowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启异步工作流
                     * @return AsyncWorkflow 是否开启异步工作流
                     * 
                     */
                    bool GetAsyncWorkflow() const;

                    /**
                     * 设置是否开启异步工作流
                     * @param _asyncWorkflow 是否开启异步工作流
                     * 
                     */
                    void SetAsyncWorkflow(const bool& _asyncWorkflow);

                    /**
                     * 判断参数 AsyncWorkflow 是否已赋值
                     * @return AsyncWorkflow 是否已赋值
                     * 
                     */
                    bool AsyncWorkflowHasBeenSet() const;

                    /**
                     * 获取状态 发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 PUBLISHED_FAIL:发布失败；DRAFT：待调试)
                     * @return Status 状态 发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 PUBLISHED_FAIL:发布失败；DRAFT：待调试)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 PUBLISHED_FAIL:发布失败；DRAFT：待调试)
                     * @param _status 状态 发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 PUBLISHED_FAIL:发布失败；DRAFT：待调试)
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
                     * 获取工作流描述
                     * @return WorkflowDescription 工作流描述
                     * 
                     */
                    std::string GetWorkflowDescription() const;

                    /**
                     * 设置工作流描述
                     * @param _workflowDescription 工作流描述
                     * 
                     */
                    void SetWorkflowDescription(const std::string& _workflowDescription);

                    /**
                     * 判断参数 WorkflowDescription 是否已赋值
                     * @return WorkflowDescription 是否已赋值
                     * 
                     */
                    bool WorkflowDescriptionHasBeenSet() const;

                    /**
                     * 获取工作流Id
                     * @return WorkflowId 工作流Id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流Id
                     * @param _workflowId 工作流Id
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

                private:

                    /**
                     * 是否开启异步工作流
                     */
                    bool m_asyncWorkflow;
                    bool m_asyncWorkflowHasBeenSet;

                    /**
                     * 状态 发布状态(UNPUBLISHED: 待发布 PUBLISHING: 发布中 PUBLISHED: 已发布 PUBLISHED_FAIL:发布失败；DRAFT：待调试)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作流描述
                     */
                    std::string m_workflowDescription;
                    bool m_workflowDescriptionHasBeenSet;

                    /**
                     * 工作流Id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_
