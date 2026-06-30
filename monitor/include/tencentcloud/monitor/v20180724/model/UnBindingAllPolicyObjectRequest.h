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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGALLPOLICYOBJECTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGALLPOLICYOBJECTREQUEST_H_

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
                * UnBindingAllPolicyObject请求参数结构体
                */
                class UnBindingAllPolicyObjectRequest : public AbstractModel
                {
                public:
                    UnBindingAllPolicyObjectRequest();
                    ~UnBindingAllPolicyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0</p>
                     * @return GroupId <p>策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0</p>
                     * @param _groupId <p>策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0</p>
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
                     * 获取<p>告警策略ID，使用此字段时 GroupId 会被忽略</p>
                     * @return PolicyId <p>告警策略ID，使用此字段时 GroupId 会被忽略</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>告警策略ID，使用此字段时 GroupId 会被忽略</p>
                     * @param _policyId <p>告警策略ID，使用此字段时 GroupId 会被忽略</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>策略组id，如传入 PolicyId 则该字段被忽略可传入任意值如 0</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>告警策略ID，使用此字段时 GroupId 会被忽略</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGALLPOLICYOBJECTREQUEST_H_
