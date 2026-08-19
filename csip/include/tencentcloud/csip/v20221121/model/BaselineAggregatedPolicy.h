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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineRiskLevelStatistic.h>
#include <tencentcloud/csip/v20221121/model/BaselineAggregatedCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线策略聚合结果，用于策略维度汇总展示当前扫描通过/未通过情况。
                */
                class BaselineAggregatedPolicy : public AbstractModel
                {
                public:
                    BaselineAggregatedPolicy();
                    ~BaselineAggregatedPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>系统策略所属父分类 ID（仅 PolicyType=SYSTEM 时聚合使用，自定义策略为 0）。</p>
                     * @return ParentCategoryID <p>系统策略所属父分类 ID（仅 PolicyType=SYSTEM 时聚合使用，自定义策略为 0）。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>系统策略所属父分类 ID（仅 PolicyType=SYSTEM 时聚合使用，自定义策略为 0）。</p>
                     * @param _parentCategoryID <p>系统策略所属父分类 ID（仅 PolicyType=SYSTEM 时聚合使用，自定义策略为 0）。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>本次聚合涉及的基线策略 ID 列表。</p>
                     * @return PolicyID <p>本次聚合涉及的基线策略 ID 列表。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>本次聚合涉及的基线策略 ID 列表。</p>
                     * @param _policyID <p>本次聚合涉及的基线策略 ID 列表。</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>策略名称（自定义策略为用户输入，系统策略为内置分类名）。</p>
                     * @return Name <p>策略名称（自定义策略为用户输入，系统策略为内置分类名）。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称（自定义策略为用户输入，系统策略为内置分类名）。</p>
                     * @param _name <p>策略名称（自定义策略为用户输入，系统策略为内置分类名）。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>策略描述。</p>
                     * @return Description <p>策略描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述。</p>
                     * @param _description <p>策略描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>策略已配置的检测项数量。</p>
                     * @return ConfItemCount <p>策略已配置的检测项数量。</p>
                     * 
                     */
                    uint64_t GetConfItemCount() const;

                    /**
                     * 设置<p>策略已配置的检测项数量。</p>
                     * @param _confItemCount <p>策略已配置的检测项数量。</p>
                     * 
                     */
                    void SetConfItemCount(const uint64_t& _confItemCount);

                    /**
                     * 判断参数 ConfItemCount 是否已赋值
                     * @return ConfItemCount 是否已赋值
                     * 
                     */
                    bool ConfItemCountHasBeenSet() const;

                    /**
                     * 获取<p>本策略下结果为 PASS 的检测项数量。</p>
                     * @return PassItemCount <p>本策略下结果为 PASS 的检测项数量。</p>
                     * 
                     */
                    uint64_t GetPassItemCount() const;

                    /**
                     * 设置<p>本策略下结果为 PASS 的检测项数量。</p>
                     * @param _passItemCount <p>本策略下结果为 PASS 的检测项数量。</p>
                     * 
                     */
                    void SetPassItemCount(const uint64_t& _passItemCount);

                    /**
                     * 判断参数 PassItemCount 是否已赋值
                     * @return PassItemCount 是否已赋值
                     * 
                     */
                    bool PassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>本策略下结果为 NOT_PASS 的检测项数量。</p>
                     * @return NotPassItemCount <p>本策略下结果为 NOT_PASS 的检测项数量。</p>
                     * 
                     */
                    uint64_t GetNotPassItemCount() const;

                    /**
                     * 设置<p>本策略下结果为 NOT_PASS 的检测项数量。</p>
                     * @param _notPassItemCount <p>本策略下结果为 NOT_PASS 的检测项数量。</p>
                     * 
                     */
                    void SetNotPassItemCount(const uint64_t& _notPassItemCount);

                    /**
                     * 判断参数 NotPassItemCount 是否已赋值
                     * @return NotPassItemCount 是否已赋值
                     * 
                     */
                    bool NotPassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>未通过检测项按风险等级（LOW/MEDIUM/HIGH/CRITICAL）的分布统计。</p>
                     * @return NotPassItemRiskLevelStatistic <p>未通过检测项按风险等级（LOW/MEDIUM/HIGH/CRITICAL）的分布统计。</p>
                     * 
                     */
                    std::vector<BaselineRiskLevelStatistic> GetNotPassItemRiskLevelStatistic() const;

                    /**
                     * 设置<p>未通过检测项按风险等级（LOW/MEDIUM/HIGH/CRITICAL）的分布统计。</p>
                     * @param _notPassItemRiskLevelStatistic <p>未通过检测项按风险等级（LOW/MEDIUM/HIGH/CRITICAL）的分布统计。</p>
                     * 
                     */
                    void SetNotPassItemRiskLevelStatistic(const std::vector<BaselineRiskLevelStatistic>& _notPassItemRiskLevelStatistic);

                    /**
                     * 判断参数 NotPassItemRiskLevelStatistic 是否已赋值
                     * @return NotPassItemRiskLevelStatistic 是否已赋值
                     * 
                     */
                    bool NotPassItemRiskLevelStatisticHasBeenSet() const;

                    /**
                     * 获取<p>本策略最近一次扫描的通过率，单位为百分比（0~100），保留两位小数。</p>
                     * @return PassRate <p>本策略最近一次扫描的通过率，单位为百分比（0~100），保留两位小数。</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>本策略最近一次扫描的通过率，单位为百分比（0~100），保留两位小数。</p>
                     * @param _passRate <p>本策略最近一次扫描的通过率，单位为百分比（0~100），保留两位小数。</p>
                     * 
                     */
                    void SetPassRate(const double& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>该策略下各子分类的扫描结果统计明细。</p>
                     * @return CategoryStatistic <p>该策略下各子分类的扫描结果统计明细。</p>
                     * 
                     */
                    std::vector<BaselineAggregatedCategory> GetCategoryStatistic() const;

                    /**
                     * 设置<p>该策略下各子分类的扫描结果统计明细。</p>
                     * @param _categoryStatistic <p>该策略下各子分类的扫描结果统计明细。</p>
                     * 
                     */
                    void SetCategoryStatistic(const std::vector<BaselineAggregatedCategory>& _categoryStatistic);

                    /**
                     * 判断参数 CategoryStatistic 是否已赋值
                     * @return CategoryStatistic 是否已赋值
                     * 
                     */
                    bool CategoryStatisticHasBeenSet() const;

                    /**
                     * 获取<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @return PolicyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @param _policyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @return CheckAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @param _checkAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>该基线类别是否被扫描过</p>
                     * @return Scanned <p>该基线类别是否被扫描过</p>
                     * 
                     */
                    bool GetScanned() const;

                    /**
                     * 设置<p>该基线类别是否被扫描过</p>
                     * @param _scanned <p>该基线类别是否被扫描过</p>
                     * 
                     */
                    void SetScanned(const bool& _scanned);

                    /**
                     * 判断参数 Scanned 是否已赋值
                     * @return Scanned 是否已赋值
                     * 
                     */
                    bool ScannedHasBeenSet() const;

                private:

                    /**
                     * <p>系统策略所属父分类 ID（仅 PolicyType=SYSTEM 时聚合使用，自定义策略为 0）。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>本次聚合涉及的基线策略 ID 列表。</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>策略名称（自定义策略为用户输入，系统策略为内置分类名）。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略已配置的检测项数量。</p>
                     */
                    uint64_t m_confItemCount;
                    bool m_confItemCountHasBeenSet;

                    /**
                     * <p>本策略下结果为 PASS 的检测项数量。</p>
                     */
                    uint64_t m_passItemCount;
                    bool m_passItemCountHasBeenSet;

                    /**
                     * <p>本策略下结果为 NOT_PASS 的检测项数量。</p>
                     */
                    uint64_t m_notPassItemCount;
                    bool m_notPassItemCountHasBeenSet;

                    /**
                     * <p>未通过检测项按风险等级（LOW/MEDIUM/HIGH/CRITICAL）的分布统计。</p>
                     */
                    std::vector<BaselineRiskLevelStatistic> m_notPassItemRiskLevelStatistic;
                    bool m_notPassItemRiskLevelStatisticHasBeenSet;

                    /**
                     * <p>本策略最近一次扫描的通过率，单位为百分比（0~100），保留两位小数。</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>该策略下各子分类的扫描结果统计明细。</p>
                     */
                    std::vector<BaselineAggregatedCategory> m_categoryStatistic;
                    bool m_categoryStatisticHasBeenSet;

                    /**
                     * <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>该基线类别是否被扫描过</p>
                     */
                    bool m_scanned;
                    bool m_scannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_
