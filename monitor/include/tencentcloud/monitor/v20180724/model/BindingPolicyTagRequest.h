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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYTAGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PolicyTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * BindingPolicyTag请求参数结构体
                */
                class BindingPolicyTagRequest : public AbstractModel
                {
                public:
                    BindingPolicyTagRequest();
                    ~BindingPolicyTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定取值 monitor
                     * @return Module 固定取值 monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定取值 monitor
                     * @param _module 固定取值 monitor
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
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
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
                     * 获取用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
                     * @return GroupId 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
                     * @param _groupId 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取产品类型
                     * @return ServiceType 产品类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置产品类型
                     * @param _serviceType 产品类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取策略标签
                     * @return Tag 策略标签
                     * 
                     */
                    PolicyTag GetTag() const;

                    /**
                     * 设置策略标签
                     * @param _tag 策略标签
                     * 
                     */
                    void SetTag(const PolicyTag& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取实例分组ID
                     * @return InstanceGroupId 实例分组ID
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组ID
                     * @param _instanceGroupId 实例分组ID
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
                     * 获取批量绑定标签
                     * @return BatchTag 批量绑定标签
                     * 
                     */
                    std::vector<PolicyTag> GetBatchTag() const;

                    /**
                     * 设置批量绑定标签
                     * @param _batchTag 批量绑定标签
                     * 
                     */
                    void SetBatchTag(const std::vector<PolicyTag>& _batchTag);

                    /**
                     * 判断参数 BatchTag 是否已赋值
                     * @return BatchTag 是否已赋值
                     * 
                     */
                    bool BatchTagHasBeenSet() const;

                    /**
                     * 获取是否同步eb
                     * @return EbEventFlag 是否同步eb
                     * 
                     */
                    int64_t GetEbEventFlag() const;

                    /**
                     * 设置是否同步eb
                     * @param _ebEventFlag 是否同步eb
                     * 
                     */
                    void SetEbEventFlag(const int64_t& _ebEventFlag);

                    /**
                     * 判断参数 EbEventFlag 是否已赋值
                     * @return EbEventFlag 是否已赋值
                     * 
                     */
                    bool EbEventFlagHasBeenSet() const;

                    /**
                     * 获取事件配置的告警
                     * @return EbSubject 事件配置的告警
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置事件配置的告警
                     * @param _ebSubject 事件配置的告警
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
                     * 获取标识标签取交/并集关系
                     * @return TagOperation 标识标签取交/并集关系
                     * 
                     */
                    std::string GetTagOperation() const;

                    /**
                     * 设置标识标签取交/并集关系
                     * @param _tagOperation 标识标签取交/并集关系
                     * 
                     */
                    void SetTagOperation(const std::string& _tagOperation);

                    /**
                     * 判断参数 TagOperation 是否已赋值
                     * @return TagOperation 是否已赋值
                     * 
                     */
                    bool TagOperationHasBeenSet() const;

                private:

                    /**
                     * 固定取值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 产品类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 策略标签
                     */
                    PolicyTag m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 实例分组ID
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 批量绑定标签
                     */
                    std::vector<PolicyTag> m_batchTag;
                    bool m_batchTagHasBeenSet;

                    /**
                     * 是否同步eb
                     */
                    int64_t m_ebEventFlag;
                    bool m_ebEventFlagHasBeenSet;

                    /**
                     * 事件配置的告警
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * 标识标签取交/并集关系
                     */
                    std::string m_tagOperation;
                    bool m_tagOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYTAGREQUEST_H_
