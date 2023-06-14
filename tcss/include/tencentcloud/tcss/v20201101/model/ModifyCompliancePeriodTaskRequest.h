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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandardEnable.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyCompliancePeriodTask请求参数结构体
                */
                class ModifyCompliancePeriodTaskRequest : public AbstractModel
                {
                public:
                    ModifyCompliancePeriodTaskRequest();
                    ~ModifyCompliancePeriodTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的定时任务的ID，由DescribeCompliancePeriodTaskList接口返回。
                     * @return PeriodTaskId 要修改的定时任务的ID，由DescribeCompliancePeriodTaskList接口返回。
                     * 
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置要修改的定时任务的ID，由DescribeCompliancePeriodTaskList接口返回。
                     * @param _periodTaskId 要修改的定时任务的ID，由DescribeCompliancePeriodTaskList接口返回。
                     * 
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     * 
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                    /**
                     * 获取定时任务的周期规则。不填时，不修改。
                     * @return PeriodRule 定时任务的周期规则。不填时，不修改。
                     * 
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置定时任务的周期规则。不填时，不修改。
                     * @param _periodRule 定时任务的周期规则。不填时，不修改。
                     * 
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     * 
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取设置合规标准。不填时，不修改。
                     * @return StandardSettings 设置合规标准。不填时，不修改。
                     * 
                     */
                    std::vector<ComplianceBenchmarkStandardEnable> GetStandardSettings() const;

                    /**
                     * 设置设置合规标准。不填时，不修改。
                     * @param _standardSettings 设置合规标准。不填时，不修改。
                     * 
                     */
                    void SetStandardSettings(const std::vector<ComplianceBenchmarkStandardEnable>& _standardSettings);

                    /**
                     * 判断参数 StandardSettings 是否已赋值
                     * @return StandardSettings 是否已赋值
                     * 
                     */
                    bool StandardSettingsHasBeenSet() const;

                private:

                    /**
                     * 要修改的定时任务的ID，由DescribeCompliancePeriodTaskList接口返回。
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                    /**
                     * 定时任务的周期规则。不填时，不修改。
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * 设置合规标准。不填时，不修改。
                     */
                    std::vector<ComplianceBenchmarkStandardEnable> m_standardSettings;
                    bool m_standardSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCOMPLIANCEPERIODTASKREQUEST_H_
