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
                     * 获取<p>必填。固定值&quot;monitor&quot;</p>
                     * @return Module <p>必填。固定值&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>必填。固定值&quot;monitor&quot;</p>
                     * @param _module <p>必填。固定值&quot;monitor&quot;</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>策略组id，例如 4739573。逐渐弃用，建议使用 PolicyId 参数</p>
                     * @return GroupId <p>策略组id，例如 4739573。逐渐弃用，建议使用 PolicyId 参数</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>策略组id，例如 4739573。逐渐弃用，建议使用 PolicyId 参数</p>
                     * @param _groupId <p>策略组id，例如 4739573。逐渐弃用，建议使用 PolicyId 参数</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>告警策略ID，例如“policy-gh892hg0”。PolicyId 参数与 GroupId 参数至少要填一个，否则会报参数错误，建议使用该参数。若两者同时存在则以该参数为准</p>
                     * @return PolicyId <p>告警策略ID，例如“policy-gh892hg0”。PolicyId 参数与 GroupId 参数至少要填一个，否则会报参数错误，建议使用该参数。若两者同时存在则以该参数为准</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>告警策略ID，例如“policy-gh892hg0”。PolicyId 参数与 GroupId 参数至少要填一个，否则会报参数错误，建议使用该参数。若两者同时存在则以该参数为准</p>
                     * @param _policyId <p>告警策略ID，例如“policy-gh892hg0”。PolicyId 参数与 GroupId 参数至少要填一个，否则会报参数错误，建议使用该参数。若两者同时存在则以该参数为准</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>实例分组ID</p>
                     * @return InstanceGroupId <p>实例分组ID</p>
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例分组ID</p>
                     * @param _instanceGroupId <p>实例分组ID</p>
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>需要绑定的对象维度信息。当告警对象选择为实例绑定方式时，该参数为必填参数；当告警对象选择为标签绑定、实例分组方式时，该参数为选填参数。</p>
                     * @return Dimensions <p>需要绑定的对象维度信息。当告警对象选择为实例绑定方式时，该参数为必填参数；当告警对象选择为标签绑定、实例分组方式时，该参数为选填参数。</p>
                     * 
                     */
                    std::vector<BindingPolicyObjectDimension> GetDimensions() const;

                    /**
                     * 设置<p>需要绑定的对象维度信息。当告警对象选择为实例绑定方式时，该参数为必填参数；当告警对象选择为标签绑定、实例分组方式时，该参数为选填参数。</p>
                     * @param _dimensions <p>需要绑定的对象维度信息。当告警对象选择为实例绑定方式时，该参数为必填参数；当告警对象选择为标签绑定、实例分组方式时，该参数为选填参数。</p>
                     * 
                     */
                    void SetDimensions(const std::vector<BindingPolicyObjectDimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取<p>事件配置的告警</p>
                     * @return EbSubject <p>事件配置的告警</p>
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置<p>事件配置的告警</p>
                     * @param _ebSubject <p>事件配置的告警</p>
                     * 
                     */
                    void SetEbSubject(const std::string& _ebSubject);

                    /**
                     * 判断参数 EbSubject 是否已赋值
                     * @return EbSubject 是否已赋值
                     * 
                     */
                    bool EbSubjectHasBeenSet() const;

                    /**
                     * 获取<p>是否配置了事件告警</p>
                     * @return EbEventFlag <p>是否配置了事件告警</p>
                     * 
                     */
                    int64_t GetEbEventFlag() const;

                    /**
                     * 设置<p>是否配置了事件告警</p>
                     * @param _ebEventFlag <p>是否配置了事件告警</p>
                     * 
                     */
                    void SetEbEventFlag(const int64_t& _ebEventFlag);

                    /**
                     * 判断参数 EbEventFlag 是否已赋值
                     * @return EbEventFlag 是否已赋值
                     * 
                     */
                    bool EbEventFlagHasBeenSet() const;

                private:

                    /**
                     * <p>必填。固定值&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>策略组id，例如 4739573。逐渐弃用，建议使用 PolicyId 参数</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>告警策略ID，例如“policy-gh892hg0”。PolicyId 参数与 GroupId 参数至少要填一个，否则会报参数错误，建议使用该参数。若两者同时存在则以该参数为准</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>实例分组ID</p>
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>需要绑定的对象维度信息。当告警对象选择为实例绑定方式时，该参数为必填参数；当告警对象选择为标签绑定、实例分组方式时，该参数为选填参数。</p>
                     */
                    std::vector<BindingPolicyObjectDimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>事件配置的告警</p>
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * <p>是否配置了事件告警</p>
                     */
                    int64_t m_ebEventFlag;
                    bool m_ebEventFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_
