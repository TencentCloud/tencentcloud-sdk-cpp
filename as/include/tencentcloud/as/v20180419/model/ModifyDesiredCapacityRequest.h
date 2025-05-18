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
                     * 获取伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
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
                     * 获取期望实例数，取值范围 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return DesiredCapacity 期望实例数，取值范围 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置期望实例数，取值范围 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _desiredCapacity 期望实例数，取值范围 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return MinSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _minSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return MaxSize 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _maxSize 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 期望实例数，取值范围 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_
