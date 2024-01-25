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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamGetTestRunTaskInstancesStatusInfoTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetTestRunTaskInstancesStatusInfo请求参数结构体
                */
                class GetTestRunTaskInstancesStatusInfoRequest : public AbstractModel
                {
                public:
                    GetTestRunTaskInstancesStatusInfoRequest();
                    ~GetTestRunTaskInstancesStatusInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<ParamGetTestRunTaskInstancesStatusInfoTask> GetTasks() const;

                    /**
                     * 设置任务列表
                     * @param _tasks 任务列表
                     * 
                     */
                    void SetTasks(const std::vector<ParamGetTestRunTaskInstancesStatusInfoTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取是否开发空间
                     * @return IsDevSpace 是否开发空间
                     * 
                     */
                    bool GetIsDevSpace() const;

                    /**
                     * 设置是否开发空间
                     * @param _isDevSpace 是否开发空间
                     * 
                     */
                    void SetIsDevSpace(const bool& _isDevSpace);

                    /**
                     * 判断参数 IsDevSpace 是否已赋值
                     * @return IsDevSpace 是否已赋值
                     * 
                     */
                    bool IsDevSpaceHasBeenSet() const;

                private:

                    /**
                     * 任务列表
                     */
                    std::vector<ParamGetTestRunTaskInstancesStatusInfoTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 是否开发空间
                     */
                    bool m_isDevSpace;
                    bool m_isDevSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTESTRUNTASKINSTANCESSTATUSINFOREQUEST_H_
