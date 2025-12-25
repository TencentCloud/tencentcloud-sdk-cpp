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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_

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
                * UpgradeLifecycleHook请求参数结构体
                */
                class UpgradeLifecycleHookRequest : public AbstractModel
                {
                public:
                    UpgradeLifecycleHookRequest();
                    ~UpgradeLifecycleHookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>生命周期挂钩ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/34452">DescribeLifecycleHooks</a> ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。</p>
                     * @return LifecycleHookId <p>生命周期挂钩ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/34452">DescribeLifecycleHooks</a> ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。</p>
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置<p>生命周期挂钩ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/34452">DescribeLifecycleHooks</a> ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。</p>
                     * @param _lifecycleHookId <p>生命周期挂钩ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/34452">DescribeLifecycleHooks</a> ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。</p>
                     * 
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     * 
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取<p>生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字符。</p>
                     * @return LifecycleHookName <p>生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字符。</p>
                     * 
                     */
                    std::string GetLifecycleHookName() const;

                    /**
                     * 设置<p>生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字符。</p>
                     * @param _lifecycleHookName <p>生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字符。</p>
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
                     * 获取<p>进行生命周期挂钩的场景，取值范围如下:<em> INSTANCE_LAUNCHING: 扩容生命周期挂钩</em> INSTANCE_TERMINATING: 缩容生命周期挂钩</p>
                     * @return LifecycleTransition <p>进行生命周期挂钩的场景，取值范围如下:<em> INSTANCE_LAUNCHING: 扩容生命周期挂钩</em> INSTANCE_TERMINATING: 缩容生命周期挂钩</p>
                     * 
                     */
                    std::string GetLifecycleTransition() const;

                    /**
                     * 设置<p>进行生命周期挂钩的场景，取值范围如下:<em> INSTANCE_LAUNCHING: 扩容生命周期挂钩</em> INSTANCE_TERMINATING: 缩容生命周期挂钩</p>
                     * @param _lifecycleTransition <p>进行生命周期挂钩的场景，取值范围如下:<em> INSTANCE_LAUNCHING: 扩容生命周期挂钩</em> INSTANCE_TERMINATING: 缩容生命周期挂钩</p>
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
                     * 获取<p>定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围是如下：<em> CONTINUE: 默认值，表示继续执行扩缩容活动</em> ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</p>
                     * @return DefaultResult <p>定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围是如下：<em> CONTINUE: 默认值，表示继续执行扩缩容活动</em> ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</p>
                     * 
                     */
                    std::string GetDefaultResult() const;

                    /**
                     * 设置<p>定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围是如下：<em> CONTINUE: 默认值，表示继续执行扩缩容活动</em> ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</p>
                     * @param _defaultResult <p>定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围是如下：<em> CONTINUE: 默认值，表示继续执行扩缩容活动</em> ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</p>
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
                     * 获取<p>生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒</p>
                     * @return HeartbeatTimeout <p>生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒</p>
                     * 
                     */
                    int64_t GetHeartbeatTimeout() const;

                    /**
                     * 设置<p>生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒</p>
                     * @param _heartbeatTimeout <p>生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒</p>
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
                     * 获取<p>弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * @return NotificationMetadata <p>弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * 
                     */
                    std::string GetNotificationMetadata() const;

                    /**
                     * 设置<p>弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * @param _notificationMetadata <p>弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。</p>
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
                     * 获取<p>通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * @return NotificationTarget <p>通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * 
                     */
                    NotificationTarget GetNotificationTarget() const;

                    /**
                     * 设置<p>通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。</p>
                     * @param _notificationTarget <p>通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。</p>
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
                     * 获取<p>进行生命周期挂钩的场景类型，取值范围包括NORMAL 和 EXTENSION。说明：设置为EXTENSION值，在AttachInstances、DetachInstances、RemoveInstaces接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。</p>
                     * @return LifecycleTransitionType <p>进行生命周期挂钩的场景类型，取值范围包括NORMAL 和 EXTENSION。说明：设置为EXTENSION值，在AttachInstances、DetachInstances、RemoveInstaces接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。</p>
                     * 
                     */
                    std::string GetLifecycleTransitionType() const;

                    /**
                     * 设置<p>进行生命周期挂钩的场景类型，取值范围包括NORMAL 和 EXTENSION。说明：设置为EXTENSION值，在AttachInstances、DetachInstances、RemoveInstaces接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。</p>
                     * @param _lifecycleTransitionType <p>进行生命周期挂钩的场景类型，取值范围包括NORMAL 和 EXTENSION。说明：设置为EXTENSION值，在AttachInstances、DetachInstances、RemoveInstaces接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。</p>
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
                     * 获取<p>远程命令执行对象。通知参数 NotificationMetadata、NotificationTarget 与 LifecycleCommand 互斥，不可同时指定。</p>
                     * @return LifecycleCommand <p>远程命令执行对象。通知参数 NotificationMetadata、NotificationTarget 与 LifecycleCommand 互斥，不可同时指定。</p>
                     * 
                     */
                    LifecycleCommand GetLifecycleCommand() const;

                    /**
                     * 设置<p>远程命令执行对象。通知参数 NotificationMetadata、NotificationTarget 与 LifecycleCommand 互斥，不可同时指定。</p>
                     * @param _lifecycleCommand <p>远程命令执行对象。通知参数 NotificationMetadata、NotificationTarget 与 LifecycleCommand 互斥，不可同时指定。</p>
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
                     * <p>生命周期挂钩ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/34452">DescribeLifecycleHooks</a> ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。</p>
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * <p>生命周期挂钩名称。名称仅支持中文、英文、数字、下划线（_）、短横线（-）、小数点（.），最大长度不能超128个字符。</p>
                     */
                    std::string m_lifecycleHookName;
                    bool m_lifecycleHookNameHasBeenSet;

                    /**
                     * <p>进行生命周期挂钩的场景，取值范围如下:<em> INSTANCE_LAUNCHING: 扩容生命周期挂钩</em> INSTANCE_TERMINATING: 缩容生命周期挂钩</p>
                     */
                    std::string m_lifecycleTransition;
                    bool m_lifecycleTransitionHasBeenSet;

                    /**
                     * <p>定义伸缩组在生命周期挂钩超时或 LifecycleCommand 执行失败时应采取的操作，取值范围是如下：<em> CONTINUE: 默认值，表示继续执行扩缩容活动</em> ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</p>
                     */
                    std::string m_defaultResult;
                    bool m_defaultResultHasBeenSet;

                    /**
                     * <p>生命周期挂钩超时之前可以经过的最长时间（以秒为单位），范围从30到7200秒，默认值为300秒</p>
                     */
                    int64_t m_heartbeatTimeout;
                    bool m_heartbeatTimeoutHasBeenSet;

                    /**
                     * <p>弹性伸缩向通知目标发送的附加信息，配置通知时使用，默认值为空字符串。NotificationMetadata 和 LifecycleCommand参数互斥，二者不可同时指定。</p>
                     */
                    std::string m_notificationMetadata;
                    bool m_notificationMetadataHasBeenSet;

                    /**
                     * <p>通知目标。NotificationTarget和LifecycleCommand参数互斥，二者不可同时指定。</p>
                     */
                    NotificationTarget m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                    /**
                     * <p>进行生命周期挂钩的场景类型，取值范围包括NORMAL 和 EXTENSION。说明：设置为EXTENSION值，在AttachInstances、DetachInstances、RemoveInstaces接口时会触发生命周期挂钩操作，值为NORMAL则不会在这些接口中触发生命周期挂钩。</p>
                     */
                    std::string m_lifecycleTransitionType;
                    bool m_lifecycleTransitionTypeHasBeenSet;

                    /**
                     * <p>远程命令执行对象。通知参数 NotificationMetadata、NotificationTarget 与 LifecycleCommand 互斥，不可同时指定。</p>
                     */
                    LifecycleCommand m_lifecycleCommand;
                    bool m_lifecycleCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELIFECYCLEHOOKREQUEST_H_
