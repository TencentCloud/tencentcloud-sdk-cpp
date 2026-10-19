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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWVPCRULEQUOTADETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWVPCRULEQUOTADETAIL_H_

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
                * 概览 VPC 规则配额详情
                */
                class OverviewVpcRuleQuotaDetail : public AbstractModel
                {
                public:
                    OverviewVpcRuleQuotaDetail();
                    ~OverviewVpcRuleQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>允许使用的规则总数。</p>
                     * @return AllowedNum <p>允许使用的规则总数。</p>
                     * 
                     */
                    int64_t GetAllowedNum() const;

                    /**
                     * 设置<p>允许使用的规则总数。</p>
                     * @param _allowedNum <p>允许使用的规则总数。</p>
                     * 
                     */
                    void SetAllowedNum(const int64_t& _allowedNum);

                    /**
                     * 判断参数 AllowedNum 是否已赋值
                     * @return AllowedNum 是否已赋值
                     * 
                     */
                    bool AllowedNumHasBeenSet() const;

                    /**
                     * 获取<p>已使用规则数量。</p>
                     * @return UsedNum <p>已使用规则数量。</p>
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置<p>已使用规则数量。</p>
                     * @param _usedNum <p>已使用规则数量。</p>
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>剩余规则配额数量。</p>
                     * @return RemainQuota <p>剩余规则配额数量。</p>
                     * 
                     */
                    int64_t GetRemainQuota() const;

                    /**
                     * 设置<p>剩余规则配额数量。</p>
                     * @param _remainQuota <p>剩余规则配额数量。</p>
                     * 
                     */
                    void SetRemainQuota(const int64_t& _remainQuota);

                    /**
                     * 判断参数 RemainQuota 是否已赋值
                     * @return RemainQuota 是否已赋值
                     * 
                     */
                    bool RemainQuotaHasBeenSet() const;

                    /**
                     * 获取<p>剩余扩容规则数量。</p>
                     * @return RemainExtensionNum <p>剩余扩容规则数量。</p>
                     * 
                     */
                    int64_t GetRemainExtensionNum() const;

                    /**
                     * 设置<p>剩余扩容规则数量。</p>
                     * @param _remainExtensionNum <p>剩余扩容规则数量。</p>
                     * 
                     */
                    void SetRemainExtensionNum(const int64_t& _remainExtensionNum);

                    /**
                     * 判断参数 RemainExtensionNum 是否已赋值
                     * @return RemainExtensionNum 是否已赋值
                     * 
                     */
                    bool RemainExtensionNumHasBeenSet() const;

                    /**
                     * 获取<p>全局规则总数。</p>
                     * @return GlobalRuleNum <p>全局规则总数。</p>
                     * 
                     */
                    int64_t GetGlobalRuleNum() const;

                    /**
                     * 设置<p>全局规则总数。</p>
                     * @param _globalRuleNum <p>全局规则总数。</p>
                     * 
                     */
                    void SetGlobalRuleNum(const int64_t& _globalRuleNum);

                    /**
                     * 判断参数 GlobalRuleNum 是否已赋值
                     * @return GlobalRuleNum 是否已赋值
                     * 
                     */
                    bool GlobalRuleNumHasBeenSet() const;

                    /**
                     * 获取<p>当前已启用的全局规则条目。</p>
                     * @return GlobalEnableRuleNum <p>当前已启用的全局规则条目。</p>
                     * 
                     */
                    int64_t GetGlobalEnableRuleNum() const;

                    /**
                     * 设置<p>当前已启用的全局规则条目。</p>
                     * @param _globalEnableRuleNum <p>当前已启用的全局规则条目。</p>
                     * 
                     */
                    void SetGlobalEnableRuleNum(const int64_t& _globalEnableRuleNum);

                    /**
                     * 判断参数 GlobalEnableRuleNum 是否已赋值
                     * @return GlobalEnableRuleNum 是否已赋值
                     * 
                     */
                    bool GlobalEnableRuleNumHasBeenSet() const;

                    /**
                     * 获取<p>边界规则总数。</p>
                     * @return EdgeRuleNum <p>边界规则总数。</p>
                     * 
                     */
                    int64_t GetEdgeRuleNum() const;

                    /**
                     * 设置<p>边界规则总数。</p>
                     * @param _edgeRuleNum <p>边界规则总数。</p>
                     * 
                     */
                    void SetEdgeRuleNum(const int64_t& _edgeRuleNum);

                    /**
                     * 判断参数 EdgeRuleNum 是否已赋值
                     * @return EdgeRuleNum 是否已赋值
                     * 
                     */
                    bool EdgeRuleNumHasBeenSet() const;

                    /**
                     * 获取<p>边界启用规则数。</p>
                     * @return EdgeEnableRuleNum <p>边界启用规则数。</p>
                     * 
                     */
                    int64_t GetEdgeEnableRuleNum() const;

                    /**
                     * 设置<p>边界启用规则数。</p>
                     * @param _edgeEnableRuleNum <p>边界启用规则数。</p>
                     * 
                     */
                    void SetEdgeEnableRuleNum(const int64_t& _edgeEnableRuleNum);

                    /**
                     * 判断参数 EdgeEnableRuleNum 是否已赋值
                     * @return EdgeEnableRuleNum 是否已赋值
                     * 
                     */
                    bool EdgeEnableRuleNumHasBeenSet() const;

                    /**
                     * 获取<p>IPv4 规则总数。</p>
                     * @return V4RuleTotal <p>IPv4 规则总数。</p>
                     * 
                     */
                    int64_t GetV4RuleTotal() const;

                    /**
                     * 设置<p>IPv4 规则总数。</p>
                     * @param _v4RuleTotal <p>IPv4 规则总数。</p>
                     * 
                     */
                    void SetV4RuleTotal(const int64_t& _v4RuleTotal);

                    /**
                     * 判断参数 V4RuleTotal 是否已赋值
                     * @return V4RuleTotal 是否已赋值
                     * 
                     */
                    bool V4RuleTotalHasBeenSet() const;

                    /**
                     * 获取<p>当前已启用的 IPv4 规则条目。</p>
                     * @return V4EnableRuleTotal <p>当前已启用的 IPv4 规则条目。</p>
                     * 
                     */
                    int64_t GetV4EnableRuleTotal() const;

                    /**
                     * 设置<p>当前已启用的 IPv4 规则条目。</p>
                     * @param _v4EnableRuleTotal <p>当前已启用的 IPv4 规则条目。</p>
                     * 
                     */
                    void SetV4EnableRuleTotal(const int64_t& _v4EnableRuleTotal);

                    /**
                     * 判断参数 V4EnableRuleTotal 是否已赋值
                     * @return V4EnableRuleTotal 是否已赋值
                     * 
                     */
                    bool V4EnableRuleTotalHasBeenSet() const;

                    /**
                     * 获取<p>IPv6 规则总数。</p>
                     * @return V6RuleTotal <p>IPv6 规则总数。</p>
                     * 
                     */
                    int64_t GetV6RuleTotal() const;

                    /**
                     * 设置<p>IPv6 规则总数。</p>
                     * @param _v6RuleTotal <p>IPv6 规则总数。</p>
                     * 
                     */
                    void SetV6RuleTotal(const int64_t& _v6RuleTotal);

                    /**
                     * 判断参数 V6RuleTotal 是否已赋值
                     * @return V6RuleTotal 是否已赋值
                     * 
                     */
                    bool V6RuleTotalHasBeenSet() const;

                    /**
                     * 获取<p>当前已启用的 IPv6 规则条目。</p>
                     * @return V6EnableRuleTotal <p>当前已启用的 IPv6 规则条目。</p>
                     * 
                     */
                    int64_t GetV6EnableRuleTotal() const;

                    /**
                     * 设置<p>当前已启用的 IPv6 规则条目。</p>
                     * @param _v6EnableRuleTotal <p>当前已启用的 IPv6 规则条目。</p>
                     * 
                     */
                    void SetV6EnableRuleTotal(const int64_t& _v6EnableRuleTotal);

                    /**
                     * 判断参数 V6EnableRuleTotal 是否已赋值
                     * @return V6EnableRuleTotal 是否已赋值
                     * 
                     */
                    bool V6EnableRuleTotalHasBeenSet() const;

                    /**
                     * 获取<p>VPC 防火墙开关状态标识。</p>
                     * @return IsSwitchEnable <p>VPC 防火墙开关状态标识。</p>
                     * 
                     */
                    int64_t GetIsSwitchEnable() const;

                    /**
                     * 设置<p>VPC 防火墙开关状态标识。</p>
                     * @param _isSwitchEnable <p>VPC 防火墙开关状态标识。</p>
                     * 
                     */
                    void SetIsSwitchEnable(const int64_t& _isSwitchEnable);

                    /**
                     * 判断参数 IsSwitchEnable 是否已赋值
                     * @return IsSwitchEnable 是否已赋值
                     * 
                     */
                    bool IsSwitchEnableHasBeenSet() const;

                private:

                    /**
                     * <p>允许使用的规则总数。</p>
                     */
                    int64_t m_allowedNum;
                    bool m_allowedNumHasBeenSet;

                    /**
                     * <p>已使用规则数量。</p>
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>剩余规则配额数量。</p>
                     */
                    int64_t m_remainQuota;
                    bool m_remainQuotaHasBeenSet;

                    /**
                     * <p>剩余扩容规则数量。</p>
                     */
                    int64_t m_remainExtensionNum;
                    bool m_remainExtensionNumHasBeenSet;

                    /**
                     * <p>全局规则总数。</p>
                     */
                    int64_t m_globalRuleNum;
                    bool m_globalRuleNumHasBeenSet;

                    /**
                     * <p>当前已启用的全局规则条目。</p>
                     */
                    int64_t m_globalEnableRuleNum;
                    bool m_globalEnableRuleNumHasBeenSet;

                    /**
                     * <p>边界规则总数。</p>
                     */
                    int64_t m_edgeRuleNum;
                    bool m_edgeRuleNumHasBeenSet;

                    /**
                     * <p>边界启用规则数。</p>
                     */
                    int64_t m_edgeEnableRuleNum;
                    bool m_edgeEnableRuleNumHasBeenSet;

                    /**
                     * <p>IPv4 规则总数。</p>
                     */
                    int64_t m_v4RuleTotal;
                    bool m_v4RuleTotalHasBeenSet;

                    /**
                     * <p>当前已启用的 IPv4 规则条目。</p>
                     */
                    int64_t m_v4EnableRuleTotal;
                    bool m_v4EnableRuleTotalHasBeenSet;

                    /**
                     * <p>IPv6 规则总数。</p>
                     */
                    int64_t m_v6RuleTotal;
                    bool m_v6RuleTotalHasBeenSet;

                    /**
                     * <p>当前已启用的 IPv6 规则条目。</p>
                     */
                    int64_t m_v6EnableRuleTotal;
                    bool m_v6EnableRuleTotalHasBeenSet;

                    /**
                     * <p>VPC 防火墙开关状态标识。</p>
                     */
                    int64_t m_isSwitchEnable;
                    bool m_isSwitchEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWVPCRULEQUOTADETAIL_H_
