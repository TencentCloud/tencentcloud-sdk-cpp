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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_SALEPARAM_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_SALEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * 表示商品 SKU 的单个售卖参数
                */
                class SaleParam : public AbstractModel
                {
                public:
                    SaleParam();
                    ~SaleParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取售卖参数标识
                     * @return ParamKey 售卖参数标识
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置售卖参数标识
                     * @param _paramKey 售卖参数标识
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取售卖参数的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKeyName 售卖参数的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKeyName() const;

                    /**
                     * 设置售卖参数的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKeyName 售卖参数的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamKeyName(const std::string& _paramKeyName);

                    /**
                     * 判断参数 ParamKeyName 是否已赋值
                     * @return ParamKeyName 是否已赋值
                     * 
                     */
                    bool ParamKeyNameHasBeenSet() const;

                    /**
                     * 获取售卖参数值，当ParamType=Quant时，该值有可能为Null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamValue 售卖参数值，当ParamType=Quant时，该值有可能为Null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置售卖参数值，当ParamType=Quant时，该值有可能为Null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramValue 售卖参数值，当ParamType=Quant时，该值有可能为Null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                    /**
                     * 获取售卖参数值的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamValueName 售卖参数值的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamValueName() const;

                    /**
                     * 设置售卖参数值的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramValueName 售卖参数值的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamValueName(const std::string& _paramValueName);

                    /**
                     * 判断参数 ParamValueName 是否已赋值
                     * @return ParamValueName 是否已赋值
                     * 
                     */
                    bool ParamValueNameHasBeenSet() const;

                    /**
                     * 获取售卖参数的类型，目前支持枚举类Enum/数量类Quant
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamType 售卖参数的类型，目前支持枚举类Enum/数量类Quant
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置售卖参数的类型，目前支持枚举类Enum/数量类Quant
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramType 售卖参数的类型，目前支持枚举类Enum/数量类Quant
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                private:

                    /**
                     * 售卖参数标识
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 售卖参数的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKeyName;
                    bool m_paramKeyNameHasBeenSet;

                    /**
                     * 售卖参数值，当ParamType=Quant时，该值有可能为Null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                    /**
                     * 售卖参数值的展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramValueName;
                    bool m_paramValueNameHasBeenSet;

                    /**
                     * 售卖参数的类型，目前支持枚举类Enum/数量类Quant
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_SALEPARAM_H_
