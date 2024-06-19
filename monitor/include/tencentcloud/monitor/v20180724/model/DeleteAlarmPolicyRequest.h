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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMPOLICYREQUEST_H_

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
                * DeleteAlarmPolicy请求参数结构体
                */
                class DeleteAlarmPolicyRequest : public AbstractModel
                {
                public:
                    DeleteAlarmPolicyRequest();
                    ~DeleteAlarmPolicyRequest() = default;
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
                     * 获取告警策略 ID 列表
                     * @return PolicyIds 告警策略 ID 列表
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置告警策略 ID 列表
                     * @param _policyIds 告警策略 ID 列表
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取prom的实例id
                     * @return PromInsIds prom的实例id
                     * 
                     */
                    std::vector<std::string> GetPromInsIds() const;

                    /**
                     * 设置prom的实例id
                     * @param _promInsIds prom的实例id
                     * 
                     */
                    void SetPromInsIds(const std::vector<std::string>& _promInsIds);

                    /**
                     * 判断参数 PromInsIds 是否已赋值
                     * @return PromInsIds 是否已赋值
                     * 
                     */
                    bool PromInsIdsHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID 列表
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * prom的实例id
                     */
                    std::vector<std::string> m_promInsIds;
                    bool m_promInsIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMPOLICYREQUEST_H_
