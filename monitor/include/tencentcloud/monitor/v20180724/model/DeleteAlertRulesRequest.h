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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALERTRULESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALERTRULESREQUEST_H_

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
                * DeleteAlertRules请求参数结构体
                */
                class DeleteAlertRulesRequest : public AbstractModel
                {
                public:
                    DeleteAlertRulesRequest();
                    ~DeleteAlertRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则 ID 列表
                     * @return RuleIds 规则 ID 列表
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置规则 ID 列表
                     * @param _ruleIds 规则 ID 列表
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param _instanceId Prometheus 实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 规则 ID 列表
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALERTRULESREQUEST_H_
