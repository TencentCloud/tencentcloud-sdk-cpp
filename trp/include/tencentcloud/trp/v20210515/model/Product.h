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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_PRODUCT_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_PRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/Ext.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 商品信息
                */
                class Product : public AbstractModel
                {
                public:
                    Product();
                    ~Product() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品id
                     * @return ProductId 商品id
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品id
                     * @param ProductId 商品id
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取企业id
                     * @return CorpId 企业id
                     */
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业id
                     * @param CorpId 企业id
                     */
                    void SetCorpId(const int64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取商户标识码
                     * @return MerchantId 商户标识码
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户标识码
                     * @param MerchantId 商户标识码
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商品编号
                     * @return ProductCode 商品编号
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置商品编号
                     * @param ProductCode 商品编号
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取商品名称
                     * @return Name 商品名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置商品名称
                     * @param Name 商品名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取商品规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Specification 商品规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置商品规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Specification 商品规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取商品图片
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logo 商品图片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetLogo() const;

                    /**
                     * 设置商品图片
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Logo 商品图片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogo(const std::vector<std::string>& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param UpdateTime 修改时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ext GetExt() const;

                    /**
                     * 设置预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ext 预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExt(const Ext& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取商户名称
                     * @return MerchantName 商户名称
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
                     * @param MerchantName 商户名称
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     */
                    bool MerchantNameHasBeenSet() const;

                private:

                    /**
                     * 商品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 企业id
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户标识码
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商品编号
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 商品图片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ext m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_PRODUCT_H_
