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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLOUDPRODUCTLOGTASKSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLOUDPRODUCTLOGTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CloudProductLogTaskInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeCloudProductLogTasks返回参数结构体
                */
                class DescribeCloudProductLogTasksResponse : public AbstractModel
                {
                public:
                    DescribeCloudProductLogTasksResponse();
                    ~DescribeCloudProductLogTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志配置详情列表
                     * @return Tasks 日志配置详情列表
                     * 
                     */
                    std::vector<CloudProductLogTaskInfo> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取日志配置总数
                     * @return TotalCount 日志配置总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 日志配置详情列表
                     */
                    std::vector<CloudProductLogTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 日志配置总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLOUDPRODUCTLOGTASKSRESPONSE_H_
