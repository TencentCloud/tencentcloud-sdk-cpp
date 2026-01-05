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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTRIGGERTASKSOWNERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTRIGGERTASKSOWNERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateOpsTriggerTasksOwner请求参数结构体
                */
                class UpdateOpsTriggerTasksOwnerRequest : public AbstractModel
                {
                public:
                    UpdateOpsTriggerTasksOwnerRequest();
                    ~UpdateOpsTriggerTasksOwnerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取负责人UIN
                     * @return OwnerIds 负责人UIN
                     * 
                     */
                    std::vector<std::string> GetOwnerIds() const;

                    /**
                     * 设置负责人UIN
                     * @param _ownerIds 负责人UIN
                     * 
                     */
                    void SetOwnerIds(const std::vector<std::string>& _ownerIds);

                    /**
                     * 判断参数 OwnerIds 是否已赋值
                     * @return OwnerIds 是否已赋值
                     * 
                     */
                    bool OwnerIdsHasBeenSet() const;

                    /**
                     * 获取将要修改的任务ID集合
                     * @return TaskIds 将要修改的任务ID集合
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置将要修改的任务ID集合
                     * @param _taskIds 将要修改的任务ID集合
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负责人UIN
                     */
                    std::vector<std::string> m_ownerIds;
                    bool m_ownerIdsHasBeenSet;

                    /**
                     * 将要修改的任务ID集合
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTRIGGERTASKSOWNERREQUEST_H_
