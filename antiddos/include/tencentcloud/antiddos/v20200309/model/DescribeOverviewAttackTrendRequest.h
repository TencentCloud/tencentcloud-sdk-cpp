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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWATTACKTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWATTACKTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeOverviewAttackTrend请求参数结构体
                */
                class DescribeOverviewAttackTrendRequest : public AbstractModel
                {
                public:
                    DescribeOverviewAttackTrendRequest();
                    ~DescribeOverviewAttackTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取攻击类型，取值ddos， cc
                     * @return Type 攻击类型，取值ddos， cc
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置攻击类型，取值ddos， cc
                     * @param _type 攻击类型，取值ddos， cc
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取纬度，当前仅支持attackcount
                     * @return Dimension 纬度，当前仅支持attackcount
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置纬度，当前仅支持attackcount
                     * @param _dimension 纬度，当前仅支持attackcount
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取周期，当前仅支持86400
                     * @return Period 周期，当前仅支持86400
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置周期，当前仅支持86400
                     * @param _period 周期，当前仅支持86400
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取防护概览攻击趋势开始时间
                     * @return StartTime 防护概览攻击趋势开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置防护概览攻击趋势开始时间
                     * @param _startTime 防护概览攻击趋势开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取防护概览攻击趋势结束时间
                     * @return EndTime 防护概览攻击趋势结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置防护概览攻击趋势结束时间
                     * @param _endTime 防护概览攻击趋势结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 攻击类型，取值ddos， cc
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 纬度，当前仅支持attackcount
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 周期，当前仅支持86400
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 防护概览攻击趋势开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 防护概览攻击趋势结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWATTACKTRENDREQUEST_H_
