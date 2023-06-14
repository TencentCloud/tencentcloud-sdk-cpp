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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_

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
                * 表评分统计信息
                */
                class TableScoreStatisticsInfo : public AbstractModel
                {
                public:
                    TableScoreStatisticsInfo();
                    ~TableScoreStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等级 1、2、3、4、5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 等级 1、2、3、4、5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置等级 1、2、3、4、5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 等级 1、2、3、4、5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scale 占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scale 占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNumber 表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableNumber() const;

                    /**
                     * 设置表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNumber 表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNumber(const int64_t& _tableNumber);

                    /**
                     * 判断参数 TableNumber 是否已赋值
                     * @return TableNumber 是否已赋值
                     * 
                     */
                    bool TableNumberHasBeenSet() const;

                private:

                    /**
                     * 等级 1、2、3、4、5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 占比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableNumber;
                    bool m_tableNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLESCORESTATISTICSINFO_H_
