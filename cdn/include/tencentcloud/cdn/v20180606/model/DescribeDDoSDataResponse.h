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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDDOSDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDDOSDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DDoSStatsData.h>
#include <tencentcloud/cdn/v20180606/model/DDoSAttackBandwidthData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDDoSData返回参数结构体
                */
                class DescribeDDoSDataResponse : public AbstractModel
                {
                public:
                    DescribeDDoSDataResponse();
                    ~DescribeDDoSDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS统计数据数组
                     * @return Data DDoS统计数据数组
                     * 
                     */
                    std::vector<DDoSStatsData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取时间粒度：
min：1 分钟粒度
5min：5 分钟粒度
hour：1 小时粒度
day：天粒度
                     * @return Interval 时间粒度：
min：1 分钟粒度
5min：5 分钟粒度
hour：1 小时粒度
day：天粒度
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取DDoS统计攻击带宽峰值数组
                     * @return AttackBandwidthData DDoS统计攻击带宽峰值数组
                     * 
                     */
                    std::vector<DDoSAttackBandwidthData> GetAttackBandwidthData() const;

                    /**
                     * 判断参数 AttackBandwidthData 是否已赋值
                     * @return AttackBandwidthData 是否已赋值
                     * 
                     */
                    bool AttackBandwidthDataHasBeenSet() const;

                private:

                    /**
                     * DDoS统计数据数组
                     */
                    std::vector<DDoSStatsData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 时间粒度：
min：1 分钟粒度
5min：5 分钟粒度
hour：1 小时粒度
day：天粒度
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * DDoS统计攻击带宽峰值数组
                     */
                    std::vector<DDoSAttackBandwidthData> m_attackBandwidthData;
                    bool m_attackBandwidthDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDDOSDATARESPONSE_H_
