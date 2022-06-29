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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_

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
                * ModifyAlarmPolicyNotice请求参数结构体
                */
                class ModifyAlarmPolicyNoticeRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyNoticeRequest();
                    ~ModifyAlarmPolicyNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，这里填“monitor”。
                     * @return Module 模块名，这里填“monitor”。
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”。
                     * @param Module 模块名，这里填“monitor”。
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取告警策略 ID，如果该参数与PolicyIds参数同时存在，则以PolicyIds为准。
                     * @return PolicyId 告警策略 ID，如果该参数与PolicyIds参数同时存在，则以PolicyIds为准。
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID，如果该参数与PolicyIds参数同时存在，则以PolicyIds为准。
                     * @param PolicyId 告警策略 ID，如果该参数与PolicyIds参数同时存在，则以PolicyIds为准。
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取告警通知模板 ID 列表。
                     * @return NoticeIds 告警通知模板 ID 列表。
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置告警通知模板 ID 列表。
                     * @param NoticeIds 告警通知模板 ID 列表。
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取告警策略ID数组，支持给多个告警策略批量绑定通知模板。最多30个。
                     * @return PolicyIds 告警策略ID数组，支持给多个告警策略批量绑定通知模板。最多30个。
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置告警策略ID数组，支持给多个告警策略批量绑定通知模板。最多30个。
                     * @param PolicyIds 告警策略ID数组，支持给多个告警策略批量绑定通知模板。最多30个。
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * 模块名，这里填“monitor”。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID，如果该参数与PolicyIds参数同时存在，则以PolicyIds为准。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 告警通知模板 ID 列表。
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 告警策略ID数组，支持给多个告警策略批量绑定通知模板。最多30个。
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_
