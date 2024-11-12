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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackStatistics返回参数结构体
                */
                class DescribeAttackStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeAttackStatisticsResponse();
                    ~DescribeAttackStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总攻击次数
                     * @return PendingAttackCount 总攻击次数
                     * 
                     */
                    uint64_t GetPendingAttackCount() const;

                    /**
                     * 判断参数 PendingAttackCount 是否已赋值
                     * @return PendingAttackCount 是否已赋值
                     * 
                     */
                    bool PendingAttackCountHasBeenSet() const;

                    /**
                     * 获取总尝试攻击次数
                     * @return PendingTryAttackCount 总尝试攻击次数
                     * 
                     */
                    uint64_t GetPendingTryAttackCount() const;

                    /**
                     * 判断参数 PendingTryAttackCount 是否已赋值
                     * @return PendingTryAttackCount 是否已赋值
                     * 
                     */
                    bool PendingTryAttackCountHasBeenSet() const;

                    /**
                     * 获取总攻击成功次数
                     * @return PendingSuccAttackCount 总攻击成功次数
                     * 
                     */
                    uint64_t GetPendingSuccAttackCount() const;

                    /**
                     * 判断参数 PendingSuccAttackCount 是否已赋值
                     * @return PendingSuccAttackCount 是否已赋值
                     * 
                     */
                    bool PendingSuccAttackCountHasBeenSet() const;

                    /**
                     * 获取今日新增攻击次数
                     * @return PendingNewAttackCount 今日新增攻击次数
                     * 
                     */
                    uint64_t GetPendingNewAttackCount() const;

                    /**
                     * 判断参数 PendingNewAttackCount 是否已赋值
                     * @return PendingNewAttackCount 是否已赋值
                     * 
                     */
                    bool PendingNewAttackCountHasBeenSet() const;

                    /**
                     * 获取总受攻击资产数量
                     * @return AttackedAssetCount 总受攻击资产数量
                     * 
                     */
                    uint64_t GetAttackedAssetCount() const;

                    /**
                     * 判断参数 AttackedAssetCount 是否已赋值
                     * @return AttackedAssetCount 是否已赋值
                     * 
                     */
                    bool AttackedAssetCountHasBeenSet() const;

                    /**
                     * 获取今日新增受攻击资产数量
                     * @return NewAttackedAssetCount 今日新增受攻击资产数量
                     * 
                     */
                    uint64_t GetNewAttackedAssetCount() const;

                    /**
                     * 判断参数 NewAttackedAssetCount 是否已赋值
                     * @return NewAttackedAssetCount 是否已赋值
                     * 
                     */
                    bool NewAttackedAssetCountHasBeenSet() const;

                    /**
                     * 获取总受攻击端口数量
                     * @return AttackedPortCount 总受攻击端口数量
                     * 
                     */
                    uint64_t GetAttackedPortCount() const;

                    /**
                     * 判断参数 AttackedPortCount 是否已赋值
                     * @return AttackedPortCount 是否已赋值
                     * 
                     */
                    bool AttackedPortCountHasBeenSet() const;

                    /**
                     * 获取今日新增受攻击端口数量
                     * @return NewAttackedPortCount 今日新增受攻击端口数量
                     * 
                     */
                    uint64_t GetNewAttackedPortCount() const;

                    /**
                     * 判断参数 NewAttackedPortCount 是否已赋值
                     * @return NewAttackedPortCount 是否已赋值
                     * 
                     */
                    bool NewAttackedPortCountHasBeenSet() const;

                    /**
                     * 获取总攻击来源ip数量
                     * @return AttackSrcIpCount 总攻击来源ip数量
                     * 
                     */
                    uint64_t GetAttackSrcIpCount() const;

                    /**
                     * 判断参数 AttackSrcIpCount 是否已赋值
                     * @return AttackSrcIpCount 是否已赋值
                     * 
                     */
                    bool AttackSrcIpCountHasBeenSet() const;

                    /**
                     * 获取今日新增攻击来源ip数量
                     * @return NewAttackSrcIpCount 今日新增攻击来源ip数量
                     * 
                     */
                    uint64_t GetNewAttackSrcIpCount() const;

                    /**
                     * 判断参数 NewAttackSrcIpCount 是否已赋值
                     * @return NewAttackSrcIpCount 是否已赋值
                     * 
                     */
                    bool NewAttackSrcIpCountHasBeenSet() const;

                private:

                    /**
                     * 总攻击次数
                     */
                    uint64_t m_pendingAttackCount;
                    bool m_pendingAttackCountHasBeenSet;

                    /**
                     * 总尝试攻击次数
                     */
                    uint64_t m_pendingTryAttackCount;
                    bool m_pendingTryAttackCountHasBeenSet;

                    /**
                     * 总攻击成功次数
                     */
                    uint64_t m_pendingSuccAttackCount;
                    bool m_pendingSuccAttackCountHasBeenSet;

                    /**
                     * 今日新增攻击次数
                     */
                    uint64_t m_pendingNewAttackCount;
                    bool m_pendingNewAttackCountHasBeenSet;

                    /**
                     * 总受攻击资产数量
                     */
                    uint64_t m_attackedAssetCount;
                    bool m_attackedAssetCountHasBeenSet;

                    /**
                     * 今日新增受攻击资产数量
                     */
                    uint64_t m_newAttackedAssetCount;
                    bool m_newAttackedAssetCountHasBeenSet;

                    /**
                     * 总受攻击端口数量
                     */
                    uint64_t m_attackedPortCount;
                    bool m_attackedPortCountHasBeenSet;

                    /**
                     * 今日新增受攻击端口数量
                     */
                    uint64_t m_newAttackedPortCount;
                    bool m_newAttackedPortCountHasBeenSet;

                    /**
                     * 总攻击来源ip数量
                     */
                    uint64_t m_attackSrcIpCount;
                    bool m_attackSrcIpCountHasBeenSet;

                    /**
                     * 今日新增攻击来源ip数量
                     */
                    uint64_t m_newAttackSrcIpCount;
                    bool m_newAttackSrcIpCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSTATISTICSRESPONSE_H_
