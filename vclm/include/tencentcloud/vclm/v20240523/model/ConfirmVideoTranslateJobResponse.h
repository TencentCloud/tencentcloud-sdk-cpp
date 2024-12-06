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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CONFIRMVIDEOTRANSLATEJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CONFIRMVIDEOTRANSLATEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * ConfirmVideoTranslateJob返回参数结构体
                */
                class ConfirmVideoTranslateJobResponse : public AbstractModel
                {
                public:
                    ConfirmVideoTranslateJobResponse();
                    ~ConfirmVideoTranslateJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取视频转译任务 ID。
                     * @return JobId 视频转译任务 ID。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取音频转译任务 ID。
                     * @return TaskId 音频转译任务 ID。
                     * @deprecated
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * @deprecated
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取音频转译结果确认 session。	
                     * @return SessionId 音频转译结果确认 session。	
                     * @deprecated
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * @deprecated
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * @return Status 任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * @deprecated
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取视频转译任务信息。	
                     * @return Message 视频转译任务信息。	
                     * @deprecated
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * @deprecated
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * @return JobStatus 任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                private:

                    /**
                     * 视频转译任务 ID。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 音频转译任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 音频转译结果确认 session。	
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 视频转译任务信息。	
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务状态。0：任务初始化。1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CONFIRMVIDEOTRANSLATEJOBRESPONSE_H_
