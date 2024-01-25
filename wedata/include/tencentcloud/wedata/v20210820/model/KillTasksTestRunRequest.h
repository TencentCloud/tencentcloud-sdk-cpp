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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNREQUEST_H_

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
                * KillTasksTestRun请求参数结构体
                */
                class KillTasksTestRunRequest : public AbstractModel
                {
                public:
                    KillTasksTestRunRequest();
                    ~KillTasksTestRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID
                     * @return Id 作业ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置作业ID
                     * @param _id 作业ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务编号列表
                     * @return TaskIds 任务编号列表
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务编号列表
                     * @param _taskIds 任务编号列表
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
                     * 作业ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务编号列表
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_KILLTASKSTESTRUNREQUEST_H_
