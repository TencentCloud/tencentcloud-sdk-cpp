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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandard.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一个合规基线检测定时任务的信息。
                */
                class CompliancePeriodTask : public AbstractModel
                {
                public:
                    CompliancePeriodTask();
                    ~CompliancePeriodTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周期任务的ID
                     * @return PeriodTaskId 周期任务的ID
                     * 
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置周期任务的ID
                     * @param _periodTaskId 周期任务的ID
                     * 
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     * 
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                    /**
                     * 获取资产类型。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * @return AssetType 资产类型。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * @param _assetType 资产类型。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取最近一次触发的时间
                     * @return LastTriggerTime 最近一次触发的时间
                     * 
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置最近一次触发的时间
                     * @param _lastTriggerTime 最近一次触发的时间
                     * 
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     * 
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                    /**
                     * 获取总的检查项数目
                     * @return TotalPolicyItemCount 总的检查项数目
                     * 
                     */
                    uint64_t GetTotalPolicyItemCount() const;

                    /**
                     * 设置总的检查项数目
                     * @param _totalPolicyItemCount 总的检查项数目
                     * 
                     */
                    void SetTotalPolicyItemCount(const uint64_t& _totalPolicyItemCount);

                    /**
                     * 判断参数 TotalPolicyItemCount 是否已赋值
                     * @return TotalPolicyItemCount 是否已赋值
                     * 
                     */
                    bool TotalPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取周期设置
                     * @return PeriodRule 周期设置
                     * 
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置周期设置
                     * @param _periodRule 周期设置
                     * 
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     * 
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取合规标准列表
                     * @return BenchmarkStandardSet 合规标准列表
                     * 
                     */
                    std::vector<ComplianceBenchmarkStandard> GetBenchmarkStandardSet() const;

                    /**
                     * 设置合规标准列表
                     * @param _benchmarkStandardSet 合规标准列表
                     * 
                     */
                    void SetBenchmarkStandardSet(const std::vector<ComplianceBenchmarkStandard>& _benchmarkStandardSet);

                    /**
                     * 判断参数 BenchmarkStandardSet 是否已赋值
                     * @return BenchmarkStandardSet 是否已赋值
                     * 
                     */
                    bool BenchmarkStandardSetHasBeenSet() const;

                private:

                    /**
                     * 周期任务的ID
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                    /**
                     * 资产类型。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 最近一次触发的时间
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                    /**
                     * 总的检查项数目
                     */
                    uint64_t m_totalPolicyItemCount;
                    bool m_totalPolicyItemCountHasBeenSet;

                    /**
                     * 周期设置
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * 合规标准列表
                     */
                    std::vector<ComplianceBenchmarkStandard> m_benchmarkStandardSet;
                    bool m_benchmarkStandardSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_
