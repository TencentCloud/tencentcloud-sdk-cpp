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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONTRENDDATA_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONTRENDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrendDataPoint.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 维度趋势数据
                */
                class DimensionTrendData : public AbstractModel
                {
                public:
                    DimensionTrendData();
                    ~DimensionTrendData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
                     * @return DimensionId 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
                     * @param _dimensionId 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
                     * 
                     */
                    void SetDimensionId(const std::string& _dimensionId);

                    /**
                     * 判断参数 DimensionId 是否已赋值
                     * @return DimensionId 是否已赋值
                     * 
                     */
                    bool DimensionIdHasBeenSet() const;

                    /**
                     * 获取每日数据点
                     * @return DataPoints 每日数据点
                     * 
                     */
                    std::vector<TrendDataPoint> GetDataPoints() const;

                    /**
                     * 设置每日数据点
                     * @param _dataPoints 每日数据点
                     * 
                     */
                    void SetDataPoints(const std::vector<TrendDataPoint>& _dataPoints);

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * 每日数据点
                     */
                    std::vector<TrendDataPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONTRENDDATA_H_
