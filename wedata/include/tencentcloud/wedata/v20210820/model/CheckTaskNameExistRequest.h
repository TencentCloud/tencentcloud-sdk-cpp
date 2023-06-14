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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckTaskNameExist请求参数结构体
                */
                class CheckTaskNameExistRequest : public AbstractModel
                {
                public:
                    CheckTaskNameExistRequest();
                    ~CheckTaskNameExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id/工作空间id
                     * @return ProjectId 项目id/工作空间id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id/工作空间id
                     * @param _projectId 项目id/工作空间id
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
                     * 获取任务类型（跟调度传参保持一致27）
                     * @return TypeId 任务类型（跟调度传参保持一致27）
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置任务类型（跟调度传参保持一致27）
                     * @param _typeId 任务类型（跟调度传参保持一致27）
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return TaskName 任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param _taskName 任务名
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * 项目id/工作空间id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型（跟调度传参保持一致27）
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKTASKNAMEEXISTREQUEST_H_
