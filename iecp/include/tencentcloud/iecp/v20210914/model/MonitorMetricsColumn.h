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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MONITORMETRICSCOLUMN_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MONITORMETRICSCOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 监控数据列
                */
                class MonitorMetricsColumn : public AbstractModel
                {
                public:
                    MonitorMetricsColumn();
                    ~MonitorMetricsColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据名称
                     * @return ColumnName 数据名称
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置数据名称
                     * @param _columnName 数据名称
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取数据内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnData 数据内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumnData() const;

                    /**
                     * 设置数据内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnData 数据内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnData(const std::vector<std::string>& _columnData);

                    /**
                     * 判断参数 ColumnData 是否已赋值
                     * @return ColumnData 是否已赋值
                     * 
                     */
                    bool ColumnDataHasBeenSet() const;

                    /**
                     * 获取数据所属，查询Workload类型时有值
                     * @return ColumnBelong 数据所属，查询Workload类型时有值
                     * 
                     */
                    std::string GetColumnBelong() const;

                    /**
                     * 设置数据所属，查询Workload类型时有值
                     * @param _columnBelong 数据所属，查询Workload类型时有值
                     * 
                     */
                    void SetColumnBelong(const std::string& _columnBelong);

                    /**
                     * 判断参数 ColumnBelong 是否已赋值
                     * @return ColumnBelong 是否已赋值
                     * 
                     */
                    bool ColumnBelongHasBeenSet() const;

                    /**
                     * 获取最大值
                     * @return MaxValue 最大值
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置最大值
                     * @param _maxValue 最大值
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取最小值
                     * @return MinValue 最小值
                     * 
                     */
                    double GetMinValue() const;

                    /**
                     * 设置最小值
                     * @param _minValue 最小值
                     * 
                     */
                    void SetMinValue(const double& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取平均值
                     * @return AvgValue 平均值
                     * 
                     */
                    double GetAvgValue() const;

                    /**
                     * 设置平均值
                     * @param _avgValue 平均值
                     * 
                     */
                    void SetAvgValue(const double& _avgValue);

                    /**
                     * 判断参数 AvgValue 是否已赋值
                     * @return AvgValue 是否已赋值
                     * 
                     */
                    bool AvgValueHasBeenSet() const;

                    /**
                     * 获取时间戳数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnTime 时间戳数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetColumnTime() const;

                    /**
                     * 设置时间戳数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnTime 时间戳数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnTime(const int64_t& _columnTime);

                    /**
                     * 判断参数 ColumnTime 是否已赋值
                     * @return ColumnTime 是否已赋值
                     * 
                     */
                    bool ColumnTimeHasBeenSet() const;

                private:

                    /**
                     * 数据名称
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 数据内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columnData;
                    bool m_columnDataHasBeenSet;

                    /**
                     * 数据所属，查询Workload类型时有值
                     */
                    std::string m_columnBelong;
                    bool m_columnBelongHasBeenSet;

                    /**
                     * 最大值
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * 最小值
                     */
                    double m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * 平均值
                     */
                    double m_avgValue;
                    bool m_avgValueHasBeenSet;

                    /**
                     * 时间戳数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_columnTime;
                    bool m_columnTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MONITORMETRICSCOLUMN_H_
