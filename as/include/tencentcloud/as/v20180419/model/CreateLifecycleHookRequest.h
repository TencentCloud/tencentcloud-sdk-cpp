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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLifecycleHook请求参数结构体
                */
                class CreateLifecycleHookRequest : public AbstractModel
                {
                public:
                    CreateLifecycleHookRequest();
                    ~CreateLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @return AutoScalingGroupId 伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @param _autoScalingGroupId 伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字节。
                     * @return LifecycleHookName 生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字节。
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字节。
                     * @param _lifecycleHookName 生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字节。
                     * 
                     */
                    void SetLifecycleHookName(const std::string& _lifecycleHookName);

                    /**
                     * 判断参数 LifecycleHookName 是否已赋值
                     * @return LifecycleHookName 是否已赋值
                     * 
                     */
                    bool LifecycleHookNameHasBeenSet() const;

                    /**
                     * 获取进行生命周期挂钩的场景，取值范围如下:
<li> INSTANCE_LAUNCHING: 扩容生命周期挂钩</li>
<li>INSTANCE_TERMINATING: 缩容生命周期挂钩</li>
                     * @return LifecycleTransition 进行生命周期挂钩的场景，取值范围如下:
<li> INSTANCE_LAUNCHING: 扩容生命周期挂钩</li>
<li>INSTANCE_TERMINATING: 缩容生命周期挂钩</li>
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置进行生命周期挂钩的场景，取值范围如下:
<li> INSTANCE_LAUNCHING: 扩容生命周期挂钩</li>
<li>INSTANCE_TERMINATING: 缩容生命周期挂钩</li>
                     * @param _lifecycleTransition 进行生命周期挂钩的场景，取值范围如下:
<li> INSTANCE_LAUNCHING: 扩容生命周期挂钩</li>
<li>INSTANCE_TERMINATING: 缩容生命周期挂钩</li>
                     * 
                     */
                    void SetLifecycleTransition(const std::string& _lifecycleTransition);

                    /**
                     * 判断参数 LifecycleTransition 是否已赋值
                     * @return LifecycleTransition 是否已赋值
                     * 
                     */
                    bool LifecycleTransitionHasBeenSet() const;

                    /**
                     * 获取定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * @return DefaultResult 定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * @param _defaultResult 定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * 
                     */
                    void SetDefaultResult(const std::string& _defaultResult);

                    /**
                     * 判断参数 DefaultResult 是否已赋值
                     * @return DefaultResult 是否已赋值
                     * 
                     */
                    bool DefaultResultHasBeenSet() const;

                    /**
                     * 获取生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒
                     * @return HeartbeatTimeout 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒
                     * 
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒
                     * @param _heartbeatTimeout 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒
                     * 
                     */
                    void SetHeartbeatTimeout(const int64_t& _heartbeatTimeout);

                    /**
                     * 判断参数 HeartbeatTimeout 是否已赋值
                     * @return HeartbeatTimeout 是否已赋值
                     * 
                     */
                    bool HeartbeatTimeoutHasBeenSet() const;

                    /**
                     * 获取弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串，最长不超过 1024 字符。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。
                     * @return NotificationMetadata 弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串，最长不超过 1024 字符。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串，最长不超过 1024 字符。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。
                     * @param _notificationMetadata 弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串，最长不超过 1024 字符。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。
                     * 
                     */
                    void SetNotificationMetadata(const std::string& _notificationMetadata);

                    /**
                     * 判断参数 NotificationMetadata 是否已赋值
                     * @return NotificationMetadata 是否已赋值
                     * 
                     */
                    bool NotificationMetadataHasBeenSet() const;

                    /**
                     * 获取通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。
                     * @return NotificationTarget 通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。
                     * @param _notificationTarget 通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。
                     * 
                     */
                    void SetNotificationTarget(const NotificationTarget& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     * 
                     */
                    bool NotificationTargetHasBeenSet() const;

                    /**
                     * 获取进行生命周期挂钩的场景类型，取值范围包括 NORMAL 和 EXTENSION，默认值为 NORMAL。
说明：设置为EXTENSION值，在 [AttachInstances](https://cloud.tencent.com/document/api/377/20441)、[DetachInstances](https://cloud.tencent.com/document/api/377/20436)、[RemoveInstaces](https://cloud.tencent.com/document/api/377/20431)、[StopAutoScalingInstances](https://cloud.tencent.com/document/api/377/40286)、[StartAutoScalingInstances](https://cloud.tencent.com/document/api/377/40287)、[StartInstanceRefresh](https://cloud.tencent.com/document/api/377/99172) 接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。
                     * @return LifecycleTransitionType 进行生命周期挂钩的场景类型，取值范围包括 NORMAL 和 EXTENSION，默认值为 NORMAL。
说明：设置为EXTENSION值，在 [AttachInstances](https://cloud.tencent.com/document/api/377/20441)、[DetachInstances](https://cloud.tencent.com/document/api/377/20436)、[RemoveInstaces](https://cloud.tencent.com/document/api/377/20431)、[StopAutoScalingInstances](https://cloud.tencent.com/document/api/377/40286)、[StartAutoScalingInstances](https://cloud.tencent.com/document/api/377/40287)、[StartInstanceRefresh](https://cloud.tencent.com/document/api/377/99172) 接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置进行生命周期挂钩的场景类型，取值范围包括 NORMAL 和 EXTENSION，默认值为 NORMAL。
说明：设置为EXTENSION值，在 [AttachInstances](https://cloud.tencent.com/document/api/377/20441)、[DetachInstances](https://cloud.tencent.com/document/api/377/20436)、[RemoveInstaces](https://cloud.tencent.com/document/api/377/20431)、[StopAutoScalingInstances](https://cloud.tencent.com/document/api/377/40286)、[StartAutoScalingInstances](https://cloud.tencent.com/document/api/377/40287)、[StartInstanceRefresh](https://cloud.tencent.com/document/api/377/99172) 接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。
                     * @param _lifecycleTransitionType 进行生命周期挂钩的场景类型，取值范围包括 NORMAL 和 EXTENSION，默认值为 NORMAL。
说明：设置为EXTENSION值，在 [AttachInstances](https://cloud.tencent.com/document/api/377/20441)、[DetachInstances](https://cloud.tencent.com/document/api/377/20436)、[RemoveInstaces](https://cloud.tencent.com/document/api/377/20431)、[StopAutoScalingInstances](https://cloud.tencent.com/document/api/377/40286)、[StartAutoScalingInstances](https://cloud.tencent.com/document/api/377/40287)、[StartInstanceRefresh](https://cloud.tencent.com/document/api/377/99172) 接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。
                     * 
                     */
                    void SetLifecycleTransitionType(const std::string& _lifecycleTransitionType);

                    /**
                     * 判断参数 LifecycleTransitionType 是否已赋值
                     * @return LifecycleTransitionType 是否已赋值
                     * 
                     */
                    bool LifecycleTransitionTypeHasBeenSet() const;

                    /**
                     * 获取远程命令执行对象。通知相关参数（NotificationTarget、NotificationMetadata）与该参数互斥，二者不可同时指定。
                     * @return LifecycleCommand 远程命令执行对象。通知相关参数（NotificationTarget、NotificationMetadata）与该参数互斥，二者不可同时指定。
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置远程命令执行对象。通知相关参数（NotificationTarget、NotificationMetadata）与该参数互斥，二者不可同时指定。
                     * @param _lifecycleCommand 远程命令执行对象。通知相关参数（NotificationTarget、NotificationMetadata）与该参数互斥，二者不可同时指定。
                     * 
                     */
                    void SetLifecycleCommand(const LifecycleCommand& _lifecycleCommand);

                    /**
                     * 判断参数 LifecycleCommand 是否已赋值
                     * @return LifecycleCommand 是否已赋值
                     * 
                     */
                    bool LifecycleCommandHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字节。
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * 进行生命周期挂钩的场景，取值范围如下:
<li> INSTANCE_LAUNCHING: 扩容生命周期挂钩</li>
<li>INSTANCE_TERMINATING: 缩容生命周期挂钩</li>
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * 定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * 生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * 弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串，最长不超过 1024 字符。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * 通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * 进行生命周期挂钩的场景类型，取值范围包括 NORMAL 和 EXTENSION，默认值为 NORMAL。
说明：设置为EXTENSION值，在 [AttachInstances](https://cloud.tencent.com/document/api/377/20441)、[DetachInstances](https://cloud.tencent.com/document/api/377/20436)、[RemoveInstaces](https://cloud.tencent.com/document/api/377/20431)、[StopAutoScalingInstances](https://cloud.tencent.com/document/api/377/40286)、[StartAutoScalingInstances](https://cloud.tencent.com/document/api/377/40287)、[StartInstanceRefresh](https://cloud.tencent.com/document/api/377/99172) 接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * 远程命令执行对象。通知相关参数（NotificationTarget、NotificationMetadata）与该参数互斥，二者不可同时指定。
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELIFECYCLEHOOKREQUEST_H_
