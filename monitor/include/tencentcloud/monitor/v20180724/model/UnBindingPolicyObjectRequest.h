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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UnBindingPolicyObject请求参数结构体
                */
                class UnBindingPolicyObjectRequest : public AbstractModel
                {
                public:
                    UnBindingPolicyObjectRequest();
                    ~UnBindingPolicyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
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
                     * 获取策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0
                     * @return GroupId 策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0
                     * @param _groupId 策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0
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
                     * 获取待删除对象实例的唯一id列表，UniqueId从调用[获取已绑定对象列表接口](https://cloud.tencent.com/document/api/248/40570)的出参的List中得到
                     * @return UniqueId 待删除对象实例的唯一id列表，UniqueId从调用[获取已绑定对象列表接口](https://cloud.tencent.com/document/api/248/40570)的出参的List中得到
                     * 
                     */
                    std::vector<std::string> GetUniqueId() const;

                    /**
                     * 设置待删除对象实例的唯一id列表，UniqueId从调用[获取已绑定对象列表接口](https://cloud.tencent.com/document/api/248/40570)的出参的List中得到
                     * @param _uniqueId 待删除对象实例的唯一id列表，UniqueId从调用[获取已绑定对象列表接口](https://cloud.tencent.com/document/api/248/40570)的出参的List中得到
                     * 
                     */
                    void SetUniqueId(const std::vector<std::string>& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取实例分组id，如果按实例分组删除的话UniqueId参数是无效的
                     * @return InstanceGroupId 实例分组id，如果按实例分组删除的话UniqueId参数是无效的
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组id，如果按实例分组删除的话UniqueId参数是无效的
                     * @param _instanceGroupId 实例分组id，如果按实例分组删除的话UniqueId参数是无效的
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
                     * 获取告警策略ID，使用此字段时 GroupId 会被忽略
                     * @return PolicyId 告警策略ID，使用此字段时 GroupId 会被忽略
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略ID，使用此字段时 GroupId 会被忽略
                     * @param _policyId 告警策略ID，使用此字段时 GroupId 会被忽略
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
                     * 获取是否配置了事件告警
                     * @return EbEventFlag 是否配置了事件告警
                     * 
                     */
                    int64_t GetEbEventFlag() const;

                    /**
                     * 设置是否配置了事件告警
                     * @param _ebEventFlag 是否配置了事件告警
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
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 待删除对象实例的唯一id列表，UniqueId从调用[获取已绑定对象列表接口](https://cloud.tencent.com/document/api/248/40570)的出参的List中得到
                     */
                    std::vector<std::string> m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * 实例分组id，如果按实例分组删除的话UniqueId参数是无效的
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 告警策略ID，使用此字段时 GroupId 会被忽略
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 事件配置的告警
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * 是否配置了事件告警
                     */
                    int64_t m_ebEventFlag;
                    bool m_ebEventFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_
