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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_AGGREGATIONLEGEND_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_AGGREGATIONLEGEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 聚合函数
                */
                class AggregationLegend : public AbstractModel
                {
                public:
                    AggregationLegend();
                    ~AggregationLegend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标支持的聚合函数
                     * @return Aggregation 指标支持的聚合函数
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置指标支持的聚合函数
                     * @param _aggregation 指标支持的聚合函数
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取聚合函数作用于指标后对应的描述
                     * @return Legend 聚合函数作用于指标后对应的描述
                     * 
                     */
                    std::string GetLegend() const;

                    /**
                     * 设置聚合函数作用于指标后对应的描述
                     * @param _legend 聚合函数作用于指标后对应的描述
                     * 
                     */
                    void SetLegend(const std::string& _legend);

                    /**
                     * 判断参数 Legend 是否已赋值
                     * @return Legend 是否已赋值
                     * 
                     */
                    bool LegendHasBeenSet() const;

                    /**
                     * 获取聚合之后的指标单位
                     * @return Unit 聚合之后的指标单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置聚合之后的指标单位
                     * @param _unit 聚合之后的指标单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * 指标支持的聚合函数
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * 聚合函数作用于指标后对应的描述
                     */
                    std::string m_legend;
                    bool m_legendHasBeenSet;

                    /**
                     * 聚合之后的指标单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_AGGREGATIONLEGEND_H_
