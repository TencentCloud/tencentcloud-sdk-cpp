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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一个定时任务的周期设置
                */
                class CompliancePeriodTaskRule : public AbstractModel
                {
                public:
                    CompliancePeriodTaskRule();
                    ~CompliancePeriodTaskRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行的频率（几天一次），取值为：1,3,7。
                     * @return Frequency 执行的频率（几天一次），取值为：1,3,7。
                     * 
                     */
                    uint64_t GetFrequency() const;

                    /**
                     * 设置执行的频率（几天一次），取值为：1,3,7。
                     * @param _frequency 执行的频率（几天一次），取值为：1,3,7。
                     * 
                     */
                    void SetFrequency(const uint64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取在这天的什么时间执行，格式为：HH:mm:SS。
                     * @return ExecutionTime 在这天的什么时间执行，格式为：HH:mm:SS。
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置在这天的什么时间执行，格式为：HH:mm:SS。
                     * @param _executionTime 在这天的什么时间执行，格式为：HH:mm:SS。
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return Enable 是否开启
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启
                     * @param _enable 是否开启
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 执行的频率（几天一次），取值为：1,3,7。
                     */
                    uint64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 在这天的什么时间执行，格式为：HH:mm:SS。
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASKRULE_H_
