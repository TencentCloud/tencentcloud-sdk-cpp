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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDSERIES_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDSERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/TDEMSSETrendPoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 大模型对话趋势维度序列
                */
                class TDEMSSETrendSeries : public AbstractModel
                {
                public:
                    TDEMSSETrendSeries();
                    ~TDEMSSETrendSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>维度取值。空值保留为空字符串。</p>
                     * @return DimensionValue <p>维度取值。空值保留为空字符串。</p>
                     * 
                     */
                    std::string GetDimensionValue() const;

                    /**
                     * 设置<p>维度取值。空值保留为空字符串。</p>
                     * @param _dimensionValue <p>维度取值。空值保留为空字符串。</p>
                     * 
                     */
                    void SetDimensionValue(const std::string& _dimensionValue);

                    /**
                     * 判断参数 DimensionValue 是否已赋值
                     * @return DimensionValue 是否已赋值
                     * 
                     */
                    bool DimensionValueHasBeenSet() const;

                    /**
                     * 获取<p>该取值在各个时间桶上的点。</p>
                     * @return Points <p>该取值在各个时间桶上的点。</p>
                     * 
                     */
                    std::vector<TDEMSSETrendPoint> GetPoints() const;

                    /**
                     * 设置<p>该取值在各个时间桶上的点。</p>
                     * @param _points <p>该取值在各个时间桶上的点。</p>
                     * 
                     */
                    void SetPoints(const std::vector<TDEMSSETrendPoint>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * <p>维度取值。空值保留为空字符串。</p>
                     */
                    std::string m_dimensionValue;
                    bool m_dimensionValueHasBeenSet;

                    /**
                     * <p>该取值在各个时间桶上的点。</p>
                     */
                    std::vector<TDEMSSETrendPoint> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDSERIES_H_
