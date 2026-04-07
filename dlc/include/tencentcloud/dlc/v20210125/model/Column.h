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
                     * 获取<p>列名称，不区分大小写，最大支持25个字符。</p>
                     * @return Name <p>列名称，不区分大小写，最大支持25个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>列名称，不区分大小写，最大支持25个字符。</p>
                     * @param _name <p>列名称，不区分大小写，最大支持25个字符。</p>
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
                     * 获取<p>string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype</p>
                     * @return Type <p>string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype</p>
                     * @param _type <p>string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype</p>
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
                     * 获取<p>对该类的注释。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>对该类的注释。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>对该类的注释。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>对该类的注释。</p>
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
                     * 获取<p>表示整个 numeric 的长度</p>
                     * @return Precision <p>表示整个 numeric 的长度</p>
                     * 
                     */
                    int64_t GetPrecision() const;

                    /**
                     * 设置<p>表示整个 numeric 的长度</p>
                     * @param _precision <p>表示整个 numeric 的长度</p>
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
                     * 获取<p>表示小数部分的长度</p>
                     * @return Scale <p>表示小数部分的长度</p>
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置<p>表示小数部分的长度</p>
                     * @param _scale <p>表示小数部分的长度</p>
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
                     * 获取<p>是否为null</p>
                     * @return Nullable <p>是否为null</p>
                     * 
                     */
                    std::string GetNullable() const;

                    /**
                     * 设置<p>是否为null</p>
                     * @param _nullable <p>是否为null</p>
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
                     * 获取<p>字段位置，小的在前</p>
                     * @return Position <p>字段位置，小的在前</p>
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置<p>字段位置，小的在前</p>
                     * @param _position <p>字段位置，小的在前</p>
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
                     * 获取<p>字段创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>字段创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>字段创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>字段创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>字段修改时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return ModifiedTime <p>字段修改时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>字段修改时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _modifiedTime <p>字段修改时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>是否为分区字段</p>
                     * @return IsPartition <p>是否为分区字段</p>
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置<p>是否为分区字段</p>
                     * @param _isPartition <p>是否为分区字段</p>
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
                     * 获取<p>数据脱敏策略信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataMaskStrategyInfo <p>数据脱敏策略信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataMaskStrategyInfo GetDataMaskStrategyInfo() const;

                    /**
                     * 设置<p>数据脱敏策略信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataMaskStrategyInfo <p>数据脱敏策略信息</p>
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

                    /**
                     * 获取<p>数据字段说明</p>
                     * @return TypeText <p>数据字段说明</p>
                     * 
                     */
                    std::string GetTypeText() const;

                    /**
                     * 设置<p>数据字段说明</p>
                     * @param _typeText <p>数据字段说明</p>
                     * 
                     */
                    void SetTypeText(const std::string& _typeText);

                    /**
                     * 判断参数 TypeText 是否已赋值
                     * @return TypeText 是否已赋值
                     * 
                     */
                    bool TypeTextHasBeenSet() const;

                private:

                    /**
                     * <p>列名称，不区分大小写，最大支持25个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>string|tinyint|smallint|int|bigint|boolean|float|double|decimal|timestamp|date|binary|array|map|struct|uniontype</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>对该类的注释。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>表示整个 numeric 的长度</p>
                     */
                    int64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * <p>表示小数部分的长度</p>
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * <p>是否为null</p>
                     */
                    std::string m_nullable;
                    bool m_nullableHasBeenSet;

                    /**
                     * <p>字段位置，小的在前</p>
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>字段创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>字段修改时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>是否为分区字段</p>
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                    /**
                     * <p>数据脱敏策略信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataMaskStrategyInfo m_dataMaskStrategyInfo;
                    bool m_dataMaskStrategyInfoHasBeenSet;

                    /**
                     * <p>数据字段说明</p>
                     */
                    std::string m_typeText;
                    bool m_typeTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COLUMN_H_
