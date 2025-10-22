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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAIConversation请求参数结构体
                */
                class DescribeAIConversationRequest : public AbstractModel
                {
                public:
                    DescribeAIConversationRequest();
                    ~DescribeAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取GME的SdkAppId，和开启转录任务的房间使用的SdkAppId相同。
                     * @return SdkAppId GME的SdkAppId，和开启转录任务的房间使用的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置GME的SdkAppId，和开启转录任务的房间使用的SdkAppId相同。
                     * @param _sdkAppId GME的SdkAppId，和开启转录任务的房间使用的SdkAppId相同。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取唯一标识一次任务。
                     * @return TaskId 唯一标识一次任务。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置唯一标识一次任务。
                     * @param _taskId 唯一标识一次任务。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * GME的SdkAppId，和开启转录任务的房间使用的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 唯一标识一次任务。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAICONVERSATIONREQUEST_H_
