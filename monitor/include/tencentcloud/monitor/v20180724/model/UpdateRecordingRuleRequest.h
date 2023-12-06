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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_

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
                * UpdateRecordingRule请求参数结构体
                */
                class UpdateRecordingRuleRequest : public AbstractModel
                {
                public:
                    UpdateRecordingRuleRequest();
                    ~UpdateRecordingRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚合规则名称
                     * @return Name 聚合规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置聚合规则名称
                     * @param _name 聚合规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取聚合规则组内容，格式为 yaml，通过 base64 进行编码。
                     * @return Group 聚合规则组内容，格式为 yaml，通过 base64 进行编码。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置聚合规则组内容，格式为 yaml，通过 base64 进行编码。
                     * @param _group 聚合规则组内容，格式为 yaml，通过 base64 进行编码。
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Prometheus 实例 ID(可通过 DescribePrometheusInstances 接口获取)
                     * @return InstanceId Prometheus 实例 ID(可通过 DescribePrometheusInstances 接口获取)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID(可通过 DescribePrometheusInstances 接口获取)
                     * @param _instanceId Prometheus 实例 ID(可通过 DescribePrometheusInstances 接口获取)
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Prometheus 聚合规则 ID(可通过 DescribeRecordingRules 接口获取)
                     * @return RuleId Prometheus 聚合规则 ID(可通过 DescribeRecordingRules 接口获取)
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Prometheus 聚合规则 ID(可通过 DescribeRecordingRules 接口获取)
                     * @param _ruleId Prometheus 聚合规则 ID(可通过 DescribeRecordingRules 接口获取)
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * @return RuleState 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * @param _ruleState 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                private:

                    /**
                     * 聚合规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 聚合规则组内容，格式为 yaml，通过 base64 进行编码。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Prometheus 实例 ID(可通过 DescribePrometheusInstances 接口获取)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Prometheus 聚合规则 ID(可通过 DescribeRecordingRules 接口获取)
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_
