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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeModerationUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCloudModeration返回参数结构体
                */
                class DescribeCloudModerationResponse : public AbstractModel
                {
                public:
                    DescribeCloudModerationResponse();
                    ~DescribeCloudModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取切片任务的唯一Id，在启动切片任务成功后会返回。
                     * @return TaskId 切片任务的唯一Id，在启动切片任务成功后会返回。
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
                     * 获取云端切片任务的状态信息。Idle:表示当前任务空闲中,InProgress:表示当前任务正在进行中,Exited:表示当前任务正在退出的过程中。
                     * @return Status 云端切片任务的状态信息。Idle:表示当前任务空闲中,InProgress:表示当前任务正在进行中,Exited:表示当前任务正在退出的过程中。
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
                     * 获取订阅黑白名单
                     * @return SubscribeStreamUserIds 订阅黑白名单
                     * 
                     */
                    SubscribeModerationUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                private:

                    /**
                     * 切片任务的唯一Id，在启动切片任务成功后会返回。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 云端切片任务的状态信息。Idle:表示当前任务空闲中,InProgress:表示当前任务正在进行中,Exited:表示当前任务正在退出的过程中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订阅黑白名单
                     */
                    SubscribeModerationUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_
