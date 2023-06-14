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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeDataRepositoryTaskStatus返回参数结构体
                */
                class DescribeDataRepositoryTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeDataRepositoryTaskStatusResponse();
                    ~DescribeDataRepositoryTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态 0(初始化中), 1(运行中), 2(已完成), 3(任务失败)
                     * @return Status 任务状态 0(初始化中), 1(运行中), 2(已完成), 3(任务失败)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取已完成的文件数量
                     * @return FinishedFileNumber 已完成的文件数量
                     * 
                     */
                    uint64_t GetFinishedFileNumber() const;

                    /**
                     * 判断参数 FinishedFileNumber 是否已赋值
                     * @return FinishedFileNumber 是否已赋值
                     * 
                     */
                    bool FinishedFileNumberHasBeenSet() const;

                    /**
                     * 获取已完成的数据量
                     * @return FinishedCapacity 已完成的数据量
                     * 
                     */
                    uint64_t GetFinishedCapacity() const;

                    /**
                     * 判断参数 FinishedCapacity 是否已赋值
                     * @return FinishedCapacity 是否已赋值
                     * 
                     */
                    bool FinishedCapacityHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态 0(初始化中), 1(运行中), 2(已完成), 3(任务失败)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 已完成的文件数量
                     */
                    uint64_t m_finishedFileNumber;
                    bool m_finishedFileNumberHasBeenSet;

                    /**
                     * 已完成的数据量
                     */
                    uint64_t m_finishedCapacity;
                    bool m_finishedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSRESPONSE_H_
