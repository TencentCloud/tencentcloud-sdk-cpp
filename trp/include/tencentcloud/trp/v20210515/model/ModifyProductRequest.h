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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYPRODUCTREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyProduct请求参数结构体
                */
                class ModifyProductRequest : public AbstractModel
                {
                public:
                    ModifyProductRequest();
                    ~ModifyProductRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取商品ID
                     * @return ProductId 商品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID
                     * @param ProductId 商品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取商品规格
                     * @return Specification 商品规格
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置商品规格
                     * @param Specification 商品规格
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取商品图片
                     * @return Logo 商品图片
                     */
                    std::vector<std::string> GetLogo() const;

                    /**
                     * 设置商品图片
                     * @param Logo 商品图片
                     */
                    void SetLogo(const std::vector<std::string>& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param CorpId 企业ID
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取预留字段
                     * @return Ext 预留字段
                     */
                    Ext GetExt() const;

                    /**
                     * 设置预留字段
                     * @param Ext 预留字段
                     */
                    void SetExt(const Ext& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     */
                    bool ExtHasBeenSet() const;

                private:

                    /**
                     * 商品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 商品规格
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 商品图片
                     */
                    std::vector<std::string> m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 预留字段
                     */
                    Ext m_ext;
                    bool m_extHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYPRODUCTREQUEST_H_
