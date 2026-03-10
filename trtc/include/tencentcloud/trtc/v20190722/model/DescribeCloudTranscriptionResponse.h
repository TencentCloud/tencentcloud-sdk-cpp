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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCloudTranscription返回参数结构体
                */
                class DescribeCloudTranscriptionResponse : public AbstractModel
                {
                public:
                    DescribeCloudTranscriptionResponse();
                    ~DescribeCloudTranscriptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务开始时间。
                     * @return StartTime 任务开始时间。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取转录任务状态。Idle：表示当前转录任务空闲中 InProgress：表示当前转录任务正在进行中。 Exited：表示当前转录任务正在退出的过程中。
                     * @return Status 转录任务状态。Idle：表示当前转录任务空闲中 InProgress：表示当前转录任务正在进行中。 Exited：表示当前转录任务正在退出的过程中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取转录任务的唯一Id。
                     * @return TaskId 转录任务的唯一Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务开始时间。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 转录任务状态。Idle：表示当前转录任务空闲中 InProgress：表示当前转录任务正在进行中。 Exited：表示当前转录任务正在退出的过程中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 转录任务的唯一Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_
