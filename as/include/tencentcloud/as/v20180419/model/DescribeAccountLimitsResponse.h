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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEACCOUNTLIMITSRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEACCOUNTLIMITSRESPONSE_H_

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
                * DescribeAccountLimits返回参数结构体
                */
                class DescribeAccountLimitsResponse : public AbstractModel
                {
                public:
                    DescribeAccountLimitsResponse();
                    ~DescribeAccountLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户账户被允许创建的启动配置最大数量
                     * @return MaxNumberOfLaunchConfigurations 用户账户被允许创建的启动配置最大数量
                     * 
                     */
                    int64_t GetMaxNumberOfLaunchConfigurations() const;

                    /**
                     * 判断参数 MaxNumberOfLaunchConfigurations 是否已赋值
                     * @return MaxNumberOfLaunchConfigurations 是否已赋值
                     * 
                     */
                    bool MaxNumberOfLaunchConfigurationsHasBeenSet() const;

                    /**
                     * 获取用户账户启动配置的当前数量
                     * @return NumberOfLaunchConfigurations 用户账户启动配置的当前数量
                     * 
                     */
                    int64_t GetNumberOfLaunchConfigurations() const;

                    /**
                     * 判断参数 NumberOfLaunchConfigurations 是否已赋值
                     * @return NumberOfLaunchConfigurations 是否已赋值
                     * 
                     */
                    bool NumberOfLaunchConfigurationsHasBeenSet() const;

                    /**
                     * 获取用户账户被允许创建的伸缩组最大数量
                     * @return MaxNumberOfAutoScalingGroups 用户账户被允许创建的伸缩组最大数量
                     * 
                     */
                    int64_t GetMaxNumberOfAutoScalingGroups() const;

                    /**
                     * 判断参数 MaxNumberOfAutoScalingGroups 是否已赋值
                     * @return MaxNumberOfAutoScalingGroups 是否已赋值
                     * 
                     */
                    bool MaxNumberOfAutoScalingGroupsHasBeenSet() const;

                    /**
                     * 获取用户账户伸缩组的当前数量
                     * @return NumberOfAutoScalingGroups 用户账户伸缩组的当前数量
                     * 
                     */
                    int64_t GetNumberOfAutoScalingGroups() const;

                    /**
                     * 判断参数 NumberOfAutoScalingGroups 是否已赋值
                     * @return NumberOfAutoScalingGroups 是否已赋值
                     * 
                     */
                    bool NumberOfAutoScalingGroupsHasBeenSet() const;

                private:

                    /**
                     * 用户账户被允许创建的启动配置最大数量
                     */
                    int64_t m_maxNumberOfLaunchConfigurations;
                    bool m_maxNumberOfLaunchConfigurationsHasBeenSet;

                    /**
                     * 用户账户启动配置的当前数量
                     */
                    int64_t m_numberOfLaunchConfigurations;
                    bool m_numberOfLaunchConfigurationsHasBeenSet;

                    /**
                     * 用户账户被允许创建的伸缩组最大数量
                     */
                    int64_t m_maxNumberOfAutoScalingGroups;
                    bool m_maxNumberOfAutoScalingGroupsHasBeenSet;

                    /**
                     * 用户账户伸缩组的当前数量
                     */
                    int64_t m_numberOfAutoScalingGroups;
                    bool m_numberOfAutoScalingGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEACCOUNTLIMITSRESPONSE_H_
