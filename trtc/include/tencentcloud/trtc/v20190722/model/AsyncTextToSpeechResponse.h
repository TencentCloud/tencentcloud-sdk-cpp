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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHRESPONSE_H_

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
                * AsyncTextToSpeech返回参数结构体
                */
                class AsyncTextToSpeechResponse : public AbstractModel
                {
                public:
                    AsyncTextToSpeechResponse();
                    ~AsyncTextToSpeechResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
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
                     * 获取<p>当前正在处理的任务数</p>
                     * @return CurrentTaskCount <p>当前正在处理的任务数</p>
                     * 
                     */
                    uint64_t GetCurrentTaskCount() const;

                    /**
                     * 判断参数 CurrentTaskCount 是否已赋值
                     * @return CurrentTaskCount 是否已赋值
                     * 
                     */
                    bool CurrentTaskCountHasBeenSet() const;

                    /**
                     * 获取<p>最大允许提交的任务数，默认1000，有提额需求请提交工单</p>
                     * @return MaxTaskCount <p>最大允许提交的任务数，默认1000，有提额需求请提交工单</p>
                     * 
                     */
                    uint64_t GetMaxTaskCount() const;

                    /**
                     * 判断参数 MaxTaskCount 是否已赋值
                     * @return MaxTaskCount 是否已赋值
                     * 
                     */
                    bool MaxTaskCountHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>当前正在处理的任务数</p>
                     */
                    uint64_t m_currentTaskCount;
                    bool m_currentTaskCountHasBeenSet;

                    /**
                     * <p>最大允许提交的任务数，默认1000，有提额需求请提交工单</p>
                     */
                    uint64_t m_maxTaskCount;
                    bool m_maxTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHRESPONSE_H_
