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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/CallInMetrics.h>
#include <tencentcloud/ccc/v20200210/model/CallInSkillGroupMetrics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 呼入线路维度相关指标
                */
                class CallInNumberMetrics : public AbstractModel
                {
                public:
                    CallInNumberMetrics();
                    ~CallInNumberMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线路号码
                     * @return Number 线路号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置线路号码
                     * @param _number 线路号码
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取线路相关指标
                     * @return Metrics 线路相关指标
                     * 
                     */
                    CallInMetrics GetMetrics() const;

                    /**
                     * 设置线路相关指标
                     * @param _metrics 线路相关指标
                     * 
                     */
                    void SetMetrics(const CallInMetrics& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取所属技能组相关指标
                     * @return SkillGroupMetrics 所属技能组相关指标
                     * 
                     */
                    std::vector<CallInSkillGroupMetrics> GetSkillGroupMetrics() const;

                    /**
                     * 设置所属技能组相关指标
                     * @param _skillGroupMetrics 所属技能组相关指标
                     * 
                     */
                    void SetSkillGroupMetrics(const std::vector<CallInSkillGroupMetrics>& _skillGroupMetrics);

                    /**
                     * 判断参数 SkillGroupMetrics 是否已赋值
                     * @return SkillGroupMetrics 是否已赋值
                     * 
                     */
                    bool SkillGroupMetricsHasBeenSet() const;

                private:

                    /**
                     * 线路号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 线路相关指标
                     */
                    CallInMetrics m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 所属技能组相关指标
                     */
                    std::vector<CallInSkillGroupMetrics> m_skillGroupMetrics;
                    bool m_skillGroupMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_
