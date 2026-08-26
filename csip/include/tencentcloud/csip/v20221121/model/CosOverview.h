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
                * 对象存储审计概览页面数据结构
                */
                class CosOverview : public AbstractModel
                {
                public:
                    CosOverview();
                    ~CosOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产总数</p>
                     * @return AssetCount <p>资产总数</p>
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置<p>资产总数</p>
                     * @param _assetCount <p>资产总数</p>
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
                     * 获取<p>需要立即处理的资产数</p>
                     * @return AlarmAssetCount <p>需要立即处理的资产数</p>
                     * 
                     */
                    int64_t GetAlarmAssetCount() const;

                    /**
                     * 设置<p>需要立即处理的资产数</p>
                     * @param _alarmAssetCount <p>需要立即处理的资产数</p>
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
                     * 获取<p>需要加固的资产数</p>
                     * @return RiskAssetCount <p>需要加固的资产数</p>
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 设置<p>需要加固的资产数</p>
                     * @param _riskAssetCount <p>需要加固的资产数</p>
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
                     * 获取<p>告警总数</p>
                     * @return AlarmCount <p>告警总数</p>
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置<p>告警总数</p>
                     * @param _alarmCount <p>告警总数</p>
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
                     * 获取<p>当日新增告警总数</p>
                     * @return IncrementAlarmCount <p>当日新增告警总数</p>
                     * 
                     */
                    int64_t GetIncrementAlarmCount() const;

                    /**
                     * 设置<p>当日新增告警总数</p>
                     * @param _incrementAlarmCount <p>当日新增告警总数</p>
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
                     * 获取<p>风险总数</p>
                     * @return RiskCount <p>风险总数</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险总数</p>
                     * @param _riskCount <p>风险总数</p>
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
                     * 获取<p>当日新增告警总数</p>
                     * @return IncrementRiskCount <p>当日新增告警总数</p>
                     * 
                     */
                    int64_t GetIncrementRiskCount() const;

                    /**
                     * 设置<p>当日新增告警总数</p>
                     * @param _incrementRiskCount <p>当日新增告警总数</p>
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
                     * 获取<p>风险top详情</p>
                     * @return RiskTop <p>风险top详情</p>
                     * 
                     */
                    std::vector<CosRiskInfo> GetRiskTop() const;

                    /**
                     * 设置<p>风险top详情</p>
                     * @param _riskTop <p>风险top详情</p>
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
                     * 获取<p>告警风险top</p>
                     * @return AlarmTop <p>告警风险top</p>
                     * 
                     */
                    std::vector<CosRiskInfo> GetAlarmTop() const;

                    /**
                     * 设置<p>告警风险top</p>
                     * @param _alarmTop <p>告警风险top</p>
                     * 
                     */
                    void SetAlarmTop(const std::vector<CosRiskInfo>& _alarmTop);

                    /**
                     * 判断参数 AlarmTop 是否已赋值
                     * @return AlarmTop 是否已赋值
                     * 
                     */
                    bool AlarmTopHasBeenSet() const;

                    /**
                     * 获取<p>高等级敏感文件数</p>
                     * @return HighLevelSensitiveFileCount <p>高等级敏感文件数</p>
                     * 
                     */
                    int64_t GetHighLevelSensitiveFileCount() const;

                    /**
                     * 设置<p>高等级敏感文件数</p>
                     * @param _highLevelSensitiveFileCount <p>高等级敏感文件数</p>
                     * 
                     */
                    void SetHighLevelSensitiveFileCount(const int64_t& _highLevelSensitiveFileCount);

                    /**
                     * 判断参数 HighLevelSensitiveFileCount 是否已赋值
                     * @return HighLevelSensitiveFileCount 是否已赋值
                     * 
                     */
                    bool HighLevelSensitiveFileCountHasBeenSet() const;

                private:

                    /**
                     * <p>资产总数</p>
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>需要立即处理的资产数</p>
                     */
                    int64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                    /**
                     * <p>需要加固的资产数</p>
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * <p>告警总数</p>
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>当日新增告警总数</p>
                     */
                    int64_t m_incrementAlarmCount;
                    bool m_incrementAlarmCountHasBeenSet;

                    /**
                     * <p>风险总数</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>当日新增告警总数</p>
                     */
                    int64_t m_incrementRiskCount;
                    bool m_incrementRiskCountHasBeenSet;

                    /**
                     * <p>风险top详情</p>
                     */
                    std::vector<CosRiskInfo> m_riskTop;
                    bool m_riskTopHasBeenSet;

                    /**
                     * <p>告警风险top</p>
                     */
                    std::vector<CosRiskInfo> m_alarmTop;
                    bool m_alarmTopHasBeenSet;

                    /**
                     * <p>高等级敏感文件数</p>
                     */
                    int64_t m_highLevelSensitiveFileCount;
                    bool m_highLevelSensitiveFileCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_
