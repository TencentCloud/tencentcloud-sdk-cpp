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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 指标配置
                */
                class MetricConfig : public AbstractModel
                {
                public:
                    MetricConfig();
                    ~MetricConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取允许使用的运算符
                     * @return Operator 允许使用的运算符
                     * 
                     */
                    std::vector<std::string> GetOperator() const;

                    /**
                     * 设置允许使用的运算符
                     * @param _operator 允许使用的运算符
                     * 
                     */
                    void SetOperator(const std::vector<std::string>& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取允许配置的数据周期，以秒为单位
                     * @return Period 允许配置的数据周期，以秒为单位
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置允许配置的数据周期，以秒为单位
                     * @param _period 允许配置的数据周期，以秒为单位
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取允许配置的持续周期个数
                     * @return ContinuePeriod 允许配置的持续周期个数
                     * 
                     */
                    std::vector<int64_t> GetContinuePeriod() const;

                    /**
                     * 设置允许配置的持续周期个数
                     * @param _continuePeriod 允许配置的持续周期个数
                     * 
                     */
                    void SetContinuePeriod(const std::vector<int64_t>& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                private:

                    /**
                     * 允许使用的运算符
                     */
                    std::vector<std::string> m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 允许配置的数据周期，以秒为单位
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 允许配置的持续周期个数
                     */
                    std::vector<int64_t> m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_
