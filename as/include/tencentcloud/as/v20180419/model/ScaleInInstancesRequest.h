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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_

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
                * ScaleInInstances请求参数结构体
                */
                class ScaleInInstancesRequest : public AbstractModel
                {
                public:
                    ScaleInInstancesRequest();
                    ~ScaleInInstancesRequest() = default;
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
                     * 获取希望缩容的实例数量。该参数的静态取值范围是 [1,2000]，同时该参数不得大于期望数与最小值的差值。例如伸缩组期望数为 100，最小值为 20，此时可取值范围为 [1,80]。
                     * @return ScaleInNumber 希望缩容的实例数量。该参数的静态取值范围是 [1,2000]，同时该参数不得大于期望数与最小值的差值。例如伸缩组期望数为 100，最小值为 20，此时可取值范围为 [1,80]。
                     * 
                     */
                    uint64_t GetScaleInNumber() const;

                    /**
                     * 设置希望缩容的实例数量。该参数的静态取值范围是 [1,2000]，同时该参数不得大于期望数与最小值的差值。例如伸缩组期望数为 100，最小值为 20，此时可取值范围为 [1,80]。
                     * @param _scaleInNumber 希望缩容的实例数量。该参数的静态取值范围是 [1,2000]，同时该参数不得大于期望数与最小值的差值。例如伸缩组期望数为 100，最小值为 20，此时可取值范围为 [1,80]。
                     * 
                     */
                    void SetScaleInNumber(const uint64_t& _scaleInNumber);

                    /**
                     * 判断参数 ScaleInNumber 是否已赋值
                     * @return ScaleInNumber 是否已赋值
                     * 
                     */
                    bool ScaleInNumberHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。可以通过如下方式获取可用的伸缩组ID:
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 希望缩容的实例数量。该参数的静态取值范围是 [1,2000]，同时该参数不得大于期望数与最小值的差值。例如伸缩组期望数为 100，最小值为 20，此时可取值范围为 [1,80]。
                     */
                    uint64_t m_scaleInNumber;
                    bool m_scaleInNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_
