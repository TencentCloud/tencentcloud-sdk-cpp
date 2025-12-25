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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_

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
                * SetInstancesProtection请求参数结构体
                */
                class SetInstancesProtectionRequest : public AbstractModel
                {
                public:
                    SetInstancesProtectionRequest();
                    ~SetInstancesProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:<li>通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 查询伸缩组ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li></p>
                     * @return AutoScalingGroupId <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:<li>通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 查询伸缩组ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li></p>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:<li>通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 查询伸缩组ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li></p>
                     * @param _autoScalingGroupId <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:<li>通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 查询伸缩组ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li></p>
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
                     * 获取<p>实例ID。可以通过以下方式获取可用的实例ID：<li>通过登录<a href="https://console.cloud.tencent.com/cvm/index">控制台</a>查询实例ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> ，取返回信息中的 <code>InstanceId</code> 获取实例ID。</li></p>
                     * @return InstanceIds <p>实例ID。可以通过以下方式获取可用的实例ID：<li>通过登录<a href="https://console.cloud.tencent.com/cvm/index">控制台</a>查询实例ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> ，取返回信息中的 <code>InstanceId</code> 获取实例ID。</li></p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID。可以通过以下方式获取可用的实例ID：<li>通过登录<a href="https://console.cloud.tencent.com/cvm/index">控制台</a>查询实例ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> ，取返回信息中的 <code>InstanceId</code> 获取实例ID。</li></p>
                     * @param _instanceIds <p>实例ID。可以通过以下方式获取可用的实例ID：<li>通过登录<a href="https://console.cloud.tencent.com/cvm/index">控制台</a>查询实例ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> ，取返回信息中的 <code>InstanceId</code> 获取实例ID。</li></p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>实例是否需要设置保护。</p>
                     * @return ProtectedFromScaleIn <p>实例是否需要设置保护。</p>
                     * 
                     */
                    bool GetProtectedFromScaleIn() const;

                    /**
                     * 设置<p>实例是否需要设置保护。</p>
                     * @param _protectedFromScaleIn <p>实例是否需要设置保护。</p>
                     * 
                     */
                    void SetProtectedFromScaleIn(const bool& _protectedFromScaleIn);

                    /**
                     * 判断参数 ProtectedFromScaleIn 是否已赋值
                     * @return ProtectedFromScaleIn 是否已赋值
                     * 
                     */
                    bool ProtectedFromScaleInHasBeenSet() const;

                private:

                    /**
                     * <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:<li>通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 查询伸缩组ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li></p>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>实例ID。可以通过以下方式获取可用的实例ID：<li>通过登录<a href="https://console.cloud.tencent.com/cvm/index">控制台</a>查询实例ID。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> ，取返回信息中的 <code>InstanceId</code> 获取实例ID。</li></p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>实例是否需要设置保护。</p>
                     */
                    bool m_protectedFromScaleIn;
                    bool m_protectedFromScaleInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
