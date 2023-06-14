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

#ifndef TENCENTCLOUD_IIR_V20200417_MODEL_REGIONDETECTED_H_
#define TENCENTCLOUD_IIR_V20200417_MODEL_REGIONDETECTED_H_

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
                * 检测到的图片中的商品位置和品类预测。 
当图片中存在多个商品时，输出多组坐标，按照__显著性__排序（综合考虑面积、是否在中心、检测算法置信度）。 
最多可以输出__3组__检测结果。
                */
                class RegionDetected : public AbstractModel
                {
                public:
                    RegionDetected();
                    ~RegionDetected() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品的品类预测结果。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。
                     * @return Category 商品的品类预测结果。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置商品的品类预测结果。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。
                     * @param _category 商品的品类预测结果。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取商品品类预测的置信度
                     * @return CategoryScore 商品品类预测的置信度
                     * 
                     */
                    double GetCategoryScore() const;

                    /**
                     * 设置商品品类预测的置信度
                     * @param _categoryScore 商品品类预测的置信度
                     * 
                     */
                    void SetCategoryScore(const double& _categoryScore);

                    /**
                     * 判断参数 CategoryScore 是否已赋值
                     * @return CategoryScore 是否已赋值
                     * 
                     */
                    bool CategoryScoreHasBeenSet() const;

                    /**
                     * 获取检测到的主体在图片中的坐标，表示为矩形框的四个顶点坐标
                     * @return Location 检测到的主体在图片中的坐标，表示为矩形框的四个顶点坐标
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置检测到的主体在图片中的坐标，表示为矩形框的四个顶点坐标
                     * @param _location 检测到的主体在图片中的坐标，表示为矩形框的四个顶点坐标
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 商品的品类预测结果。 
包含：鞋、图书音像、箱包、美妆个护、服饰、家电数码、玩具乐器、食品饮料、珠宝、家居家装、药品、酒水、绿植园艺、其他商品、非商品等。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 商品品类预测的置信度
                     */
                    double m_categoryScore;
                    bool m_categoryScoreHasBeenSet;

                    /**
                     * 检测到的主体在图片中的坐标，表示为矩形框的四个顶点坐标
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IIR_V20200417_MODEL_REGIONDETECTED_H_
