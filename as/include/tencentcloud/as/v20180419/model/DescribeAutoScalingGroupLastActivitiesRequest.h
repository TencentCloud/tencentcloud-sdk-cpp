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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_

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
                * DescribeAutoScalingGroupLastActivities请求参数结构体
                */
                class DescribeAutoScalingGroupLastActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingGroupLastActivitiesRequest();
                    ~DescribeAutoScalingGroupLastActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID列表。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @return AutoScalingGroupIds 伸缩组ID列表。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    std::vector<std::string> GetAutoScalingGroupIds() const;

                    /**
                     * 设置伸缩组ID列表。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @param _autoScalingGroupIds 伸缩组ID列表。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupIds(const std::vector<std::string>& _autoScalingGroupIds);

                    /**
                     * 判断参数 AutoScalingGroupIds 是否已赋值
                     * @return AutoScalingGroupIds 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdsHasBeenSet() const;

                    /**
                     * 获取查询时排除取消类型活动。默认值为 false，表示不排除取消类型活动。
                     * @return ExcludeCancelledActivity 查询时排除取消类型活动。默认值为 false，表示不排除取消类型活动。
                     * 
                     */
                    bool GetExcludeCancelledActivity() const;

                    /**
                     * 设置查询时排除取消类型活动。默认值为 false，表示不排除取消类型活动。
                     * @param _excludeCancelledActivity 查询时排除取消类型活动。默认值为 false，表示不排除取消类型活动。
                     * 
                     */
                    void SetExcludeCancelledActivity(const bool& _excludeCancelledActivity);

                    /**
                     * 判断参数 ExcludeCancelledActivity 是否已赋值
                     * @return ExcludeCancelledActivity 是否已赋值
                     * 
                     */
                    bool ExcludeCancelledActivityHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID列表。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     */
                    std::vector<std::string> m_autoScalingGroupIds;
                    bool m_autoScalingGroupIdsHasBeenSet;

                    /**
                     * 查询时排除取消类型活动。默认值为 false，表示不排除取消类型活动。
                     */
                    bool m_excludeCancelledActivity;
                    bool m_excludeCancelledActivityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_
