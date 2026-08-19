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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterSummary返回参数结构体
                */
                class DescribeClusterSummaryResponse : public AbstractModel
                {
                public:
                    DescribeClusterSummaryResponse();
                    ~DescribeClusterSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群总数</p>
                     * @return TotalClusterCount <p>集群总数</p>
                     * 
                     */
                    uint64_t GetTotalClusterCount() const;

                    /**
                     * 判断参数 TotalClusterCount 是否已赋值
                     * @return TotalClusterCount 是否已赋值
                     * 
                     */
                    bool TotalClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>告警集群总数</p>
                     * @return AlarmClusterCount <p>告警集群总数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmClusterCount() const;

                    /**
                     * 判断参数 AlarmClusterCount 是否已赋值
                     * @return AlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>风险集群总数</p>
                     * @return RiskClusterCount <p>风险集群总数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskClusterCount() const;

                    /**
                     * 判断参数 RiskClusterCount 是否已赋值
                     * @return RiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>节点总数</p>
                     * @return TotalNodeCount <p>节点总数</p>
                     * 
                     */
                    uint64_t GetTotalNodeCount() const;

                    /**
                     * 判断参数 TotalNodeCount 是否已赋值
                     * @return TotalNodeCount 是否已赋值
                     * 
                     */
                    bool TotalNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>总核数</p>
                     * @return TotalCoreCount <p>总核数</p>
                     * 
                     */
                    uint64_t GetTotalCoreCount() const;

                    /**
                     * 判断参数 TotalCoreCount 是否已赋值
                     * @return TotalCoreCount 是否已赋值
                     * 
                     */
                    bool TotalCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>告警事件总数</p>
                     * @return AlarmEventCount <p>告警事件总数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCount() const;

                    /**
                     * 判断参数 AlarmEventCount 是否已赋值
                     * @return AlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>严重告警事件数</p>
                     * @return CriticalAlarmEventCount <p>严重告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalAlarmEventCount() const;

                    /**
                     * 判断参数 CriticalAlarmEventCount 是否已赋值
                     * @return CriticalAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>高危告警事件数</p>
                     * @return HighAlarmEventCount <p>高危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetHighAlarmEventCount() const;

                    /**
                     * 判断参数 HighAlarmEventCount 是否已赋值
                     * @return HighAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool HighAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>中危告警事件数</p>
                     * @return MiddleAlarmEventCount <p>中危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetMiddleAlarmEventCount() const;

                    /**
                     * 判断参数 MiddleAlarmEventCount 是否已赋值
                     * @return MiddleAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool MiddleAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>低危告警事件数</p>
                     * @return LowAlarmEventCount <p>低危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetLowAlarmEventCount() const;

                    /**
                     * 判断参数 LowAlarmEventCount 是否已赋值
                     * @return LowAlarmEventCount 是否已赋值
                     * @deprecated
                     */
                    bool LowAlarmEventCountHasBeenSet() const;

                    /**
                     * 获取<p>风险事件总数</p>
                     * @return RiskEventCount <p>风险事件总数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCount() const;

                    /**
                     * 判断参数 RiskEventCount 是否已赋值
                     * @return RiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>严重风险事件数</p>
                     * @return CriticalRiskEventCount <p>严重风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalRiskEventCount() const;

                    /**
                     * 判断参数 CriticalRiskEventCount 是否已赋值
                     * @return CriticalRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>高危风险事件数</p>
                     * @return HighRiskEventCount <p>高危风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetHighRiskEventCount() const;

                    /**
                     * 判断参数 HighRiskEventCount 是否已赋值
                     * @return HighRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool HighRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>中危风险事件个数</p>
                     * @return MiddleRiskEventCount <p>中危风险事件个数</p>
                     * @deprecated
                     */
                    uint64_t GetMiddleRiskEventCount() const;

                    /**
                     * 判断参数 MiddleRiskEventCount 是否已赋值
                     * @return MiddleRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool MiddleRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>低危风险事件个数</p>
                     * @return LowRiskEventCount <p>低危风险事件个数</p>
                     * @deprecated
                     */
                    uint64_t GetLowRiskEventCount() const;

                    /**
                     * 判断参数 LowRiskEventCount 是否已赋值
                     * @return LowRiskEventCount 是否已赋值
                     * @deprecated
                     */
                    bool LowRiskEventCountHasBeenSet() const;

                    /**
                     * 获取<p>已使用核数额度</p>
                     * @return UsedCoreQuota <p>已使用核数额度</p>
                     * 
                     */
                    uint64_t GetUsedCoreQuota() const;

                    /**
                     * 判断参数 UsedCoreQuota 是否已赋值
                     * @return UsedCoreQuota 是否已赋值
                     * 
                     */
                    bool UsedCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>已购买核数额度</p>
                     * @return PurchasedCoreQuota <p>已购买核数额度</p>
                     * 
                     */
                    uint64_t GetPurchasedCoreQuota() const;

                    /**
                     * 判断参数 PurchasedCoreQuota 是否已赋值
                     * @return PurchasedCoreQuota 是否已赋值
                     * 
                     */
                    bool PurchasedCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>弹性计费核数</p>
                     * @return ElasticCoreQuota <p>弹性计费核数</p>
                     * 
                     */
                    uint64_t GetElasticCoreQuota() const;

                    /**
                     * 判断参数 ElasticCoreQuota 是否已赋值
                     * @return ElasticCoreQuota 是否已赋值
                     * 
                     */
                    bool ElasticCoreQuotaHasBeenSet() const;

                    /**
                     * 获取<p>集群未防护核数</p>
                     * @return UnprotectedCoreCount <p>集群未防护核数</p>
                     * 
                     */
                    uint64_t GetUnprotectedCoreCount() const;

                    /**
                     * 判断参数 UnprotectedCoreCount 是否已赋值
                     * @return UnprotectedCoreCount 是否已赋值
                     * 
                     */
                    bool UnprotectedCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>集群已防护核数</p>
                     * @return ProtectedCoreCount <p>集群已防护核数</p>
                     * 
                     */
                    uint64_t GetProtectedCoreCount() const;

                    /**
                     * 判断参数 ProtectedCoreCount 是否已赋值
                     * @return ProtectedCoreCount 是否已赋值
                     * 
                     */
                    bool ProtectedCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>未防护集群数</p>
                     * @return UnprotectedClusterCount <p>未防护集群数</p>
                     * 
                     */
                    uint64_t GetUnprotectedClusterCount() const;

                    /**
                     * 判断参数 UnprotectedClusterCount 是否已赋值
                     * @return UnprotectedClusterCount 是否已赋值
                     * 
                     */
                    bool UnprotectedClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>已防护集群数</p>
                     * @return ProtectedClusterCount <p>已防护集群数</p>
                     * 
                     */
                    uint64_t GetProtectedClusterCount() const;

                    /**
                     * 判断参数 ProtectedClusterCount 是否已赋值
                     * @return ProtectedClusterCount 是否已赋值
                     * 
                     */
                    bool ProtectedClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云TKE集群数量</p>
                     * @return TkeClusterCount <p>腾讯云TKE集群数量</p>
                     * 
                     */
                    uint64_t GetTkeClusterCount() const;

                    /**
                     * 判断参数 TkeClusterCount 是否已赋值
                     * @return TkeClusterCount 是否已赋值
                     * 
                     */
                    bool TkeClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>自建集群数量</p>
                     * @return SelfBuiltClusterCount <p>自建集群数量</p>
                     * 
                     */
                    uint64_t GetSelfBuiltClusterCount() const;

                    /**
                     * 判断参数 SelfBuiltClusterCount 是否已赋值
                     * @return SelfBuiltClusterCount 是否已赋值
                     * 
                     */
                    bool SelfBuiltClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>严重告警集群数量</p>
                     * @return CriticalAlarmClusterCount <p>严重告警集群数量</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalAlarmClusterCount() const;

                    /**
                     * 判断参数 CriticalAlarmClusterCount 是否已赋值
                     * @return CriticalAlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalAlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>高危告警集群数量</p>
                     * @return HighAlarmClusterCount <p>高危告警集群数量</p>
                     * @deprecated
                     */
                    uint64_t GetHighAlarmClusterCount() const;

                    /**
                     * 判断参数 HighAlarmClusterCount 是否已赋值
                     * @return HighAlarmClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool HighAlarmClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>严重风险集群数</p>
                     * @return CriticalRiskClusterCount <p>严重风险集群数</p>
                     * @deprecated
                     */
                    uint64_t GetCriticalRiskClusterCount() const;

                    /**
                     * 判断参数 CriticalRiskClusterCount 是否已赋值
                     * @return CriticalRiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool CriticalRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>高危风险集群数量</p>
                     * @return HighRiskClusterCount <p>高危风险集群数量</p>
                     * @deprecated
                     */
                    uint64_t GetHighRiskClusterCount() const;

                    /**
                     * 判断参数 HighRiskClusterCount 是否已赋值
                     * @return HighRiskClusterCount 是否已赋值
                     * @deprecated
                     */
                    bool HighRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>未绑定旗舰版节点数量</p>
                     * @return UnboundUltimateNodeCount <p>未绑定旗舰版节点数量</p>
                     * 
                     */
                    uint64_t GetUnboundUltimateNodeCount() const;

                    /**
                     * 判断参数 UnboundUltimateNodeCount 是否已赋值
                     * @return UnboundUltimateNodeCount 是否已赋值
                     * 
                     */
                    bool UnboundUltimateNodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>集群总数</p>
                     */
                    uint64_t m_totalClusterCount;
                    bool m_totalClusterCountHasBeenSet;

                    /**
                     * <p>告警集群总数</p>
                     */
                    uint64_t m_alarmClusterCount;
                    bool m_alarmClusterCountHasBeenSet;

                    /**
                     * <p>风险集群总数</p>
                     */
                    uint64_t m_riskClusterCount;
                    bool m_riskClusterCountHasBeenSet;

                    /**
                     * <p>节点总数</p>
                     */
                    uint64_t m_totalNodeCount;
                    bool m_totalNodeCountHasBeenSet;

                    /**
                     * <p>总核数</p>
                     */
                    uint64_t m_totalCoreCount;
                    bool m_totalCoreCountHasBeenSet;

                    /**
                     * <p>告警事件总数</p>
                     */
                    uint64_t m_alarmEventCount;
                    bool m_alarmEventCountHasBeenSet;

                    /**
                     * <p>严重告警事件数</p>
                     */
                    uint64_t m_criticalAlarmEventCount;
                    bool m_criticalAlarmEventCountHasBeenSet;

                    /**
                     * <p>高危告警事件数</p>
                     */
                    uint64_t m_highAlarmEventCount;
                    bool m_highAlarmEventCountHasBeenSet;

                    /**
                     * <p>中危告警事件数</p>
                     */
                    uint64_t m_middleAlarmEventCount;
                    bool m_middleAlarmEventCountHasBeenSet;

                    /**
                     * <p>低危告警事件数</p>
                     */
                    uint64_t m_lowAlarmEventCount;
                    bool m_lowAlarmEventCountHasBeenSet;

                    /**
                     * <p>风险事件总数</p>
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * <p>严重风险事件数</p>
                     */
                    uint64_t m_criticalRiskEventCount;
                    bool m_criticalRiskEventCountHasBeenSet;

                    /**
                     * <p>高危风险事件数</p>
                     */
                    uint64_t m_highRiskEventCount;
                    bool m_highRiskEventCountHasBeenSet;

                    /**
                     * <p>中危风险事件个数</p>
                     */
                    uint64_t m_middleRiskEventCount;
                    bool m_middleRiskEventCountHasBeenSet;

                    /**
                     * <p>低危风险事件个数</p>
                     */
                    uint64_t m_lowRiskEventCount;
                    bool m_lowRiskEventCountHasBeenSet;

                    /**
                     * <p>已使用核数额度</p>
                     */
                    uint64_t m_usedCoreQuota;
                    bool m_usedCoreQuotaHasBeenSet;

                    /**
                     * <p>已购买核数额度</p>
                     */
                    uint64_t m_purchasedCoreQuota;
                    bool m_purchasedCoreQuotaHasBeenSet;

                    /**
                     * <p>弹性计费核数</p>
                     */
                    uint64_t m_elasticCoreQuota;
                    bool m_elasticCoreQuotaHasBeenSet;

                    /**
                     * <p>集群未防护核数</p>
                     */
                    uint64_t m_unprotectedCoreCount;
                    bool m_unprotectedCoreCountHasBeenSet;

                    /**
                     * <p>集群已防护核数</p>
                     */
                    uint64_t m_protectedCoreCount;
                    bool m_protectedCoreCountHasBeenSet;

                    /**
                     * <p>未防护集群数</p>
                     */
                    uint64_t m_unprotectedClusterCount;
                    bool m_unprotectedClusterCountHasBeenSet;

                    /**
                     * <p>已防护集群数</p>
                     */
                    uint64_t m_protectedClusterCount;
                    bool m_protectedClusterCountHasBeenSet;

                    /**
                     * <p>腾讯云TKE集群数量</p>
                     */
                    uint64_t m_tkeClusterCount;
                    bool m_tkeClusterCountHasBeenSet;

                    /**
                     * <p>自建集群数量</p>
                     */
                    uint64_t m_selfBuiltClusterCount;
                    bool m_selfBuiltClusterCountHasBeenSet;

                    /**
                     * <p>严重告警集群数量</p>
                     */
                    uint64_t m_criticalAlarmClusterCount;
                    bool m_criticalAlarmClusterCountHasBeenSet;

                    /**
                     * <p>高危告警集群数量</p>
                     */
                    uint64_t m_highAlarmClusterCount;
                    bool m_highAlarmClusterCountHasBeenSet;

                    /**
                     * <p>严重风险集群数</p>
                     */
                    uint64_t m_criticalRiskClusterCount;
                    bool m_criticalRiskClusterCountHasBeenSet;

                    /**
                     * <p>高危风险集群数量</p>
                     */
                    uint64_t m_highRiskClusterCount;
                    bool m_highRiskClusterCountHasBeenSet;

                    /**
                     * <p>未绑定旗舰版节点数量</p>
                     */
                    uint64_t m_unboundUltimateNodeCount;
                    bool m_unboundUltimateNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
