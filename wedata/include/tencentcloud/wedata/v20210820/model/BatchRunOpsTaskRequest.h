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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_

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
                * BatchRunOpsTask请求参数结构体
                */
                class BatchRunOpsTaskRequest : public AbstractModel
                {
                public:
                    BatchRunOpsTaskRequest();
                    ~BatchRunOpsTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取是否补录中间实例,0不补录;1补录
                     * @return EnableMakeUp 是否补录中间实例,0不补录;1补录
                     * 
                     */
                    int64_t GetEnableMakeUp() const;

                    /**
                     * 设置是否补录中间实例,0不补录;1补录
                     * @param _enableMakeUp 是否补录中间实例,0不补录;1补录
                     * 
                     */
                    void SetEnableMakeUp(const int64_t& _enableMakeUp);

                    /**
                     * 判断参数 EnableMakeUp 是否已赋值
                     * @return EnableMakeUp 是否已赋值
                     * 
                     */
                    bool EnableMakeUpHasBeenSet() const;

                    /**
                     * 获取任务id列表
                     * @return Tasks 任务id列表
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置任务id列表
                     * @param _tasks 任务id列表
                     * 
                     */
                    void SetTasks(const std::vector<std::string>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否补录中间实例,0不补录;1补录
                     */
                    int64_t m_enableMakeUp;
                    bool m_enableMakeUpHasBeenSet;

                    /**
                     * 任务id列表
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNOPSTASKREQUEST_H_
