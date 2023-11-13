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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 过去七天（不算当天）表的热度值
                */
                class TableHeat : public AbstractModel
                {
                public:
                    TableHeat();
                    ~TableHeat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取统计日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayTime 统计日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置统计日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayTime 统计日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取表热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Heat 表热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHeat() const;

                    /**
                     * 设置表热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heat 表热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeat(const double& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     * 
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取表热度最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxHeat 表热度最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMaxHeat() const;

                    /**
                     * 设置表热度最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxHeat 表热度最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxHeat(const double& _maxHeat);

                    /**
                     * 判断参数 MaxHeat 是否已赋值
                     * @return MaxHeat 是否已赋值
                     * 
                     */
                    bool MaxHeatHasBeenSet() const;

                private:

                    /**
                     * 表ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 统计日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * 表热度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * 表热度最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_maxHeat;
                    bool m_maxHeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHEAT_H_
