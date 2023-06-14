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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_PRODUCT_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_PRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 检测到的单个商品结构体
                */
                class Product : public AbstractModel
                {
                public:
                    Product();
                    ~Product() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中商品的三级分类识别结果，选取所有三级分类中的置信度最大者
                     * @return Name 图片中商品的三级分类识别结果，选取所有三级分类中的置信度最大者
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置图片中商品的三级分类识别结果，选取所有三级分类中的置信度最大者
                     * @param _name 图片中商品的三级分类识别结果，选取所有三级分类中的置信度最大者
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
                     * 获取三级商品分类对应的一级分类和二级分类，两级之间用“-”（中划线）隔开，例如商品名称是“硬盘”，那么Parents输出为“电脑、办公-电脑配件”
                     * @return Parents 三级商品分类对应的一级分类和二级分类，两级之间用“-”（中划线）隔开，例如商品名称是“硬盘”，那么Parents输出为“电脑、办公-电脑配件”
                     * 
                     */
                    std::string GetParents() const;

                    /**
                     * 设置三级商品分类对应的一级分类和二级分类，两级之间用“-”（中划线）隔开，例如商品名称是“硬盘”，那么Parents输出为“电脑、办公-电脑配件”
                     * @param _parents 三级商品分类对应的一级分类和二级分类，两级之间用“-”（中划线）隔开，例如商品名称是“硬盘”，那么Parents输出为“电脑、办公-电脑配件”
                     * 
                     */
                    void SetParents(const std::string& _parents);

                    /**
                     * 判断参数 Parents 是否已赋值
                     * @return Parents 是否已赋值
                     * 
                     */
                    bool ParentsHasBeenSet() const;

                    /**
                     * 获取算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定
                     * @return Confidence 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定
                     * @param _confidence 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取商品坐标X轴的最小值
                     * @return XMin 商品坐标X轴的最小值
                     * 
                     */
                    int64_t GetXMin() const;

                    /**
                     * 设置商品坐标X轴的最小值
                     * @param _xMin 商品坐标X轴的最小值
                     * 
                     */
                    void SetXMin(const int64_t& _xMin);

                    /**
                     * 判断参数 XMin 是否已赋值
                     * @return XMin 是否已赋值
                     * 
                     */
                    bool XMinHasBeenSet() const;

                    /**
                     * 获取商品坐标Y轴的最小值
                     * @return YMin 商品坐标Y轴的最小值
                     * 
                     */
                    int64_t GetYMin() const;

                    /**
                     * 设置商品坐标Y轴的最小值
                     * @param _yMin 商品坐标Y轴的最小值
                     * 
                     */
                    void SetYMin(const int64_t& _yMin);

                    /**
                     * 判断参数 YMin 是否已赋值
                     * @return YMin 是否已赋值
                     * 
                     */
                    bool YMinHasBeenSet() const;

                    /**
                     * 获取商品坐标X轴的最大值
                     * @return XMax 商品坐标X轴的最大值
                     * 
                     */
                    int64_t GetXMax() const;

                    /**
                     * 设置商品坐标X轴的最大值
                     * @param _xMax 商品坐标X轴的最大值
                     * 
                     */
                    void SetXMax(const int64_t& _xMax);

                    /**
                     * 判断参数 XMax 是否已赋值
                     * @return XMax 是否已赋值
                     * 
                     */
                    bool XMaxHasBeenSet() const;

                    /**
                     * 获取商品坐标Y轴的最大值
                     * @return YMax 商品坐标Y轴的最大值
                     * 
                     */
                    int64_t GetYMax() const;

                    /**
                     * 设置商品坐标Y轴的最大值
                     * @param _yMax 商品坐标Y轴的最大值
                     * 
                     */
                    void SetYMax(const int64_t& _yMax);

                    /**
                     * 判断参数 YMax 是否已赋值
                     * @return YMax 是否已赋值
                     * 
                     */
                    bool YMaxHasBeenSet() const;

                private:

                    /**
                     * 图片中商品的三级分类识别结果，选取所有三级分类中的置信度最大者
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 三级商品分类对应的一级分类和二级分类，两级之间用“-”（中划线）隔开，例如商品名称是“硬盘”，那么Parents输出为“电脑、办公-电脑配件”
                     */
                    std::string m_parents;
                    bool m_parentsHasBeenSet;

                    /**
                     * 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 商品坐标X轴的最小值
                     */
                    int64_t m_xMin;
                    bool m_xMinHasBeenSet;

                    /**
                     * 商品坐标Y轴的最小值
                     */
                    int64_t m_yMin;
                    bool m_yMinHasBeenSet;

                    /**
                     * 商品坐标X轴的最大值
                     */
                    int64_t m_xMax;
                    bool m_xMaxHasBeenSet;

                    /**
                     * 商品坐标Y轴的最大值
                     */
                    int64_t m_yMax;
                    bool m_yMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_PRODUCT_H_
