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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyRiskScanCronConfig请求参数结构体
                */
                class ModifyRiskScanCronConfigRequest : public AbstractModel
                {
                public:
                    ModifyRiskScanCronConfigRequest();
                    ~ModifyRiskScanCronConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>计划开启状态</p>
                     * @return CronStatus <p>计划开启状态</p>
                     * 
                     */
                    uint64_t GetCronStatus() const;

                    /**
                     * 设置<p>计划开启状态</p>
                     * @param _cronStatus <p>计划开启状态</p>
                     * 
                     */
                    void SetCronStatus(const uint64_t& _cronStatus);

                    /**
                     * 判断参数 CronStatus 是否已赋值
                     * @return CronStatus 是否已赋值
                     * 
                     */
                    bool CronStatusHasBeenSet() const;

                    /**
                     * 获取<p>计划表达式</p>
                     * @return CronPlanContent <p>计划表达式</p>
                     * 
                     */
                    std::string GetCronPlanContent() const;

                    /**
                     * 设置<p>计划表达式</p>
                     * @param _cronPlanContent <p>计划表达式</p>
                     * 
                     */
                    void SetCronPlanContent(const std::string& _cronPlanContent);

                    /**
                     * 判断参数 CronPlanContent 是否已赋值
                     * @return CronPlanContent 是否已赋值
                     * 
                     */
                    bool CronPlanContentHasBeenSet() const;

                    /**
                     * 获取<p>新增规则是否自动执行</p>
                     * @return RuleAutoEnable <p>新增规则是否自动执行</p>
                     * 
                     */
                    bool GetRuleAutoEnable() const;

                    /**
                     * 设置<p>新增规则是否自动执行</p>
                     * @param _ruleAutoEnable <p>新增规则是否自动执行</p>
                     * 
                     */
                    void SetRuleAutoEnable(const bool& _ruleAutoEnable);

                    /**
                     * 判断参数 RuleAutoEnable 是否已赋值
                     * @return RuleAutoEnable 是否已赋值
                     * 
                     */
                    bool RuleAutoEnableHasBeenSet() const;

                    /**
                     * 获取<p>时区</p>
                     * @return ScanPlanTimezone <p>时区</p>
                     * 
                     */
                    std::string GetScanPlanTimezone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _scanPlanTimezone <p>时区</p>
                     * 
                     */
                    void SetScanPlanTimezone(const std::string& _scanPlanTimezone);

                    /**
                     * 判断参数 ScanPlanTimezone 是否已赋值
                     * @return ScanPlanTimezone 是否已赋值
                     * 
                     */
                    bool ScanPlanTimezoneHasBeenSet() const;

                    /**
                     * 获取<p>增量资产开启风险扫描开关</p>
                     * @return IncrementAssetScanRisk <p>增量资产开启风险扫描开关</p>
                     * 
                     */
                    bool GetIncrementAssetScanRisk() const;

                    /**
                     * 设置<p>增量资产开启风险扫描开关</p>
                     * @param _incrementAssetScanRisk <p>增量资产开启风险扫描开关</p>
                     * 
                     */
                    void SetIncrementAssetScanRisk(const bool& _incrementAssetScanRisk);

                    /**
                     * 判断参数 IncrementAssetScanRisk 是否已赋值
                     * @return IncrementAssetScanRisk 是否已赋值
                     * 
                     */
                    bool IncrementAssetScanRiskHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>计划开启状态</p>
                     */
                    uint64_t m_cronStatus;
                    bool m_cronStatusHasBeenSet;

                    /**
                     * <p>计划表达式</p>
                     */
                    std::string m_cronPlanContent;
                    bool m_cronPlanContentHasBeenSet;

                    /**
                     * <p>新增规则是否自动执行</p>
                     */
                    bool m_ruleAutoEnable;
                    bool m_ruleAutoEnableHasBeenSet;

                    /**
                     * <p>时区</p>
                     */
                    std::string m_scanPlanTimezone;
                    bool m_scanPlanTimezoneHasBeenSet;

                    /**
                     * <p>增量资产开启风险扫描开关</p>
                     */
                    bool m_incrementAssetScanRisk;
                    bool m_incrementAssetScanRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKSCANCRONCONFIGREQUEST_H_
