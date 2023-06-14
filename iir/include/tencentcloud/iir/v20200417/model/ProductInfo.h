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

#ifndef TENCENTCLOUD_IIR_V20200417_MODEL_PRODUCTINFO_H_
#define TENCENTCLOUD_IIR_V20200417_MODEL_PRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iir/v20200417/model/Location.h>


namespace TencentCloud
{
    namespace Iir
    {
        namespace V20200417
        {
            namespace Model
            {
                /**
                * 图像识别出的商品的详细信息。 
当图像中检测到多个物品时，会对显著性最高的物品进行识别。
                */
                class ProductInfo : public AbstractModel
                {
                public:
                    ProductInfo();
                    ~ProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1表示找到同款商品，以下字段为同款商品信息； 
0表示未找到同款商品， 具体商品信息为空（参考价格、名称、品牌等），仅提供商品类目。  
是否找到同款的判断依据为Score分值，分值越大则同款的可能性越大。
                     * @return FindSKU 1表示找到同款商品，以下字段为同款商品信息； 
0表示未找到同款商品， 具体商品信息为空（参考价格、名称、品牌等），仅提供商品类目。  
是否找到同款的判断依据为Score分值，分值越大则同款的可能性越大。
                     * 
                     */
                    int64_t GetFindSKU() const;

                    /**
                     * 设置1表示找到同款商品，以下字段为同款商品信息； 
0表示未找到同款商品， 具体商品信息为空（参考价格、名称、品牌等），仅提供商品类目。  
是否找到同款的判断依据为Score分值，分值越大则同款的可能性越大。
                     * @param _findSKU 1表示找到同款商品，以下字段为同款商品信息； 
0表示未找到同款商品， 具体商品信息为空（参考价格、名称、品牌等），仅提供商品类目。  
是否找到同款的判断依据为Score分值，分值越大则同款的可能性越大。
                     * 
                     */
                    void SetFindSKU(const int64_t& _findSKU);

                    /**
                     * 判断参数 FindSKU 是否已赋值
                     * @return FindSKU 是否已赋值
                     * 
                     */
                    bool FindSKUHasBeenSet() const;

                    /**
                     * 获取本商品在图片中的坐标，表示为矩形框的四个顶点坐标。
                     * @return Location 本商品在图片中的坐标，表示为矩形框的四个顶点坐标。
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置本商品在图片中的坐标，表示为矩形框的四个顶点坐标。
                     * @param _location 本商品在图片中的坐标，表示为矩形框的四个顶点坐标。
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取商品名称
                     * @return Name 商品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置商品名称
                     * @param _name 商品名称
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
                     * 获取商品品牌
                     * @return Brand 商品品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置商品品牌
                     * @param _brand 商品品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取参考价格，综合多个信息源，仅供参考。
                     * @return Price 参考价格，综合多个信息源，仅供参考。
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置参考价格，综合多个信息源，仅供参考。
                     * @param _price 参考价格，综合多个信息源，仅供参考。
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取识别结果的商品类目。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。 
当类别为“非商品”时，除Location、Score和本字段之外的商品信息为空。
                     * @return ProductCategory 识别结果的商品类目。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。 
当类别为“非商品”时，除Location、Score和本字段之外的商品信息为空。
                     * 
                     */
                    std::string GetProductCategory() const;

                    /**
                     * 设置识别结果的商品类目。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。 
当类别为“非商品”时，除Location、Score和本字段之外的商品信息为空。
                     * @param _productCategory 识别结果的商品类目。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。 
当类别为“非商品”时，除Location、Score和本字段之外的商品信息为空。
                     * 
                     */
                    void SetProductCategory(const std::string& _productCategory);

                    /**
                     * 判断参数 ProductCategory 是否已赋值
                     * @return ProductCategory 是否已赋值
                     * 
                     */
                    bool ProductCategoryHasBeenSet() const;

                    /**
                     * 获取输入图片中的主体物品和输出结果的相似度。分值越大，输出结果与输入图片是同款的可能性越高。
                     * @return Score 输入图片中的主体物品和输出结果的相似度。分值越大，输出结果与输入图片是同款的可能性越高。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置输入图片中的主体物品和输出结果的相似度。分值越大，输出结果与输入图片是同款的可能性越高。
                     * @param _score 输入图片中的主体物品和输出结果的相似度。分值越大，输出结果与输入图片是同款的可能性越高。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取搜索到的商品配图URL
                     * @return Image 搜索到的商品配图URL
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置搜索到的商品配图URL
                     * @param _image 搜索到的商品配图URL
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * 1表示找到同款商品，以下字段为同款商品信息； 
0表示未找到同款商品， 具体商品信息为空（参考价格、名称、品牌等），仅提供商品类目。  
是否找到同款的判断依据为Score分值，分值越大则同款的可能性越大。
                     */
                    int64_t m_findSKU;
                    bool m_findSKUHasBeenSet;

                    /**
                     * 本商品在图片中的坐标，表示为矩形框的四个顶点坐标。
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 参考价格，综合多个信息源，仅供参考。
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 识别结果的商品类目。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。 
当类别为“非商品”时，除Location、Score和本字段之外的商品信息为空。
                     */
                    std::string m_productCategory;
                    bool m_productCategoryHasBeenSet;

                    /**
                     * 输入图片中的主体物品和输出结果的相似度。分值越大，输出结果与输入图片是同款的可能性越高。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 搜索到的商品配图URL
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IIR_V20200417_MODEL_PRODUCTINFO_H_
