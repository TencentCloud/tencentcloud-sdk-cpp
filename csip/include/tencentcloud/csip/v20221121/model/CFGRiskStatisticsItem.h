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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云资源配置风险统计信息
                */
                class CFGRiskStatisticsItem : public AbstractModel
                {
                public:
                    CFGRiskStatisticsItem();
                    ~CFGRiskStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险总数</p>
                     * @return TotalRiskCount <p>风险总数</p>
                     * 
                     */
                    uint64_t GetTotalRiskCount() const;

                    /**
                     * 设置<p>风险总数</p>
                     * @param _totalRiskCount <p>风险总数</p>
                     * 
                     */
                    void SetTotalRiskCount(const uint64_t& _totalRiskCount);

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>近7天新增风险数量</p>
                     * @return RiskAddCount <p>近7天新增风险数量</p>
                     * 
                     */
                    uint64_t GetRiskAddCount() const;

                    /**
                     * 设置<p>近7天新增风险数量</p>
                     * @param _riskAddCount <p>近7天新增风险数量</p>
                     * 
                     */
                    void SetRiskAddCount(const uint64_t& _riskAddCount);

                    /**
                     * 判断参数 RiskAddCount 是否已赋值
                     * @return RiskAddCount 是否已赋值
                     * 
                     */
                    bool RiskAddCountHasBeenSet() const;

                    /**
                     * 获取<p>全部云资源配置风险的待修复项</p>
                     * @return CheckViewCount <p>全部云资源配置风险的待修复项</p>
                     * 
                     */
                    uint64_t GetCheckViewCount() const;

                    /**
                     * 设置<p>全部云资源配置风险的待修复项</p>
                     * @param _checkViewCount <p>全部云资源配置风险的待修复项</p>
                     * 
                     */
                    void SetCheckViewCount(const uint64_t& _checkViewCount);

                    /**
                     * 判断参数 CheckViewCount 是否已赋值
                     * @return CheckViewCount 是否已赋值
                     * 
                     */
                    bool CheckViewCountHasBeenSet() const;

                    /**
                     * 获取<p>高优待修复风险</p>
                     * @return HighPriorityRiskCount <p>高优待修复风险</p>
                     * 
                     */
                    uint64_t GetHighPriorityRiskCount() const;

                    /**
                     * 设置<p>高优待修复风险</p>
                     * @param _highPriorityRiskCount <p>高优待修复风险</p>
                     * 
                     */
                    void SetHighPriorityRiskCount(const uint64_t& _highPriorityRiskCount);

                    /**
                     * 判断参数 HighPriorityRiskCount 是否已赋值
                     * @return HighPriorityRiskCount 是否已赋值
                     * 
                     */
                    bool HighPriorityRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>近7天新增的待修复项</p>
                     * @return CheckViewAddCount <p>近7天新增的待修复项</p>
                     * 
                     */
                    uint64_t GetCheckViewAddCount() const;

                    /**
                     * 设置<p>近7天新增的待修复项</p>
                     * @param _checkViewAddCount <p>近7天新增的待修复项</p>
                     * 
                     */
                    void SetCheckViewAddCount(const uint64_t& _checkViewAddCount);

                    /**
                     * 判断参数 CheckViewAddCount 是否已赋值
                     * @return CheckViewAddCount 是否已赋值
                     * 
                     */
                    bool CheckViewAddCountHasBeenSet() const;

                    /**
                     * 获取<p>全部云资源配置风险的待修复项，高优待修复</p>
                     * @return HighPriorityCheckViewCount <p>全部云资源配置风险的待修复项，高优待修复</p>
                     * 
                     */
                    uint64_t GetHighPriorityCheckViewCount() const;

                    /**
                     * 设置<p>全部云资源配置风险的待修复项，高优待修复</p>
                     * @param _highPriorityCheckViewCount <p>全部云资源配置风险的待修复项，高优待修复</p>
                     * 
                     */
                    void SetHighPriorityCheckViewCount(const uint64_t& _highPriorityCheckViewCount);

                    /**
                     * 判断参数 HighPriorityCheckViewCount 是否已赋值
                     * @return HighPriorityCheckViewCount 是否已赋值
                     * 
                     */
                    bool HighPriorityCheckViewCountHasBeenSet() const;

                    /**
                     * 获取<p>资产视角下的展示条数</p>
                     * @return AssetViewCount <p>资产视角下的展示条数</p>
                     * 
                     */
                    uint64_t GetAssetViewCount() const;

                    /**
                     * 设置<p>资产视角下的展示条数</p>
                     * @param _assetViewCount <p>资产视角下的展示条数</p>
                     * 
                     */
                    void SetAssetViewCount(const uint64_t& _assetViewCount);

                    /**
                     * 判断参数 AssetViewCount 是否已赋值
                     * @return AssetViewCount 是否已赋值
                     * 
                     */
                    bool AssetViewCountHasBeenSet() const;

                    /**
                     * 获取<p>近7天新增的待修复资产条数</p>
                     * @return AssetViewAddCount <p>近7天新增的待修复资产条数</p>
                     * 
                     */
                    uint64_t GetAssetViewAddCount() const;

                    /**
                     * 设置<p>近7天新增的待修复资产条数</p>
                     * @param _assetViewAddCount <p>近7天新增的待修复资产条数</p>
                     * 
                     */
                    void SetAssetViewAddCount(const uint64_t& _assetViewAddCount);

                    /**
                     * 判断参数 AssetViewAddCount 是否已赋值
                     * @return AssetViewAddCount 是否已赋值
                     * 
                     */
                    bool AssetViewAddCountHasBeenSet() const;

                    /**
                     * 获取<p>资产视角下的展示条数，高优待修复量</p>
                     * @return HighPriorityAssetViewCount <p>资产视角下的展示条数，高优待修复量</p>
                     * 
                     */
                    uint64_t GetHighPriorityAssetViewCount() const;

                    /**
                     * 设置<p>资产视角下的展示条数，高优待修复量</p>
                     * @param _highPriorityAssetViewCount <p>资产视角下的展示条数，高优待修复量</p>
                     * 
                     */
                    void SetHighPriorityAssetViewCount(const uint64_t& _highPriorityAssetViewCount);

                    /**
                     * 判断参数 HighPriorityAssetViewCount 是否已赋值
                     * @return HighPriorityAssetViewCount 是否已赋值
                     * 
                     */
                    bool HighPriorityAssetViewCountHasBeenSet() const;

                private:

                    /**
                     * <p>风险总数</p>
                     */
                    uint64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                    /**
                     * <p>近7天新增风险数量</p>
                     */
                    uint64_t m_riskAddCount;
                    bool m_riskAddCountHasBeenSet;

                    /**
                     * <p>全部云资源配置风险的待修复项</p>
                     */
                    uint64_t m_checkViewCount;
                    bool m_checkViewCountHasBeenSet;

                    /**
                     * <p>高优待修复风险</p>
                     */
                    uint64_t m_highPriorityRiskCount;
                    bool m_highPriorityRiskCountHasBeenSet;

                    /**
                     * <p>近7天新增的待修复项</p>
                     */
                    uint64_t m_checkViewAddCount;
                    bool m_checkViewAddCountHasBeenSet;

                    /**
                     * <p>全部云资源配置风险的待修复项，高优待修复</p>
                     */
                    uint64_t m_highPriorityCheckViewCount;
                    bool m_highPriorityCheckViewCountHasBeenSet;

                    /**
                     * <p>资产视角下的展示条数</p>
                     */
                    uint64_t m_assetViewCount;
                    bool m_assetViewCountHasBeenSet;

                    /**
                     * <p>近7天新增的待修复资产条数</p>
                     */
                    uint64_t m_assetViewAddCount;
                    bool m_assetViewAddCountHasBeenSet;

                    /**
                     * <p>资产视角下的展示条数，高优待修复量</p>
                     */
                    uint64_t m_highPriorityAssetViewCount;
                    bool m_highPriorityAssetViewCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_
