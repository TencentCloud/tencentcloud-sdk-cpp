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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ChangeClothesConfig.h>
#include <tencentcloud/vod/v20180717/model/ProductImageConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 场景化 AIGC 生图配置。
                */
                class AigcImageSceneInfo : public AbstractModel
                {
                public:
                    AigcImageSceneInfo();
                    ~AigcImageSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI生图场景类型，可选值：</p><ul><li>change_clothes：常规场景换衣。</li><li>change_clothes_under：特殊场景换衣。</li><li>change_clothes_top_wear：上半身换衣。</li><li>change_clothes_bottom_wear：下半身换衣。</li><li>change_clothes_full_wear：全身换衣。</li><li>product_image：AI生商品图。</li><li>outpainting: AI扩图。</li></ul>
                     * @return Type <p>AI生图场景类型，可选值：</p><ul><li>change_clothes：常规场景换衣。</li><li>change_clothes_under：特殊场景换衣。</li><li>change_clothes_top_wear：上半身换衣。</li><li>change_clothes_bottom_wear：下半身换衣。</li><li>change_clothes_full_wear：全身换衣。</li><li>product_image：AI生商品图。</li><li>outpainting: AI扩图。</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>AI生图场景类型，可选值：</p><ul><li>change_clothes：常规场景换衣。</li><li>change_clothes_under：特殊场景换衣。</li><li>change_clothes_top_wear：上半身换衣。</li><li>change_clothes_bottom_wear：下半身换衣。</li><li>change_clothes_full_wear：全身换衣。</li><li>product_image：AI生商品图。</li><li>outpainting: AI扩图。</li></ul>
                     * @param _type <p>AI生图场景类型，可选值：</p><ul><li>change_clothes：常规场景换衣。</li><li>change_clothes_under：特殊场景换衣。</li><li>change_clothes_top_wear：上半身换衣。</li><li>change_clothes_bottom_wear：下半身换衣。</li><li>change_clothes_full_wear：全身换衣。</li><li>product_image：AI生商品图。</li><li>outpainting: AI扩图。</li></ul>
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
                     * 获取<p>当 Type 下列类型时，则该项为必填，表示AI 换衣生图配置参数：</p><ul><li>change_clothes</li><li>change_clothes_under</li><li>change_clothes_full_wear</li><li>change_clothes_top_wear</li><li>change_clothes_bottom_wear</li></ul>
                     * @return ChangeClothesConfig <p>当 Type 下列类型时，则该项为必填，表示AI 换衣生图配置参数：</p><ul><li>change_clothes</li><li>change_clothes_under</li><li>change_clothes_full_wear</li><li>change_clothes_top_wear</li><li>change_clothes_bottom_wear</li></ul>
                     * 
                     */
                    ChangeClothesConfig GetChangeClothesConfig() const;

                    /**
                     * 设置<p>当 Type 下列类型时，则该项为必填，表示AI 换衣生图配置参数：</p><ul><li>change_clothes</li><li>change_clothes_under</li><li>change_clothes_full_wear</li><li>change_clothes_top_wear</li><li>change_clothes_bottom_wear</li></ul>
                     * @param _changeClothesConfig <p>当 Type 下列类型时，则该项为必填，表示AI 换衣生图配置参数：</p><ul><li>change_clothes</li><li>change_clothes_under</li><li>change_clothes_full_wear</li><li>change_clothes_top_wear</li><li>change_clothes_bottom_wear</li></ul>
                     * 
                     */
                    void SetChangeClothesConfig(const ChangeClothesConfig& _changeClothesConfig);

                    /**
                     * 判断参数 ChangeClothesConfig 是否已赋值
                     * @return ChangeClothesConfig 是否已赋值
                     * 
                     */
                    bool ChangeClothesConfigHasBeenSet() const;

                    /**
                     * 获取<p>当 Type 为 product_image 时有效，表示AI 生商品图配置参数。</p>
                     * @return ProductImageConfig <p>当 Type 为 product_image 时有效，表示AI 生商品图配置参数。</p>
                     * 
                     */
                    ProductImageConfig GetProductImageConfig() const;

                    /**
                     * 设置<p>当 Type 为 product_image 时有效，表示AI 生商品图配置参数。</p>
                     * @param _productImageConfig <p>当 Type 为 product_image 时有效，表示AI 生商品图配置参数。</p>
                     * 
                     */
                    void SetProductImageConfig(const ProductImageConfig& _productImageConfig);

                    /**
                     * 判断参数 ProductImageConfig 是否已赋值
                     * @return ProductImageConfig 是否已赋值
                     * 
                     */
                    bool ProductImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AI生图场景类型，可选值：</p><ul><li>change_clothes：常规场景换衣。</li><li>change_clothes_under：特殊场景换衣。</li><li>change_clothes_top_wear：上半身换衣。</li><li>change_clothes_bottom_wear：下半身换衣。</li><li>change_clothes_full_wear：全身换衣。</li><li>product_image：AI生商品图。</li><li>outpainting: AI扩图。</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>当 Type 下列类型时，则该项为必填，表示AI 换衣生图配置参数：</p><ul><li>change_clothes</li><li>change_clothes_under</li><li>change_clothes_full_wear</li><li>change_clothes_top_wear</li><li>change_clothes_bottom_wear</li></ul>
                     */
                    ChangeClothesConfig m_changeClothesConfig;
                    bool m_changeClothesConfigHasBeenSet;

                    /**
                     * <p>当 Type 为 product_image 时有效，表示AI 生商品图配置参数。</p>
                     */
                    ProductImageConfig m_productImageConfig;
                    bool m_productImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_
