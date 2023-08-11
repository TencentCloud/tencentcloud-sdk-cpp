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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 通用混流布局参数。
                */
                class CommonMixLayoutParams : public AbstractModel
                {
                public:
                    CommonMixLayoutParams();
                    ~CommonMixLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入图层。取值范围[1，16]。
1)背景流（即大主播画面或画布）的 image_layer 填1。
2)纯音频混流，该参数也需填。
注意：不同输入，该值不可重复
                     * @return ImageLayer 输入图层。取值范围[1，16]。
1)背景流（即大主播画面或画布）的 image_layer 填1。
2)纯音频混流，该参数也需填。
注意：不同输入，该值不可重复
                     * 
                     */
                    int64_t GetImageLayer() const;

                    /**
                     * 设置输入图层。取值范围[1，16]。
1)背景流（即大主播画面或画布）的 image_layer 填1。
2)纯音频混流，该参数也需填。
注意：不同输入，该值不可重复
                     * @param _imageLayer 输入图层。取值范围[1，16]。
1)背景流（即大主播画面或画布）的 image_layer 填1。
2)纯音频混流，该参数也需填。
注意：不同输入，该值不可重复
                     * 
                     */
                    void SetImageLayer(const int64_t& _imageLayer);

                    /**
                     * 判断参数 ImageLayer 是否已赋值
                     * @return ImageLayer 是否已赋值
                     * 
                     */
                    bool ImageLayerHasBeenSet() const;

                    /**
                     * 获取输入类型。取值范围[0，5]。
不填默认为0。
0表示输入流为音视频。
2表示输入流为图片。
3表示输入流为画布。 
4表示输入流为音频。
5表示输入流为纯视频。
                     * @return InputType 输入类型。取值范围[0，5]。
不填默认为0。
0表示输入流为音视频。
2表示输入流为图片。
3表示输入流为画布。 
4表示输入流为音频。
5表示输入流为纯视频。
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置输入类型。取值范围[0，5]。
不填默认为0。
0表示输入流为音视频。
2表示输入流为图片。
3表示输入流为画布。 
4表示输入流为音频。
5表示输入流为纯视频。
                     * @param _inputType 输入类型。取值范围[0，5]。
不填默认为0。
0表示输入流为音视频。
2表示输入流为图片。
3表示输入流为画布。 
4表示输入流为音频。
5表示输入流为纯视频。
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取输入画面在输出时的高度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的高度。
使用百分比时，期望输出为（百分比 * 背景高）。
                     * @return ImageHeight 输入画面在输出时的高度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的高度。
使用百分比时，期望输出为（百分比 * 背景高）。
                     * 
                     */
                    double GetImageHeight() const;

                    /**
                     * 设置输入画面在输出时的高度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的高度。
使用百分比时，期望输出为（百分比 * 背景高）。
                     * @param _imageHeight 输入画面在输出时的高度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的高度。
使用百分比时，期望输出为（百分比 * 背景高）。
                     * 
                     */
                    void SetImageHeight(const double& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取输入画面在输出时的宽度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的宽度。
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * @return ImageWidth 输入画面在输出时的宽度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的宽度。
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * 
                     */
                    double GetImageWidth() const;

                    /**
                     * 设置输入画面在输出时的宽度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的宽度。
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * @param _imageWidth 输入画面在输出时的宽度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的宽度。
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * 
                     */
                    void SetImageWidth(const double& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取输入在输出画面的X偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的横向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * @return LocationX 输入在输出画面的X偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的横向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * 
                     */
                    double GetLocationX() const;

                    /**
                     * 设置输入在输出画面的X偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的横向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * @param _locationX 输入在输出画面的X偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的横向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）。
                     * 
                     */
                    void SetLocationX(const double& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取输入在输出画面的Y偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的纵向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）
                     * @return LocationY 输入在输出画面的Y偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的纵向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）
                     * 
                     */
                    double GetLocationY() const;

                    /**
                     * 设置输入在输出画面的Y偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的纵向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）
                     * @param _locationY 输入在输出画面的Y偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的纵向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）
                     * 
                     */
                    void SetLocationY(const double& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取当InputType为3(画布)时，该值表示画布的颜色。
常用的颜色有：
红色：0xCC0033。
黄色：0xCC9900。
绿色：0xCCCC33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @return Color 当InputType为3(画布)时，该值表示画布的颜色。
常用的颜色有：
红色：0xCC0033。
黄色：0xCC9900。
绿色：0xCCCC33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置当InputType为3(画布)时，该值表示画布的颜色。
常用的颜色有：
红色：0xCC0033。
黄色：0xCC9900。
绿色：0xCCCC33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @param _color 当InputType为3(画布)时，该值表示画布的颜色。
常用的颜色有：
红色：0xCC0033。
黄色：0xCC9900。
绿色：0xCCCC33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取当InputType为2(图片)时，该值是水印ID。
                     * @return WatermarkId 当InputType为2(图片)时，该值是水印ID。
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置当InputType为2(图片)时，该值是水印ID。
                     * @param _watermarkId 当InputType为2(图片)时，该值是水印ID。
                     * 
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                private:

                    /**
                     * 输入图层。取值范围[1，16]。
1)背景流（即大主播画面或画布）的 image_layer 填1。
2)纯音频混流，该参数也需填。
注意：不同输入，该值不可重复
                     */
                    int64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * 输入类型。取值范围[0，5]。
不填默认为0。
0表示输入流为音视频。
2表示输入流为图片。
3表示输入流为画布。 
4表示输入流为音频。
5表示输入流为纯视频。
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入画面在输出时的高度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的高度。
使用百分比时，期望输出为（百分比 * 背景高）。
                     */
                    double m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 输入画面在输出时的宽度。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为输入流的宽度。
使用百分比时，期望输出为（百分比 * 背景宽）。
                     */
                    double m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 输入在输出画面的X偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的横向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）。
                     */
                    double m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 输入在输出画面的Y偏移。取值范围：
像素：[0，2000]
百分比：[0.01，0.99]
不填默认为0。
相对于大主播背景画面左上角的纵向偏移。 
使用百分比时，期望输出为（百分比 * 背景宽）
                     */
                    double m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 当InputType为3(画布)时，该值表示画布的颜色。
常用的颜色有：
红色：0xCC0033。
黄色：0xCC9900。
绿色：0xCCCC33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 当InputType为2(图片)时，该值是水印ID。
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_
