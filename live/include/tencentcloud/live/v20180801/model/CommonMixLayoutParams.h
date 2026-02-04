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
                     * 获取<p>输入图层。取值范围[1，16]。<br>1)背景流（即大主播画面或画布）的 image_layer 填1。<br>2)纯音频混流，该参数也需填。<br>注意：不同输入，该值不可重复</p>
                     * @return ImageLayer <p>输入图层。取值范围[1，16]。<br>1)背景流（即大主播画面或画布）的 image_layer 填1。<br>2)纯音频混流，该参数也需填。<br>注意：不同输入，该值不可重复</p>
                     * 
                     */
                    int64_t GetImageLayer() const;

                    /**
                     * 设置<p>输入图层。取值范围[1，16]。<br>1)背景流（即大主播画面或画布）的 image_layer 填1。<br>2)纯音频混流，该参数也需填。<br>注意：不同输入，该值不可重复</p>
                     * @param _imageLayer <p>输入图层。取值范围[1，16]。<br>1)背景流（即大主播画面或画布）的 image_layer 填1。<br>2)纯音频混流，该参数也需填。<br>注意：不同输入，该值不可重复</p>
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
                     * 获取<p>输入类型。取值范围[0，5]。<br>不填默认为0。<br>0表示输入流为音视频。<br>2表示输入流为图片。<br>3表示输入流为画布。<br>4表示输入流为音频。<br>5表示输入流为纯视频。</p>
                     * @return InputType <p>输入类型。取值范围[0，5]。<br>不填默认为0。<br>0表示输入流为音视频。<br>2表示输入流为图片。<br>3表示输入流为画布。<br>4表示输入流为音频。<br>5表示输入流为纯视频。</p>
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置<p>输入类型。取值范围[0，5]。<br>不填默认为0。<br>0表示输入流为音视频。<br>2表示输入流为图片。<br>3表示输入流为画布。<br>4表示输入流为音频。<br>5表示输入流为纯视频。</p>
                     * @param _inputType <p>输入类型。取值范围[0，5]。<br>不填默认为0。<br>0表示输入流为音视频。<br>2表示输入流为图片。<br>3表示输入流为画布。<br>4表示输入流为音频。<br>5表示输入流为纯视频。</p>
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
                     * 获取<p>输入画面在输出时的高度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的高度。<br>使用百分比时，期望输出为（百分比 * 背景高）。</p>
                     * @return ImageHeight <p>输入画面在输出时的高度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的高度。<br>使用百分比时，期望输出为（百分比 * 背景高）。</p>
                     * 
                     */
                    double GetImageHeight() const;

                    /**
                     * 设置<p>输入画面在输出时的高度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的高度。<br>使用百分比时，期望输出为（百分比 * 背景高）。</p>
                     * @param _imageHeight <p>输入画面在输出时的高度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的高度。<br>使用百分比时，期望输出为（百分比 * 背景高）。</p>
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
                     * 获取<p>输入画面在输出时的宽度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的宽度。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * @return ImageWidth <p>输入画面在输出时的宽度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的宽度。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * 
                     */
                    double GetImageWidth() const;

                    /**
                     * 设置<p>输入画面在输出时的宽度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的宽度。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * @param _imageWidth <p>输入画面在输出时的宽度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的宽度。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
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
                     * 获取<p>输入在输出画面的X偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的横向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * @return LocationX <p>输入在输出画面的X偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的横向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * 
                     */
                    double GetLocationX() const;

                    /**
                     * 设置<p>输入在输出画面的X偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的横向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     * @param _locationX <p>输入在输出画面的X偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的横向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
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
                     * 获取<p>输入在输出画面的Y偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的纵向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）</p>
                     * @return LocationY <p>输入在输出画面的Y偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的纵向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）</p>
                     * 
                     */
                    double GetLocationY() const;

                    /**
                     * 设置<p>输入在输出画面的Y偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的纵向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）</p>
                     * @param _locationY <p>输入在输出画面的Y偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的纵向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）</p>
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
                     * 获取<p>当InputType为3(画布)时，该值表示画布的颜色。<br>常用的颜色有：<br>红色：0xCC0033。<br>黄色：0xCC9900。<br>绿色：0xCCCC33。<br>蓝色：0x99CCFF。<br>黑色：0x000000。<br>白色：0xFFFFFF。<br>灰色：0x999999。</p>
                     * @return Color <p>当InputType为3(画布)时，该值表示画布的颜色。<br>常用的颜色有：<br>红色：0xCC0033。<br>黄色：0xCC9900。<br>绿色：0xCCCC33。<br>蓝色：0x99CCFF。<br>黑色：0x000000。<br>白色：0xFFFFFF。<br>灰色：0x999999。</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>当InputType为3(画布)时，该值表示画布的颜色。<br>常用的颜色有：<br>红色：0xCC0033。<br>黄色：0xCC9900。<br>绿色：0xCCCC33。<br>蓝色：0x99CCFF。<br>黑色：0x000000。<br>白色：0xFFFFFF。<br>灰色：0x999999。</p>
                     * @param _color <p>当InputType为3(画布)时，该值表示画布的颜色。<br>常用的颜色有：<br>红色：0xCC0033。<br>黄色：0xCC9900。<br>绿色：0xCCCC33。<br>蓝色：0x99CCFF。<br>黑色：0x000000。<br>白色：0xFFFFFF。<br>灰色：0x999999。</p>
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
                     * 获取<p>当InputType为2(图片)时，该值是水印ID。</p>
                     * @return WatermarkId <p>当InputType为2(图片)时，该值是水印ID。</p>
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置<p>当InputType为2(图片)时，该值是水印ID。</p>
                     * @param _watermarkId <p>当InputType为2(图片)时，该值是水印ID。</p>
                     * 
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                    /**
                     * 获取<p>当InputType为8时，该值是动效贴片的URL</p>
                     * @return WebPageUrl <p>当InputType为8时，该值是动效贴片的URL</p>
                     * 
                     */
                    std::string GetWebPageUrl() const;

                    /**
                     * 设置<p>当InputType为8时，该值是动效贴片的URL</p>
                     * @param _webPageUrl <p>当InputType为8时，该值是动效贴片的URL</p>
                     * 
                     */
                    void SetWebPageUrl(const std::string& _webPageUrl);

                    /**
                     * 判断参数 WebPageUrl 是否已赋值
                     * @return WebPageUrl 是否已赋值
                     * 
                     */
                    bool WebPageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>输入图层。取值范围[1，16]。<br>1)背景流（即大主播画面或画布）的 image_layer 填1。<br>2)纯音频混流，该参数也需填。<br>注意：不同输入，该值不可重复</p>
                     */
                    int64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * <p>输入类型。取值范围[0，5]。<br>不填默认为0。<br>0表示输入流为音视频。<br>2表示输入流为图片。<br>3表示输入流为画布。<br>4表示输入流为音频。<br>5表示输入流为纯视频。</p>
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>输入画面在输出时的高度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的高度。<br>使用百分比时，期望输出为（百分比 * 背景高）。</p>
                     */
                    double m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * <p>输入画面在输出时的宽度。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为输入流的宽度。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     */
                    double m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * <p>输入在输出画面的X偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的横向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）。</p>
                     */
                    double m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * <p>输入在输出画面的Y偏移。取值范围：<br>像素：[0，2000]<br>百分比：[0.01，0.99]<br>不填默认为0。<br>相对于大主播背景画面左上角的纵向偏移。<br>使用百分比时，期望输出为（百分比 * 背景宽）</p>
                     */
                    double m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * <p>当InputType为3(画布)时，该值表示画布的颜色。<br>常用的颜色有：<br>红色：0xCC0033。<br>黄色：0xCC9900。<br>绿色：0xCCCC33。<br>蓝色：0x99CCFF。<br>黑色：0x000000。<br>白色：0xFFFFFF。<br>灰色：0x999999。</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>当InputType为2(图片)时，该值是水印ID。</p>
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * <p>当InputType为8时，该值是动效贴片的URL</p>
                     */
                    std::string m_webPageUrl;
                    bool m_webPageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXLAYOUTPARAMS_H_
