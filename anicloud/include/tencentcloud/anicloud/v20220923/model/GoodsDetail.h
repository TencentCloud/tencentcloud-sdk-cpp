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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_GOODSDETAIL_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_GOODSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * 购买详情
                */
                class GoodsDetail : public AbstractModel
                {
                public:
                    GoodsDetail();
                    ~GoodsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按照四层接入的产品需要传入产品标签,例如:p_cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCode 按照四层接入的产品需要传入产品标签,例如:p_cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置按照四层接入的产品需要传入产品标签,例如:p_cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCode 按照四层接入的产品需要传入产品标签,例如:p_cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取四层定义的子产品标签,例如:sp_cvm_s1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCode 四层定义的子产品标签,例如:sp_cvm_s1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置四层定义的子产品标签,例如:sp_cvm_s1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCode 四层定义的子产品标签,例如:sp_cvm_s1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsNum 资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _goodsNum 资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                private:

                    /**
                     * 按照四层接入的产品需要传入产品标签,例如:p_cvm
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 四层定义的子产品标签,例如:sp_cvm_s1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_GOODSDETAIL_H_
