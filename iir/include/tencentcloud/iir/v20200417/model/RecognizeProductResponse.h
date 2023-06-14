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

#ifndef TENCENTCLOUD_IIR_V20200417_MODEL_RECOGNIZEPRODUCTRESPONSE_H_
#define TENCENTCLOUD_IIR_V20200417_MODEL_RECOGNIZEPRODUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iir/v20200417/model/RegionDetected.h>
#include <tencentcloud/iir/v20200417/model/ProductInfo.h>


namespace TencentCloud
{
    namespace Iir
    {
        namespace V20200417
        {
            namespace Model
            {
                /**
                * RecognizeProduct返回参数结构体
                */
                class RecognizeProductResponse : public AbstractModel
                {
                public:
                    RecognizeProductResponse();
                    ~RecognizeProductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的图片中的商品位置和品类预测。 
当图片中存在多个商品时，输出多组坐标，按照__显著性__排序（综合考虑面积、是否在中心、检测算法置信度）。 
最多可以输出__3组__检测结果。
                     * @return RegionDetected 检测到的图片中的商品位置和品类预测。 
当图片中存在多个商品时，输出多组坐标，按照__显著性__排序（综合考虑面积、是否在中心、检测算法置信度）。 
最多可以输出__3组__检测结果。
                     * 
                     */
                    std::vector<RegionDetected> GetRegionDetected() const;

                    /**
                     * 判断参数 RegionDetected 是否已赋值
                     * @return RegionDetected 是否已赋值
                     * 
                     */
                    bool RegionDetectedHasBeenSet() const;

                    /**
                     * 获取图像识别出的商品的详细信息。 
当图像中检测到多个物品时，会对显著性最高的进行识别。
                     * @return ProductInfo 图像识别出的商品的详细信息。 
当图像中检测到多个物品时，会对显著性最高的进行识别。
                     * 
                     */
                    ProductInfo GetProductInfo() const;

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                private:

                    /**
                     * 检测到的图片中的商品位置和品类预测。 
当图片中存在多个商品时，输出多组坐标，按照__显著性__排序（综合考虑面积、是否在中心、检测算法置信度）。 
最多可以输出__3组__检测结果。
                     */
                    std::vector<RegionDetected> m_regionDetected;
                    bool m_regionDetectedHasBeenSet;

                    /**
                     * 图像识别出的商品的详细信息。 
当图像中检测到多个物品时，会对显著性最高的进行识别。
                     */
                    ProductInfo m_productInfo;
                    bool m_productInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IIR_V20200417_MODEL_RECOGNIZEPRODUCTRESPONSE_H_
