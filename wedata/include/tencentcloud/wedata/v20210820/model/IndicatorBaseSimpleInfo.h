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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASESIMPLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASESIMPLEINFO_H_

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
                * 指标列表简单结构
                */
                class IndicatorBaseSimpleInfo : public AbstractModel
                {
                public:
                    IndicatorBaseSimpleInfo();
                    ~IndicatorBaseSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
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
                     * 获取单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MeasureUnit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMeasureUnit() const;

                    /**
                     * 设置单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _measureUnit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeasureUnit(const int64_t& _measureUnit);

                    /**
                     * 判断参数 MeasureUnit 是否已赋值
                     * @return MeasureUnit 是否已赋值
                     * 
                     */
                    bool MeasureUnitHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorCode 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndicatorCode() const;

                    /**
                     * 设置编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorCode 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorCode(const std::string& _indicatorCode);

                    /**
                     * 判断参数 IndicatorCode 是否已赋值
                     * @return IndicatorCode 是否已赋值
                     * 
                     */
                    bool IndicatorCodeHasBeenSet() const;

                    /**
                     * 获取业务负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizOwnerName 业务负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizOwnerName() const;

                    /**
                     * 设置业务负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizOwnerName 业务负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizOwnerName(const std::string& _bizOwnerName);

                    /**
                     * 判断参数 BizOwnerName 是否已赋值
                     * @return BizOwnerName 是否已赋值
                     * 
                     */
                    bool BizOwnerNameHasBeenSet() const;

                    /**
                     * 获取技术服务站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechOwnerName 技术服务站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTechOwnerName() const;

                    /**
                     * 设置技术服务站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _techOwnerName 技术服务站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechOwnerName(const std::string& _techOwnerName);

                    /**
                     * 判断参数 TechOwnerName 是否已赋值
                     * @return TechOwnerName 是否已赋值
                     * 
                     */
                    bool TechOwnerNameHasBeenSet() const;

                    /**
                     * 获取业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCaliber 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizCaliber() const;

                    /**
                     * 设置业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCaliber 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCaliber(const std::string& _bizCaliber);

                    /**
                     * 判断参数 BizCaliber 是否已赋值
                     * @return BizCaliber 是否已赋值
                     * 
                     */
                    bool BizCaliberHasBeenSet() const;

                    /**
                     * 获取指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorType 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndicatorType() const;

                    /**
                     * 设置指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorType 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorType(const int64_t& _indicatorType);

                    /**
                     * 判断参数 IndicatorType 是否已赋值
                     * @return IndicatorType 是否已赋值
                     * 
                     */
                    bool IndicatorTypeHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_measureUnit;
                    bool m_measureUnitHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indicatorCode;
                    bool m_indicatorCodeHasBeenSet;

                    /**
                     * 业务负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizOwnerName;
                    bool m_bizOwnerNameHasBeenSet;

                    /**
                     * 技术服务站名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_techOwnerName;
                    bool m_techOwnerNameHasBeenSet;

                    /**
                     * 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizCaliber;
                    bool m_bizCaliberHasBeenSet;

                    /**
                     * 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indicatorType;
                    bool m_indicatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASESIMPLEINFO_H_
