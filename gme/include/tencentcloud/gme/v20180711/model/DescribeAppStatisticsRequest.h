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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAppStatistics请求参数结构体
                */
                class DescribeAppStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeAppStatisticsRequest();
                    ~DescribeAppStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>GME应用ID</p>
                     * @return BizId <p>GME应用ID</p>
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置<p>GME应用ID</p>
                     * @param _bizId <p>GME应用ID</p>
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取<p>数据开始时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * @return StartDate <p>数据开始时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>数据开始时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * @param _startDate <p>数据开始时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>数据结束时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * @return EndDate <p>数据结束时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>数据结束时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * @param _endDate <p>数据结束时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>要查询的服务列表，取值：RealTimeSpeech/VoiceMessage/VoiceFilter/SpeechToText</p>
                     * @return Services <p>要查询的服务列表，取值：RealTimeSpeech/VoiceMessage/VoiceFilter/SpeechToText</p>
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置<p>要查询的服务列表，取值：RealTimeSpeech/VoiceMessage/VoiceFilter/SpeechToText</p>
                     * @param _services <p>要查询的服务列表，取值：RealTimeSpeech/VoiceMessage/VoiceFilter/SpeechToText</p>
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * <p>GME应用ID</p>
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * <p>数据开始时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>数据结束时间，东八区时间，格式: 年-月-日，如: 2018-07-13</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>要查询的服务列表，取值：RealTimeSpeech/VoiceMessage/VoiceFilter/SpeechToText</p>
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_
