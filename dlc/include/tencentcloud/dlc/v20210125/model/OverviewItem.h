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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OVERVIEWITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 概览数据项，用于监控
                */
                class OverviewItem : public AbstractModel
                {
                public:
                    OverviewItem();
                    ~OverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图表类型（与请求中的 ChartTypes 对应）</p>
                     * @return ChartType <p>图表类型（与请求中的 ChartTypes 对应）</p>
                     * 
                     */
                    std::string GetChartType() const;

                    /**
                     * 设置<p>图表类型（与请求中的 ChartTypes 对应）</p>
                     * @param _chartType <p>图表类型（与请求中的 ChartTypes 对应）</p>
                     * 
                     */
                    void SetChartType(const std::string& _chartType);

                    /**
                     * 判断参数 ChartType 是否已赋值
                     * @return ChartType 是否已赋值
                     * 
                     */
                    bool ChartTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前瞬时值（如 QPS=15.2、延迟=120.5ms、利用率=85.0%）。查询失败或无数据时为 null</p>
                     * @return Value <p>当前瞬时值（如 QPS=15.2、延迟=120.5ms、利用率=85.0%）。查询失败或无数据时为 null</p>
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置<p>当前瞬时值（如 QPS=15.2、延迟=120.5ms、利用率=85.0%）。查询失败或无数据时为 null</p>
                     * @param _value <p>当前瞬时值（如 QPS=15.2、延迟=120.5ms、利用率=85.0%）。查询失败或无数据时为 null</p>
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>图表类型（与请求中的 ChartTypes 对应）</p>
                     */
                    std::string m_chartType;
                    bool m_chartTypeHasBeenSet;

                    /**
                     * <p>当前瞬时值（如 QPS=15.2、延迟=120.5ms、利用率=85.0%）。查询失败或无数据时为 null</p>
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OVERVIEWITEM_H_
