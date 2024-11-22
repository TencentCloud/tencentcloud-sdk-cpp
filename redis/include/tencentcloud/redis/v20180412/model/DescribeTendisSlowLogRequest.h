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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeTendisSlowLog请求参数结构体
                */
                class DescribeTendisSlowLogRequest : public AbstractModel
                {
                public:
                    DescribeTendisSlowLogRequest();
                    ~DescribeTendisSlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Tendis控制台](https://console.cloud.tencent.com/tendis)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Tendis控制台](https://console.cloud.tencent.com/tendis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Tendis控制台](https://console.cloud.tencent.com/tendis)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Tendis控制台](https://console.cloud.tencent.com/tendis)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间：2019-09-08 12:12:41，查询时间最大跨度30天。
                     * @return BeginTime 开始时间：2019-09-08 12:12:41，查询时间最大跨度30天。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间：2019-09-08 12:12:41，查询时间最大跨度30天。
                     * @param _beginTime 开始时间：2019-09-08 12:12:41，查询时间最大跨度30天。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间：2019-09-09 12:12:41，查询时间最大跨度30天。
                     * @return EndTime 结束时间：2019-09-09 12:12:41，查询时间最大跨度30天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间：2019-09-09 12:12:41，查询时间最大跨度30天。
                     * @param _endTime 结束时间：2019-09-09 12:12:41，查询时间最大跨度30天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取慢查询阈值（毫秒）
                     * @return MinQueryTime 慢查询阈值（毫秒）
                     * 
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置慢查询阈值（毫秒）
                     * @param _minQueryTime 慢查询阈值（毫秒）
                     * 
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     * 
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取页面大小：默认20，最大100。
                     * @return Limit 页面大小：默认20，最大100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页面大小：默认20，最大100。
                     * @param _limit 页面大小：默认20，最大100。
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
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Tendis控制台](https://console.cloud.tencent.com/tendis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间：2019-09-08 12:12:41，查询时间最大跨度30天。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间：2019-09-09 12:12:41，查询时间最大跨度30天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 慢查询阈值（毫秒）
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * 页面大小：默认20，最大100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_
