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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CREATERESOURCEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CREATERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateResource请求参数结构体
                */
                class CreateResourceRequest : public AbstractModel
                {
                public:
                    CreateResourceRequest();
                    ~CreateResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>部署region</p>
                     * @return DeployRegion <p>部署region</p>
                     * 
                     */
                    std::string GetDeployRegion() const;

                    /**
                     * 设置<p>部署region</p>
                     * @param _deployRegion <p>部署region</p>
                     * 
                     */
                    void SetDeployRegion(const std::string& _deployRegion);

                    /**
                     * 判断参数 DeployRegion 是否已赋值
                     * @return DeployRegion 是否已赋值
                     * 
                     */
                    bool DeployRegionHasBeenSet() const;

                    /**
                     * 获取<p>部署堡垒机的VpcId</p>
                     * @return VpcId <p>部署堡垒机的VpcId</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>部署堡垒机的VpcId</p>
                     * @param _vpcId <p>部署堡垒机的VpcId</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>部署堡垒机的SubnetId</p>
                     * @return SubnetId <p>部署堡垒机的SubnetId</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>部署堡垒机的SubnetId</p>
                     * @param _subnetId <p>部署堡垒机的SubnetId</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型。取值:standard/pro</p>
                     * @return ResourceEdition <p>资源类型。取值:standard/pro</p>
                     * 
                     */
                    std::string GetResourceEdition() const;

                    /**
                     * 设置<p>资源类型。取值:standard/pro</p>
                     * @param _resourceEdition <p>资源类型。取值:standard/pro</p>
                     * 
                     */
                    void SetResourceEdition(const std::string& _resourceEdition);

                    /**
                     * 判断参数 ResourceEdition 是否已赋值
                     * @return ResourceEdition 是否已赋值
                     * 
                     */
                    bool ResourceEditionHasBeenSet() const;

                    /**
                     * 获取<p>资源节点数</p>
                     * @return ResourceNode <p>资源节点数</p>
                     * 
                     */
                    int64_t GetResourceNode() const;

                    /**
                     * 设置<p>资源节点数</p>
                     * @param _resourceNode <p>资源节点数</p>
                     * 
                     */
                    void SetResourceNode(const int64_t& _resourceNode);

                    /**
                     * 判断参数 ResourceNode 是否已赋值
                     * @return ResourceNode 是否已赋值
                     * 
                     */
                    bool ResourceNodeHasBeenSet() const;

                    /**
                     * 获取<p>计费周期</p>
                     * @return TimeUnit <p>计费周期</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>计费周期</p>
                     * @param _timeUnit <p>计费周期</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>计费时长</p>
                     * @return TimeSpan <p>计费时长</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>计费时长</p>
                     * @param _timeSpan <p>计费时长</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>计费模式 1预付费</p>
                     * @return PayMode <p>计费模式 1预付费</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式 1预付费</p>
                     * @param _payMode <p>计费模式 1预付费</p>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费</p>
                     * @return AutoRenewFlag <p>自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费</p>
                     * @param _autoRenewFlag <p>自动续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul>
                     * @return IOAResource <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul>
                     * 
                     */
                    uint64_t GetIOAResource() const;

                    /**
                     * 设置<p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul>
                     * @param _iOAResource <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul>
                     * 
                     */
                    void SetIOAResource(const uint64_t& _iOAResource);

                    /**
                     * 判断参数 IOAResource 是否已赋值
                     * @return IOAResource 是否已赋值
                     * 
                     */
                    bool IOAResourceHasBeenSet() const;

                    /**
                     * 获取<p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * @return PackageIOAUserCount <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * 
                     */
                    uint64_t GetPackageIOAUserCount() const;

                    /**
                     * 设置<p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * @param _packageIOAUserCount <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * 
                     */
                    void SetPackageIOAUserCount(const uint64_t& _packageIOAUserCount);

                    /**
                     * 判断参数 PackageIOAUserCount 是否已赋值
                     * @return PackageIOAUserCount 是否已赋值
                     * 
                     */
                    bool PackageIOAUserCountHasBeenSet() const;

                    /**
                     * 获取<p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * @return PackageIOABandwidth <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * 
                     */
                    uint64_t GetPackageIOABandwidth() const;

                    /**
                     * 设置<p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * @param _packageIOABandwidth <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * 
                     */
                    void SetPackageIOABandwidth(const uint64_t& _packageIOABandwidth);

                    /**
                     * 判断参数 PackageIOABandwidth 是否已赋值
                     * @return PackageIOABandwidth 是否已赋值
                     * 
                     */
                    bool PackageIOABandwidthHasBeenSet() const;

                    /**
                     * 获取<p>部署zone</p>
                     * @return DeployZone <p>部署zone</p>
                     * 
                     */
                    std::string GetDeployZone() const;

                    /**
                     * 设置<p>部署zone</p>
                     * @param _deployZone <p>部署zone</p>
                     * 
                     */
                    void SetDeployZone(const std::string& _deployZone);

                    /**
                     * 判断参数 DeployZone 是否已赋值
                     * @return DeployZone 是否已赋值
                     * 
                     */
                    bool DeployZoneHasBeenSet() const;

                    /**
                     * 获取<p>0非试用版，1试用版</p>
                     * @return Trial <p>0非试用版，1试用版</p>
                     * 
                     */
                    uint64_t GetTrial() const;

                    /**
                     * 设置<p>0非试用版，1试用版</p>
                     * @param _trial <p>0非试用版，1试用版</p>
                     * 
                     */
                    void SetTrial(const uint64_t& _trial);

                    /**
                     * 判断参数 Trial 是否已赋值
                     * @return Trial 是否已赋值
                     * 
                     */
                    bool TrialHasBeenSet() const;

                    /**
                     * 获取<p>是否共享clb</p><p>枚举值：</p><ul><li>0： 不共享</li><li>1： 共享</li></ul><p>默认值：0</p><p>公有云传0</p>
                     * @return ShareClb <p>是否共享clb</p><p>枚举值：</p><ul><li>0： 不共享</li><li>1： 共享</li></ul><p>默认值：0</p><p>公有云传0</p>
                     * 
                     */
                    uint64_t GetShareClb() const;

                    /**
                     * 设置<p>是否共享clb</p><p>枚举值：</p><ul><li>0： 不共享</li><li>1： 共享</li></ul><p>默认值：0</p><p>公有云传0</p>
                     * @param _shareClb <p>是否共享clb</p><p>枚举值：</p><ul><li>0： 不共享</li><li>1： 共享</li></ul><p>默认值：0</p><p>公有云传0</p>
                     * 
                     */
                    void SetShareClb(const uint64_t& _shareClb);

                    /**
                     * 判断参数 ShareClb 是否已赋值
                     * @return ShareClb 是否已赋值
                     * 
                     */
                    bool ShareClbHasBeenSet() const;

                private:

                    /**
                     * <p>部署region</p>
                     */
                    std::string m_deployRegion;
                    bool m_deployRegionHasBeenSet;

                    /**
                     * <p>部署堡垒机的VpcId</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>部署堡垒机的SubnetId</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>资源类型。取值:standard/pro</p>
                     */
                    std::string m_resourceEdition;
                    bool m_resourceEditionHasBeenSet;

                    /**
                     * <p>资源节点数</p>
                     */
                    int64_t m_resourceNode;
                    bool m_resourceNodeHasBeenSet;

                    /**
                     * <p>计费周期</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>计费时长</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>计费模式 1预付费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul>
                     */
                    uint64_t m_iOAResource;
                    bool m_iOAResourceHasBeenSet;

                    /**
                     * <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     */
                    uint64_t m_packageIOAUserCount;
                    bool m_packageIOAUserCountHasBeenSet;

                    /**
                     * <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     */
                    uint64_t m_packageIOABandwidth;
                    bool m_packageIOABandwidthHasBeenSet;

                    /**
                     * <p>部署zone</p>
                     */
                    std::string m_deployZone;
                    bool m_deployZoneHasBeenSet;

                    /**
                     * <p>0非试用版，1试用版</p>
                     */
                    uint64_t m_trial;
                    bool m_trialHasBeenSet;

                    /**
                     * <p>是否共享clb</p><p>枚举值：</p><ul><li>0： 不共享</li><li>1： 共享</li></ul><p>默认值：0</p><p>公有云传0</p>
                     */
                    uint64_t m_shareClb;
                    bool m_shareClbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATERESOURCEREQUEST_H_
