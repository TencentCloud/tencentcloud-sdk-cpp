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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/CallInMetrics.h>
#include <tencentcloud/ccc/v20200210/model/CallInNumberMetrics.h>
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
                * DescribeCallInMetrics返回参数结构体
                */
                class DescribeCallInMetricsResponse : public AbstractModel
                {
                public:
                    DescribeCallInMetricsResponse();
                    ~DescribeCallInMetricsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取总体指标
                     * @return TotalMetrics 总体指标
                     * 
                     */
                    CallInMetrics GetTotalMetrics() const;

                    /**
                     * 判断参数 TotalMetrics 是否已赋值
                     * @return TotalMetrics 是否已赋值
                     * 
                     */
                    bool TotalMetricsHasBeenSet() const;

                    /**
                     * 获取线路维度指标
                     * @return NumberMetrics 线路维度指标
                     * 
                     */
                    std::vector<CallInNumberMetrics> GetNumberMetrics() const;

                    /**
                     * 判断参数 NumberMetrics 是否已赋值
                     * @return NumberMetrics 是否已赋值
                     * 
                     */
                    bool NumberMetricsHasBeenSet() const;

                    /**
                     * 获取技能组维度指标
                     * @return SkillGroupMetrics 技能组维度指标
                     * 
                     */
                    std::vector<CallInSkillGroupMetrics> GetSkillGroupMetrics() const;

                    /**
                     * 判断参数 SkillGroupMetrics 是否已赋值
                     * @return SkillGroupMetrics 是否已赋值
                     * 
                     */
                    bool SkillGroupMetricsHasBeenSet() const;

                private:

                    /**
                     * 时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 总体指标
                     */
                    CallInMetrics m_totalMetrics;
                    bool m_totalMetricsHasBeenSet;

                    /**
                     * 线路维度指标
                     */
                    std::vector<CallInNumberMetrics> m_numberMetrics;
                    bool m_numberMetricsHasBeenSet;

                    /**
                     * 技能组维度指标
                     */
                    std::vector<CallInSkillGroupMetrics> m_skillGroupMetrics;
                    bool m_skillGroupMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSRESPONSE_H_
