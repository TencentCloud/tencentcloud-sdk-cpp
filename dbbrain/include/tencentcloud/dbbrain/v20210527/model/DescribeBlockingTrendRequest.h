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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeBlockingTrend请求参数结构体
                */
                class DescribeBlockingTrendRequest : public AbstractModel
                {
                public:
                    DescribeBlockingTrendRequest();
                    ~DescribeBlockingTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>服务产品类型，固定为sqlserver。</p>
                     * @return Product <p>服务产品类型，固定为sqlserver。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，固定为sqlserver。</p>
                     * @param _product <p>服务产品类型，固定为sqlserver。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @return StartTime <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @param _startTime <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
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
                     * 获取<p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 7 天（Trend 走 Druid 原生聚合，跨度比明细类接口更宽泛），否则返回 InvalidParameterValue。</p>
                     * @return EndTime <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 7 天（Trend 走 Druid 原生聚合，跨度比明细类接口更宽泛），否则返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 7 天（Trend 走 Druid 原生聚合，跨度比明细类接口更宽泛），否则返回 InvalidParameterValue。</p>
                     * @param _endTime <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 7 天（Trend 走 Druid 原生聚合，跨度比明细类接口更宽泛），否则返回 InvalidParameterValue。</p>
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
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，固定为sqlserver。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 7 天（Trend 走 Druid 原生聚合，跨度比明细类接口更宽泛），否则返回 InvalidParameterValue。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDREQUEST_H_
