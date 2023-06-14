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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySyncTaskAttribute请求参数结构体
                */
                class ModifySyncTaskAttributeRequest : public AbstractModel
                {
                public:
                    ModifySyncTaskAttributeRequest();
                    ~ModifySyncTaskAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的任务ID。可通过DescribeSyncTasks API返回值中的TaskId获取。每次请求允许操作的任务数量上限是100。
                     * @return TaskIds 一个或多个待操作的任务ID。可通过DescribeSyncTasks API返回值中的TaskId获取。每次请求允许操作的任务数量上限是100。
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置一个或多个待操作的任务ID。可通过DescribeSyncTasks API返回值中的TaskId获取。每次请求允许操作的任务数量上限是100。
                     * @param _taskIds 一个或多个待操作的任务ID。可通过DescribeSyncTasks API返回值中的TaskId获取。每次请求允许操作的任务数量上限是100。
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
                     * 获取任务名称。可任意命名，但不得超过100个字符。
                     * @return TaskName 任务名称。可任意命名，但不得超过100个字符。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称。可任意命名，但不得超过100个字符。
                     * @param _taskName 任务名称。可任意命名，但不得超过100个字符。
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
                     * 一个或多个待操作的任务ID。可通过DescribeSyncTasks API返回值中的TaskId获取。每次请求允许操作的任务数量上限是100。
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 任务名称。可任意命名，但不得超过100个字符。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_
