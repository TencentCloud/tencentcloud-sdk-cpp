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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STOPAUTOCALLOUTTASKREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STOPAUTOCALLOUTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * StopAutoCalloutTask请求参数结构体
                */
                class StopAutoCalloutTaskRequest : public AbstractModel
                {
                public:
                    StopAutoCalloutTaskRequest();
                    ~StopAutoCalloutTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取呼叫中心实例Id
                     * @return SdkAppId 呼叫中心实例Id
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置呼叫中心实例Id
                     * @param SdkAppId 呼叫中心实例Id
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param TaskId 任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 呼叫中心实例Id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STOPAUTOCALLOUTTASKREQUEST_H_
