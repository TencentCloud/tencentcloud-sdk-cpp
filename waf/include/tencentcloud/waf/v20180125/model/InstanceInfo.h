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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/QPSPackageNew.h>
#include <tencentcloud/waf/v20180125/model/DomainPackageNew.h>
#include <tencentcloud/waf/v20180125/model/FraudPkg.h>
#include <tencentcloud/waf/v20180125/model/BotPkg.h>
#include <tencentcloud/waf/v20180125/model/BotQPS.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 一个实例的详细信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return InstanceId id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置id
                     * @param InstanceId id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取name
                     * @return InstanceName name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置name
                     * @param InstanceName name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceIds 资源id
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置资源id
                     * @param ResourceIds 资源id
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param PayMode 付费模式
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取自动续费
                     * @return RenewFlag 自动续费
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费
                     * @param RenewFlag 自动续费
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取弹性计费
                     * @return Mode 弹性计费
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置弹性计费
                     * @param Mode 弹性计费
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取套餐版本
                     * @return Level 套餐版本
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置套餐版本
                     * @param Level 套餐版本
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ValidTime 过期时间
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置过期时间
                     * @param ValidTime 过期时间
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param BeginTime 开始时间
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取已用
                     * @return DomainCount 已用
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置已用
                     * @param DomainCount 已用
                     */
                    void SetDomainCount(const uint64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取上限
                     * @return SubDomainLimit 上限
                     */
                    uint64_t GetSubDomainLimit() const;

                    /**
                     * 设置上限
                     * @param SubDomainLimit 上限
                     */
                    void SetSubDomainLimit(const uint64_t& _subDomainLimit);

                    /**
                     * 判断参数 SubDomainLimit 是否已赋值
                     * @return SubDomainLimit 是否已赋值
                     */
                    bool SubDomainLimitHasBeenSet() const;

                    /**
                     * 获取已用
                     * @return MainDomainCount 已用
                     */
                    uint64_t GetMainDomainCount() const;

                    /**
                     * 设置已用
                     * @param MainDomainCount 已用
                     */
                    void SetMainDomainCount(const uint64_t& _mainDomainCount);

                    /**
                     * 判断参数 MainDomainCount 是否已赋值
                     * @return MainDomainCount 是否已赋值
                     */
                    bool MainDomainCountHasBeenSet() const;

                    /**
                     * 获取上限
                     * @return MainDomainLimit 上限
                     */
                    uint64_t GetMainDomainLimit() const;

                    /**
                     * 设置上限
                     * @param MainDomainLimit 上限
                     */
                    void SetMainDomainLimit(const uint64_t& _mainDomainLimit);

                    /**
                     * 判断参数 MainDomainLimit 是否已赋值
                     * @return MainDomainLimit 是否已赋值
                     */
                    bool MainDomainLimitHasBeenSet() const;

                    /**
                     * 获取峰值
                     * @return MaxQPS 峰值
                     */
                    uint64_t GetMaxQPS() const;

                    /**
                     * 设置峰值
                     * @param MaxQPS 峰值
                     */
                    void SetMaxQPS(const uint64_t& _maxQPS);

                    /**
                     * 判断参数 MaxQPS 是否已赋值
                     * @return MaxQPS 是否已赋值
                     */
                    bool MaxQPSHasBeenSet() const;

                    /**
                     * 获取qps套餐
                     * @return QPS qps套餐
                     */
                    QPSPackageNew GetQPS() const;

                    /**
                     * 设置qps套餐
                     * @param QPS qps套餐
                     */
                    void SetQPS(const QPSPackageNew& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取域名套餐
                     * @return DomainPkg 域名套餐
                     */
                    DomainPackageNew GetDomainPkg() const;

                    /**
                     * 设置域名套餐
                     * @param DomainPkg 域名套餐
                     */
                    void SetDomainPkg(const DomainPackageNew& _domainPkg);

                    /**
                     * 判断参数 DomainPkg 是否已赋值
                     * @return DomainPkg 是否已赋值
                     */
                    bool DomainPkgHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param AppId 用户appid
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取clb或saas
                     * @return Edition clb或saas
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置clb或saas
                     * @param Edition clb或saas
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取业务安全包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FraudPkg 业务安全包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FraudPkg GetFraudPkg() const;

                    /**
                     * 设置业务安全包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FraudPkg 业务安全包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFraudPkg(const FraudPkg& _fraudPkg);

                    /**
                     * 判断参数 FraudPkg 是否已赋值
                     * @return FraudPkg 是否已赋值
                     */
                    bool FraudPkgHasBeenSet() const;

                    /**
                     * 获取Bot资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotPkg Bot资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotPkg GetBotPkg() const;

                    /**
                     * 设置Bot资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BotPkg Bot资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBotPkg(const BotPkg& _botPkg);

                    /**
                     * 判断参数 BotPkg 是否已赋值
                     * @return BotPkg 是否已赋值
                     */
                    bool BotPkgHasBeenSet() const;

                    /**
                     * 获取bot的qps详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotQPS bot的qps详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotQPS GetBotQPS() const;

                    /**
                     * 设置bot的qps详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BotQPS bot的qps详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBotQPS(const BotQPS& _botQPS);

                    /**
                     * 判断参数 BotQPS 是否已赋值
                     * @return BotQPS 是否已赋值
                     */
                    bool BotQPSHasBeenSet() const;

                    /**
                     * 获取qps弹性计费上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticBilling qps弹性计费上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetElasticBilling() const;

                    /**
                     * 设置qps弹性计费上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ElasticBilling qps弹性计费上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetElasticBilling(const uint64_t& _elasticBilling);

                    /**
                     * 判断参数 ElasticBilling 是否已赋值
                     * @return ElasticBilling 是否已赋值
                     */
                    bool ElasticBillingHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 付费模式
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 弹性计费
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 套餐版本
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 已用
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 上限
                     */
                    uint64_t m_subDomainLimit;
                    bool m_subDomainLimitHasBeenSet;

                    /**
                     * 已用
                     */
                    uint64_t m_mainDomainCount;
                    bool m_mainDomainCountHasBeenSet;

                    /**
                     * 上限
                     */
                    uint64_t m_mainDomainLimit;
                    bool m_mainDomainLimitHasBeenSet;

                    /**
                     * 峰值
                     */
                    uint64_t m_maxQPS;
                    bool m_maxQPSHasBeenSet;

                    /**
                     * qps套餐
                     */
                    QPSPackageNew m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * 域名套餐
                     */
                    DomainPackageNew m_domainPkg;
                    bool m_domainPkgHasBeenSet;

                    /**
                     * 用户appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * clb或saas
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 业务安全包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FraudPkg m_fraudPkg;
                    bool m_fraudPkgHasBeenSet;

                    /**
                     * Bot资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotPkg m_botPkg;
                    bool m_botPkgHasBeenSet;

                    /**
                     * bot的qps详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotQPS m_botQPS;
                    bool m_botQPSHasBeenSet;

                    /**
                     * qps弹性计费上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_elasticBilling;
                    bool m_elasticBillingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_
