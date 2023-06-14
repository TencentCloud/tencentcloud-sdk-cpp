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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEDETECTINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEDETECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 票据检测结果
                */
                class InvoiceDetectInfo : public AbstractModel
                {
                public:
                    InvoiceDetectInfo();
                    ~InvoiceDetectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的图片在混贴票据图片中的旋转角度。
                     * @return Angle 识别出的图片在混贴票据图片中的旋转角度。
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 设置识别出的图片在混贴票据图片中的旋转角度。
                     * @param _angle 识别出的图片在混贴票据图片中的旋转角度。
                     * 
                     */
                    void SetAngle(const double& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
4：客运限额发票
5：机票行程单
6：酒店账单
7：完税证明
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
14：购物小票
                     * @return Type 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
4：客运限额发票
5：机票行程单
6：酒店账单
7：完税证明
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
14：购物小票
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
4：客运限额发票
5：机票行程单
6：酒店账单
7：完税证明
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
14：购物小票
                     * @param _type 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
4：客运限额发票
5：机票行程单
6：酒店账单
7：完税证明
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
14：购物小票
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * @return Rect 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 设置识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * @param _rect 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * 
                     */
                    void SetRect(const Rect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取入参 ReturnImage 为 True 时返回 Base64 编码后的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 入参 ReturnImage 为 True 时返回 Base64 编码后的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置入参 ReturnImage 为 True 时返回 Base64 编码后的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 入参 ReturnImage 为 True 时返回 Base64 编码后的图片。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 识别出的图片在混贴票据图片中的旋转角度。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
4：客运限额发票
5：机票行程单
6：酒店账单
7：完税证明
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
14：购物小票
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * 入参 ReturnImage 为 True 时返回 Base64 编码后的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEDETECTINFO_H_
