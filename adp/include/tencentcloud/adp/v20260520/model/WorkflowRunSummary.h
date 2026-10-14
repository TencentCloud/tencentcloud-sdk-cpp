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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunProfile.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunResult.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunTime.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流运行实例的基本信息
                */
                class WorkflowRunSummary : public AbstractModel
                {
                public:
                    WorkflowRunSummary();
                    ~WorkflowRunSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行环境。1:开发域，2:生产域</p>
                     * @return Domain <p>运行环境。1:开发域，2:生产域</p>
                     * 
                     */
                    uint64_t GetDomain() const;

                    /**
                     * 设置<p>运行环境。1:开发域，2:生产域</p>
                     * @param _domain <p>运行环境。1:开发域，2:生产域</p>
                     * 
                     */
                    void SetDomain(const uint64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行实例基本信息</p>
                     * @return WorkflowRunProfile <p>工作流运行实例基本信息</p>
                     * 
                     */
                    WorkflowRunProfile GetWorkflowRunProfile() const;

                    /**
                     * 设置<p>工作流运行实例基本信息</p>
                     * @param _workflowRunProfile <p>工作流运行实例基本信息</p>
                     * 
                     */
                    void SetWorkflowRunProfile(const WorkflowRunProfile& _workflowRunProfile);

                    /**
                     * 判断参数 WorkflowRunProfile 是否已赋值
                     * @return WorkflowRunProfile 是否已赋值
                     * 
                     */
                    bool WorkflowRunProfileHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行实例结果</p>
                     * @return WorkflowRunResult <p>工作流运行实例结果</p>
                     * 
                     */
                    WorkflowRunResult GetWorkflowRunResult() const;

                    /**
                     * 设置<p>工作流运行实例结果</p>
                     * @param _workflowRunResult <p>工作流运行实例结果</p>
                     * 
                     */
                    void SetWorkflowRunResult(const WorkflowRunResult& _workflowRunResult);

                    /**
                     * 判断参数 WorkflowRunResult 是否已赋值
                     * @return WorkflowRunResult 是否已赋值
                     * 
                     */
                    bool WorkflowRunResultHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行实例时间信息</p>
                     * @return WorkflowRunTime <p>工作流运行实例时间信息</p>
                     * 
                     */
                    WorkflowRunTime GetWorkflowRunTime() const;

                    /**
                     * 设置<p>工作流运行实例时间信息</p>
                     * @param _workflowRunTime <p>工作流运行实例时间信息</p>
                     * 
                     */
                    void SetWorkflowRunTime(const WorkflowRunTime& _workflowRunTime);

                    /**
                     * 判断参数 WorkflowRunTime 是否已赋值
                     * @return WorkflowRunTime 是否已赋值
                     * 
                     */
                    bool WorkflowRunTimeHasBeenSet() const;

                private:

                    /**
                     * <p>运行环境。1:开发域，2:生产域</p>
                     */
                    uint64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>工作流运行实例基本信息</p>
                     */
                    WorkflowRunProfile m_workflowRunProfile;
                    bool m_workflowRunProfileHasBeenSet;

                    /**
                     * <p>工作流运行实例结果</p>
                     */
                    WorkflowRunResult m_workflowRunResult;
                    bool m_workflowRunResultHasBeenSet;

                    /**
                     * <p>工作流运行实例时间信息</p>
                     */
                    WorkflowRunTime m_workflowRunTime;
                    bool m_workflowRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_
