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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_QUOTA_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述配额信息
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额名称，取值范围：
- `TOTAL_EIP_QUOTA`：用户当前地域下，EIP的配额数；
- `LOCALBGP_EIP_QUOTA`：用户当前地域下，本地BGP IP配额数；
- `SINGLEISP_EIP_QUOTA`：用户当前地域下，静态单线 IP 配额数；
- `DAILY_EIP_APPLY`：用户当前地域下，除静态单线 IP外今日申购次数；
- `DAILY_SINGLEISP_APPLY`：用户当前地域下，静态单线 IP今日申购次数；
- `DAILY_PUBLIC_IP_ASSIGN`：用户当前地域下，重新分配公网 IP次数；
- `MONTHLY_RECOVER_QUOTA`：用户当前地域下，每月申请指定 IP次数；
- `TOTAL_EIP6_QUOTA`：用户当前地域下，传统弹性公网IPv6的配额数；
- `BGP_EIPv6_QUOTA`：用户当前地域下，可申请的 BGP 弹性公网IPv6 的配额数；
- `SINGLEISP_EIPv6_QUOTA`：用户当前地域下，可申请的静态单线弹性公网IPv6 的配额数；
- `TOTAL_BANDWIDTHPKG_QUOTA`：用户当前地域下，可申请的带宽包总配额；
- `PRIMARY_TRAFFIC_SINGLE_BWP_QUOTA`：用户当前地域下，可申请的静态单线主流量带宽包配额数；
- `PRIMARY_TRAFFIC_BGP_BWP_QUOTA`：用户当前地域下，可申请的BGP主流量带宽包配额数；
- `BandwidthGuaranteedRatio`：用户当前地域下，保底带宽包默认保底比例；
- `TezBandwidthGuaranteedRatio`：用户当前地域下，边缘可用区保底带宽包默认保底比例；
                     * @return QuotaId 配额名称，取值范围：
- `TOTAL_EIP_QUOTA`：用户当前地域下，EIP的配额数；
- `LOCALBGP_EIP_QUOTA`：用户当前地域下，本地BGP IP配额数；
- `SINGLEISP_EIP_QUOTA`：用户当前地域下，静态单线 IP 配额数；
- `DAILY_EIP_APPLY`：用户当前地域下，除静态单线 IP外今日申购次数；
- `DAILY_SINGLEISP_APPLY`：用户当前地域下，静态单线 IP今日申购次数；
- `DAILY_PUBLIC_IP_ASSIGN`：用户当前地域下，重新分配公网 IP次数；
- `MONTHLY_RECOVER_QUOTA`：用户当前地域下，每月申请指定 IP次数；
- `TOTAL_EIP6_QUOTA`：用户当前地域下，传统弹性公网IPv6的配额数；
- `BGP_EIPv6_QUOTA`：用户当前地域下，可申请的 BGP 弹性公网IPv6 的配额数；
- `SINGLEISP_EIPv6_QUOTA`：用户当前地域下，可申请的静态单线弹性公网IPv6 的配额数；
- `TOTAL_BANDWIDTHPKG_QUOTA`：用户当前地域下，可申请的带宽包总配额；
- `PRIMARY_TRAFFIC_SINGLE_BWP_QUOTA`：用户当前地域下，可申请的静态单线主流量带宽包配额数；
- `PRIMARY_TRAFFIC_BGP_BWP_QUOTA`：用户当前地域下，可申请的BGP主流量带宽包配额数；
- `BandwidthGuaranteedRatio`：用户当前地域下，保底带宽包默认保底比例；
- `TezBandwidthGuaranteedRatio`：用户当前地域下，边缘可用区保底带宽包默认保底比例；
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置配额名称，取值范围：
- `TOTAL_EIP_QUOTA`：用户当前地域下，EIP的配额数；
- `LOCALBGP_EIP_QUOTA`：用户当前地域下，本地BGP IP配额数；
- `SINGLEISP_EIP_QUOTA`：用户当前地域下，静态单线 IP 配额数；
- `DAILY_EIP_APPLY`：用户当前地域下，除静态单线 IP外今日申购次数；
- `DAILY_SINGLEISP_APPLY`：用户当前地域下，静态单线 IP今日申购次数；
- `DAILY_PUBLIC_IP_ASSIGN`：用户当前地域下，重新分配公网 IP次数；
- `MONTHLY_RECOVER_QUOTA`：用户当前地域下，每月申请指定 IP次数；
- `TOTAL_EIP6_QUOTA`：用户当前地域下，传统弹性公网IPv6的配额数；
- `BGP_EIPv6_QUOTA`：用户当前地域下，可申请的 BGP 弹性公网IPv6 的配额数；
- `SINGLEISP_EIPv6_QUOTA`：用户当前地域下，可申请的静态单线弹性公网IPv6 的配额数；
- `TOTAL_BANDWIDTHPKG_QUOTA`：用户当前地域下，可申请的带宽包总配额；
- `PRIMARY_TRAFFIC_SINGLE_BWP_QUOTA`：用户当前地域下，可申请的静态单线主流量带宽包配额数；
- `PRIMARY_TRAFFIC_BGP_BWP_QUOTA`：用户当前地域下，可申请的BGP主流量带宽包配额数；
- `BandwidthGuaranteedRatio`：用户当前地域下，保底带宽包默认保底比例；
- `TezBandwidthGuaranteedRatio`：用户当前地域下，边缘可用区保底带宽包默认保底比例；
                     * @param _quotaId 配额名称，取值范围：
- `TOTAL_EIP_QUOTA`：用户当前地域下，EIP的配额数；
- `LOCALBGP_EIP_QUOTA`：用户当前地域下，本地BGP IP配额数；
- `SINGLEISP_EIP_QUOTA`：用户当前地域下，静态单线 IP 配额数；
- `DAILY_EIP_APPLY`：用户当前地域下，除静态单线 IP外今日申购次数；
- `DAILY_SINGLEISP_APPLY`：用户当前地域下，静态单线 IP今日申购次数；
- `DAILY_PUBLIC_IP_ASSIGN`：用户当前地域下，重新分配公网 IP次数；
- `MONTHLY_RECOVER_QUOTA`：用户当前地域下，每月申请指定 IP次数；
- `TOTAL_EIP6_QUOTA`：用户当前地域下，传统弹性公网IPv6的配额数；
- `BGP_EIPv6_QUOTA`：用户当前地域下，可申请的 BGP 弹性公网IPv6 的配额数；
- `SINGLEISP_EIPv6_QUOTA`：用户当前地域下，可申请的静态单线弹性公网IPv6 的配额数；
- `TOTAL_BANDWIDTHPKG_QUOTA`：用户当前地域下，可申请的带宽包总配额；
- `PRIMARY_TRAFFIC_SINGLE_BWP_QUOTA`：用户当前地域下，可申请的静态单线主流量带宽包配额数；
- `PRIMARY_TRAFFIC_BGP_BWP_QUOTA`：用户当前地域下，可申请的BGP主流量带宽包配额数；
- `BandwidthGuaranteedRatio`：用户当前地域下，保底带宽包默认保底比例；
- `TezBandwidthGuaranteedRatio`：用户当前地域下，边缘可用区保底带宽包默认保底比例；
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取当前数量
                     * @return QuotaCurrent 当前数量
                     * 
                     */
                    int64_t GetQuotaCurrent() const;

                    /**
                     * 设置当前数量
                     * @param _quotaCurrent 当前数量
                     * 
                     */
                    void SetQuotaCurrent(const int64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取配额数量
                     * @return QuotaLimit 配额数量
                     * 
                     */
                    int64_t GetQuotaLimit() const;

                    /**
                     * 设置配额数量
                     * @param _quotaLimit 配额数量
                     * 
                     */
                    void SetQuotaLimit(const int64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取配额所属的网络组
                     * @return QuotaGroup 配额所属的网络组
                     * 
                     */
                    std::string GetQuotaGroup() const;

                    /**
                     * 设置配额所属的网络组
                     * @param _quotaGroup 配额所属的网络组
                     * 
                     */
                    void SetQuotaGroup(const std::string& _quotaGroup);

                    /**
                     * 判断参数 QuotaGroup 是否已赋值
                     * @return QuotaGroup 是否已赋值
                     * 
                     */
                    bool QuotaGroupHasBeenSet() const;

                private:

                    /**
                     * 配额名称，取值范围：
- `TOTAL_EIP_QUOTA`：用户当前地域下，EIP的配额数；
- `LOCALBGP_EIP_QUOTA`：用户当前地域下，本地BGP IP配额数；
- `SINGLEISP_EIP_QUOTA`：用户当前地域下，静态单线 IP 配额数；
- `DAILY_EIP_APPLY`：用户当前地域下，除静态单线 IP外今日申购次数；
- `DAILY_SINGLEISP_APPLY`：用户当前地域下，静态单线 IP今日申购次数；
- `DAILY_PUBLIC_IP_ASSIGN`：用户当前地域下，重新分配公网 IP次数；
- `MONTHLY_RECOVER_QUOTA`：用户当前地域下，每月申请指定 IP次数；
- `TOTAL_EIP6_QUOTA`：用户当前地域下，传统弹性公网IPv6的配额数；
- `BGP_EIPv6_QUOTA`：用户当前地域下，可申请的 BGP 弹性公网IPv6 的配额数；
- `SINGLEISP_EIPv6_QUOTA`：用户当前地域下，可申请的静态单线弹性公网IPv6 的配额数；
- `TOTAL_BANDWIDTHPKG_QUOTA`：用户当前地域下，可申请的带宽包总配额；
- `PRIMARY_TRAFFIC_SINGLE_BWP_QUOTA`：用户当前地域下，可申请的静态单线主流量带宽包配额数；
- `PRIMARY_TRAFFIC_BGP_BWP_QUOTA`：用户当前地域下，可申请的BGP主流量带宽包配额数；
- `BandwidthGuaranteedRatio`：用户当前地域下，保底带宽包默认保底比例；
- `TezBandwidthGuaranteedRatio`：用户当前地域下，边缘可用区保底带宽包默认保底比例；
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 当前数量
                     */
                    int64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * 配额数量
                     */
                    int64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * 配额所属的网络组
                     */
                    std::string m_quotaGroup;
                    bool m_quotaGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_QUOTA_H_
