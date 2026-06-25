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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest();
                    ~DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例Id</p>
                     * @return GatewayId <p>网关实例Id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例Id</p>
                     * @param _gatewayId <p>网关实例Id</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间戳</p><p>单位：秒</p>
                     * @return StartTime <p>查询开始时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间戳</p><p>单位：秒</p>
                     * @param _startTime <p>查询开始时间戳</p><p>单位：秒</p>
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
                     * 获取<p>查询结束时间戳</p><p>单位：秒</p>
                     * @return EndTime <p>查询结束时间戳</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间戳</p><p>单位：秒</p>
                     * @param _endTime <p>查询结束时间戳</p><p>单位：秒</p>
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
                     * 获取<p>查询过滤条件</p>
                     * @return Filters <p>查询过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询过滤条件</p>
                     * @param _filters <p>查询过滤条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例Id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>查询开始时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间戳</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMTOKENUSAGESTATISTICSREQUEST_H_
