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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONRESPONSE_H_

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
                * DescribeAITranscription返回参数结构体
                */
                class DescribeAITranscriptionResponse : public AbstractModel
                {
                public:
                    DescribeAITranscriptionResponse();
                    ~DescribeAITranscriptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务开始时间。
                     * @return StartTime 任务开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取转录任务状态。
有4个值：
1、Idle表示任务未开始
2、Preparing表示任务准备中
3、InProgress表示任务正在运行
4、Stopped表示任务已停止，正在清理资源中
                     * @return Status 转录任务状态。
有4个值：
1、Idle表示任务未开始
2、Preparing表示任务准备中
3、InProgress表示任务正在运行
4、Stopped表示任务已停止，正在清理资源中
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
                     * 获取唯一标识一次任务。
                     * @return TaskId 唯一标识一次任务。
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
                     * 获取开启转录任务时填写的SessionId，如果没写则不返回。
                     * @return SessionId 开启转录任务时填写的SessionId，如果没写则不返回。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 任务开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 转录任务状态。
有4个值：
1、Idle表示任务未开始
2、Preparing表示任务准备中
3、InProgress表示任务正在运行
4、Stopped表示任务已停止，正在清理资源中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 唯一标识一次任务。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 开启转录任务时填写的SessionId，如果没写则不返回。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONRESPONSE_H_
