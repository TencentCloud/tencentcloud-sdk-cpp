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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_

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
                * DeleteScalingPolicy请求参数结构体
                */
                class DeleteScalingPolicyRequest : public AbstractModel
                {
                public:
                    DeleteScalingPolicyRequest();
                    ~DeleteScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的告警策略ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeScalingPolicies](https://cloud.tencent.com/document/api/377/33178) ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。
                     * @return AutoScalingPolicyId 待删除的告警策略ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeScalingPolicies](https://cloud.tencent.com/document/api/377/33178) ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。
                     * 
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置待删除的告警策略ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeScalingPolicies](https://cloud.tencent.com/document/api/377/33178) ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。
                     * @param _autoScalingPolicyId 待删除的告警策略ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeScalingPolicies](https://cloud.tencent.com/document/api/377/33178) ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。
                     * 
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     * 
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的告警策略ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeScalingPolicies](https://cloud.tencent.com/document/api/377/33178) ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_
