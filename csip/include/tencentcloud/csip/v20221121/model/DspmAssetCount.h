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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_

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
                * Dspm 资产统计数
                */
                class DspmAssetCount : public AbstractModel
                {
                public:
                    DspmAssetCount();
                    ~DspmAssetCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产个数
                     * @return AssetCount 资产个数
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置资产个数
                     * @param _assetCount 资产个数
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
                     * 获取资产有危险风险的个数
                     * @return DangerRiskCount 资产有危险风险的个数
                     * 
                     */
                    int64_t GetDangerRiskCount() const;

                    /**
                     * 设置资产有危险风险的个数
                     * @param _dangerRiskCount 资产有危险风险的个数
                     * 
                     */
                    void SetDangerRiskCount(const int64_t& _dangerRiskCount);

                    /**
                     * 判断参数 DangerRiskCount 是否已赋值
                     * @return DangerRiskCount 是否已赋值
                     * 
                     */
                    bool DangerRiskCountHasBeenSet() const;

                    /**
                     * 获取资产有低风险的个数
                     * @return LowRiskCount 资产有低风险的个数
                     * 
                     */
                    int64_t GetLowRiskCount() const;

                    /**
                     * 设置资产有低风险的个数
                     * @param _lowRiskCount 资产有低风险的个数
                     * 
                     */
                    void SetLowRiskCount(const int64_t& _lowRiskCount);

                    /**
                     * 判断参数 LowRiskCount 是否已赋值
                     * @return LowRiskCount 是否已赋值
                     * 
                     */
                    bool LowRiskCountHasBeenSet() const;

                    /**
                     * 获取有待处理风险的实例数
                     * @return RiskAssetCount 有待处理风险的实例数
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 设置有待处理风险的实例数
                     * @param _riskAssetCount 有待处理风险的实例数
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
                     * 获取有待处理告警的实例数
                     * @return AlarmAssetCount 有待处理告警的实例数
                     * 
                     */
                    int64_t GetAlarmAssetCount() const;

                    /**
                     * 设置有待处理告警的实例数
                     * @param _alarmAssetCount 有待处理告警的实例数
                     * 
                     */
                    void SetAlarmAssetCount(const int64_t& _alarmAssetCount);

                    /**
                     * 判断参数 AlarmAssetCount 是否已赋值
                     * @return AlarmAssetCount 是否已赋值
                     * 
                     */
                    bool AlarmAssetCountHasBeenSet() const;

                private:

                    /**
                     * 资产个数
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 资产有危险风险的个数
                     */
                    int64_t m_dangerRiskCount;
                    bool m_dangerRiskCountHasBeenSet;

                    /**
                     * 资产有低风险的个数
                     */
                    int64_t m_lowRiskCount;
                    bool m_lowRiskCountHasBeenSet;

                    /**
                     * 有待处理风险的实例数
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * 有待处理告警的实例数
                     */
                    int64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_
