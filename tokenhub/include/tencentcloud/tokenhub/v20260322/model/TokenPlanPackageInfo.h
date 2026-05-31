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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 主额度包信息
                */
                class TokenPlanPackageInfo : public AbstractModel
                {
                public:
                    TokenPlanPackageInfo();
                    ~TokenPlanPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return TotalQuota 总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetTotalQuota() const;

                    /**
                     * 设置总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _totalQuota 总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetTotalQuota(const std::string& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取总已使用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return TotalUsed 总已使用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetTotalUsed() const;

                    /**
                     * 设置总已使用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _totalUsed 总已使用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetTotalUsed(const std::string& _totalUsed);

                    /**
                     * 判断参数 TotalUsed 是否已赋值
                     * @return TotalUsed 是否已赋值
                     * 
                     */
                    bool TotalUsedHasBeenSet() const;

                    /**
                     * 获取总周期数。
                     * @return TotalCycles 总周期数。
                     * 
                     */
                    int64_t GetTotalCycles() const;

                    /**
                     * 设置总周期数。
                     * @param _totalCycles 总周期数。
                     * 
                     */
                    void SetTotalCycles(const int64_t& _totalCycles);

                    /**
                     * 判断参数 TotalCycles 是否已赋值
                     * @return TotalCycles 是否已赋值
                     * 
                     */
                    bool TotalCyclesHasBeenSet() const;

                    /**
                     * 获取周期单位。取值：month（月）
                     * @return CycleUnit 周期单位。取值：month（月）
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置周期单位。取值：month（月）
                     * @param _cycleUnit 周期单位。取值：month（月）
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取套餐包生效时间。
                     * @return StartTime 套餐包生效时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置套餐包生效时间。
                     * @param _startTime 套餐包生效时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取套餐包到期时间。
                     * @return ExpireTime 套餐包到期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置套餐包到期时间。
                     * @param _expireTime 套餐包到期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取独占池已分配额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return ExclusiveAllocated 独占池已分配额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetExclusiveAllocated() const;

                    /**
                     * 设置独占池已分配额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _exclusiveAllocated 独占池已分配额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetExclusiveAllocated(const std::string& _exclusiveAllocated);

                    /**
                     * 判断参数 ExclusiveAllocated 是否已赋值
                     * @return ExclusiveAllocated 是否已赋值
                     * 
                     */
                    bool ExclusiveAllocatedHasBeenSet() const;

                    /**
                     * 获取独占池已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return ExclusiveUsed 独占池已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetExclusiveUsed() const;

                    /**
                     * 设置独占池已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _exclusiveUsed 独占池已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetExclusiveUsed(const std::string& _exclusiveUsed);

                    /**
                     * 判断参数 ExclusiveUsed 是否已赋值
                     * @return ExclusiveUsed 是否已赋值
                     * 
                     */
                    bool ExclusiveUsedHasBeenSet() const;

                    /**
                     * 获取共享池总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return SharedPool 共享池总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetSharedPool() const;

                    /**
                     * 设置共享池总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _sharedPool 共享池总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetSharedPool(const std::string& _sharedPool);

                    /**
                     * 判断参数 SharedPool 是否已赋值
                     * @return SharedPool 是否已赋值
                     * 
                     */
                    bool SharedPoolHasBeenSet() const;

                    /**
                     * 获取共享已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return SharedUsed 共享已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetSharedUsed() const;

                    /**
                     * 设置共享已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _sharedUsed 共享已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetSharedUsed(const std::string& _sharedUsed);

                    /**
                     * 判断参数 SharedUsed 是否已赋值
                     * @return SharedUsed 是否已赋值
                     * 
                     */
                    bool SharedUsedHasBeenSet() const;

                    /**
                     * 获取当期额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @return CycleQuota 当期额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    std::string GetCycleQuota() const;

                    /**
                     * 设置当期额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * @param _cycleQuota 当期额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     * 
                     */
                    void SetCycleQuota(const std::string& _cycleQuota);

                    /**
                     * 判断参数 CycleQuota 是否已赋值
                     * @return CycleQuota 是否已赋值
                     * 
                     */
                    bool CycleQuotaHasBeenSet() const;

                    /**
                     * 获取当前周期。
                     * @return CurrentCycle 当前周期。
                     * 
                     */
                    int64_t GetCurrentCycle() const;

                    /**
                     * 设置当前周期。
                     * @param _currentCycle 当前周期。
                     * 
                     */
                    void SetCurrentCycle(const int64_t& _currentCycle);

                    /**
                     * 判断参数 CurrentCycle 是否已赋值
                     * @return CurrentCycle 是否已赋值
                     * 
                     */
                    bool CurrentCycleHasBeenSet() const;

                    /**
                     * 获取剩余周期。
                     * @return RemainCycles 剩余周期。
                     * 
                     */
                    int64_t GetRemainCycles() const;

                    /**
                     * 设置剩余周期。
                     * @param _remainCycles 剩余周期。
                     * 
                     */
                    void SetRemainCycles(const int64_t& _remainCycles);

                    /**
                     * 判断参数 RemainCycles 是否已赋值
                     * @return RemainCycles 是否已赋值
                     * 
                     */
                    bool RemainCyclesHasBeenSet() const;

                private:

                    /**
                     * 总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 总已使用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_totalUsed;
                    bool m_totalUsedHasBeenSet;

                    /**
                     * 总周期数。
                     */
                    int64_t m_totalCycles;
                    bool m_totalCyclesHasBeenSet;

                    /**
                     * 周期单位。取值：month（月）
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 套餐包生效时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 套餐包到期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 独占池已分配额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_exclusiveAllocated;
                    bool m_exclusiveAllocatedHasBeenSet;

                    /**
                     * 独占池已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_exclusiveUsed;
                    bool m_exclusiveUsedHasBeenSet;

                    /**
                     * 共享池总额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_sharedPool;
                    bool m_sharedPoolHasBeenSet;

                    /**
                     * 共享已用额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_sharedUsed;
                    bool m_sharedUsedHasBeenSet;

                    /**
                     * 当期额度。根据套餐类型区分单位：credits（企业版专业套餐），tokens（企业版auto套餐）
                     */
                    std::string m_cycleQuota;
                    bool m_cycleQuotaHasBeenSet;

                    /**
                     * 当前周期。
                     */
                    int64_t m_currentCycle;
                    bool m_currentCycleHasBeenSet;

                    /**
                     * 剩余周期。
                     */
                    int64_t m_remainCycles;
                    bool m_remainCyclesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANPACKAGEINFO_H_
