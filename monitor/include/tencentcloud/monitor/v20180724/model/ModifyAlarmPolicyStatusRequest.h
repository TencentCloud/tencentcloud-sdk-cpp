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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_

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
                * ModifyAlarmPolicyStatus请求参数结构体
                */
                class ModifyAlarmPolicyStatusRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyStatusRequest();
                    ~ModifyAlarmPolicyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定值 monitor
                     * @return Module 模块名，固定值 monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定值 monitor
                     * @param _module 模块名，固定值 monitor
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
                     * 获取告警策略 ID
                     * @return PolicyId 告警策略 ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID
                     * @param _policyId 告警策略 ID
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
                     * 获取启停状态 0=停用 1=启用
                     * @return Enable 启停状态 0=停用 1=启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置启停状态 0=停用 1=启用
                     * @param _enable 启停状态 0=停用 1=启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 启停状态 0=停用 1=启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_
