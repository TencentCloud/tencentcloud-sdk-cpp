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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANPERSONALPACKAGERESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANPERSONALPACKAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanPersonalPackage返回参数结构体
                */
                class DescribeTokenPlanPersonalPackageResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanPersonalPackageResponse();
                    ~DescribeTokenPlanPersonalPackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品类型。</p>
                     * @return ProductType <p>产品类型。</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>套餐状态。取值：active（生效中）、processing（处理中）、failed（创建失败）、isolated（隔离/欠费）、destroyed（已销毁）、used_up（额度用尽）、stopped（已停止）、unpurchased（未购买）。</p>
                     * @return PackageStatus <p>套餐状态。取值：active（生效中）、processing（处理中）、failed（创建失败）、isolated（隔离/欠费）、destroyed（已销毁）、used_up（额度用尽）、stopped（已停止）、unpurchased（未购买）。</p>
                     * 
                     */
                    std::string GetPackageStatus() const;

                    /**
                     * 判断参数 PackageStatus 是否已赋值
                     * @return PackageStatus 是否已赋值
                     * 
                     */
                    bool PackageStatusHasBeenSet() const;

                    /**
                     * 获取<p>计费资源ID</p>
                     * @return ResourceId <p>计费资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>总额度。</p>
                     * @return TotalCredits <p>总额度。</p>
                     * 
                     */
                    std::string GetTotalCredits() const;

                    /**
                     * 判断参数 TotalCredits 是否已赋值
                     * @return TotalCredits 是否已赋值
                     * 
                     */
                    bool TotalCreditsHasBeenSet() const;

                    /**
                     * 获取<p>已使用额度。</p>
                     * @return TotalUsed <p>已使用额度。</p>
                     * 
                     */
                    std::string GetTotalUsed() const;

                    /**
                     * 判断参数 TotalUsed 是否已赋值
                     * @return TotalUsed 是否已赋值
                     * 
                     */
                    bool TotalUsedHasBeenSet() const;

                    /**
                     * 获取<p>单周期额度。</p>
                     * @return CycleCredits <p>单周期额度。</p>
                     * 
                     */
                    std::string GetCycleCredits() const;

                    /**
                     * 判断参数 CycleCredits 是否已赋值
                     * @return CycleCredits 是否已赋值
                     * 
                     */
                    bool CycleCreditsHasBeenSet() const;

                    /**
                     * 获取<p>总周期数。</p>
                     * @return TotalCycles <p>总周期数。</p>
                     * 
                     */
                    int64_t GetTotalCycles() const;

                    /**
                     * 判断参数 TotalCycles 是否已赋值
                     * @return TotalCycles 是否已赋值
                     * 
                     */
                    bool TotalCyclesHasBeenSet() const;

                    /**
                     * 获取<p>当前周期序号。</p>
                     * @return CurrentCycle <p>当前周期序号。</p>
                     * 
                     */
                    int64_t GetCurrentCycle() const;

                    /**
                     * 判断参数 CurrentCycle 是否已赋值
                     * @return CurrentCycle 是否已赋值
                     * 
                     */
                    bool CurrentCycleHasBeenSet() const;

                    /**
                     * 获取<p>剩余周期数。</p>
                     * @return RemainCycles <p>剩余周期数。</p>
                     * 
                     */
                    int64_t GetRemainCycles() const;

                    /**
                     * 判断参数 RemainCycles 是否已赋值
                     * @return RemainCycles 是否已赋值
                     * 
                     */
                    bool RemainCyclesHasBeenSet() const;

                    /**
                     * 获取<p>套餐生效时间，ISO 8601 格式。</p>
                     * @return StartTime <p>套餐生效时间，ISO 8601 格式。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐过期时间，ISO 8601 格式。</p>
                     * @return ExpireTime <p>套餐过期时间，ISO 8601 格式。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>当前周期到期日，ISO 8601 格式。</p>
                     * @return PeriodEndDate <p>当前周期到期日，ISO 8601 格式。</p>
                     * 
                     */
                    std::string GetPeriodEndDate() const;

                    /**
                     * 判断参数 PeriodEndDate 是否已赋值
                     * @return PeriodEndDate 是否已赋值
                     * 
                     */
                    bool PeriodEndDateHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。取值：0（未开启）、1（已开启）。</p>
                     * @return AutoRenewFlag <p>自动续费标识。取值：0（未开启）、1（已开启）。</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>输出token数</p><p>单位：tokens</p>
                     * @return OutputToken <p>输出token数</p><p>单位：tokens</p>
                     * 
                     */
                    int64_t GetOutputToken() const;

                    /**
                     * 判断参数 OutputToken 是否已赋值
                     * @return OutputToken 是否已赋值
                     * 
                     */
                    bool OutputTokenHasBeenSet() const;

                    /**
                     * 获取<p>输入token数</p><p>单位：token</p>
                     * @return InputToken <p>输入token数</p><p>单位：token</p>
                     * 
                     */
                    int64_t GetInputToken() const;

                    /**
                     * 判断参数 InputToken 是否已赋值
                     * @return InputToken 是否已赋值
                     * 
                     */
                    bool InputTokenHasBeenSet() const;

                    /**
                     * 获取<p>缓存命中token数</p><p>单位：token</p>
                     * @return CacheToken <p>缓存命中token数</p><p>单位：token</p>
                     * 
                     */
                    int64_t GetCacheToken() const;

                    /**
                     * 判断参数 CacheToken 是否已赋值
                     * @return CacheToken 是否已赋值
                     * 
                     */
                    bool CacheTokenHasBeenSet() const;

                private:

                    /**
                     * <p>产品类型。</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>套餐状态。取值：active（生效中）、processing（处理中）、failed（创建失败）、isolated（隔离/欠费）、destroyed（已销毁）、used_up（额度用尽）、stopped（已停止）、unpurchased（未购买）。</p>
                     */
                    std::string m_packageStatus;
                    bool m_packageStatusHasBeenSet;

                    /**
                     * <p>计费资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>总额度。</p>
                     */
                    std::string m_totalCredits;
                    bool m_totalCreditsHasBeenSet;

                    /**
                     * <p>已使用额度。</p>
                     */
                    std::string m_totalUsed;
                    bool m_totalUsedHasBeenSet;

                    /**
                     * <p>单周期额度。</p>
                     */
                    std::string m_cycleCredits;
                    bool m_cycleCreditsHasBeenSet;

                    /**
                     * <p>总周期数。</p>
                     */
                    int64_t m_totalCycles;
                    bool m_totalCyclesHasBeenSet;

                    /**
                     * <p>当前周期序号。</p>
                     */
                    int64_t m_currentCycle;
                    bool m_currentCycleHasBeenSet;

                    /**
                     * <p>剩余周期数。</p>
                     */
                    int64_t m_remainCycles;
                    bool m_remainCyclesHasBeenSet;

                    /**
                     * <p>套餐生效时间，ISO 8601 格式。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>套餐过期时间，ISO 8601 格式。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>当前周期到期日，ISO 8601 格式。</p>
                     */
                    std::string m_periodEndDate;
                    bool m_periodEndDateHasBeenSet;

                    /**
                     * <p>自动续费标识。取值：0（未开启）、1（已开启）。</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>输出token数</p><p>单位：tokens</p>
                     */
                    int64_t m_outputToken;
                    bool m_outputTokenHasBeenSet;

                    /**
                     * <p>输入token数</p><p>单位：token</p>
                     */
                    int64_t m_inputToken;
                    bool m_inputTokenHasBeenSet;

                    /**
                     * <p>缓存命中token数</p><p>单位：token</p>
                     */
                    int64_t m_cacheToken;
                    bool m_cacheTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANPERSONALPACKAGERESPONSE_H_
