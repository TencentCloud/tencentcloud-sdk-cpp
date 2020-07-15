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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstanceVersion请求参数结构体
                */
                class UpgradeInstanceVersionRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceVersionRequest();
                    ~UpgradeInstanceVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标实例类型，同CreateInstances接口的Type，即实例要变更的目标类型
                     * @return TargetInstanceType 目标实例类型，同CreateInstances接口的Type，即实例要变更的目标类型
                     */
                    std::string GetTargetInstanceType() const;

                    /**
                     * 设置目标实例类型，同CreateInstances接口的Type，即实例要变更的目标类型
                     * @param TargetInstanceType 目标实例类型，同CreateInstances接口的Type，即实例要变更的目标类型
                     */
                    void SetTargetInstanceType(const std::string& _targetInstanceType);

                    /**
                     * 判断参数 TargetInstanceType 是否已赋值
                     * @return TargetInstanceType 是否已赋值
                     */
                    bool TargetInstanceTypeHasBeenSet() const;

                    /**
                     * 获取切换模式：1-维护时间窗切换，2-立即切换
                     * @return SwitchOption 切换模式：1-维护时间窗切换，2-立即切换
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置切换模式：1-维护时间窗切换，2-立即切换
                     * @param SwitchOption 切换模式：1-维护时间窗切换，2-立即切换
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 目标实例类型，同CreateInstances接口的Type，即实例要变更的目标类型
                     */
                    std::string m_targetInstanceType;
                    bool m_targetInstanceTypeHasBeenSet;

                    /**
                     * 切换模式：1-维护时间窗切换，2-立即切换
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
