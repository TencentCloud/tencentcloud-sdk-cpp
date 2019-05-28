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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_

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
                * ModifyDesiredCapacity请求参数结构体
                */
                class ModifyDesiredCapacityRequest : public AbstractModel
                {
                public:
                    ModifyDesiredCapacityRequest();
                    ~ModifyDesiredCapacityRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取期望实例数
                     * @return DesiredCapacity 期望实例数
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置期望实例数
                     * @param DesiredCapacity 期望实例数
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     */
                    bool DesiredCapacityHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 期望实例数
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_
