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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWEASTWESTDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWEASTWESTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览东西向带宽详情
                */
                class OverviewEastWestDetail : public AbstractModel
                {
                public:
                    OverviewEastWestDetail();
                    ~OverviewEastWestDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>东西向总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return TotalMbps <p>东西向总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetTotalMbps() const;

                    /**
                     * 设置<p>东西向总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _totalMbps <p>东西向总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetTotalMbps(const int64_t& _totalMbps);

                    /**
                     * 判断参数 TotalMbps 是否已赋值
                     * @return TotalMbps 是否已赋值
                     * 
                     */
                    bool TotalMbpsHasBeenSet() const;

                    /**
                     * 获取<p>当前已使用流量，单位为 bps。</p><p>单位：bps</p>
                     * @return UsedBps <p>当前已使用流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetUsedBps() const;

                    /**
                     * 设置<p>当前已使用流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _usedBps <p>当前已使用流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetUsedBps(const int64_t& _usedBps);

                    /**
                     * 判断参数 UsedBps 是否已赋值
                     * @return UsedBps 是否已赋值
                     * 
                     */
                    bool UsedBpsHasBeenSet() const;

                    /**
                     * 获取<p>当前带宽使用率。</p><p>单位：%</p>
                     * @return UsagePercent <p>当前带宽使用率。</p><p>单位：%</p>
                     * 
                     */
                    double GetUsagePercent() const;

                    /**
                     * 设置<p>当前带宽使用率。</p><p>单位：%</p>
                     * @param _usagePercent <p>当前带宽使用率。</p><p>单位：%</p>
                     * 
                     */
                    void SetUsagePercent(const double& _usagePercent);

                    /**
                     * 判断参数 UsagePercent 是否已赋值
                     * @return UsagePercent 是否已赋值
                     * 
                     */
                    bool UsagePercentHasBeenSet() const;

                    /**
                     * 获取<p>已分配并使用的带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return AllocatedBandwidthUsedMbps <p>已分配并使用的带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetAllocatedBandwidthUsedMbps() const;

                    /**
                     * 设置<p>已分配并使用的带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _allocatedBandwidthUsedMbps <p>已分配并使用的带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetAllocatedBandwidthUsedMbps(const int64_t& _allocatedBandwidthUsedMbps);

                    /**
                     * 判断参数 AllocatedBandwidthUsedMbps 是否已赋值
                     * @return AllocatedBandwidthUsedMbps 是否已赋值
                     * 
                     */
                    bool AllocatedBandwidthUsedMbpsHasBeenSet() const;

                    /**
                     * 获取<p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return CanUsedBandwidthMbps <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetCanUsedBandwidthMbps() const;

                    /**
                     * 设置<p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _canUsedBandwidthMbps <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetCanUsedBandwidthMbps(const int64_t& _canUsedBandwidthMbps);

                    /**
                     * 判断参数 CanUsedBandwidthMbps 是否已赋值
                     * @return CanUsedBandwidthMbps 是否已赋值
                     * 
                     */
                    bool CanUsedBandwidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>集群模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return ClusterModeWidthMbps <p>集群模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetClusterModeWidthMbps() const;

                    /**
                     * 设置<p>集群模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _clusterModeWidthMbps <p>集群模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetClusterModeWidthMbps(const int64_t& _clusterModeWidthMbps);

                    /**
                     * 判断参数 ClusterModeWidthMbps 是否已赋值
                     * @return ClusterModeWidthMbps 是否已赋值
                     * 
                     */
                    bool ClusterModeWidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>主备模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return MasterSlaveModeWidthMbps <p>主备模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetMasterSlaveModeWidthMbps() const;

                    /**
                     * 设置<p>主备模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _masterSlaveModeWidthMbps <p>主备模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetMasterSlaveModeWidthMbps(const int64_t& _masterSlaveModeWidthMbps);

                    /**
                     * 判断参数 MasterSlaveModeWidthMbps 是否已赋值
                     * @return MasterSlaveModeWidthMbps 是否已赋值
                     * 
                     */
                    bool MasterSlaveModeWidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>同地域防火墙实例 ID。</p>
                     * @return SameRegionFwInsId <p>同地域防火墙实例 ID。</p>
                     * 
                     */
                    std::string GetSameRegionFwInsId() const;

                    /**
                     * 设置<p>同地域防火墙实例 ID。</p>
                     * @param _sameRegionFwInsId <p>同地域防火墙实例 ID。</p>
                     * 
                     */
                    void SetSameRegionFwInsId(const std::string& _sameRegionFwInsId);

                    /**
                     * 判断参数 SameRegionFwInsId 是否已赋值
                     * @return SameRegionFwInsId 是否已赋值
                     * 
                     */
                    bool SameRegionFwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>同地域防火墙实例名称。</p>
                     * @return SameRegionFwInsName <p>同地域防火墙实例名称。</p>
                     * 
                     */
                    std::string GetSameRegionFwInsName() const;

                    /**
                     * 设置<p>同地域防火墙实例名称。</p>
                     * @param _sameRegionFwInsName <p>同地域防火墙实例名称。</p>
                     * 
                     */
                    void SetSameRegionFwInsName(const std::string& _sameRegionFwInsName);

                    /**
                     * 判断参数 SameRegionFwInsName 是否已赋值
                     * @return SameRegionFwInsName 是否已赋值
                     * 
                     */
                    bool SameRegionFwInsNameHasBeenSet() const;

                    /**
                     * 获取<p>同地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return SameRegionMaxFlowBps <p>同地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetSameRegionMaxFlowBps() const;

                    /**
                     * 设置<p>同地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _sameRegionMaxFlowBps <p>同地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetSameRegionMaxFlowBps(const int64_t& _sameRegionMaxFlowBps);

                    /**
                     * 判断参数 SameRegionMaxFlowBps 是否已赋值
                     * @return SameRegionMaxFlowBps 是否已赋值
                     * 
                     */
                    bool SameRegionMaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>跨地域防火墙实例 ID。</p>
                     * @return DiffRegionFwInsId <p>跨地域防火墙实例 ID。</p>
                     * 
                     */
                    std::string GetDiffRegionFwInsId() const;

                    /**
                     * 设置<p>跨地域防火墙实例 ID。</p>
                     * @param _diffRegionFwInsId <p>跨地域防火墙实例 ID。</p>
                     * 
                     */
                    void SetDiffRegionFwInsId(const std::string& _diffRegionFwInsId);

                    /**
                     * 判断参数 DiffRegionFwInsId 是否已赋值
                     * @return DiffRegionFwInsId 是否已赋值
                     * 
                     */
                    bool DiffRegionFwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>跨地域防火墙实例名称。</p>
                     * @return DiffRegionFwInsName <p>跨地域防火墙实例名称。</p>
                     * 
                     */
                    std::string GetDiffRegionFwInsName() const;

                    /**
                     * 设置<p>跨地域防火墙实例名称。</p>
                     * @param _diffRegionFwInsName <p>跨地域防火墙实例名称。</p>
                     * 
                     */
                    void SetDiffRegionFwInsName(const std::string& _diffRegionFwInsName);

                    /**
                     * 判断参数 DiffRegionFwInsName 是否已赋值
                     * @return DiffRegionFwInsName 是否已赋值
                     * 
                     */
                    bool DiffRegionFwInsNameHasBeenSet() const;

                    /**
                     * 获取<p>跨地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return DiffRegionMaxFlowBps <p>跨地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetDiffRegionMaxFlowBps() const;

                    /**
                     * 设置<p>跨地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _diffRegionMaxFlowBps <p>跨地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetDiffRegionMaxFlowBps(const int64_t& _diffRegionMaxFlowBps);

                    /**
                     * 判断参数 DiffRegionMaxFlowBps 是否已赋值
                     * @return DiffRegionMaxFlowBps 是否已赋值
                     * 
                     */
                    bool DiffRegionMaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例组 ID。</p>
                     * @return FwGroupId <p>防火墙实例组 ID。</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>防火墙实例组 ID。</p>
                     * @param _fwGroupId <p>防火墙实例组 ID。</p>
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例组名称。</p>
                     * @return FwGroupName <p>防火墙实例组名称。</p>
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置<p>防火墙实例组名称。</p>
                     * @param _fwGroupName <p>防火墙实例组名称。</p>
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例组峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return FwGroupMaxFlowBps <p>防火墙实例组峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetFwGroupMaxFlowBps() const;

                    /**
                     * 设置<p>防火墙实例组峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _fwGroupMaxFlowBps <p>防火墙实例组峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetFwGroupMaxFlowBps(const int64_t& _fwGroupMaxFlowBps);

                    /**
                     * 判断参数 FwGroupMaxFlowBps 是否已赋值
                     * @return FwGroupMaxFlowBps 是否已赋值
                     * 
                     */
                    bool FwGroupMaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例 ID。</p>
                     * @return FwInsId <p>防火墙实例 ID。</p>
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置<p>防火墙实例 ID。</p>
                     * @param _fwInsId <p>防火墙实例 ID。</p>
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例名称。</p>
                     * @return FwInsName <p>防火墙实例名称。</p>
                     * 
                     */
                    std::string GetFwInsName() const;

                    /**
                     * 设置<p>防火墙实例名称。</p>
                     * @param _fwInsName <p>防火墙实例名称。</p>
                     * 
                     */
                    void SetFwInsName(const std::string& _fwInsName);

                    /**
                     * 判断参数 FwInsName 是否已赋值
                     * @return FwInsName 是否已赋值
                     * 
                     */
                    bool FwInsNameHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return FwInsMaxFlowBps <p>防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetFwInsMaxFlowBps() const;

                    /**
                     * 设置<p>防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _fwInsMaxFlowBps <p>防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetFwInsMaxFlowBps(const int64_t& _fwInsMaxFlowBps);

                    /**
                     * 判断参数 FwInsMaxFlowBps 是否已赋值
                     * @return FwInsMaxFlowBps 是否已赋值
                     * 
                     */
                    bool FwInsMaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>集群 VPC 峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return ClusterVpcMaxFlowBps <p>集群 VPC 峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetClusterVpcMaxFlowBps() const;

                    /**
                     * 设置<p>集群 VPC 峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _clusterVpcMaxFlowBps <p>集群 VPC 峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetClusterVpcMaxFlowBps(const int64_t& _clusterVpcMaxFlowBps);

                    /**
                     * 判断参数 ClusterVpcMaxFlowBps 是否已赋值
                     * @return ClusterVpcMaxFlowBps 是否已赋值
                     * 
                     */
                    bool ClusterVpcMaxFlowBpsHasBeenSet() const;

                private:

                    /**
                     * <p>东西向总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_totalMbps;
                    bool m_totalMbpsHasBeenSet;

                    /**
                     * <p>当前已使用流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_usedBps;
                    bool m_usedBpsHasBeenSet;

                    /**
                     * <p>当前带宽使用率。</p><p>单位：%</p>
                     */
                    double m_usagePercent;
                    bool m_usagePercentHasBeenSet;

                    /**
                     * <p>已分配并使用的带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_allocatedBandwidthUsedMbps;
                    bool m_allocatedBandwidthUsedMbpsHasBeenSet;

                    /**
                     * <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_canUsedBandwidthMbps;
                    bool m_canUsedBandwidthMbpsHasBeenSet;

                    /**
                     * <p>集群模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_clusterModeWidthMbps;
                    bool m_clusterModeWidthMbpsHasBeenSet;

                    /**
                     * <p>主备模式带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_masterSlaveModeWidthMbps;
                    bool m_masterSlaveModeWidthMbpsHasBeenSet;

                    /**
                     * <p>同地域防火墙实例 ID。</p>
                     */
                    std::string m_sameRegionFwInsId;
                    bool m_sameRegionFwInsIdHasBeenSet;

                    /**
                     * <p>同地域防火墙实例名称。</p>
                     */
                    std::string m_sameRegionFwInsName;
                    bool m_sameRegionFwInsNameHasBeenSet;

                    /**
                     * <p>同地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_sameRegionMaxFlowBps;
                    bool m_sameRegionMaxFlowBpsHasBeenSet;

                    /**
                     * <p>跨地域防火墙实例 ID。</p>
                     */
                    std::string m_diffRegionFwInsId;
                    bool m_diffRegionFwInsIdHasBeenSet;

                    /**
                     * <p>跨地域防火墙实例名称。</p>
                     */
                    std::string m_diffRegionFwInsName;
                    bool m_diffRegionFwInsNameHasBeenSet;

                    /**
                     * <p>跨地域防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_diffRegionMaxFlowBps;
                    bool m_diffRegionMaxFlowBpsHasBeenSet;

                    /**
                     * <p>防火墙实例组 ID。</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>防火墙实例组名称。</p>
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * <p>防火墙实例组峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_fwGroupMaxFlowBps;
                    bool m_fwGroupMaxFlowBpsHasBeenSet;

                    /**
                     * <p>防火墙实例 ID。</p>
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * <p>防火墙实例名称。</p>
                     */
                    std::string m_fwInsName;
                    bool m_fwInsNameHasBeenSet;

                    /**
                     * <p>防火墙实例峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_fwInsMaxFlowBps;
                    bool m_fwInsMaxFlowBpsHasBeenSet;

                    /**
                     * <p>集群 VPC 峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_clusterVpcMaxFlowBps;
                    bool m_clusterVpcMaxFlowBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWEASTWESTDETAIL_H_
