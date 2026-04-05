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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINTERNETINFO_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINTERNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * HPC节点网络信息
                */
                class HPCInternetInfo : public AbstractModel
                {
                public:
                    HPCInternetInfo();
                    ~HPCInternetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网络出口带宽，单位Mbps</p>
                     * @return InternetMaxBandwidthOut <p>网络出口带宽，单位Mbps</p>
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>网络出口带宽，单位Mbps</p>
                     * @param _internetMaxBandwidthOut <p>网络出口带宽，单位Mbps</p>
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取<p>网络收费类型</p><p>枚举值：</p><ul><li>BANDWIDTH_PREPAID： 预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR： 流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR： 带宽按小时后付费</li></ul>
                     * @return InternetChargeType <p>网络收费类型</p><p>枚举值：</p><ul><li>BANDWIDTH_PREPAID： 预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR： 流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR： 带宽按小时后付费</li></ul>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置<p>网络收费类型</p><p>枚举值：</p><ul><li>BANDWIDTH_PREPAID： 预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR： 流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR： 带宽按小时后付费</li></ul>
                     * @param _internetChargeType <p>网络收费类型</p><p>枚举值：</p><ul><li>BANDWIDTH_PREPAID： 预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR： 流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR： 带宽按小时后付费</li></ul>
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>网络出口带宽，单位Mbps</p>
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>网络收费类型</p><p>枚举值：</p><ul><li>BANDWIDTH_PREPAID： 预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR： 流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR： 带宽按小时后付费</li></ul>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINTERNETINFO_H_
