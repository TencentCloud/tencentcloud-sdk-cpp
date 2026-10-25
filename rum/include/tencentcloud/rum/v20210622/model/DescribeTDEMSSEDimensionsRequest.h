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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDIMENSIONSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDIMENSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSSEDimensions请求参数结构体
                */
                class DescribeTDEMSSEDimensionsRequest : public AbstractModel
                {
                public:
                    DescribeTDEMSSEDimensionsRequest();
                    ~DescribeTDEMSSEDimensionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID。这里是业务应用标识，不是腾讯云账号 AppId。</p>
                     * @return AppId <p>应用 ID。这里是业务应用标识，不是腾讯云账号 AppId。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID。这里是业务应用标识，不是腾讯云账号 AppId。</p>
                     * @param _appId <p>应用 ID。这里是业务应用标识，不是腾讯云账号 AppId。</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，Unix 毫秒。</p>
                     * @return StartTime <p>开始时间，Unix 毫秒。</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，Unix 毫秒。</p>
                     * @param _startTime <p>开始时间，Unix 毫秒。</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，Unix 毫秒。须通过现有时间范围校验。</p>
                     * @return EndTime <p>结束时间，Unix 毫秒。须通过现有时间范围校验。</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，Unix 毫秒。须通过现有时间范围校验。</p>
                     * @param _endTime <p>结束时间，Unix 毫秒。须通过现有时间范围校验。</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>指标。取值说明：token_throughput（token 吞吐率，token/秒）、first_message_delay（首次消息时延，毫秒）、error_rate（错误率，已乘 100 的百分比）、stall_rate（卡死率，已乘 100 的百分比）、fluency（流畅度，已乘 100 的百分比）。</p>
                     * @return Metric <p>指标。取值说明：token_throughput（token 吞吐率，token/秒）、first_message_delay（首次消息时延，毫秒）、error_rate（错误率，已乘 100 的百分比）、stall_rate（卡死率，已乘 100 的百分比）、fluency（流畅度，已乘 100 的百分比）。</p>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置<p>指标。取值说明：token_throughput（token 吞吐率，token/秒）、first_message_delay（首次消息时延，毫秒）、error_rate（错误率，已乘 100 的百分比）、stall_rate（卡死率，已乘 100 的百分比）、fluency（流畅度，已乘 100 的百分比）。</p>
                     * @param _metric <p>指标。取值说明：token_throughput（token 吞吐率，token/秒）、first_message_delay（首次消息时延，毫秒）、error_rate（错误率，已乘 100 的百分比）、stall_rate（卡死率，已乘 100 的百分比）、fluency（流畅度，已乘 100 的百分比）。</p>
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取<p>多维分析维度。取值说明：region、app_version、platform、os、network_type、server_ip、isp、model_version。region 由 country 与 province 拼接，不属于趋势维度。</p>
                     * @return Dimension <p>多维分析维度。取值说明：region、app_version、platform、os、network_type、server_ip、isp、model_version。region 由 country 与 province 拼接，不属于趋势维度。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>多维分析维度。取值说明：region、app_version、platform、os、network_type、server_ip、isp、model_version。region 由 country 与 province 拼接，不属于趋势维度。</p>
                     * @param _dimension <p>多维分析维度。取值说明：region、app_version、platform、os、network_type、server_ip、isp、model_version。region 由 country 与 province 拼接，不属于趋势维度。</p>
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
                     * 获取<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。Op 只允许 in。Key 只允许 model_version、app_version、platform、os、region、is_error、is_stall、network_type、server_ip、isp、user_id。is_error 与 is_stall 的值只允许 true 或 false。</p>
                     * @return Filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。Op 只允许 in。Key 只允许 model_version、app_version、platform、os、region、is_error、is_stall、network_type、server_ip、isp、user_id。is_error 与 is_stall 的值只允许 true 或 false。</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。Op 只允许 in。Key 只允许 model_version、app_version、platform、os、region、is_error、is_stall、network_type、server_ip、isp、user_id。is_error 与 is_stall 的值只允许 true 或 false。</p>
                     * @param _filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。Op 只允许 in。Key 只允许 model_version、app_version、platform、os、region、is_error、is_stall、network_type、server_ip、isp、user_id。is_error 与 is_stall 的值只允许 true 或 false。</p>
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID。这里是业务应用标识，不是腾讯云账号 AppId。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间，Unix 毫秒。</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，Unix 毫秒。须通过现有时间范围校验。</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指标。取值说明：token_throughput（token 吞吐率，token/秒）、first_message_delay（首次消息时延，毫秒）、error_rate（错误率，已乘 100 的百分比）、stall_rate（卡死率，已乘 100 的百分比）、fluency（流畅度，已乘 100 的百分比）。</p>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <p>多维分析维度。取值说明：region、app_version、platform、os、network_type、server_ip、isp、model_version。region 由 country 与 province 拼接，不属于趋势维度。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。Op 只允许 in。Key 只允许 model_version、app_version、platform、os、region、is_error、is_stall、network_type、server_ip、isp、user_id。is_error 与 is_stall 的值只允许 true 或 false。</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDIMENSIONSREQUEST_H_
