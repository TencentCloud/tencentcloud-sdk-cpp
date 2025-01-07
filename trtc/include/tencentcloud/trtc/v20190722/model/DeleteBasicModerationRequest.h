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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEBASICMODERATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEBASICMODERATIONREQUEST_H_

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
                * DeleteBasicModeration请求参数结构体
                */
                class DeleteBasicModerationRequest : public AbstractModel
                {
                public:
                    DeleteBasicModerationRequest();
                    ~DeleteBasicModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的SDKAppId，和TRTC的房间所使用的SDKAppId相同。
                     * @return SdkAppId TRTC的SDKAppId，和TRTC的房间所使用的SDKAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的SDKAppId，和TRTC的房间所使用的SDKAppId相同。
                     * @param _sdkAppId TRTC的SDKAppId，和TRTC的房间所使用的SDKAppId相同。
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
                     * 获取审核任务的唯一Id，在启动审核任务成功后会返回。
                     * @return TaskId 审核任务的唯一Id，在启动审核任务成功后会返回。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置审核任务的唯一Id，在启动审核任务成功后会返回。
                     * @param _taskId 审核任务的唯一Id，在启动审核任务成功后会返回。
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
                     * TRTC的SDKAppId，和TRTC的房间所使用的SDKAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 审核任务的唯一Id，在启动审核任务成功后会返回。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DELETEBASICMODERATIONREQUEST_H_
