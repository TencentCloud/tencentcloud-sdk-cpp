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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_AFTERPAYINSTANCEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_AFTERPAYINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMPkg.h>
#include <tencentcloud/waf/v20180125/model/LLMTokenUsage.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 后付费实例（Edition=llm-sdk-waf）的基础信息，仅包含 tb_instance_conf 基础字段
                */
                class AfterPayInstanceInfo : public AbstractModel
                {
                public:
                    AfterPayInstanceInfo();
                    ~AfterPayInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>实例版本，后付费实例固定为 llm-sdk-waf</p>
                     * @return Edition <p>实例版本，后付费实例固定为 llm-sdk-waf</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>实例版本，后付费实例固定为 llm-sdk-waf</p>
                     * @param _edition <p>实例版本，后付费实例固定为 llm-sdk-waf</p>
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
                     * 获取<p>付费模式，后付费实例为 0</p>
                     * @return PayMode <p>付费模式，后付费实例为 0</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式，后付费实例为 0</p>
                     * @param _payMode <p>付费模式，后付费实例为 0</p>
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
                     * 获取<p>实例套餐版本</p>
                     * @return Level <p>实例套餐版本</p>
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置<p>实例套餐版本</p>
                     * @param _level <p>实例套餐版本</p>
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
                     * 获取<p>实例修改时间</p>
                     * @return ModifyTime <p>实例修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>实例修改时间</p>
                     * @param _modifyTime <p>实例修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * 获取<p>大模型安全「后付费」资源信息，结构与内容与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致</p>
                     * @return LLMPkg <p>大模型安全「后付费」资源信息，结构与内容与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致</p>
                     * 
                     */
                    LLMPkg GetLLMPkg() const;

                    /**
                     * 设置<p>大模型安全「后付费」资源信息，结构与内容与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致</p>
                     * @param _lLMPkg <p>大模型安全「后付费」资源信息，结构与内容与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致</p>
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
                     * 获取<p>LLM实例当天4个计费模块token消耗量及近7天趋势（仅后付费llm-sdk-waf实例返回）</p>
                     * @return LLMTokenUsage <p>LLM实例当天4个计费模块token消耗量及近7天趋势（仅后付费llm-sdk-waf实例返回）</p>
                     * 
                     */
                    LLMTokenUsage GetLLMTokenUsage() const;

                    /**
                     * 设置<p>LLM实例当天4个计费模块token消耗量及近7天趋势（仅后付费llm-sdk-waf实例返回）</p>
                     * @param _lLMTokenUsage <p>LLM实例当天4个计费模块token消耗量及近7天趋势（仅后付费llm-sdk-waf实例返回）</p>
                     * 
                     */
                    void SetLLMTokenUsage(const LLMTokenUsage& _lLMTokenUsage);

                    /**
                     * 判断参数 LLMTokenUsage 是否已赋值
                     * @return LLMTokenUsage 是否已赋值
                     * 
                     */
                    bool LLMTokenUsageHasBeenSet() const;

                private:

                    /**
                     * <p>用户appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * <p>实例版本，后付费实例固定为 llm-sdk-waf</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>付费模式，后付费实例为 0</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

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
                     * <p>计费项</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>自动续费标识。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>实例套餐版本</p>
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>实例修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>域名数量上限</p>
                     */
                    uint64_t m_subDomainLimit;
                    bool m_subDomainLimitHasBeenSet;

                    /**
                     * <p>主域名数量上限</p>
                     */
                    uint64_t m_mainDomainLimit;
                    bool m_mainDomainLimitHasBeenSet;

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
                     * <p>api安全是否购买</p>
                     */
                    uint64_t m_aPISecurity;
                    bool m_aPISecurityHasBeenSet;

                    /**
                     * <p>是否api 安全试用</p>
                     */
                    uint64_t m_isAPISecurityTrial;
                    bool m_isAPISecurityTrialHasBeenSet;

                    /**
                     * <p>实例延期释放标识</p>
                     */
                    uint64_t m_freeDelayFlag;
                    bool m_freeDelayFlagHasBeenSet;

                    /**
                     * <p>1是基础2025版本；0不是</p>
                     */
                    uint64_t m_basicFlag;
                    bool m_basicFlagHasBeenSet;

                    /**
                     * <p>大模型安全「后付费」资源信息，结构与内容与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致</p>
                     */
                    LLMPkg m_lLMPkg;
                    bool m_lLMPkgHasBeenSet;

                    /**
                     * <p>LLM实例当天4个计费模块token消耗量及近7天趋势（仅后付费llm-sdk-waf实例返回）</p>
                     */
                    LLMTokenUsage m_lLMTokenUsage;
                    bool m_lLMTokenUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_AFTERPAYINSTANCEINFO_H_
