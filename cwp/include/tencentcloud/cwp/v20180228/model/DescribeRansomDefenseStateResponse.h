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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_

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
                * DescribeRansomDefenseState返回参数结构体
                */
                class DescribeRansomDefenseStateResponse : public AbstractModel
                {
                public:
                    DescribeRansomDefenseStateResponse();
                    ~DescribeRansomDefenseStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已开启防御策略数量
                     * @return StrategyCount 已开启防御策略数量
                     * 
                     */
                    uint64_t GetStrategyCount() const;

                    /**
                     * 判断参数 StrategyCount 是否已赋值
                     * @return StrategyCount 是否已赋值
                     * 
                     */
                    bool StrategyCountHasBeenSet() const;

                    /**
                     * 获取已开启防御机器数
                     * @return MachineCount 已开启防御机器数
                     * 
                     */
                    uint64_t GetMachineCount() const;

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取快照总容量
                     * @return SnapshotSize 快照总容量
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取恢复备份任务数量
                     * @return RollBackTaskCount 恢复备份任务数量
                     * 
                     */
                    uint64_t GetRollBackTaskCount() const;

                    /**
                     * 判断参数 RollBackTaskCount 是否已赋值
                     * @return RollBackTaskCount 是否已赋值
                     * 
                     */
                    bool RollBackTaskCountHasBeenSet() const;

                    /**
                     * 获取进行中的创建快照任务数
                     * @return ProgressingSnapshotTaskCount 进行中的创建快照任务数
                     * 
                     */
                    uint64_t GetProgressingSnapshotTaskCount() const;

                    /**
                     * 判断参数 ProgressingSnapshotTaskCount 是否已赋值
                     * @return ProgressingSnapshotTaskCount 是否已赋值
                     * 
                     */
                    bool ProgressingSnapshotTaskCountHasBeenSet() const;

                    /**
                     * 获取进行中的恢复备份任务数
                     * @return ProgressingRollBackTaskCount 进行中的恢复备份任务数
                     * 
                     */
                    uint64_t GetProgressingRollBackTaskCount() const;

                    /**
                     * 判断参数 ProgressingRollBackTaskCount 是否已赋值
                     * @return ProgressingRollBackTaskCount 是否已赋值
                     * 
                     */
                    bool ProgressingRollBackTaskCountHasBeenSet() const;

                    /**
                     * 获取机器总数
                     * @return MachineTotal 机器总数
                     * 
                     */
                    uint64_t GetMachineTotal() const;

                    /**
                     * 判断参数 MachineTotal 是否已赋值
                     * @return MachineTotal 是否已赋值
                     * 
                     */
                    bool MachineTotalHasBeenSet() const;

                    /**
                     * 获取策略总数
                     * @return StrategyTotal 策略总数
                     * 
                     */
                    uint64_t GetStrategyTotal() const;

                    /**
                     * 判断参数 StrategyTotal 是否已赋值
                     * @return StrategyTotal 是否已赋值
                     * 
                     */
                    bool StrategyTotalHasBeenSet() const;

                    /**
                     * 获取账户状态：0未欠费，1已欠费
                     * @return BalanceStatus 账户状态：0未欠费，1已欠费
                     * 
                     */
                    uint64_t GetBalanceStatus() const;

                    /**
                     * 判断参数 BalanceStatus 是否已赋值
                     * @return BalanceStatus 是否已赋值
                     * 
                     */
                    bool BalanceStatusHasBeenSet() const;

                    /**
                     * 获取已备份主机数
                     * @return BackupMachineCount 已备份主机数
                     * 
                     */
                    uint64_t GetBackupMachineCount() const;

                    /**
                     * 判断参数 BackupMachineCount 是否已赋值
                     * @return BackupMachineCount 是否已赋值
                     * 
                     */
                    bool BackupMachineCountHasBeenSet() const;

                private:

                    /**
                     * 已开启防御策略数量
                     */
                    uint64_t m_strategyCount;
                    bool m_strategyCountHasBeenSet;

                    /**
                     * 已开启防御机器数
                     */
                    uint64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * 快照总容量
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * 恢复备份任务数量
                     */
                    uint64_t m_rollBackTaskCount;
                    bool m_rollBackTaskCountHasBeenSet;

                    /**
                     * 进行中的创建快照任务数
                     */
                    uint64_t m_progressingSnapshotTaskCount;
                    bool m_progressingSnapshotTaskCountHasBeenSet;

                    /**
                     * 进行中的恢复备份任务数
                     */
                    uint64_t m_progressingRollBackTaskCount;
                    bool m_progressingRollBackTaskCountHasBeenSet;

                    /**
                     * 机器总数
                     */
                    uint64_t m_machineTotal;
                    bool m_machineTotalHasBeenSet;

                    /**
                     * 策略总数
                     */
                    uint64_t m_strategyTotal;
                    bool m_strategyTotalHasBeenSet;

                    /**
                     * 账户状态：0未欠费，1已欠费
                     */
                    uint64_t m_balanceStatus;
                    bool m_balanceStatusHasBeenSet;

                    /**
                     * 已备份主机数
                     */
                    uint64_t m_backupMachineCount;
                    bool m_backupMachineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_
