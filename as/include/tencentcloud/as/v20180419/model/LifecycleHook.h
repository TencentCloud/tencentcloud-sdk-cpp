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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/NotificationTarget.h>
#include <tencentcloud/as/v20180419/model/LifecycleCommand.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 生命周期挂钩
                */
                class LifecycleHook : public AbstractModel
                {
                public:
                    LifecycleHook();
                    ~LifecycleHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取伸缩组ID
                     * @return AutoScalingGroupId 伸缩组ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param AutoScalingGroupId 伸缩组ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩默认结果
                     * @return DefaultResult 生命周期挂钩默认结果
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置生命周期挂钩默认结果
                     * @param DefaultResult 生命周期挂钩默认结果
                     */
                    void SetDefaultResult(const std::string& _defaultResult);

                    /**
                     * 判断参数 DefaultResult 是否已赋值
                     * @return DefaultResult 是否已赋值
                     */
                    bool DefaultResultHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩等待超时时间
                     * @return HeartbeatTimeout 生命周期挂钩等待超时时间
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置生命周期挂钩等待超时时间
                     * @param HeartbeatTimeout 生命周期挂钩等待超时时间
                     */
                    void SetHeartbeatTimeout(const int64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩适用场景
                     * @return LifecycleTransition 生命周期挂钩适用场景
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置生命周期挂钩适用场景
                     * @param LifecycleTransition 生命周期挂钩适用场景
                     */
                    void SetLifecycleTransition(const std::string& _lifecycleTransition);

                    /**
                     * 判断参数 LifecycleTransition 是否已赋值
                     * @return LifecycleTransition 是否已赋值
                     */
                    bool LifecycleTransitionHasBeenSet() const;

                    /**
                     * 获取通知目标的附加信息
                     * @return NotificationMetadata 通知目标的附加信息
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置通知目标的附加信息
                     * @param NotificationMetadata 通知目标的附加信息
                     */
                    void SetNotificationMetadata(const std::string& _notificationMetadata);

                    /**
                     * 判断参数 NotificationMetadata 是否已赋值
                     * @return NotificationMetadata 是否已赋值
                     */
                    bool NotificationMetadataHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param CreatedTime 创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

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

                    /**
                     * 获取生命周期挂钩适用场景
                     * @return LifecycleTransitionType 生命周期挂钩适用场景
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置生命周期挂钩适用场景
                     * @param LifecycleTransitionType 生命周期挂钩适用场景
                     */
                    void SetLifecycleTransitionType(const std::string& _lifecycleTransitionType);

                    /**
                     * 判断参数 LifecycleTransitionType 是否已赋值
                     * @return LifecycleTransitionType 是否已赋值
                     */
                    bool LifecycleTransitionTypeHasBeenSet() const;

                    /**
                     * 获取远程命令执行对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleCommand 远程命令执行对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置远程命令执行对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LifecycleCommand 远程命令执行对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLifecycleCommand(const LifecycleCommand& _lifecycleCommand);

                    /**
                     * 判断参数 LifecycleCommand 是否已赋值
                     * @return LifecycleCommand 是否已赋值
                     */
                    bool LifecycleCommandHasBeenSet() const;

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
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 生命周期挂钩默认结果
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * 生命周期挂钩等待超时时间
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * 生命周期挂钩适用场景
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * 通知目标的附加信息
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 通知目标
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * 生命周期挂钩适用场景
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * 远程命令执行对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEHOOK_H_
