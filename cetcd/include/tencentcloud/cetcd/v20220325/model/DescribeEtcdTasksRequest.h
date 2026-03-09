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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDTASKSREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/Filter.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeEtcdTasks请求参数结构体
                */
                class DescribeEtcdTasksRequest : public AbstractModel
                {
                public:
                    DescribeEtcdTasksRequest();
                    ~DescribeEtcdTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskID 任务ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param _taskID 任务ID
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取taskType：
    按照任务类型过滤，当前支持enable_internet，disable_internet, restore_remote_snapshot
resourceId：
    按照资源ID过滤
lifeState：
    按照任务状态过滤，当前支持process， done
                     * @return Filters taskType：
    按照任务类型过滤，当前支持enable_internet，disable_internet, restore_remote_snapshot
resourceId：
    按照资源ID过滤
lifeState：
    按照任务状态过滤，当前支持process， done
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置taskType：
    按照任务类型过滤，当前支持enable_internet，disable_internet, restore_remote_snapshot
resourceId：
    按照资源ID过滤
lifeState：
    按照任务状态过滤，当前支持process， done
                     * @param _filters taskType：
    按照任务类型过滤，当前支持enable_internet，disable_internet, restore_remote_snapshot
resourceId：
    按照资源ID过滤
lifeState：
    按照任务状态过滤，当前支持process， done
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * taskType：
    按照任务类型过滤，当前支持enable_internet，disable_internet, restore_remote_snapshot
resourceId：
    按照资源ID过滤
lifeState：
    按照任务状态过滤，当前支持process， done
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDTASKSREQUEST_H_
