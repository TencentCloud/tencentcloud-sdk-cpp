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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/NotificationTarget.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * UpgradeLifecycleHook请求参数结构体
                */
                class UpgradeLifecycleHookRequest : public AbstractModel
                {
                public:
                    UpgradeLifecycleHookRequest();
                    ~UpgradeLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期挂钩ID
                     * @return LifecycleHookId 生命周期挂钩ID
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置生命周期挂钩ID
                     * @param LifecycleHookId 生命周期挂钩ID
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩名称
                     * @return LifecycleHookName 生命周期挂钩名称
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置生命周期挂钩名称
                     * @param LifecycleHookName 生命周期挂钩名称
                     */
                    void SetLifecycleHookName(const std::string& _lifecycleHookName);

                    /**
                     * 判断参数 LifecycleHookName 是否已赋值
                     * @return LifecycleHookName 是否已赋值
                     */
                    bool LifecycleHookNameHasBeenSet() const;

                    /**
                     * 获取进行生命周期挂钩的场景，取值范围包括“INSTANCE_LAUNCHING”和“INSTANCE_TERMINATING”
                     * @return LifecycleTransition 进行生命周期挂钩的场景，取值范围包括“INSTANCE_LAUNCHING”和“INSTANCE_TERMINATING”
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置进行生命周期挂钩的场景，取值范围包括“INSTANCE_LAUNCHING”和“INSTANCE_TERMINATING”
                     * @param LifecycleTransition 进行生命周期挂钩的场景，取值范围包括“INSTANCE_LAUNCHING”和“INSTANCE_TERMINATING”
                     */
                    void SetLifecycleTransition(const std::string& _lifecycleTransition);

                    /**
                     * 判断参数 LifecycleTransition 是否已赋值
                     * @return LifecycleTransition 是否已赋值
                     */
                    bool LifecycleTransitionHasBeenSet() const;

                    /**
                     * 获取定义伸缩组在生命周期挂钩超时的情况下应采取的操作，取值范围是“CONTINUE”或“ABANDON”，默认值为“CONTINUE”
                     * @return DefaultResult 定义伸缩组在生命周期挂钩超时的情况下应采取的操作，取值范围是“CONTINUE”或“ABANDON”，默认值为“CONTINUE”
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置定义伸缩组在生命周期挂钩超时的情况下应采取的操作，取值范围是“CONTINUE”或“ABANDON”，默认值为“CONTINUE”
                     * @param DefaultResult 定义伸缩组在生命周期挂钩超时的情况下应采取的操作，取值范围是“CONTINUE”或“ABANDON”，默认值为“CONTINUE”
                     */
                    void SetDefaultResult(const std::string& _defaultResult);

                    /**
                     * 判断参数 DefaultResult 是否已赋值
                     * @return DefaultResult 是否已赋值
                     */
                    bool DefaultResultHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到3600秒，默认值为300秒
                     * @return HeartbeatTimeout 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到3600秒，默认值为300秒
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到3600秒，默认值为300秒
                     * @param HeartbeatTimeout 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到3600秒，默认值为300秒
                     */
                    void SetHeartbeatTimeout(const int64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取弹性伸缩向通知目标发送的附加信息，默认值为''
                     * @return NotificationMetadata 弹性伸缩向通知目标发送的附加信息，默认值为''
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置弹性伸缩向通知目标发送的附加信息，默认值为''
                     * @param NotificationMetadata 弹性伸缩向通知目标发送的附加信息，默认值为''
                     */
                    void SetNotificationMetadata(const std::string& _notificationMetadata);

                    /**
                     * 判断参数 NotificationMetadata 是否已赋值
                     * @return NotificationMetadata 是否已赋值
                     */
                    bool NotificationMetadataHasBeenSet() const;

                    /**
                     * 获取通知目标
                     * @return NotificationTarget 通知目标
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置通知目标
                     * @param NotificationTarget 通知目标
                     */
                    void SetNotificationTarget(const NotificationTarget& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     */
                    bool NotificationTargetHasBeenSet() const;

                private:

                    /**
                     * 生命周期挂钩ID
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * 生命周期挂钩名称
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * 进行生命周期挂钩的场景，取值范围包括“INSTANCE_LAUNCHING”和“INSTANCE_TERMINATING”
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * 定义伸缩组在生命周期挂钩超时的情况下应采取的操作，取值范围是“CONTINUE”或“ABANDON”，默认值为“CONTINUE”
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到3600秒，默认值为300秒
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * 弹性伸缩向通知目标发送的附加信息，默认值为''
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * 通知目标
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
