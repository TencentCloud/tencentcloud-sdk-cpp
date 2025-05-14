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
#include <tencentcloud/waf/v20180125/model/MajorEventsPkg.h>
#include <tencentcloud/waf/v20180125/model/HybridPkg.h>
#include <tencentcloud/waf/v20180125/model/ApiPkg.h>
#include <tencentcloud/waf/v20180125/model/MiniPkg.h>
#include <tencentcloud/waf/v20180125/model/MiniExtendPkg.h>
#include <tencentcloud/waf/v20180125/model/MajorEventsProPkg.h>


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
                     * 获取实例唯一ID
                     * @return InstanceId 实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceId 实例唯一ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例对应资源ID，计费使用
                     * @return ResourceIds 实例对应资源ID，计费使用
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置实例对应资源ID，计费使用
                     * @param _resourceIds 实例对应资源ID，计费使用
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取实例所属地域
                     * @return Region 实例所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
                     * @param _region 实例所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取自动续费标识。
0：关闭
1：开启
                     * @return RenewFlag 自动续费标识。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。
0：关闭
1：开启
                     * @param _renewFlag 自动续费标识。
0：关闭
1：开启
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取弹性计费开关。
0：关闭
1：开启
                     * @return Mode 弹性计费开关。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置弹性计费开关。
0：关闭
1：开启
                     * @param _mode 弹性计费开关。
0：关闭
1：开启
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取实例套餐版本。
101：小微版
102：超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * @return Level 实例套餐版本。
101：小微版
102：超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置实例套餐版本。
101：小微版
102：超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * @param _level 实例套餐版本。
101：小微版
102：超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取实例过期时间
                     * @return ValidTime 实例过期时间
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置实例过期时间
                     * @param _validTime 实例过期时间
                     * 
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取实例开始时间
                     * @return BeginTime 实例开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置实例开始时间
                     * @param _beginTime 实例开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取已配置域名个数
                     * @return DomainCount 已配置域名个数
                     * 
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置已配置域名个数
                     * @param _domainCount 已配置域名个数
                     * 
                     */
                    void SetDomainCount(const uint64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取域名数量上限
                     * @return SubDomainLimit 域名数量上限
                     * 
                     */
                    uint64_t GetSubDomainLimit() const;

                    /**
                     * 设置域名数量上限
                     * @param _subDomainLimit 域名数量上限
                     * 
                     */
                    void SetSubDomainLimit(const uint64_t& _subDomainLimit);

                    /**
                     * 判断参数 SubDomainLimit 是否已赋值
                     * @return SubDomainLimit 是否已赋值
                     * 
                     */
                    bool SubDomainLimitHasBeenSet() const;

                    /**
                     * 获取已配置主域名个数
                     * @return MainDomainCount 已配置主域名个数
                     * 
                     */
                    uint64_t GetMainDomainCount() const;

                    /**
                     * 设置已配置主域名个数
                     * @param _mainDomainCount 已配置主域名个数
                     * 
                     */
                    void SetMainDomainCount(const uint64_t& _mainDomainCount);

                    /**
                     * 判断参数 MainDomainCount 是否已赋值
                     * @return MainDomainCount 是否已赋值
                     * 
                     */
                    bool MainDomainCountHasBeenSet() const;

                    /**
                     * 获取主域名数量上限
                     * @return MainDomainLimit 主域名数量上限
                     * 
                     */
                    uint64_t GetMainDomainLimit() const;

                    /**
                     * 设置主域名数量上限
                     * @param _mainDomainLimit 主域名数量上限
                     * 
                     */
                    void SetMainDomainLimit(const uint64_t& _mainDomainLimit);

                    /**
                     * 判断参数 MainDomainLimit 是否已赋值
                     * @return MainDomainLimit 是否已赋值
                     * 
                     */
                    bool MainDomainLimitHasBeenSet() const;

                    /**
                     * 获取实例30天内QPS峰值
                     * @return MaxQPS 实例30天内QPS峰值
                     * 
                     */
                    uint64_t GetMaxQPS() const;

                    /**
                     * 设置实例30天内QPS峰值
                     * @param _maxQPS 实例30天内QPS峰值
                     * 
                     */
                    void SetMaxQPS(const uint64_t& _maxQPS);

                    /**
                     * 判断参数 MaxQPS 是否已赋值
                     * @return MaxQPS 是否已赋值
                     * 
                     */
                    bool MaxQPSHasBeenSet() const;

                    /**
                     * 获取qps扩展包信息
                     * @return QPS qps扩展包信息
                     * 
                     */
                    QPSPackageNew GetQPS() const;

                    /**
                     * 设置qps扩展包信息
                     * @param _qPS qps扩展包信息
                     * 
                     */
                    void SetQPS(const QPSPackageNew& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     * 
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取域名扩展包信息
                     * @return DomainPkg 域名扩展包信息
                     * 
                     */
                    DomainPackageNew GetDomainPkg() const;

                    /**
                     * 设置域名扩展包信息
                     * @param _domainPkg 域名扩展包信息
                     * 
                     */
                    void SetDomainPkg(const DomainPackageNew& _domainPkg);

                    /**
                     * 判断参数 DomainPkg 是否已赋值
                     * @return DomainPkg 是否已赋值
                     * 
                     */
                    bool DomainPkgHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取clb或saas
                     * @return Edition clb或saas
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置clb或saas
                     * @param _edition clb或saas
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取业务安全包
                     * @return FraudPkg 业务安全包
                     * 
                     */
                    FraudPkg GetFraudPkg() const;

                    /**
                     * 设置业务安全包
                     * @param _fraudPkg 业务安全包
                     * 
                     */
                    void SetFraudPkg(const FraudPkg& _fraudPkg);

                    /**
                     * 判断参数 FraudPkg 是否已赋值
                     * @return FraudPkg 是否已赋值
                     * 
                     */
                    bool FraudPkgHasBeenSet() const;

                    /**
                     * 获取Bot资源包
                     * @return BotPkg Bot资源包
                     * 
                     */
                    BotPkg GetBotPkg() const;

                    /**
                     * 设置Bot资源包
                     * @param _botPkg Bot资源包
                     * 
                     */
                    void SetBotPkg(const BotPkg& _botPkg);

                    /**
                     * 判断参数 BotPkg 是否已赋值
                     * @return BotPkg 是否已赋值
                     * 
                     */
                    bool BotPkgHasBeenSet() const;

                    /**
                     * 获取bot的qps详情
                     * @return BotQPS bot的qps详情
                     * 
                     */
                    BotQPS GetBotQPS() const;

                    /**
                     * 设置bot的qps详情
                     * @param _botQPS bot的qps详情
                     * 
                     */
                    void SetBotQPS(const BotQPS& _botQPS);

                    /**
                     * 判断参数 BotQPS 是否已赋值
                     * @return BotQPS 是否已赋值
                     * 
                     */
                    bool BotQPSHasBeenSet() const;

                    /**
                     * 获取qps弹性计费上限
                     * @return ElasticBilling qps弹性计费上限
                     * 
                     */
                    uint64_t GetElasticBilling() const;

                    /**
                     * 设置qps弹性计费上限
                     * @param _elasticBilling qps弹性计费上限
                     * 
                     */
                    void SetElasticBilling(const uint64_t& _elasticBilling);

                    /**
                     * 判断参数 ElasticBilling 是否已赋值
                     * @return ElasticBilling 是否已赋值
                     * 
                     */
                    bool ElasticBillingHasBeenSet() const;

                    /**
                     * 获取攻击日志投递开关
                     * @return AttackLogPost 攻击日志投递开关
                     * 
                     */
                    int64_t GetAttackLogPost() const;

                    /**
                     * 设置攻击日志投递开关
                     * @param _attackLogPost 攻击日志投递开关
                     * 
                     */
                    void SetAttackLogPost(const int64_t& _attackLogPost);

                    /**
                     * 判断参数 AttackLogPost 是否已赋值
                     * @return AttackLogPost 是否已赋值
                     * 
                     */
                    bool AttackLogPostHasBeenSet() const;

                    /**
                     * 获取带宽峰值，单位为B/s(字节每秒)
                     * @return MaxBandwidth 带宽峰值，单位为B/s(字节每秒)
                     * 
                     */
                    uint64_t GetMaxBandwidth() const;

                    /**
                     * 设置带宽峰值，单位为B/s(字节每秒)
                     * @param _maxBandwidth 带宽峰值，单位为B/s(字节每秒)
                     * 
                     */
                    void SetMaxBandwidth(const uint64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取api安全是否购买
                     * @return APISecurity api安全是否购买
                     * 
                     */
                    uint64_t GetAPISecurity() const;

                    /**
                     * 设置api安全是否购买
                     * @param _aPISecurity api安全是否购买
                     * 
                     */
                    void SetAPISecurity(const uint64_t& _aPISecurity);

                    /**
                     * 判断参数 APISecurity 是否已赋值
                     * @return APISecurity 是否已赋值
                     * 
                     */
                    bool APISecurityHasBeenSet() const;

                    /**
                     * 获取购买的qps规格
                     * @return QpsStandard 购买的qps规格
                     * 
                     */
                    uint64_t GetQpsStandard() const;

                    /**
                     * 设置购买的qps规格
                     * @param _qpsStandard 购买的qps规格
                     * 
                     */
                    void SetQpsStandard(const uint64_t& _qpsStandard);

                    /**
                     * 判断参数 QpsStandard 是否已赋值
                     * @return QpsStandard 是否已赋值
                     * 
                     */
                    bool QpsStandardHasBeenSet() const;

                    /**
                     * 获取购买的带宽规格
                     * @return BandwidthStandard 购买的带宽规格
                     * 
                     */
                    uint64_t GetBandwidthStandard() const;

                    /**
                     * 设置购买的带宽规格
                     * @param _bandwidthStandard 购买的带宽规格
                     * 
                     */
                    void SetBandwidthStandard(const uint64_t& _bandwidthStandard);

                    /**
                     * 判断参数 BandwidthStandard 是否已赋值
                     * @return BandwidthStandard 是否已赋值
                     * 
                     */
                    bool BandwidthStandardHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例沙箱qps值
                     * @return SandboxQps 实例沙箱qps值
                     * 
                     */
                    uint64_t GetSandboxQps() const;

                    /**
                     * 设置实例沙箱qps值
                     * @param _sandboxQps 实例沙箱qps值
                     * 
                     */
                    void SetSandboxQps(const uint64_t& _sandboxQps);

                    /**
                     * 判断参数 SandboxQps 是否已赋值
                     * @return SandboxQps 是否已赋值
                     * 
                     */
                    bool SandboxQpsHasBeenSet() const;

                    /**
                     * 获取是否api 安全试用
                     * @return IsAPISecurityTrial 是否api 安全试用
                     * 
                     */
                    uint64_t GetIsAPISecurityTrial() const;

                    /**
                     * 设置是否api 安全试用
                     * @param _isAPISecurityTrial 是否api 安全试用
                     * 
                     */
                    void SetIsAPISecurityTrial(const uint64_t& _isAPISecurityTrial);

                    /**
                     * 判断参数 IsAPISecurityTrial 是否已赋值
                     * @return IsAPISecurityTrial 是否已赋值
                     * 
                     */
                    bool IsAPISecurityTrialHasBeenSet() const;

                    /**
                     * 获取重保包
                     * @return MajorEventsPkg 重保包
                     * 
                     */
                    MajorEventsPkg GetMajorEventsPkg() const;

                    /**
                     * 设置重保包
                     * @param _majorEventsPkg 重保包
                     * 
                     */
                    void SetMajorEventsPkg(const MajorEventsPkg& _majorEventsPkg);

                    /**
                     * 判断参数 MajorEventsPkg 是否已赋值
                     * @return MajorEventsPkg 是否已赋值
                     * 
                     */
                    bool MajorEventsPkgHasBeenSet() const;

                    /**
                     * 获取混合云子节点包
                     * @return HybridPkg 混合云子节点包
                     * 
                     */
                    HybridPkg GetHybridPkg() const;

                    /**
                     * 设置混合云子节点包
                     * @param _hybridPkg 混合云子节点包
                     * 
                     */
                    void SetHybridPkg(const HybridPkg& _hybridPkg);

                    /**
                     * 判断参数 HybridPkg 是否已赋值
                     * @return HybridPkg 是否已赋值
                     * 
                     */
                    bool HybridPkgHasBeenSet() const;

                    /**
                     * 获取API安全资源包
                     * @return ApiPkg API安全资源包
                     * 
                     */
                    ApiPkg GetApiPkg() const;

                    /**
                     * 设置API安全资源包
                     * @param _apiPkg API安全资源包
                     * 
                     */
                    void SetApiPkg(const ApiPkg& _apiPkg);

                    /**
                     * 判断参数 ApiPkg 是否已赋值
                     * @return ApiPkg 是否已赋值
                     * 
                     */
                    bool ApiPkgHasBeenSet() const;

                    /**
                     * 获取小程序安全加速包
                     * @return MiniPkg 小程序安全加速包
                     * 
                     */
                    MiniPkg GetMiniPkg() const;

                    /**
                     * 设置小程序安全加速包
                     * @param _miniPkg 小程序安全加速包
                     * 
                     */
                    void SetMiniPkg(const MiniPkg& _miniPkg);

                    /**
                     * 判断参数 MiniPkg 是否已赋值
                     * @return MiniPkg 是否已赋值
                     * 
                     */
                    bool MiniPkgHasBeenSet() const;

                    /**
                     * 获取小程序qps规格
                     * @return MiniQpsStandard 小程序qps规格
                     * 
                     */
                    uint64_t GetMiniQpsStandard() const;

                    /**
                     * 设置小程序qps规格
                     * @param _miniQpsStandard 小程序qps规格
                     * 
                     */
                    void SetMiniQpsStandard(const uint64_t& _miniQpsStandard);

                    /**
                     * 判断参数 MiniQpsStandard 是否已赋值
                     * @return MiniQpsStandard 是否已赋值
                     * 
                     */
                    bool MiniQpsStandardHasBeenSet() const;

                    /**
                     * 获取小程序qps峰值
                     * @return MiniMaxQPS 小程序qps峰值
                     * 
                     */
                    uint64_t GetMiniMaxQPS() const;

                    /**
                     * 设置小程序qps峰值
                     * @param _miniMaxQPS 小程序qps峰值
                     * 
                     */
                    void SetMiniMaxQPS(const uint64_t& _miniMaxQPS);

                    /**
                     * 判断参数 MiniMaxQPS 是否已赋值
                     * @return MiniMaxQPS 是否已赋值
                     * 
                     */
                    bool MiniMaxQPSHasBeenSet() const;

                    /**
                     * 获取最近一次超量时间
                     * @return LastQpsExceedTime 最近一次超量时间
                     * 
                     */
                    std::string GetLastQpsExceedTime() const;

                    /**
                     * 设置最近一次超量时间
                     * @param _lastQpsExceedTime 最近一次超量时间
                     * 
                     */
                    void SetLastQpsExceedTime(const std::string& _lastQpsExceedTime);

                    /**
                     * 判断参数 LastQpsExceedTime 是否已赋值
                     * @return LastQpsExceedTime 是否已赋值
                     * 
                     */
                    bool LastQpsExceedTimeHasBeenSet() const;

                    /**
                     * 获取小程序安全接入ID数量扩张包
                     * @return MiniExtendPkg 小程序安全接入ID数量扩张包
                     * 
                     */
                    MiniExtendPkg GetMiniExtendPkg() const;

                    /**
                     * 设置小程序安全接入ID数量扩张包
                     * @param _miniExtendPkg 小程序安全接入ID数量扩张包
                     * 
                     */
                    void SetMiniExtendPkg(const MiniExtendPkg& _miniExtendPkg);

                    /**
                     * 判断参数 MiniExtendPkg 是否已赋值
                     * @return MiniExtendPkg 是否已赋值
                     * 
                     */
                    bool MiniExtendPkgHasBeenSet() const;

                    /**
                     * 获取计费项
                     * @return BillingItem 计费项
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置计费项
                     * @param _billingItem 计费项
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取实例延期释放标识
                     * @return FreeDelayFlag 实例延期释放标识
                     * 
                     */
                    uint64_t GetFreeDelayFlag() const;

                    /**
                     * 设置实例延期释放标识
                     * @param _freeDelayFlag 实例延期释放标识
                     * 
                     */
                    void SetFreeDelayFlag(const uint64_t& _freeDelayFlag);

                    /**
                     * 判断参数 FreeDelayFlag 是否已赋值
                     * @return FreeDelayFlag 是否已赋值
                     * 
                     */
                    bool FreeDelayFlagHasBeenSet() const;

                    /**
                     * 获取最近3天最大qps
                     * @return Last3MaxQPS 最近3天最大qps
                     * 
                     */
                    uint64_t GetLast3MaxQPS() const;

                    /**
                     * 设置最近3天最大qps
                     * @param _last3MaxQPS 最近3天最大qps
                     * 
                     */
                    void SetLast3MaxQPS(const uint64_t& _last3MaxQPS);

                    /**
                     * 判断参数 Last3MaxQPS 是否已赋值
                     * @return Last3MaxQPS 是否已赋值
                     * 
                     */
                    bool Last3MaxQPSHasBeenSet() const;

                    /**
                     * 获取最近3天最大带宽
                     * @return Last3MaxBandwidth 最近3天最大带宽
                     * 
                     */
                    uint64_t GetLast3MaxBandwidth() const;

                    /**
                     * 设置最近3天最大带宽
                     * @param _last3MaxBandwidth 最近3天最大带宽
                     * 
                     */
                    void SetLast3MaxBandwidth(const uint64_t& _last3MaxBandwidth);

                    /**
                     * 判断参数 Last3MaxBandwidth 是否已赋值
                     * @return Last3MaxBandwidth 是否已赋值
                     * 
                     */
                    bool Last3MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取重保增强包
                     * @return MajorEventsProPkg 重保增强包
                     * 
                     */
                    MajorEventsProPkg GetMajorEventsProPkg() const;

                    /**
                     * 设置重保增强包
                     * @param _majorEventsProPkg 重保增强包
                     * 
                     */
                    void SetMajorEventsProPkg(const MajorEventsProPkg& _majorEventsProPkg);

                    /**
                     * 判断参数 MajorEventsProPkg 是否已赋值
                     * @return MajorEventsProPkg 是否已赋值
                     * 
                     */
                    bool MajorEventsProPkgHasBeenSet() const;

                    /**
                     * 获取1是基础2025版本；0不是
                     * @return BasicFlag 1是基础2025版本；0不是
                     * 
                     */
                    uint64_t GetBasicFlag() const;

                    /**
                     * 设置1是基础2025版本；0不是
                     * @param _basicFlag 1是基础2025版本；0不是
                     * 
                     */
                    void SetBasicFlag(const uint64_t& _basicFlag);

                    /**
                     * 判断参数 BasicFlag 是否已赋值
                     * @return BasicFlag 是否已赋值
                     * 
                     */
                    bool BasicFlagHasBeenSet() const;

                private:

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例对应资源ID，计费使用
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 付费模式
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费标识。
0：关闭
1：开启
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 弹性计费开关。
0：关闭
1：开启
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 实例套餐版本。
101：小微版
102：超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 实例开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 已配置域名个数
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 域名数量上限
                     */
                    uint64_t m_subDomainLimit;
                    bool m_subDomainLimitHasBeenSet;

                    /**
                     * 已配置主域名个数
                     */
                    uint64_t m_mainDomainCount;
                    bool m_mainDomainCountHasBeenSet;

                    /**
                     * 主域名数量上限
                     */
                    uint64_t m_mainDomainLimit;
                    bool m_mainDomainLimitHasBeenSet;

                    /**
                     * 实例30天内QPS峰值
                     */
                    uint64_t m_maxQPS;
                    bool m_maxQPSHasBeenSet;

                    /**
                     * qps扩展包信息
                     */
                    QPSPackageNew m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * 域名扩展包信息
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
                     */
                    FraudPkg m_fraudPkg;
                    bool m_fraudPkgHasBeenSet;

                    /**
                     * Bot资源包
                     */
                    BotPkg m_botPkg;
                    bool m_botPkgHasBeenSet;

                    /**
                     * bot的qps详情
                     */
                    BotQPS m_botQPS;
                    bool m_botQPSHasBeenSet;

                    /**
                     * qps弹性计费上限
                     */
                    uint64_t m_elasticBilling;
                    bool m_elasticBillingHasBeenSet;

                    /**
                     * 攻击日志投递开关
                     */
                    int64_t m_attackLogPost;
                    bool m_attackLogPostHasBeenSet;

                    /**
                     * 带宽峰值，单位为B/s(字节每秒)
                     */
                    uint64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * api安全是否购买
                     */
                    uint64_t m_aPISecurity;
                    bool m_aPISecurityHasBeenSet;

                    /**
                     * 购买的qps规格
                     */
                    uint64_t m_qpsStandard;
                    bool m_qpsStandardHasBeenSet;

                    /**
                     * 购买的带宽规格
                     */
                    uint64_t m_bandwidthStandard;
                    bool m_bandwidthStandardHasBeenSet;

                    /**
                     * 实例状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例沙箱qps值
                     */
                    uint64_t m_sandboxQps;
                    bool m_sandboxQpsHasBeenSet;

                    /**
                     * 是否api 安全试用
                     */
                    uint64_t m_isAPISecurityTrial;
                    bool m_isAPISecurityTrialHasBeenSet;

                    /**
                     * 重保包
                     */
                    MajorEventsPkg m_majorEventsPkg;
                    bool m_majorEventsPkgHasBeenSet;

                    /**
                     * 混合云子节点包
                     */
                    HybridPkg m_hybridPkg;
                    bool m_hybridPkgHasBeenSet;

                    /**
                     * API安全资源包
                     */
                    ApiPkg m_apiPkg;
                    bool m_apiPkgHasBeenSet;

                    /**
                     * 小程序安全加速包
                     */
                    MiniPkg m_miniPkg;
                    bool m_miniPkgHasBeenSet;

                    /**
                     * 小程序qps规格
                     */
                    uint64_t m_miniQpsStandard;
                    bool m_miniQpsStandardHasBeenSet;

                    /**
                     * 小程序qps峰值
                     */
                    uint64_t m_miniMaxQPS;
                    bool m_miniMaxQPSHasBeenSet;

                    /**
                     * 最近一次超量时间
                     */
                    std::string m_lastQpsExceedTime;
                    bool m_lastQpsExceedTimeHasBeenSet;

                    /**
                     * 小程序安全接入ID数量扩张包
                     */
                    MiniExtendPkg m_miniExtendPkg;
                    bool m_miniExtendPkgHasBeenSet;

                    /**
                     * 计费项
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * 实例延期释放标识
                     */
                    uint64_t m_freeDelayFlag;
                    bool m_freeDelayFlagHasBeenSet;

                    /**
                     * 最近3天最大qps
                     */
                    uint64_t m_last3MaxQPS;
                    bool m_last3MaxQPSHasBeenSet;

                    /**
                     * 最近3天最大带宽
                     */
                    uint64_t m_last3MaxBandwidth;
                    bool m_last3MaxBandwidthHasBeenSet;

                    /**
                     * 重保增强包
                     */
                    MajorEventsProPkg m_majorEventsProPkg;
                    bool m_majorEventsProPkgHasBeenSet;

                    /**
                     * 1是基础2025版本；0不是
                     */
                    uint64_t m_basicFlag;
                    bool m_basicFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_
