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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BizParams.h>
#include <tencentcloud/wedata/v20210820/model/Params.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 建表columns入参
                */
                class Columns : public AbstractModel
                {
                public:
                    Columns();
                    ~Columns() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 字段名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 字段类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 位置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPartition 是否分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置是否分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPartition 是否分区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParams 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BizParams GetBizParams() const;

                    /**
                     * 设置业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizParams 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizParams(const BizParams& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取字段精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Precision 字段精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPrecision() const;

                    /**
                     * 设置字段精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _precision 字段精度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字段位数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scale 字段位数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置字段位数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scale 字段位数
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
                     * 获取字段额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 字段额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Params GetParams() const;

                    /**
                     * 设置字段额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 字段额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const Params& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 是否分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                    /**
                     * 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BizParams m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 字段精度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 字段位数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 字段额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Params m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNS_H_
