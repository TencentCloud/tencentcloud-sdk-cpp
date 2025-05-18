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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_

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
                * CreateAutoScalingGroupFromInstance请求参数结构体
                */
                class CreateAutoScalingGroupFromInstanceRequest : public AbstractModel
                {
                public:
                    CreateAutoScalingGroupFromInstanceRequest();
                    ~CreateAutoScalingGroupFromInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * @return AutoScalingGroupName 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * @param _autoScalingGroupName 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * 
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取实例ID。可通过登录[控制台](https://console.cloud.tencent.com/cvm/index)或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * @return InstanceId 实例ID。可通过登录[控制台](https://console.cloud.tencent.com/cvm/index)或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可通过登录[控制台](https://console.cloud.tencent.com/cvm/index)或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     * @param _instanceId 实例ID。可通过登录[控制台](https://console.cloud.tencent.com/cvm/index)或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
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
                     * 获取最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return MinSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _minSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

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
                    int64_t GetMaxSize() const;

                    /**
                     * 设置最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _maxSize 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return DesiredCapacity 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _desiredCapacity 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取是否继承实例标签，默认值为False
                     * @return InheritInstanceTag 是否继承实例标签，默认值为False
                     * 
                     */
                    bool GetInheritInstanceTag() const;

                    /**
                     * 设置是否继承实例标签，默认值为False
                     * @param _inheritInstanceTag 是否继承实例标签，默认值为False
                     * 
                     */
                    void SetInheritInstanceTag(const bool& _inheritInstanceTag);

                    /**
                     * 判断参数 InheritInstanceTag 是否已赋值
                     * @return InheritInstanceTag 是否已赋值
                     * 
                     */
                    bool InheritInstanceTagHasBeenSet() const;

                private:

                    /**
                     * 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * 实例ID。可通过登录[控制台](https://console.cloud.tencent.com/cvm/index)或调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) ，取返回信息中的 `InstanceId` 获取实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 是否继承实例标签，默认值为False
                     */
                    bool m_inheritInstanceTag;
                    bool m_inheritInstanceTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_
