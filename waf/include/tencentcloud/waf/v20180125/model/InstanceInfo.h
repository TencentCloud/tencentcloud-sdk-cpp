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
#include <tencentcloud/waf/v20180125/model/NetworkConfig.h>
#include <tencentcloud/waf/v20180125/model/RCEPkg.h>
#include <tencentcloud/waf/v20180125/model/LLMPkg.h>
#include <tencentcloud/waf/v20180125/model/LLMMonPkg.h>
#include <tencentcloud/waf/v20180125/model/BotSecurityPkg.h>
#include <tencentcloud/waf/v20180125/model/BotMonitorPkg.h>
#include <tencentcloud/waf/v20180125/model/DedicatedIPPkg.h>
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


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
                     * 获取<p>实例唯一ID</p>
                     * @return InstanceId <p>实例唯一ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例唯一ID</p>
                     * @param _instanceId <p>实例唯一ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例对应资源ID，计费使用</p>
                     * @return ResourceIds <p>实例对应资源ID，计费使用</p>
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置<p>实例对应资源ID，计费使用</p>
                     * @param _resourceIds <p>实例对应资源ID，计费使用</p>
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
                     * 获取<p>实例所属地域</p>
                     * @return Region <p>实例所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所属地域</p>
                     * @param _region <p>实例所属地域</p>
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
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
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
                     * 获取<p>自动续费标识。<br>0：关闭<br>1：开启</p>
                     * @return RenewFlag <p>自动续费标识。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。<br>0：关闭<br>1：开启</p>
                     * @param _renewFlag <p>自动续费标识。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>弹性计费开关。<br>0：关闭<br>1：开启</p>
                     * @return Mode <p>弹性计费开关。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置<p>弹性计费开关。<br>0：关闭<br>1：开启</p>
                     * @param _mode <p>弹性计费开关。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>实例套餐版本。<br>101：小微版<br>102：超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * @return Level <p>实例套餐版本。<br>101：小微版<br>102：超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置<p>实例套餐版本。<br>101：小微版<br>102：超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * @param _level <p>实例套餐版本。<br>101：小微版<br>102：超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
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
                     * 获取<p>实例过期时间</p>
                     * @return ValidTime <p>实例过期时间</p>
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置<p>实例过期时间</p>
                     * @param _validTime <p>实例过期时间</p>
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
                     * 获取<p>实例开始时间</p>
                     * @return BeginTime <p>实例开始时间</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>实例开始时间</p>
                     * @param _beginTime <p>实例开始时间</p>
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
                     * 获取<p>已配置域名个数</p>
                     * @return DomainCount <p>已配置域名个数</p>
                     * 
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置<p>已配置域名个数</p>
                     * @param _domainCount <p>已配置域名个数</p>
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
                     * 获取<p>域名数量上限</p>
                     * @return SubDomainLimit <p>域名数量上限</p>
                     * 
                     */
                    uint64_t GetSubDomainLimit() const;

                    /**
                     * 设置<p>域名数量上限</p>
                     * @param _subDomainLimit <p>域名数量上限</p>
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
                     * 获取<p>已配置主域名个数</p>
                     * @return MainDomainCount <p>已配置主域名个数</p>
                     * 
                     */
                    uint64_t GetMainDomainCount() const;

                    /**
                     * 设置<p>已配置主域名个数</p>
                     * @param _mainDomainCount <p>已配置主域名个数</p>
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
                     * 获取<p>主域名数量上限</p>
                     * @return MainDomainLimit <p>主域名数量上限</p>
                     * 
                     */
                    uint64_t GetMainDomainLimit() const;

                    /**
                     * 设置<p>主域名数量上限</p>
                     * @param _mainDomainLimit <p>主域名数量上限</p>
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
                     * 获取<p>实例30天内QPS峰值</p>
                     * @return MaxQPS <p>实例30天内QPS峰值</p>
                     * 
                     */
                    uint64_t GetMaxQPS() const;

                    /**
                     * 设置<p>实例30天内QPS峰值</p>
                     * @param _maxQPS <p>实例30天内QPS峰值</p>
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
                     * 获取<p>qps扩展包信息</p>
                     * @return QPS <p>qps扩展包信息</p>
                     * 
                     */
                    QPSPackageNew GetQPS() const;

                    /**
                     * 设置<p>qps扩展包信息</p>
                     * @param _qPS <p>qps扩展包信息</p>
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
                     * 获取<p>域名扩展包信息</p>
                     * @return DomainPkg <p>域名扩展包信息</p>
                     * 
                     */
                    DomainPackageNew GetDomainPkg() const;

                    /**
                     * 设置<p>域名扩展包信息</p>
                     * @param _domainPkg <p>域名扩展包信息</p>
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
                     * 获取<p>用户appid</p>
                     * @return AppId <p>用户appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户appid</p>
                     * @param _appId <p>用户appid</p>
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
                     * 获取<p>clb或saas</p>
                     * @return Edition <p>clb或saas</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>clb或saas</p>
                     * @param _edition <p>clb或saas</p>
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
                     * 获取<p>业务安全包</p>
                     * @return FraudPkg <p>业务安全包</p>
                     * 
                     */
                    FraudPkg GetFraudPkg() const;

                    /**
                     * 设置<p>业务安全包</p>
                     * @param _fraudPkg <p>业务安全包</p>
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
                     * 获取<p>Bot资源包</p>
                     * @return BotPkg <p>Bot资源包</p>
                     * 
                     */
                    BotPkg GetBotPkg() const;

                    /**
                     * 设置<p>Bot资源包</p>
                     * @param _botPkg <p>Bot资源包</p>
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
                     * 获取<p>bot的qps详情</p>
                     * @return BotQPS <p>bot的qps详情</p>
                     * 
                     */
                    BotQPS GetBotQPS() const;

                    /**
                     * 设置<p>bot的qps详情</p>
                     * @param _botQPS <p>bot的qps详情</p>
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
                     * 获取<p>qps弹性计费上限</p>
                     * @return ElasticBilling <p>qps弹性计费上限</p>
                     * 
                     */
                    uint64_t GetElasticBilling() const;

                    /**
                     * 设置<p>qps弹性计费上限</p>
                     * @param _elasticBilling <p>qps弹性计费上限</p>
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
                     * 获取<p>攻击日志投递开关</p>
                     * @return AttackLogPost <p>攻击日志投递开关</p>
                     * 
                     */
                    int64_t GetAttackLogPost() const;

                    /**
                     * 设置<p>攻击日志投递开关</p>
                     * @param _attackLogPost <p>攻击日志投递开关</p>
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
                     * 获取<p>带宽峰值，单位为B/s(字节每秒)</p>
                     * @return MaxBandwidth <p>带宽峰值，单位为B/s(字节每秒)</p>
                     * 
                     */
                    uint64_t GetMaxBandwidth() const;

                    /**
                     * 设置<p>带宽峰值，单位为B/s(字节每秒)</p>
                     * @param _maxBandwidth <p>带宽峰值，单位为B/s(字节每秒)</p>
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
                     * 获取<p>api安全是否购买</p>
                     * @return APISecurity <p>api安全是否购买</p>
                     * 
                     */
                    uint64_t GetAPISecurity() const;

                    /**
                     * 设置<p>api安全是否购买</p>
                     * @param _aPISecurity <p>api安全是否购买</p>
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
                     * 获取<p>购买的qps规格</p>
                     * @return QpsStandard <p>购买的qps规格</p>
                     * 
                     */
                    uint64_t GetQpsStandard() const;

                    /**
                     * 设置<p>购买的qps规格</p>
                     * @param _qpsStandard <p>购买的qps规格</p>
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
                     * 获取<p>购买的带宽规格</p>
                     * @return BandwidthStandard <p>购买的带宽规格</p>
                     * 
                     */
                    uint64_t GetBandwidthStandard() const;

                    /**
                     * 设置<p>购买的带宽规格</p>
                     * @param _bandwidthStandard <p>购买的带宽规格</p>
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
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _status <p>实例状态</p>
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
                     * 获取<p>实例沙箱qps值</p>
                     * @return SandboxQps <p>实例沙箱qps值</p>
                     * 
                     */
                    uint64_t GetSandboxQps() const;

                    /**
                     * 设置<p>实例沙箱qps值</p>
                     * @param _sandboxQps <p>实例沙箱qps值</p>
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
                     * 获取<p>是否api 安全试用</p>
                     * @return IsAPISecurityTrial <p>是否api 安全试用</p>
                     * 
                     */
                    uint64_t GetIsAPISecurityTrial() const;

                    /**
                     * 设置<p>是否api 安全试用</p>
                     * @param _isAPISecurityTrial <p>是否api 安全试用</p>
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
                     * 获取<p>重保包</p>
                     * @return MajorEventsPkg <p>重保包</p>
                     * 
                     */
                    MajorEventsPkg GetMajorEventsPkg() const;

                    /**
                     * 设置<p>重保包</p>
                     * @param _majorEventsPkg <p>重保包</p>
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
                     * 获取<p>混合云子节点包</p>
                     * @return HybridPkg <p>混合云子节点包</p>
                     * 
                     */
                    HybridPkg GetHybridPkg() const;

                    /**
                     * 设置<p>混合云子节点包</p>
                     * @param _hybridPkg <p>混合云子节点包</p>
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
                     * 获取<p>API安全资源包</p>
                     * @return ApiPkg <p>API安全资源包</p>
                     * 
                     */
                    ApiPkg GetApiPkg() const;

                    /**
                     * 设置<p>API安全资源包</p>
                     * @param _apiPkg <p>API安全资源包</p>
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
                     * 获取<p>小程序安全加速包</p>
                     * @return MiniPkg <p>小程序安全加速包</p>
                     * 
                     */
                    MiniPkg GetMiniPkg() const;

                    /**
                     * 设置<p>小程序安全加速包</p>
                     * @param _miniPkg <p>小程序安全加速包</p>
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
                     * 获取<p>小程序qps规格</p>
                     * @return MiniQpsStandard <p>小程序qps规格</p>
                     * 
                     */
                    uint64_t GetMiniQpsStandard() const;

                    /**
                     * 设置<p>小程序qps规格</p>
                     * @param _miniQpsStandard <p>小程序qps规格</p>
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
                     * 获取<p>小程序qps峰值</p>
                     * @return MiniMaxQPS <p>小程序qps峰值</p>
                     * 
                     */
                    uint64_t GetMiniMaxQPS() const;

                    /**
                     * 设置<p>小程序qps峰值</p>
                     * @param _miniMaxQPS <p>小程序qps峰值</p>
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
                     * 获取<p>最近一次超量时间</p>
                     * @return LastQpsExceedTime <p>最近一次超量时间</p>
                     * 
                     */
                    std::string GetLastQpsExceedTime() const;

                    /**
                     * 设置<p>最近一次超量时间</p>
                     * @param _lastQpsExceedTime <p>最近一次超量时间</p>
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
                     * 获取<p>小程序安全接入ID数量扩张包</p>
                     * @return MiniExtendPkg <p>小程序安全接入ID数量扩张包</p>
                     * 
                     */
                    MiniExtendPkg GetMiniExtendPkg() const;

                    /**
                     * 设置<p>小程序安全接入ID数量扩张包</p>
                     * @param _miniExtendPkg <p>小程序安全接入ID数量扩张包</p>
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
                     * 获取<p>计费项</p>
                     * @return BillingItem <p>计费项</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>计费项</p>
                     * @param _billingItem <p>计费项</p>
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
                     * 获取<p>实例延期释放标识</p>
                     * @return FreeDelayFlag <p>实例延期释放标识</p>
                     * 
                     */
                    uint64_t GetFreeDelayFlag() const;

                    /**
                     * 设置<p>实例延期释放标识</p>
                     * @param _freeDelayFlag <p>实例延期释放标识</p>
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
                     * 获取<p>最近3天最大qps</p>
                     * @return Last3MaxQPS <p>最近3天最大qps</p>
                     * 
                     */
                    uint64_t GetLast3MaxQPS() const;

                    /**
                     * 设置<p>最近3天最大qps</p>
                     * @param _last3MaxQPS <p>最近3天最大qps</p>
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
                     * 获取<p>最近3天最大带宽</p>
                     * @return Last3MaxBandwidth <p>最近3天最大带宽</p>
                     * 
                     */
                    uint64_t GetLast3MaxBandwidth() const;

                    /**
                     * 设置<p>最近3天最大带宽</p>
                     * @param _last3MaxBandwidth <p>最近3天最大带宽</p>
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
                     * 获取<p>重保增强包</p>
                     * @return MajorEventsProPkg <p>重保增强包</p>
                     * 
                     */
                    MajorEventsProPkg GetMajorEventsProPkg() const;

                    /**
                     * 设置<p>重保增强包</p>
                     * @param _majorEventsProPkg <p>重保增强包</p>
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
                     * 获取<p>1是基础2025版本；0不是</p>
                     * @return BasicFlag <p>1是基础2025版本；0不是</p>
                     * 
                     */
                    uint64_t GetBasicFlag() const;

                    /**
                     * 设置<p>1是基础2025版本；0不是</p>
                     * @param _basicFlag <p>1是基础2025版本；0不是</p>
                     * 
                     */
                    void SetBasicFlag(const uint64_t& _basicFlag);

                    /**
                     * 判断参数 BasicFlag 是否已赋值
                     * @return BasicFlag 是否已赋值
                     * 
                     */
                    bool BasicFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例的网络配置</p>
                     * @return NetworkConfig <p>实例的网络配置</p>
                     * 
                     */
                    NetworkConfig GetNetworkConfig() const;

                    /**
                     * 设置<p>实例的网络配置</p>
                     * @param _networkConfig <p>实例的网络配置</p>
                     * 
                     */
                    void SetNetworkConfig(const NetworkConfig& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     * 
                     */
                    bool NetworkConfigHasBeenSet() const;

                    /**
                     * 获取<p>RCE设备安全信息包</p>
                     * @return RCEPkg <p>RCE设备安全信息包</p>
                     * 
                     */
                    RCEPkg GetRCEPkg() const;

                    /**
                     * 设置<p>RCE设备安全信息包</p>
                     * @param _rCEPkg <p>RCE设备安全信息包</p>
                     * 
                     */
                    void SetRCEPkg(const RCEPkg& _rCEPkg);

                    /**
                     * 判断参数 RCEPkg 是否已赋值
                     * @return RCEPkg 是否已赋值
                     * 
                     */
                    bool RCEPkgHasBeenSet() const;

                    /**
                     * 获取<p>超量策略。0：超量沙箱<br>1：超量限流</p>
                     * @return ExceedPolicy <p>超量策略。0：超量沙箱<br>1：超量限流</p>
                     * 
                     */
                    int64_t GetExceedPolicy() const;

                    /**
                     * 设置<p>超量策略。0：超量沙箱<br>1：超量限流</p>
                     * @param _exceedPolicy <p>超量策略。0：超量沙箱<br>1：超量限流</p>
                     * 
                     */
                    void SetExceedPolicy(const int64_t& _exceedPolicy);

                    /**
                     * 判断参数 ExceedPolicy 是否已赋值
                     * @return ExceedPolicy 是否已赋值
                     * 
                     */
                    bool ExceedPolicyHasBeenSet() const;

                    /**
                     * 获取<p>大模型安全信息包</p>
                     * @return LLMPkg <p>大模型安全信息包</p>
                     * 
                     */
                    LLMPkg GetLLMPkg() const;

                    /**
                     * 设置<p>大模型安全信息包</p>
                     * @param _lLMPkg <p>大模型安全信息包</p>
                     * 
                     */
                    void SetLLMPkg(const LLMPkg& _lLMPkg);

                    /**
                     * 判断参数 LLMPkg 是否已赋值
                     * @return LLMPkg 是否已赋值
                     * 
                     */
                    bool LLMPkgHasBeenSet() const;

                    /**
                     * 获取<p>弹性资源Id</p>
                     * @return ElasticResourceId <p>弹性资源Id</p>
                     * 
                     */
                    std::string GetElasticResourceId() const;

                    /**
                     * 设置<p>弹性资源Id</p>
                     * @param _elasticResourceId <p>弹性资源Id</p>
                     * 
                     */
                    void SetElasticResourceId(const std::string& _elasticResourceId);

                    /**
                     * 判断参数 ElasticResourceId 是否已赋值
                     * @return ElasticResourceId 是否已赋值
                     * 
                     */
                    bool ElasticResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>预付费大模型安全信息包</p>
                     * @return LLMMonPkg <p>预付费大模型安全信息包</p>
                     * 
                     */
                    LLMMonPkg GetLLMMonPkg() const;

                    /**
                     * 设置<p>预付费大模型安全信息包</p>
                     * @param _lLMMonPkg <p>预付费大模型安全信息包</p>
                     * 
                     */
                    void SetLLMMonPkg(const LLMMonPkg& _lLMMonPkg);

                    /**
                     * 判断参数 LLMMonPkg 是否已赋值
                     * @return LLMMonPkg 是否已赋值
                     * 
                     */
                    bool LLMMonPkgHasBeenSet() const;

                    /**
                     * 获取<p>地域id</p>
                     * @return RegionId <p>地域id</p>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置<p>地域id</p>
                     * @param _regionId <p>地域id</p>
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>BOT安全护航信息</p>
                     * @return BotSecurityPkg <p>BOT安全护航信息</p>
                     * 
                     */
                    BotSecurityPkg GetBotSecurityPkg() const;

                    /**
                     * 设置<p>BOT安全护航信息</p>
                     * @param _botSecurityPkg <p>BOT安全护航信息</p>
                     * 
                     */
                    void SetBotSecurityPkg(const BotSecurityPkg& _botSecurityPkg);

                    /**
                     * 判断参数 BotSecurityPkg 是否已赋值
                     * @return BotSecurityPkg 是否已赋值
                     * 
                     */
                    bool BotSecurityPkgHasBeenSet() const;

                    /**
                     * 获取<p>BOT安全监测资源信息</p>
                     * @return BotMonitorPkg <p>BOT安全监测资源信息</p>
                     * 
                     */
                    BotMonitorPkg GetBotMonitorPkg() const;

                    /**
                     * 设置<p>BOT安全监测资源信息</p>
                     * @param _botMonitorPkg <p>BOT安全监测资源信息</p>
                     * 
                     */
                    void SetBotMonitorPkg(const BotMonitorPkg& _botMonitorPkg);

                    /**
                     * 判断参数 BotMonitorPkg 是否已赋值
                     * @return BotMonitorPkg 是否已赋值
                     * 
                     */
                    bool BotMonitorPkgHasBeenSet() const;

                    /**
                     * 获取<p>独享ip资源信息</p>
                     * @return DedicatedIPPkg <p>独享ip资源信息</p>
                     * 
                     */
                    DedicatedIPPkg GetDedicatedIPPkg() const;

                    /**
                     * 设置<p>独享ip资源信息</p>
                     * @param _dedicatedIPPkg <p>独享ip资源信息</p>
                     * 
                     */
                    void SetDedicatedIPPkg(const DedicatedIPPkg& _dedicatedIPPkg);

                    /**
                     * 判断参数 DedicatedIPPkg 是否已赋值
                     * @return DedicatedIPPkg 是否已赋值
                     * 
                     */
                    bool DedicatedIPPkgHasBeenSet() const;

                    /**
                     * 获取<p>已经配置独享ip的数量</p>
                     * @return DedicatedIPCount <p>已经配置独享ip的数量</p>
                     * 
                     */
                    int64_t GetDedicatedIPCount() const;

                    /**
                     * 设置<p>已经配置独享ip的数量</p>
                     * @param _dedicatedIPCount <p>已经配置独享ip的数量</p>
                     * 
                     */
                    void SetDedicatedIPCount(const int64_t& _dedicatedIPCount);

                    /**
                     * 判断参数 DedicatedIPCount 是否已赋值
                     * @return DedicatedIPCount 是否已赋值
                     * 
                     */
                    bool DedicatedIPCountHasBeenSet() const;

                    /**
                     * 获取<p>标签结构体</p>
                     * @return TagInfos <p>标签结构体</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签结构体</p>
                     * @param _tagInfos <p>标签结构体</p>
                     * 
                     */
                    void SetTagInfos(const std::vector<TagInfo>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * 
                     */
                    bool TagInfosHasBeenSet() const;

                private:

                    /**
                     * <p>实例唯一ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例对应资源ID，计费使用</p>
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>自动续费标识。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>弹性计费开关。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>实例套餐版本。<br>101：小微版<br>102：超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>实例过期时间</p>
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * <p>实例开始时间</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>已配置域名个数</p>
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * <p>域名数量上限</p>
                     */
                    uint64_t m_subDomainLimit;
                    bool m_subDomainLimitHasBeenSet;

                    /**
                     * <p>已配置主域名个数</p>
                     */
                    uint64_t m_mainDomainCount;
                    bool m_mainDomainCountHasBeenSet;

                    /**
                     * <p>主域名数量上限</p>
                     */
                    uint64_t m_mainDomainLimit;
                    bool m_mainDomainLimitHasBeenSet;

                    /**
                     * <p>实例30天内QPS峰值</p>
                     */
                    uint64_t m_maxQPS;
                    bool m_maxQPSHasBeenSet;

                    /**
                     * <p>qps扩展包信息</p>
                     */
                    QPSPackageNew m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * <p>域名扩展包信息</p>
                     */
                    DomainPackageNew m_domainPkg;
                    bool m_domainPkgHasBeenSet;

                    /**
                     * <p>用户appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>clb或saas</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>业务安全包</p>
                     */
                    FraudPkg m_fraudPkg;
                    bool m_fraudPkgHasBeenSet;

                    /**
                     * <p>Bot资源包</p>
                     */
                    BotPkg m_botPkg;
                    bool m_botPkgHasBeenSet;

                    /**
                     * <p>bot的qps详情</p>
                     */
                    BotQPS m_botQPS;
                    bool m_botQPSHasBeenSet;

                    /**
                     * <p>qps弹性计费上限</p>
                     */
                    uint64_t m_elasticBilling;
                    bool m_elasticBillingHasBeenSet;

                    /**
                     * <p>攻击日志投递开关</p>
                     */
                    int64_t m_attackLogPost;
                    bool m_attackLogPostHasBeenSet;

                    /**
                     * <p>带宽峰值，单位为B/s(字节每秒)</p>
                     */
                    uint64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * <p>api安全是否购买</p>
                     */
                    uint64_t m_aPISecurity;
                    bool m_aPISecurityHasBeenSet;

                    /**
                     * <p>购买的qps规格</p>
                     */
                    uint64_t m_qpsStandard;
                    bool m_qpsStandardHasBeenSet;

                    /**
                     * <p>购买的带宽规格</p>
                     */
                    uint64_t m_bandwidthStandard;
                    bool m_bandwidthStandardHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例沙箱qps值</p>
                     */
                    uint64_t m_sandboxQps;
                    bool m_sandboxQpsHasBeenSet;

                    /**
                     * <p>是否api 安全试用</p>
                     */
                    uint64_t m_isAPISecurityTrial;
                    bool m_isAPISecurityTrialHasBeenSet;

                    /**
                     * <p>重保包</p>
                     */
                    MajorEventsPkg m_majorEventsPkg;
                    bool m_majorEventsPkgHasBeenSet;

                    /**
                     * <p>混合云子节点包</p>
                     */
                    HybridPkg m_hybridPkg;
                    bool m_hybridPkgHasBeenSet;

                    /**
                     * <p>API安全资源包</p>
                     */
                    ApiPkg m_apiPkg;
                    bool m_apiPkgHasBeenSet;

                    /**
                     * <p>小程序安全加速包</p>
                     */
                    MiniPkg m_miniPkg;
                    bool m_miniPkgHasBeenSet;

                    /**
                     * <p>小程序qps规格</p>
                     */
                    uint64_t m_miniQpsStandard;
                    bool m_miniQpsStandardHasBeenSet;

                    /**
                     * <p>小程序qps峰值</p>
                     */
                    uint64_t m_miniMaxQPS;
                    bool m_miniMaxQPSHasBeenSet;

                    /**
                     * <p>最近一次超量时间</p>
                     */
                    std::string m_lastQpsExceedTime;
                    bool m_lastQpsExceedTimeHasBeenSet;

                    /**
                     * <p>小程序安全接入ID数量扩张包</p>
                     */
                    MiniExtendPkg m_miniExtendPkg;
                    bool m_miniExtendPkgHasBeenSet;

                    /**
                     * <p>计费项</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>实例延期释放标识</p>
                     */
                    uint64_t m_freeDelayFlag;
                    bool m_freeDelayFlagHasBeenSet;

                    /**
                     * <p>最近3天最大qps</p>
                     */
                    uint64_t m_last3MaxQPS;
                    bool m_last3MaxQPSHasBeenSet;

                    /**
                     * <p>最近3天最大带宽</p>
                     */
                    uint64_t m_last3MaxBandwidth;
                    bool m_last3MaxBandwidthHasBeenSet;

                    /**
                     * <p>重保增强包</p>
                     */
                    MajorEventsProPkg m_majorEventsProPkg;
                    bool m_majorEventsProPkgHasBeenSet;

                    /**
                     * <p>1是基础2025版本；0不是</p>
                     */
                    uint64_t m_basicFlag;
                    bool m_basicFlagHasBeenSet;

                    /**
                     * <p>实例的网络配置</p>
                     */
                    NetworkConfig m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                    /**
                     * <p>RCE设备安全信息包</p>
                     */
                    RCEPkg m_rCEPkg;
                    bool m_rCEPkgHasBeenSet;

                    /**
                     * <p>超量策略。0：超量沙箱<br>1：超量限流</p>
                     */
                    int64_t m_exceedPolicy;
                    bool m_exceedPolicyHasBeenSet;

                    /**
                     * <p>大模型安全信息包</p>
                     */
                    LLMPkg m_lLMPkg;
                    bool m_lLMPkgHasBeenSet;

                    /**
                     * <p>弹性资源Id</p>
                     */
                    std::string m_elasticResourceId;
                    bool m_elasticResourceIdHasBeenSet;

                    /**
                     * <p>预付费大模型安全信息包</p>
                     */
                    LLMMonPkg m_lLMMonPkg;
                    bool m_lLMMonPkgHasBeenSet;

                    /**
                     * <p>地域id</p>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>BOT安全护航信息</p>
                     */
                    BotSecurityPkg m_botSecurityPkg;
                    bool m_botSecurityPkgHasBeenSet;

                    /**
                     * <p>BOT安全监测资源信息</p>
                     */
                    BotMonitorPkg m_botMonitorPkg;
                    bool m_botMonitorPkgHasBeenSet;

                    /**
                     * <p>独享ip资源信息</p>
                     */
                    DedicatedIPPkg m_dedicatedIPPkg;
                    bool m_dedicatedIPPkgHasBeenSet;

                    /**
                     * <p>已经配置独享ip的数量</p>
                     */
                    int64_t m_dedicatedIPCount;
                    bool m_dedicatedIPCountHasBeenSet;

                    /**
                     * <p>标签结构体</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_
