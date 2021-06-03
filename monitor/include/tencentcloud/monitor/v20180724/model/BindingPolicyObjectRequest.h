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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectDimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * BindingPolicyObject请求参数结构体
                */
                class BindingPolicyObjectRequest : public AbstractModel
                {
                public:
                    BindingPolicyObjectRequest();
                    ~BindingPolicyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取必填。固定值"monitor"
                     * @return Module 必填。固定值"monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置必填。固定值"monitor"
                     * @param Module 必填。固定值"monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取策略组id，如传入 PolicyId 则该字段会被忽略可传入任意值如 0
                     * @return GroupId 策略组id，如传入 PolicyId 则该字段会被忽略可传入任意值如 0
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id，如传入 PolicyId 则该字段会被忽略可传入任意值如 0
                     * @param GroupId 策略组id，如传入 PolicyId 则该字段会被忽略可传入任意值如 0
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略ID，使用此字段时 GroupId 会被忽略
                     * @return PolicyId 告警策略ID，使用此字段时 GroupId 会被忽略
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略ID，使用此字段时 GroupId 会被忽略
                     * @param PolicyId 告警策略ID，使用此字段时 GroupId 会被忽略
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取实例分组ID
                     * @return InstanceGroupId 实例分组ID
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组ID
                     * @param InstanceGroupId 实例分组ID
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取需要绑定的对象维度信息
                     * @return Dimensions 需要绑定的对象维度信息
                     */
                    std::vector<BindingPolicyObjectDimension> GetDimensions() const;

                    /**
                     * 设置需要绑定的对象维度信息
                     * @param Dimensions 需要绑定的对象维度信息
                     */
                    void SetDimensions(const std::vector<BindingPolicyObjectDimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * 必填。固定值"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组id，如传入 PolicyId 则该字段会被忽略可传入任意值如 0
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警策略ID，使用此字段时 GroupId 会被忽略
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 实例分组ID
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 需要绑定的对象维度信息
                     */
                    std::vector<BindingPolicyObjectDimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_
