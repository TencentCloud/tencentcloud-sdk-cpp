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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFONAME_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFONAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 药品名称，包括通用名和商品名
                */
                class ChemicalProductInfoName : public AbstractModel
                {
                public:
                    ChemicalProductInfoName();
                    ~ChemicalProductInfoName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容
                     * @return Text 文本内容
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本内容
                     * @param _text 文本内容
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取通用名
                     * @return GenericName 通用名
                     * 
                     */
                    std::string GetGenericName() const;

                    /**
                     * 设置通用名
                     * @param _genericName 通用名
                     * 
                     */
                    void SetGenericName(const std::string& _genericName);

                    /**
                     * 判断参数 GenericName 是否已赋值
                     * @return GenericName 是否已赋值
                     * 
                     */
                    bool GenericNameHasBeenSet() const;

                    /**
                     * 获取品牌名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BarndName 品牌名
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetBarndName() const;

                    /**
                     * 设置品牌名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _barndName 品牌名
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetBarndName(const std::string& _barndName);

                    /**
                     * 判断参数 BarndName 是否已赋值
                     * @return BarndName 是否已赋值
                     * @deprecated
                     */
                    bool BarndNameHasBeenSet() const;

                    /**
                     * 获取英文名
                     * @return EnName 英文名
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置英文名
                     * @param _enName 英文名
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取拼音
                     * @return Pinyin 拼音
                     * 
                     */
                    std::string GetPinyin() const;

                    /**
                     * 设置拼音
                     * @param _pinyin 拼音
                     * 
                     */
                    void SetPinyin(const std::string& _pinyin);

                    /**
                     * 判断参数 Pinyin 是否已赋值
                     * @return Pinyin 是否已赋值
                     * 
                     */
                    bool PinyinHasBeenSet() const;

                    /**
                     * 获取品牌名
                     * @return BrandName 品牌名
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名
                     * @param _brandName 品牌名
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                private:

                    /**
                     * 文本内容
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 通用名
                     */
                    std::string m_genericName;
                    bool m_genericNameHasBeenSet;

                    /**
                     * 品牌名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_barndName;
                    bool m_barndNameHasBeenSet;

                    /**
                     * 英文名
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 拼音
                     */
                    std::string m_pinyin;
                    bool m_pinyinHasBeenSet;

                    /**
                     * 品牌名
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFONAME_H_
