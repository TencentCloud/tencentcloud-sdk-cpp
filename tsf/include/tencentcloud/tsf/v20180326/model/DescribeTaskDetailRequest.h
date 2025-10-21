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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail请求参数结构体
                */
                class DescribeTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeTaskDetailRequest();
                    ~DescribeTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页第一列和任务基本信息页查看任务ID。
                     * @return TaskId 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页第一列和任务基本信息页查看任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页第一列和任务基本信息页查看任务ID。
                     * @param _taskId 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页第一列和任务基本信息页查看任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务历史ID。查询任务列表 [DescribeTaskRecords](https://cloud.tencent.com/document/api/649/56136) 返回值字段 TaskLogId
                     * @return TaskLogId 任务历史ID。查询任务列表 [DescribeTaskRecords](https://cloud.tencent.com/document/api/649/56136) 返回值字段 TaskLogId
                     * 
                     */
                    std::string GetTaskLogId() const;

                    /**
                     * 设置任务历史ID。查询任务列表 [DescribeTaskRecords](https://cloud.tencent.com/document/api/649/56136) 返回值字段 TaskLogId
                     * @param _taskLogId 任务历史ID。查询任务列表 [DescribeTaskRecords](https://cloud.tencent.com/document/api/649/56136) 返回值字段 TaskLogId
                     * 
                     */
                    void SetTaskLogId(const std::string& _taskLogId);

                    /**
                     * 判断参数 TaskLogId 是否已赋值
                     * @return TaskLogId 是否已赋值
                     * 
                     */
                    bool TaskLogIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页第一列和任务基本信息页查看任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务历史ID。查询任务列表 [DescribeTaskRecords](https://cloud.tencent.com/document/api/649/56136) 返回值字段 TaskLogId
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKDETAILREQUEST_H_
