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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
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
                     * 获取告警策略id
                     * @return AlarmPolicyId 告警策略id
                     * 
                     */
                    uint64_t GetAlarmPolicyId() const;

                    /**
                     * 设置告警策略id
                     * @param _alarmPolicyId 告警策略id
                     * 
                     */
                    void SetAlarmPolicyId(const uint64_t& _alarmPolicyId);

                    /**
                     * 判断参数 AlarmPolicyId 是否已赋值
                     * @return AlarmPolicyId 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdHasBeenSet() const;

                private:

                    /**
                     * 告警策略id
                     */
                    uint64_t m_alarmPolicyId;
                    bool m_alarmPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DELETEALARMPOLICYREQUEST_H_
