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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERDETAIL_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForModelRouter.h>
#include <tencentcloud/clb/v20180317/model/RouterSettingWithFallBack.h>
#include <tencentcloud/clb/v20180317/model/ServiceEndPoints.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/CreditUsage.h>
#include <tencentcloud/clb/v20180317/model/ClusterInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 查询单个实例详细信息
                */
                class ModelRouterDetail : public AbstractModel
                {
                public:
                    ModelRouterDetail();
                    ~ModelRouterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例域名</p>
                     * @return Domain <p>模型路由实例域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>模型路由实例域名</p>
                     * @param _domain <p>模型路由实例域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>模型路由ID</p>
                     * @return ModelRouterId <p>模型路由ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由ID</p>
                     * @param _modelRouterId <p>模型路由ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由名称</p><p>默认值：-</p>
                     * @return ModelRouterName <p>模型路由名称</p><p>默认值：-</p>
                     * 
                     */
                    std::string GetModelRouterName() const;

                    /**
                     * 设置<p>模型路由名称</p><p>默认值：-</p>
                     * @param _modelRouterName <p>模型路由名称</p><p>默认值：-</p>
                     * 
                     */
                    void SetModelRouterName(const std::string& _modelRouterName);

                    /**
                     * 判断参数 ModelRouterName 是否已赋值
                     * @return ModelRouterName 是否已赋值
                     * 
                     */
                    bool ModelRouterNameHasBeenSet() const;

                    /**
                     * 获取<p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * @return ModelRouterType <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * 
                     */
                    std::string GetModelRouterType() const;

                    /**
                     * 设置<p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * @param _modelRouterType <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * 
                     */
                    void SetModelRouterType(const std::string& _modelRouterType);

                    /**
                     * 判断参数 ModelRouterType 是否已赋值
                     * @return ModelRouterType 是否已赋值
                     * 
                     */
                    bool ModelRouterTypeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifiedTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifiedTime <p>修改时间</p>
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * @return NetworkType <p>模型路由实例网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>模型路由实例网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * @param _networkType <p>模型路由实例网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由限速信息</p>
                     * @return RateLimitConfig <p>模型路由限速信息</p>
                     * 
                     */
                    RateLimitConfigForModelRouter GetRateLimitConfig() const;

                    /**
                     * 设置<p>模型路由限速信息</p>
                     * @param _rateLimitConfig <p>模型路由限速信息</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>模型路由的路由配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouterSetting <p>模型路由的路由配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RouterSettingWithFallBack GetRouterSetting() const;

                    /**
                     * 设置<p>模型路由的路由配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routerSetting <p>模型路由的路由配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRouterSetting(const RouterSettingWithFallBack& _routerSetting);

                    /**
                     * 判断参数 RouterSetting 是否已赋值
                     * @return RouterSetting 是否已赋值
                     * 
                     */
                    bool RouterSettingHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例的安全状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Banned： 已封禁</li><li>Frozen： 已冻结</li></ul>
                     * @return SecurityStatus <p>模型路由实例的安全状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Banned： 已封禁</li><li>Frozen： 已冻结</li></ul>
                     * 
                     */
                    std::string GetSecurityStatus() const;

                    /**
                     * 设置<p>模型路由实例的安全状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Banned： 已封禁</li><li>Frozen： 已冻结</li></ul>
                     * @param _securityStatus <p>模型路由实例的安全状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Banned： 已封禁</li><li>Frozen： 已冻结</li></ul>
                     * 
                     */
                    void SetSecurityStatus(const std::string& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                    /**
                     * 获取<p>模型路由网络配置列表</p>
                     * @return ServiceEndPoints <p>模型路由网络配置列表</p>
                     * 
                     */
                    std::vector<ServiceEndPoints> GetServiceEndPoints() const;

                    /**
                     * 设置<p>模型路由网络配置列表</p>
                     * @param _serviceEndPoints <p>模型路由网络配置列表</p>
                     * 
                     */
                    void SetServiceEndPoints(const std::vector<ServiceEndPoints>& _serviceEndPoints);

                    /**
                     * 判断参数 ServiceEndPoints 是否已赋值
                     * @return ServiceEndPoints 是否已赋值
                     * 
                     */
                    bool ServiceEndPointsHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li></ul>
                     * @return Status <p>模型路由实例状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>模型路由实例状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li></ul>
                     * @param _status <p>模型路由实例状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例所属子网的ID</p>
                     * @return SubnetId <p>模型路由实例所属子网的ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>模型路由实例所属子网的ID</p>
                     * @param _subnetId <p>模型路由实例所属子网的ID</p>
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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例的计费状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Isolated： 已隔离</li></ul>
                     * @return TradeStatus <p>模型路由实例的计费状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Isolated： 已隔离</li></ul>
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置<p>模型路由实例的计费状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Isolated： 已隔离</li></ul>
                     * @param _tradeStatus <p>模型路由实例的计费状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Isolated： 已隔离</li></ul>
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例VIP</p>
                     * @return Vip <p>模型路由实例VIP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>模型路由实例VIP</p>
                     * @param _vip <p>模型路由实例VIP</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例所属VPC的ID</p>
                     * @return VpcId <p>模型路由实例所属VPC的ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>模型路由实例所属VPC的ID</p>
                     * @param _vpcId <p>模型路由实例所属VPC的ID</p>
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
                     * 获取<p>模型路由实例关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetId <p>模型路由实例关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>模型路由实例关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetId <p>模型路由实例关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetName <p>模型路由实例关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置<p>模型路由实例关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetName <p>模型路由实例关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例的Credit使用情况。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreditUsage <p>模型路由实例的Credit使用情况。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreditUsage GetCreditUsage() const;

                    /**
                     * 设置<p>模型路由实例的Credit使用情况。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creditUsage <p>模型路由实例的Credit使用情况。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreditUsage(const CreditUsage& _creditUsage);

                    /**
                     * 判断参数 CreditUsage 是否已赋值
                     * @return CreditUsage 是否已赋值
                     * 
                     */
                    bool CreditUsageHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * @return CreditUsageSet <p>模型路由实例按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * 
                     */
                    std::vector<CreditUsage> GetCreditUsageSet() const;

                    /**
                     * 设置<p>模型路由实例按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * @param _creditUsageSet <p>模型路由实例按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * 
                     */
                    void SetCreditUsageSet(const std::vector<CreditUsage>& _creditUsageSet);

                    /**
                     * 判断参数 CreditUsageSet 是否已赋值
                     * @return CreditUsageSet 是否已赋值
                     * 
                     */
                    bool CreditUsageSetHasBeenSet() const;

                    /**
                     * 获取<p>安全组ID列表</p>
                     * @return SecurityGroups <p>安全组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>安全组ID列表</p>
                     * @param _securityGroups <p>安全组ID列表</p>
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取<p>集群信息</p>
                     * @return ClusterInfo <p>集群信息</p>
                     * 
                     */
                    ClusterInfo GetClusterInfo() const;

                    /**
                     * 设置<p>集群信息</p>
                     * @param _clusterInfo <p>集群信息</p>
                     * 
                     */
                    void SetClusterInfo(const ClusterInfo& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>模型路由实例域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>模型路由ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>模型路由名称</p><p>默认值：-</p>
                     */
                    std::string m_modelRouterName;
                    bool m_modelRouterNameHasBeenSet;

                    /**
                     * <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     */
                    std::string m_modelRouterType;
                    bool m_modelRouterTypeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>模型路由实例网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>模型路由限速信息</p>
                     */
                    RateLimitConfigForModelRouter m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>模型路由的路由配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RouterSettingWithFallBack m_routerSetting;
                    bool m_routerSettingHasBeenSet;

                    /**
                     * <p>模型路由实例的安全状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Banned： 已封禁</li><li>Frozen： 已冻结</li></ul>
                     */
                    std::string m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                    /**
                     * <p>模型路由网络配置列表</p>
                     */
                    std::vector<ServiceEndPoints> m_serviceEndPoints;
                    bool m_serviceEndPointsHasBeenSet;

                    /**
                     * <p>模型路由实例状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>模型路由实例所属子网的ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>模型路由实例的计费状态</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Isolated： 已隔离</li></ul>
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * <p>模型路由实例VIP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>模型路由实例所属VPC的ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>模型路由实例关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>模型路由实例关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * <p>模型路由实例的Credit使用情况。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreditUsage m_creditUsage;
                    bool m_creditUsageHasBeenSet;

                    /**
                     * <p>模型路由实例按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     */
                    std::vector<CreditUsage> m_creditUsageSet;
                    bool m_creditUsageSetHasBeenSet;

                    /**
                     * <p>安全组ID列表</p>
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>集群信息</p>
                     */
                    ClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERDETAIL_H_
