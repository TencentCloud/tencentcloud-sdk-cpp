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
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param Module 固定值，为"monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取策略组id，如传入PolicyId则该字段可传入任意值
                     * @return GroupId 策略组id，如传入PolicyId则该字段可传入任意值
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id，如传入PolicyId则该字段可传入任意值
                     * @param GroupId 策略组id，如传入PolicyId则该字段可传入任意值
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略ID，使用此字段时GroupId可传入任意值
                     * @return PolicyId 告警策略ID，使用此字段时GroupId可传入任意值
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略ID，使用此字段时GroupId可传入任意值
                     * @param PolicyId 告警策略ID，使用此字段时GroupId可传入任意值
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组id，如传入PolicyId则该字段可传入任意值
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警策略ID，使用此字段时GroupId可传入任意值
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGALLPOLICYOBJECTREQUEST_H_
