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
                     * 获取生命周期动作的结果，取值范围为“CONTINUE”或“ABANDON”
                     * @return LifecycleActionResult 生命周期动作的结果，取值范围为“CONTINUE”或“ABANDON”
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置生命周期动作的结果，取值范围为“CONTINUE”或“ABANDON”
                     * @param LifecycleActionResult 生命周期动作的结果，取值范围为“CONTINUE”或“ABANDON”
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取实例ID，“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     * @return InstanceId 实例ID，“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     * @param InstanceId 实例ID，“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     * @return LifecycleActionToken “InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    std::string GetLifecycleActionToken() const;

                    /**
                     * 设置“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     * @param LifecycleActionToken “InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    void SetLifecycleActionToken(const std::string& _lifecycleActionToken);

                    /**
                     * 判断参数 LifecycleActionToken 是否已赋值
                     * @return LifecycleActionToken 是否已赋值
                     */
                    bool LifecycleActionTokenHasBeenSet() const;

                private:

                    /**
                     * 生命周期挂钩ID
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * 生命周期动作的结果，取值范围为“CONTINUE”或“ABANDON”
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * 实例ID，“InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * “InstanceId”和“LifecycleActionToken”必须填充其中一个
                     */
                    std::string m_lifecycleActionToken;
                    bool m_lifecycleActionTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
