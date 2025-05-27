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
                     * 获取部署region
                     * @return DeployRegion 部署region
                     * 
                     */
                    std::string GetDeployRegion() const;

                    /**
                     * 设置部署region
                     * @param _deployRegion 部署region
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
                     * 获取部署堡垒机的VpcId
                     * @return VpcId 部署堡垒机的VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置部署堡垒机的VpcId
                     * @param _vpcId 部署堡垒机的VpcId
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
                     * 获取部署堡垒机的SubnetId
                     * @return SubnetId 部署堡垒机的SubnetId
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置部署堡垒机的SubnetId
                     * @param _subnetId 部署堡垒机的SubnetId
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
                     * 获取资源类型。取值:standard/pro
                     * @return ResourceEdition 资源类型。取值:standard/pro
                     * 
                     */
                    std::string GetResourceEdition() const;

                    /**
                     * 设置资源类型。取值:standard/pro
                     * @param _resourceEdition 资源类型。取值:standard/pro
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
                     * 获取资源节点数
                     * @return ResourceNode 资源节点数
                     * 
                     */
                    int64_t GetResourceNode() const;

                    /**
                     * 设置资源节点数
                     * @param _resourceNode 资源节点数
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
                     * 获取计费周期
                     * @return TimeUnit 计费周期
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置计费周期
                     * @param _timeUnit 计费周期
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
                     * 获取计费时长
                     * @return TimeSpan 计费时长
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置计费时长
                     * @param _timeSpan 计费时长
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
                     * 获取计费模式 1预付费
                     * @return PayMode 计费模式 1预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式 1预付费
                     * @param _payMode 计费模式 1预付费
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
                     * 获取自动续费
                     * @return AutoRenewFlag 自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费
                     * @param _autoRenewFlag 自动续费
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
                     * 获取部署zone
                     * @return DeployZone 部署zone
                     * 
                     */
                    std::string GetDeployZone() const;

                    /**
                     * 设置部署zone
                     * @param _deployZone 部署zone
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
                     * 获取0非试用版，1试用版
                     * @return Trial 0非试用版，1试用版
                     * 
                     */
                    uint64_t GetTrial() const;

                    /**
                     * 设置0非试用版，1试用版
                     * @param _trial 0非试用版，1试用版
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
                     * 获取是否共享clb，0：不共享，1：共享
                     * @return ShareClb 是否共享clb，0：不共享，1：共享
                     * 
                     */
                    uint64_t GetShareClb() const;

                    /**
                     * 设置是否共享clb，0：不共享，1：共享
                     * @param _shareClb 是否共享clb，0：不共享，1：共享
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
                     * 部署region
                     */
                    std::string m_deployRegion;
                    bool m_deployRegionHasBeenSet;

                    /**
                     * 部署堡垒机的VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 部署堡垒机的SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资源类型。取值:standard/pro
                     */
                    std::string m_resourceEdition;
                    bool m_resourceEditionHasBeenSet;

                    /**
                     * 资源节点数
                     */
                    int64_t m_resourceNode;
                    bool m_resourceNodeHasBeenSet;

                    /**
                     * 计费周期
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 计费时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 计费模式 1预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 部署zone
                     */
                    std::string m_deployZone;
                    bool m_deployZoneHasBeenSet;

                    /**
                     * 0非试用版，1试用版
                     */
                    uint64_t m_trial;
                    bool m_trialHasBeenSet;

                    /**
                     * 是否共享clb，0：不共享，1：共享
                     */
                    uint64_t m_shareClb;
                    bool m_shareClbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATERESOURCEREQUEST_H_
