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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWREF_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWREF_H_

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
                * WorkflowRef详情
                */
                class WorkflowRef : public AbstractModel
                {
                public:
                    WorkflowRef();
                    ~WorkflowRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务流ID
                     * @return WorkflowId 任务流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置任务流ID
                     * @param _workflowId 任务流ID
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
                     * 获取任务流名称
                     * @return WorkflowName 任务流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置任务流名称
                     * @param _workflowName 任务流名称
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
                     * 获取任务流描述
                     * @return WorkflowDesc 任务流描述
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置任务流描述
                     * @param _workflowDesc 任务流描述
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
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 任务流描述
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWREF_H_
