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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CompleteLifecycleAction请求参数结构体
                */
                class CompleteLifecycleActionRequest : public AbstractModel
                {
                public:
                    CompleteLifecycleActionRequest();
                    ~CompleteLifecycleActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期挂钩ID。可以通过调用接口 [DescribeLifecycleHooks](https://cloud.tencent.com/document/api/377/34452) ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。
                     * @return LifecycleHookId 生命周期挂钩ID。可以通过调用接口 [DescribeLifecycleHooks](https://cloud.tencent.com/document/api/377/34452) ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置生命周期挂钩ID。可以通过调用接口 [DescribeLifecycleHooks](https://cloud.tencent.com/document/api/377/34452) ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。
                     * @param _lifecycleHookId 生命周期挂钩ID。可以通过调用接口 [DescribeLifecycleHooks](https://cloud.tencent.com/document/api/377/34452) ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。
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
                     * 获取生命周期动作的结果，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * @return LifecycleActionResult 生命周期动作的结果，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * 
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置生命周期动作的结果，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * @param _lifecycleActionResult 生命周期动作的结果，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     * 
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     * 
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取实例ID，`InstanceId` 和 `LifecycleActionToken` 参数必须填写其中一个。可通过登录 [控制台](https://console.cloud.tencent.com/cvm/index) 或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * @return InstanceId 实例ID，`InstanceId` 和 `LifecycleActionToken` 参数必须填写其中一个。可通过登录 [控制台](https://console.cloud.tencent.com/cvm/index) 或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，`InstanceId` 和 `LifecycleActionToken` 参数必须填写其中一个。可通过登录 [控制台](https://console.cloud.tencent.com/cvm/index) 或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * @param _instanceId 实例ID，`InstanceId` 和 `LifecycleActionToken` 参数必须填写其中一个。可通过登录 [控制台](https://console.cloud.tencent.com/cvm/index) 或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取生命周期动作令牌，`InstanceId` 和 `LifecycleActionToken` 必须填充其中一个。
该参数获取方式如下：配置 `NotificationTarget ` 参数的挂钩被触发时，向  `NotificationTarget `  参数中指定的消息队列投递包含令牌的消息，消息队列的消费者可从消息中获取令牌。
                     * @return LifecycleActionToken 生命周期动作令牌，`InstanceId` 和 `LifecycleActionToken` 必须填充其中一个。
该参数获取方式如下：配置 `NotificationTarget ` 参数的挂钩被触发时，向  `NotificationTarget `  参数中指定的消息队列投递包含令牌的消息，消息队列的消费者可从消息中获取令牌。
                     * 
                     */
                    std::string GetLifecycleActionToken() const;

                    /**
                     * 设置生命周期动作令牌，`InstanceId` 和 `LifecycleActionToken` 必须填充其中一个。
该参数获取方式如下：配置 `NotificationTarget ` 参数的挂钩被触发时，向  `NotificationTarget `  参数中指定的消息队列投递包含令牌的消息，消息队列的消费者可从消息中获取令牌。
                     * @param _lifecycleActionToken 生命周期动作令牌，`InstanceId` 和 `LifecycleActionToken` 必须填充其中一个。
该参数获取方式如下：配置 `NotificationTarget ` 参数的挂钩被触发时，向  `NotificationTarget `  参数中指定的消息队列投递包含令牌的消息，消息队列的消费者可从消息中获取令牌。
                     * 
                     */
                    void SetLifecycleActionToken(const std::string& _lifecycleActionToken);

                    /**
                     * 判断参数 LifecycleActionToken 是否已赋值
                     * @return LifecycleActionToken 是否已赋值
                     * 
                     */
                    bool LifecycleActionTokenHasBeenSet() const;

                private:

                    /**
                     * 生命周期挂钩ID。可以通过调用接口 [DescribeLifecycleHooks](https://cloud.tencent.com/document/api/377/34452) ，取返回信息中的 LifecycleHookId 获取生命周期挂钩ID。
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * 生命周期动作的结果，取值范围如下：
<li>CONTINUE: 默认值，表示继续执行扩缩容活动</li>
<li>ABANDON: 针对扩容挂钩，挂钩超时或 LifecycleCommand 执行失败的 CVM 实例会直接释放或移出；而针对缩容挂钩，会继续执行缩容活动。</li>
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * 实例ID，`InstanceId` 和 `LifecycleActionToken` 参数必须填写其中一个。可通过登录 [控制台](https://console.cloud.tencent.com/cvm/index) 或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 生命周期动作令牌，`InstanceId` 和 `LifecycleActionToken` 必须填充其中一个。
该参数获取方式如下：配置 `NotificationTarget ` 参数的挂钩被触发时，向  `NotificationTarget `  参数中指定的消息队列投递包含令牌的消息，消息队列的消费者可从消息中获取令牌。
                     */
                    std::string m_lifecycleActionToken;
                    bool m_lifecycleActionTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
