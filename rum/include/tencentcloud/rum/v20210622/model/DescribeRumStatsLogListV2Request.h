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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTV2REQUEST_H_

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
                * DescribeRumStatsLogListV2请求参数结构体
                */
                class DescribeRumStatsLogListV2Request : public AbstractModel
                {
                public:
                    DescribeRumStatsLogListV2Request();
                    ~DescribeRumStatsLogListV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间（必填）
                     * @return StartTime 开始时间（必填）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间（必填）
                     * @param _startTime 开始时间（必填）
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
                     * 获取单次查询返回的原始日志条数，最大值为100（必填）
                     * @return Limit 单次查询返回的原始日志条数，最大值为100（必填）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的原始日志条数，最大值为100（必填）
                     * @param _limit 单次查询返回的原始日志条数，最大值为100（必填）
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取结束时间（必填）
                     * @return EndTime 结束时间（必填）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间（必填）
                     * @param _endTime 结束时间（必填）
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
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param _iD 项目ID（必填）
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 开始时间（必填）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 结束时间（必填）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTV2REQUEST_H_
