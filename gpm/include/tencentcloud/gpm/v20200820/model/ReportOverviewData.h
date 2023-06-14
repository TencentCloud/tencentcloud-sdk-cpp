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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 匹配概况
                */
                class ReportOverviewData : public AbstractModel
                {
                public:
                    ReportOverviewData();
                    ~ReportOverviewData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总次数
                     * @return TotalTimes 总次数
                     * 
                     */
                    std::string GetTotalTimes() const;

                    /**
                     * 设置总次数
                     * @param _totalTimes 总次数
                     * 
                     */
                    void SetTotalTimes(const std::string& _totalTimes);

                    /**
                     * 判断参数 TotalTimes 是否已赋值
                     * @return TotalTimes 是否已赋值
                     * 
                     */
                    bool TotalTimesHasBeenSet() const;

                    /**
                     * 获取成功率
                     * @return SuccessPercent 成功率
                     * 
                     */
                    double GetSuccessPercent() const;

                    /**
                     * 设置成功率
                     * @param _successPercent 成功率
                     * 
                     */
                    void SetSuccessPercent(const double& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取超时率
                     * @return TimeoutPercent 超时率
                     * 
                     */
                    double GetTimeoutPercent() const;

                    /**
                     * 设置超时率
                     * @param _timeoutPercent 超时率
                     * 
                     */
                    void SetTimeoutPercent(const double& _timeoutPercent);

                    /**
                     * 判断参数 TimeoutPercent 是否已赋值
                     * @return TimeoutPercent 是否已赋值
                     * 
                     */
                    bool TimeoutPercentHasBeenSet() const;

                    /**
                     * 获取失败率
                     * @return FailPercent 失败率
                     * 
                     */
                    double GetFailPercent() const;

                    /**
                     * 设置失败率
                     * @param _failPercent 失败率
                     * 
                     */
                    void SetFailPercent(const double& _failPercent);

                    /**
                     * 判断参数 FailPercent 是否已赋值
                     * @return FailPercent 是否已赋值
                     * 
                     */
                    bool FailPercentHasBeenSet() const;

                    /**
                     * 获取平均匹配时间
                     * @return AverageSec 平均匹配时间
                     * 
                     */
                    double GetAverageSec() const;

                    /**
                     * 设置平均匹配时间
                     * @param _averageSec 平均匹配时间
                     * 
                     */
                    void SetAverageSec(const double& _averageSec);

                    /**
                     * 判断参数 AverageSec 是否已赋值
                     * @return AverageSec 是否已赋值
                     * 
                     */
                    bool AverageSecHasBeenSet() const;

                private:

                    /**
                     * 总次数
                     */
                    std::string m_totalTimes;
                    bool m_totalTimesHasBeenSet;

                    /**
                     * 成功率
                     */
                    double m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * 超时率
                     */
                    double m_timeoutPercent;
                    bool m_timeoutPercentHasBeenSet;

                    /**
                     * 失败率
                     */
                    double m_failPercent;
                    bool m_failPercentHasBeenSet;

                    /**
                     * 平均匹配时间
                     */
                    double m_averageSec;
                    bool m_averageSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_
