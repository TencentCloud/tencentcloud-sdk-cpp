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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAILNEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAILNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 产品明细
                */
                class GoodsDetailNew : public AbstractModel
                {
                public:
                    GoodsDetailNew();
                    ~GoodsDetailNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间间隔
                     * @return TimeSpan 时间间隔
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置时间间隔
                     * @param _timeSpan 时间间隔
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
                     * 获取单位，支持购买d、m、y 即（日、月、年）
                     * @return TimeUnit 单位，支持购买d、m、y 即（日、月、年）
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置单位，支持购买d、m、y 即（日、月、年）
                     * @param _timeUnit 单位，支持购买d、m、y 即（日、月、年）
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
                     * 获取子产品标签,。新购，续费必传，变配时放在oldConfig newConfig里面

Saas 高级版 ：sp_wsm_waf_premium
Saas企业版 ：sp_wsm_waf_enterprise
Saas旗舰版 ：sp_wsm_waf_ultimate
Saas 业务扩展包：sp_wsm_waf_qpsep
Saas 域名扩展包：sp_wsm_waf_domain

高级版-CLB:sp_wsm_waf_premium_clb
企业版-CLB : sp_wsm_waf_enterprise_clb
旗舰版-CLB:sp_wsm_waf_ultimate_clb
 业务扩展包-CLB：sp_wsm_waf_qpsep_clb
域名扩展包-CLB：sp_wsm_waf_domain_clb

                     * @return SubProductCode 子产品标签,。新购，续费必传，变配时放在oldConfig newConfig里面

Saas 高级版 ：sp_wsm_waf_premium
Saas企业版 ：sp_wsm_waf_enterprise
Saas旗舰版 ：sp_wsm_waf_ultimate
Saas 业务扩展包：sp_wsm_waf_qpsep
Saas 域名扩展包：sp_wsm_waf_domain

高级版-CLB:sp_wsm_waf_premium_clb
企业版-CLB : sp_wsm_waf_enterprise_clb
旗舰版-CLB:sp_wsm_waf_ultimate_clb
 业务扩展包-CLB：sp_wsm_waf_qpsep_clb
域名扩展包-CLB：sp_wsm_waf_domain_clb

                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品标签,。新购，续费必传，变配时放在oldConfig newConfig里面

Saas 高级版 ：sp_wsm_waf_premium
Saas企业版 ：sp_wsm_waf_enterprise
Saas旗舰版 ：sp_wsm_waf_ultimate
Saas 业务扩展包：sp_wsm_waf_qpsep
Saas 域名扩展包：sp_wsm_waf_domain

高级版-CLB:sp_wsm_waf_premium_clb
企业版-CLB : sp_wsm_waf_enterprise_clb
旗舰版-CLB:sp_wsm_waf_ultimate_clb
 业务扩展包-CLB：sp_wsm_waf_qpsep_clb
域名扩展包-CLB：sp_wsm_waf_domain_clb

                     * @param _subProductCode 子产品标签,。新购，续费必传，变配时放在oldConfig newConfig里面

Saas 高级版 ：sp_wsm_waf_premium
Saas企业版 ：sp_wsm_waf_enterprise
Saas旗舰版 ：sp_wsm_waf_ultimate
Saas 业务扩展包：sp_wsm_waf_qpsep
Saas 域名扩展包：sp_wsm_waf_domain

高级版-CLB:sp_wsm_waf_premium_clb
企业版-CLB : sp_wsm_waf_enterprise_clb
旗舰版-CLB:sp_wsm_waf_ultimate_clb
 业务扩展包-CLB：sp_wsm_waf_qpsep_clb
域名扩展包-CLB：sp_wsm_waf_domain_clb

                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取业务产品申请的pid（对应一个定价公式），通过pid计费查询到定价模型
高级版 ：1000827
企业版 ：1000830
旗舰版 ：1000832
域名包 : 1000834
业务扩展包 : 1000481
高级版-CLB:1001150
企业版-CLB : 1001152
旗舰版-CLB:1001154
域名包-CLB: 1001156
业务扩展包-CLB : 1001160

                     * @return Pid 业务产品申请的pid（对应一个定价公式），通过pid计费查询到定价模型
高级版 ：1000827
企业版 ：1000830
旗舰版 ：1000832
域名包 : 1000834
业务扩展包 : 1000481
高级版-CLB:1001150
企业版-CLB : 1001152
旗舰版-CLB:1001154
域名包-CLB: 1001156
业务扩展包-CLB : 1001160

                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置业务产品申请的pid（对应一个定价公式），通过pid计费查询到定价模型
高级版 ：1000827
企业版 ：1000830
旗舰版 ：1000832
域名包 : 1000834
业务扩展包 : 1000481
高级版-CLB:1001150
企业版-CLB : 1001152
旗舰版-CLB:1001154
域名包-CLB: 1001156
业务扩展包-CLB : 1001160

                     * @param _pid 业务产品申请的pid（对应一个定价公式），通过pid计费查询到定价模型
高级版 ：1000827
企业版 ：1000830
旗舰版 ：1000832
域名包 : 1000834
业务扩展包 : 1000481
高级版-CLB:1001150
企业版-CLB : 1001152
旗舰版-CLB:1001154
域名包-CLB: 1001156
业务扩展包-CLB : 1001160

                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取waf实例名
                     * @return InstanceName waf实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置waf实例名
                     * @param _instanceName waf实例名
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
                     * 获取1:自动续费，0:不自动续费
                     * @return AutoRenewFlag 1:自动续费，0:不自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1:自动续费，0:不自动续费
                     * @param _autoRenewFlag 1:自动续费，0:不自动续费
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
                     * 获取waf购买的实际地域信息
                     * @return RealRegion waf购买的实际地域信息
                     * 
                     */
                    int64_t GetRealRegion() const;

                    /**
                     * 设置waf购买的实际地域信息
                     * @param _realRegion waf购买的实际地域信息
                     * 
                     */
                    void SetRealRegion(const int64_t& _realRegion);

                    /**
                     * 判断参数 RealRegion 是否已赋值
                     * @return RealRegion 是否已赋值
                     * 
                     */
                    bool RealRegionHasBeenSet() const;

                    /**
                     * 获取计费细项标签数组
Saas 高级版  sv_wsm_waf_package_premium 
Saas 企业版  sv_wsm_waf_package_enterprise
Saas 旗舰版  sv_wsm_waf_package_ultimate 
Saas 非中国大陆高级版  sv_wsm_waf_package_premium_intl
Saas 非中国大陆企业版   sv_wsm_waf_package_enterprise_intl
Saas 非中国大陆旗舰版  sv_wsm_waf_package_ultimate _intl
Saas 业务扩展包  sv_wsm_waf_qps_ep
Saas 域名扩展包  sv_wsm_waf_domain

高级版CLB   sv_wsm_waf_package_premium_clb
企业版CLB  sv_wsm_waf_package_enterprise_clb
旗舰版CLB   sv_wsm_waf_package_ultimate_clb
非中国大陆高级版 CLB sv_wsm_waf_package_premium_clb_intl
非中国大陆企业版CLB   sv_wsm_waf_package_premium_clb_intl
非中国大陆旗舰版CLB  sv_wsm_waf_package_ultimate_clb _intl
业务扩展包CLB sv_wsm_waf_qps_ep_clb
域名扩展包CLB  sv_wsm_waf_domain_clb

                     * @return LabelTypes 计费细项标签数组
Saas 高级版  sv_wsm_waf_package_premium 
Saas 企业版  sv_wsm_waf_package_enterprise
Saas 旗舰版  sv_wsm_waf_package_ultimate 
Saas 非中国大陆高级版  sv_wsm_waf_package_premium_intl
Saas 非中国大陆企业版   sv_wsm_waf_package_enterprise_intl
Saas 非中国大陆旗舰版  sv_wsm_waf_package_ultimate _intl
Saas 业务扩展包  sv_wsm_waf_qps_ep
Saas 域名扩展包  sv_wsm_waf_domain

高级版CLB   sv_wsm_waf_package_premium_clb
企业版CLB  sv_wsm_waf_package_enterprise_clb
旗舰版CLB   sv_wsm_waf_package_ultimate_clb
非中国大陆高级版 CLB sv_wsm_waf_package_premium_clb_intl
非中国大陆企业版CLB   sv_wsm_waf_package_premium_clb_intl
非中国大陆旗舰版CLB  sv_wsm_waf_package_ultimate_clb _intl
业务扩展包CLB sv_wsm_waf_qps_ep_clb
域名扩展包CLB  sv_wsm_waf_domain_clb

                     * 
                     */
                    std::vector<std::string> GetLabelTypes() const;

                    /**
                     * 设置计费细项标签数组
Saas 高级版  sv_wsm_waf_package_premium 
Saas 企业版  sv_wsm_waf_package_enterprise
Saas 旗舰版  sv_wsm_waf_package_ultimate 
Saas 非中国大陆高级版  sv_wsm_waf_package_premium_intl
Saas 非中国大陆企业版   sv_wsm_waf_package_enterprise_intl
Saas 非中国大陆旗舰版  sv_wsm_waf_package_ultimate _intl
Saas 业务扩展包  sv_wsm_waf_qps_ep
Saas 域名扩展包  sv_wsm_waf_domain

高级版CLB   sv_wsm_waf_package_premium_clb
企业版CLB  sv_wsm_waf_package_enterprise_clb
旗舰版CLB   sv_wsm_waf_package_ultimate_clb
非中国大陆高级版 CLB sv_wsm_waf_package_premium_clb_intl
非中国大陆企业版CLB   sv_wsm_waf_package_premium_clb_intl
非中国大陆旗舰版CLB  sv_wsm_waf_package_ultimate_clb _intl
业务扩展包CLB sv_wsm_waf_qps_ep_clb
域名扩展包CLB  sv_wsm_waf_domain_clb

                     * @param _labelTypes 计费细项标签数组
Saas 高级版  sv_wsm_waf_package_premium 
Saas 企业版  sv_wsm_waf_package_enterprise
Saas 旗舰版  sv_wsm_waf_package_ultimate 
Saas 非中国大陆高级版  sv_wsm_waf_package_premium_intl
Saas 非中国大陆企业版   sv_wsm_waf_package_enterprise_intl
Saas 非中国大陆旗舰版  sv_wsm_waf_package_ultimate _intl
Saas 业务扩展包  sv_wsm_waf_qps_ep
Saas 域名扩展包  sv_wsm_waf_domain

高级版CLB   sv_wsm_waf_package_premium_clb
企业版CLB  sv_wsm_waf_package_enterprise_clb
旗舰版CLB   sv_wsm_waf_package_ultimate_clb
非中国大陆高级版 CLB sv_wsm_waf_package_premium_clb_intl
非中国大陆企业版CLB   sv_wsm_waf_package_premium_clb_intl
非中国大陆旗舰版CLB  sv_wsm_waf_package_ultimate_clb _intl
业务扩展包CLB sv_wsm_waf_qps_ep_clb
域名扩展包CLB  sv_wsm_waf_domain_clb

                     * 
                     */
                    void SetLabelTypes(const std::vector<std::string>& _labelTypes);

                    /**
                     * 判断参数 LabelTypes 是否已赋值
                     * @return LabelTypes 是否已赋值
                     * 
                     */
                    bool LabelTypesHasBeenSet() const;

                    /**
                     * 获取计费细项标签数量，一般和SvLabelType一一对应
                     * @return LabelCounts 计费细项标签数量，一般和SvLabelType一一对应
                     * 
                     */
                    std::vector<int64_t> GetLabelCounts() const;

                    /**
                     * 设置计费细项标签数量，一般和SvLabelType一一对应
                     * @param _labelCounts 计费细项标签数量，一般和SvLabelType一一对应
                     * 
                     */
                    void SetLabelCounts(const std::vector<int64_t>& _labelCounts);

                    /**
                     * 判断参数 LabelCounts 是否已赋值
                     * @return LabelCounts 是否已赋值
                     * 
                     */
                    bool LabelCountsHasBeenSet() const;

                    /**
                     * 获取变配使用，实例到期时间
                     * @return CurDeadline 变配使用，实例到期时间
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置变配使用，实例到期时间
                     * @param _curDeadline 变配使用，实例到期时间
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取对存在的实例购买bot 或api 安全
                     * @return InstanceId 对存在的实例购买bot 或api 安全
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置对存在的实例购买bot 或api 安全
                     * @param _instanceId 对存在的实例购买bot 或api 安全
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
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取模式clb-waf或者saas-waf
                     * @return MicroVersion 模式clb-waf或者saas-waf
                     * 
                     */
                    std::string GetMicroVersion() const;

                    /**
                     * 设置模式clb-waf或者saas-waf
                     * @param _microVersion 模式clb-waf或者saas-waf
                     * 
                     */
                    void SetMicroVersion(const std::string& _microVersion);

                    /**
                     * 判断参数 MicroVersion 是否已赋值
                     * @return MicroVersion 是否已赋值
                     * 
                     */
                    bool MicroVersionHasBeenSet() const;

                private:

                    /**
                     * 时间间隔
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 单位，支持购买d、m、y 即（日、月、年）
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 子产品标签,。新购，续费必传，变配时放在oldConfig newConfig里面

Saas 高级版 ：sp_wsm_waf_premium
Saas企业版 ：sp_wsm_waf_enterprise
Saas旗舰版 ：sp_wsm_waf_ultimate
Saas 业务扩展包：sp_wsm_waf_qpsep
Saas 域名扩展包：sp_wsm_waf_domain

高级版-CLB:sp_wsm_waf_premium_clb
企业版-CLB : sp_wsm_waf_enterprise_clb
旗舰版-CLB:sp_wsm_waf_ultimate_clb
 业务扩展包-CLB：sp_wsm_waf_qpsep_clb
域名扩展包-CLB：sp_wsm_waf_domain_clb

                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 业务产品申请的pid（对应一个定价公式），通过pid计费查询到定价模型
高级版 ：1000827
企业版 ：1000830
旗舰版 ：1000832
域名包 : 1000834
业务扩展包 : 1000481
高级版-CLB:1001150
企业版-CLB : 1001152
旗舰版-CLB:1001154
域名包-CLB: 1001156
业务扩展包-CLB : 1001160

                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * waf实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 1:自动续费，0:不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * waf购买的实际地域信息
                     */
                    int64_t m_realRegion;
                    bool m_realRegionHasBeenSet;

                    /**
                     * 计费细项标签数组
Saas 高级版  sv_wsm_waf_package_premium 
Saas 企业版  sv_wsm_waf_package_enterprise
Saas 旗舰版  sv_wsm_waf_package_ultimate 
Saas 非中国大陆高级版  sv_wsm_waf_package_premium_intl
Saas 非中国大陆企业版   sv_wsm_waf_package_enterprise_intl
Saas 非中国大陆旗舰版  sv_wsm_waf_package_ultimate _intl
Saas 业务扩展包  sv_wsm_waf_qps_ep
Saas 域名扩展包  sv_wsm_waf_domain

高级版CLB   sv_wsm_waf_package_premium_clb
企业版CLB  sv_wsm_waf_package_enterprise_clb
旗舰版CLB   sv_wsm_waf_package_ultimate_clb
非中国大陆高级版 CLB sv_wsm_waf_package_premium_clb_intl
非中国大陆企业版CLB   sv_wsm_waf_package_premium_clb_intl
非中国大陆旗舰版CLB  sv_wsm_waf_package_ultimate_clb _intl
业务扩展包CLB sv_wsm_waf_qps_ep_clb
域名扩展包CLB  sv_wsm_waf_domain_clb

                     */
                    std::vector<std::string> m_labelTypes;
                    bool m_labelTypesHasBeenSet;

                    /**
                     * 计费细项标签数量，一般和SvLabelType一一对应
                     */
                    std::vector<int64_t> m_labelCounts;
                    bool m_labelCountsHasBeenSet;

                    /**
                     * 变配使用，实例到期时间
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * 对存在的实例购买bot 或api 安全
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 模式clb-waf或者saas-waf
                     */
                    std::string m_microVersion;
                    bool m_microVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAILNEW_H_
