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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNTASKSDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNTASKSDSREQUEST_H_

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
                * BatchRunTasksDs请求参数结构体
                */
                class BatchRunTasksDsRequest : public AbstractModel
                {
                public:
                    BatchRunTasksDsRequest();
                    ~BatchRunTasksDsRequest() = default;
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
                     * 获取任务ID
                     * @return TaskIds 任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务ID
                     * @param _taskIds 任务ID
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
                     * 获取是否补录中间实例
                     * @return EnableMakeUp 是否补录中间实例
                     * 
                     */
                    int64_t GetEnableMakeUp() const;

                    /**
                     * 设置是否补录中间实例
                     * @param _enableMakeUp 是否补录中间实例
                     * 
                     */
                    void SetEnableMakeUp(const int64_t& _enableMakeUp);

                    /**
                     * 判断参数 EnableMakeUp 是否已赋值
                     * @return EnableMakeUp 是否已赋值
                     * 
                     */
                    bool EnableMakeUpHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 是否补录中间实例
                     */
                    int64_t m_enableMakeUp;
                    bool m_enableMakeUpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRUNTASKSDSREQUEST_H_
