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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos概览页面数据结构
                */
                class CosOverview : public AbstractModel
                {
                public:
                    CosOverview();
                    ~CosOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产总数
                     * @return AssetCount 资产总数
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置资产总数
                     * @param _assetCount 资产总数
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取需要立即处理的资产数
                     * @return AlarmAssetCount 需要立即处理的资产数
                     * 
                     */
                    int64_t GetAlarmAssetCount() const;

                    /**
                     * 设置需要立即处理的资产数
                     * @param _alarmAssetCount 需要立即处理的资产数
                     * 
                     */
                    void SetAlarmAssetCount(const int64_t& _alarmAssetCount);

                    /**
                     * 判断参数 AlarmAssetCount 是否已赋值
                     * @return AlarmAssetCount 是否已赋值
                     * 
                     */
                    bool AlarmAssetCountHasBeenSet() const;

                    /**
                     * 获取需要加固的资产数
                     * @return RiskAssetCount 需要加固的资产数
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 设置需要加固的资产数
                     * @param _riskAssetCount 需要加固的资产数
                     * 
                     */
                    void SetRiskAssetCount(const int64_t& _riskAssetCount);

                    /**
                     * 判断参数 RiskAssetCount 是否已赋值
                     * @return RiskAssetCount 是否已赋值
                     * 
                     */
                    bool RiskAssetCountHasBeenSet() const;

                    /**
                     * 获取告警总数
                     * @return AlarmCount 告警总数
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置告警总数
                     * @param _alarmCount 告警总数
                     * 
                     */
                    void SetAlarmCount(const int64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取当日新增告警总数
                     * @return IncrementAlarmCount 当日新增告警总数
                     * 
                     */
                    int64_t GetIncrementAlarmCount() const;

                    /**
                     * 设置当日新增告警总数
                     * @param _incrementAlarmCount 当日新增告警总数
                     * 
                     */
                    void SetIncrementAlarmCount(const int64_t& _incrementAlarmCount);

                    /**
                     * 判断参数 IncrementAlarmCount 是否已赋值
                     * @return IncrementAlarmCount 是否已赋值
                     * 
                     */
                    bool IncrementAlarmCountHasBeenSet() const;

                    /**
                     * 获取风险总数
                     * @return RiskCount 风险总数
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险总数
                     * @param _riskCount 风险总数
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取当日新增告警总数
                     * @return IncrementRiskCount 当日新增告警总数
                     * 
                     */
                    int64_t GetIncrementRiskCount() const;

                    /**
                     * 设置当日新增告警总数
                     * @param _incrementRiskCount 当日新增告警总数
                     * 
                     */
                    void SetIncrementRiskCount(const int64_t& _incrementRiskCount);

                    /**
                     * 判断参数 IncrementRiskCount 是否已赋值
                     * @return IncrementRiskCount 是否已赋值
                     * 
                     */
                    bool IncrementRiskCountHasBeenSet() const;

                    /**
                     * 获取风险top详情
                     * @return RiskTop 风险top详情
                     * 
                     */
                    std::vector<CosRiskInfo> GetRiskTop() const;

                    /**
                     * 设置风险top详情
                     * @param _riskTop 风险top详情
                     * 
                     */
                    void SetRiskTop(const std::vector<CosRiskInfo>& _riskTop);

                    /**
                     * 判断参数 RiskTop 是否已赋值
                     * @return RiskTop 是否已赋值
                     * 
                     */
                    bool RiskTopHasBeenSet() const;

                    /**
                     * 获取告警风险top
                     * @return AlarmTop 告警风险top
                     * 
                     */
                    std::vector<CosRiskInfo> GetAlarmTop() const;

                    /**
                     * 设置告警风险top
                     * @param _alarmTop 告警风险top
                     * 
                     */
                    void SetAlarmTop(const std::vector<CosRiskInfo>& _alarmTop);

                    /**
                     * 判断参数 AlarmTop 是否已赋值
                     * @return AlarmTop 是否已赋值
                     * 
                     */
                    bool AlarmTopHasBeenSet() const;

                private:

                    /**
                     * 资产总数
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 需要立即处理的资产数
                     */
                    int64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                    /**
                     * 需要加固的资产数
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * 告警总数
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * 当日新增告警总数
                     */
                    int64_t m_incrementAlarmCount;
                    bool m_incrementAlarmCountHasBeenSet;

                    /**
                     * 风险总数
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 当日新增告警总数
                     */
                    int64_t m_incrementRiskCount;
                    bool m_incrementRiskCountHasBeenSet;

                    /**
                     * 风险top详情
                     */
                    std::vector<CosRiskInfo> m_riskTop;
                    bool m_riskTopHasBeenSet;

                    /**
                     * 告警风险top
                     */
                    std::vector<CosRiskInfo> m_alarmTop;
                    bool m_alarmTopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_
