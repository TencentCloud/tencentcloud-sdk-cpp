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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>
#include <tencentcloud/csip/v20221121/model/BaselineRiskLevelStatistic.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线子分类维度的聚合结果，承载该子分类下检测项的通过/未通过统计。
                */
                class BaselineAggregatedCategory : public AbstractModel
                {
                public:
                    BaselineAggregatedCategory();
                    ~BaselineAggregatedCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基线子分类基础信息（含分类 ID、名称、描述）。</p>
                     * @return Category <p>基线子分类基础信息（含分类 ID、名称、描述）。</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>基线子分类基础信息（含分类 ID、名称、描述）。</p>
                     * @param _category <p>基线子分类基础信息（含分类 ID、名称、描述）。</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>该子分类下未通过检测项按风险等级的分布统计。</p>
                     * @return NotPassItemRiskLevelStatistic <p>该子分类下未通过检测项按风险等级的分布统计。</p>
                     * 
                     */
                    std::vector<BaselineRiskLevelStatistic> GetNotPassItemRiskLevelStatistic() const;

                    /**
                     * 设置<p>该子分类下未通过检测项按风险等级的分布统计。</p>
                     * @param _notPassItemRiskLevelStatistic <p>该子分类下未通过检测项按风险等级的分布统计。</p>
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
                     * 获取<p>该子分类下结果为 PASS 的检测项数量。</p>
                     * @return PassItemCount <p>该子分类下结果为 PASS 的检测项数量。</p>
                     * 
                     */
                    uint64_t GetPassItemCount() const;

                    /**
                     * 设置<p>该子分类下结果为 PASS 的检测项数量。</p>
                     * @param _passItemCount <p>该子分类下结果为 PASS 的检测项数量。</p>
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
                     * 获取<p>该子分类下结果为 NOT_PASS 的检测项数量。</p>
                     * @return NotPassItemCount <p>该子分类下结果为 NOT_PASS 的检测项数量。</p>
                     * 
                     */
                    uint64_t GetNotPassItemCount() const;

                    /**
                     * 设置<p>该子分类下结果为 NOT_PASS 的检测项数量。</p>
                     * @param _notPassItemCount <p>该子分类下结果为 NOT_PASS 的检测项数量。</p>
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
                     * 获取<p>该子分类下检测项通过率，单位为百分比（0~100），保留两位小数。</p>
                     * @return PassRate <p>该子分类下检测项通过率，单位为百分比（0~100），保留两位小数。</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>该子分类下检测项通过率，单位为百分比（0~100），保留两位小数。</p>
                     * @param _passRate <p>该子分类下检测项通过率，单位为百分比（0~100），保留两位小数。</p>
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
                     * <p>基线子分类基础信息（含分类 ID、名称、描述）。</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>该子分类下未通过检测项按风险等级的分布统计。</p>
                     */
                    std::vector<BaselineRiskLevelStatistic> m_notPassItemRiskLevelStatistic;
                    bool m_notPassItemRiskLevelStatisticHasBeenSet;

                    /**
                     * <p>该子分类下结果为 PASS 的检测项数量。</p>
                     */
                    uint64_t m_passItemCount;
                    bool m_passItemCountHasBeenSet;

                    /**
                     * <p>该子分类下结果为 NOT_PASS 的检测项数量。</p>
                     */
                    uint64_t m_notPassItemCount;
                    bool m_notPassItemCountHasBeenSet;

                    /**
                     * <p>该子分类下检测项通过率，单位为百分比（0~100），保留两位小数。</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_
