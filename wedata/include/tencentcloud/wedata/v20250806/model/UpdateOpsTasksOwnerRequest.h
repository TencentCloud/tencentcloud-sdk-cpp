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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTASKSOWNERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTASKSOWNERREQUEST_H_

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
                * UpdateOpsTasksOwner请求参数结构体
                */
                class UpdateOpsTasksOwnerRequest : public AbstractModel
                {
                public:
                    UpdateOpsTasksOwnerRequest();
                    ~UpdateOpsTasksOwnerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目Id
                     * @return ProjectId 所属项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目Id
                     * @param _projectId 所属项目Id
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
                     * 获取任务Id列表
                     * @return TaskIds 任务Id列表
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务Id列表
                     * @param _taskIds 任务Id列表
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取任务负责人Id
                     * @return OwnerUin 任务负责人Id
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置任务负责人Id
                     * @param _ownerUin 任务负责人Id
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 所属项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务Id列表
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 任务负责人Id
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSTASKSOWNERREQUEST_H_
