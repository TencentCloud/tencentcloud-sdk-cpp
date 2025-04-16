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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataMaskStrategyInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据表列信息。
                */
                class Column : public AbstractModel
                {
                public:
                    Column();
                    ~Column() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名称，不区分大小写，最大支持25个字符。
                     * @return Name 列名称，不区分大小写，最大支持25个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置列名称，不区分大小写，最大支持25个字符。
                     * @param _name 列名称，不区分大小写，最大支持25个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype
                     * @return Type string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype
                     * @param _type string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取对该类的注释。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 对该类的注释。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置对该类的注释。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 对该类的注释。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取表示整个 numeric 的长度
                     * @return Precision 表示整个 numeric 的长度
                     * 
                     */
                    int64_t GetPrecision() const;

                    /**
                     * 设置表示整个 numeric 的长度
                     * @param _precision 表示整个 numeric 的长度
                     * 
                     */
                    void SetPrecision(const int64_t& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取表示小数部分的长度
                     * @return Scale 表示小数部分的长度
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置表示小数部分的长度
                     * @param _scale 表示小数部分的长度
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
                     * 获取是否为null
                     * @return Nullable 是否为null
                     * 
                     */
                    std::string GetNullable() const;

                    /**
                     * 设置是否为null
                     * @param _nullable 是否为null
                     * 
                     */
                    void SetNullable(const std::string& _nullable);

                    /**
                     * 判断参数 Nullable 是否已赋值
                     * @return Nullable 是否已赋值
                     * 
                     */
                    bool NullableHasBeenSet() const;

                    /**
                     * 获取字段位置，小的在前
                     * @return Position 字段位置，小的在前
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置字段位置，小的在前
                     * @param _position 字段位置，小的在前
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取字段创建时间
                     * @return CreateTime 字段创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置字段创建时间
                     * @param _createTime 字段创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取字段修改时间
                     * @return ModifiedTime 字段修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置字段修改时间
                     * @param _modifiedTime 字段修改时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取是否为分区字段
                     * @return IsPartition 是否为分区字段
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置是否为分区字段
                     * @param _isPartition 是否为分区字段
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                    /**
                     * 获取数据脱敏策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataMaskStrategyInfo 数据脱敏策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataMaskStrategyInfo GetDataMaskStrategyInfo() const;

                    /**
                     * 设置数据脱敏策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataMaskStrategyInfo 数据脱敏策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataMaskStrategyInfo(const DataMaskStrategyInfo& _dataMaskStrategyInfo);

                    /**
                     * 判断参数 DataMaskStrategyInfo 是否已赋值
                     * @return DataMaskStrategyInfo 是否已赋值
                     * 
                     */
                    bool DataMaskStrategyInfoHasBeenSet() const;

                private:

                    /**
                     * 列名称，不区分大小写，最大支持25个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对该类的注释。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 表示整个 numeric 的长度
                     */
                    int64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 表示小数部分的长度
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 是否为null
                     */
                    std::string m_nullable;
                    bool m_nullableHasBeenSet;

                    /**
                     * 字段位置，小的在前
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 字段创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 字段修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 是否为分区字段
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                    /**
                     * 数据脱敏策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataMaskStrategyInfo m_dataMaskStrategyInfo;
                    bool m_dataMaskStrategyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_
