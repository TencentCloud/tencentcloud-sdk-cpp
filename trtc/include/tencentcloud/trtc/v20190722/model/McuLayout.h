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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/UserMediaStream.h>
#include <tencentcloud/trtc/v20190722/model/McuCustomCrop.h>
#include <tencentcloud/trtc/v20190722/model/McuBackgroundCustomRender.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流布局参数。
                */
                class McuLayout : public AbstractModel
                {
                public:
                    McuLayout();
                    ~McuLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户媒体流参数。不填时腾讯云后台按照上行主播的进房顺序自动填充。
                     * @return UserMediaStream 用户媒体流参数。不填时腾讯云后台按照上行主播的进房顺序自动填充。
                     * 
                     */
                    UserMediaStream GetUserMediaStream() const;

                    /**
                     * 设置用户媒体流参数。不填时腾讯云后台按照上行主播的进房顺序自动填充。
                     * @param _userMediaStream 用户媒体流参数。不填时腾讯云后台按照上行主播的进房顺序自动填充。
                     * 
                     */
                    void SetUserMediaStream(const UserMediaStream& _userMediaStream);

                    /**
                     * 判断参数 UserMediaStream 是否已赋值
                     * @return UserMediaStream 是否已赋值
                     * 
                     */
                    bool UserMediaStreamHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @return ImageWidth 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @param _imageWidth 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的高度，单位为像素值，不填默认为0。
                     * @return ImageHeight 子画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置子画面在输出时的高度，单位为像素值，不填默认为0。
                     * @param _imageHeight 子画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @return LocationX 子画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置子画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @param _locationX 子画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @return LocationY 子画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置子画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @param _locationY 子画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的层级，不填默认为0。
                     * @return ZOrder 子画面在输出时的层级，不填默认为0。
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置子画面在输出时的层级，不填默认为0。
                     * @param _zOrder 子画面在输出时的层级，不填默认为0。
                     * 
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底。不填默认为0。
                     * @return RenderMode 子画面在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底。不填默认为0。
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置子画面在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底。不填默认为0。
                     * @param _renderMode 子画面在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底。不填默认为0。
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取【此参数配置无效，暂不支持】子画面的背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @return BackGroundColor 【此参数配置无效，暂不支持】子画面的背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置【此参数配置无效，暂不支持】子画面的背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @param _backGroundColor 【此参数配置无效，暂不支持】子画面的背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取子画面的背景图url，填写该参数，当用户关闭摄像头或未进入TRTC房间时，会在布局位置填充为指定图片。若指定图片与布局位置尺寸比例不一致，则会对图片进行拉伸处理，优先级高于BackGroundColor。支持png、jpg、jpeg、bmp、gif、webm格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，子画面的背景图将不会生效。
                     * @return BackgroundImageUrl 子画面的背景图url，填写该参数，当用户关闭摄像头或未进入TRTC房间时，会在布局位置填充为指定图片。若指定图片与布局位置尺寸比例不一致，则会对图片进行拉伸处理，优先级高于BackGroundColor。支持png、jpg、jpeg、bmp、gif、webm格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，子画面的背景图将不会生效。
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置子画面的背景图url，填写该参数，当用户关闭摄像头或未进入TRTC房间时，会在布局位置填充为指定图片。若指定图片与布局位置尺寸比例不一致，则会对图片进行拉伸处理，优先级高于BackGroundColor。支持png、jpg、jpeg、bmp、gif、webm格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，子画面的背景图将不会生效。
                     * @param _backgroundImageUrl 子画面的背景图url，填写该参数，当用户关闭摄像头或未进入TRTC房间时，会在布局位置填充为指定图片。若指定图片与布局位置尺寸比例不一致，则会对图片进行拉伸处理，优先级高于BackGroundColor。支持png、jpg、jpeg、bmp、gif、webm格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，子画面的背景图将不会生效。
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取客户自定义裁剪，针对原始输入流裁剪
                     * @return CustomCrop 客户自定义裁剪，针对原始输入流裁剪
                     * 
                     */
                    McuCustomCrop GetCustomCrop() const;

                    /**
                     * 设置客户自定义裁剪，针对原始输入流裁剪
                     * @param _customCrop 客户自定义裁剪，针对原始输入流裁剪
                     * 
                     */
                    void SetCustomCrop(const McuCustomCrop& _customCrop);

                    /**
                     * 判断参数 CustomCrop 是否已赋值
                     * @return CustomCrop 是否已赋值
                     * 
                     */
                    bool CustomCropHasBeenSet() const;

                    /**
                     * 获取子背景图在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底，3为变比例伸缩，4为自定义渲染。不填默认为3。
                     * @return BackgroundRenderMode 子背景图在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底，3为变比例伸缩，4为自定义渲染。不填默认为3。
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置子背景图在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底，3为变比例伸缩，4为自定义渲染。不填默认为3。
                     * @param _backgroundRenderMode 子背景图在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底，3为变比例伸缩，4为自定义渲染。不填默认为3。
                     * 
                     */
                    void SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode);

                    /**
                     * 判断参数 BackgroundRenderMode 是否已赋值
                     * @return BackgroundRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundRenderModeHasBeenSet() const;

                    /**
                     * 获取子画面的透明模版url，指向一张包含透明通道的模板图片。填写该参数，后台混流时会提取该模板图片的透明通道，将其缩放作为目标画面的透明通道，再和其他画面进行混合。您可以通过透明模版实现目标画面的半透明效果和任意形状裁剪（如圆角、星形、心形等）。 支持png格式。图片大小限制不超过5MB。
注：1，模板图片宽高比应接近目标画面宽高比，以避免缩放适配目标画面时出现模板效果变形；2，透明模版只有RenderMode为0（裁剪）时才生效；3，您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，透明模版将不会生效。
                     * @return TransparentUrl 子画面的透明模版url，指向一张包含透明通道的模板图片。填写该参数，后台混流时会提取该模板图片的透明通道，将其缩放作为目标画面的透明通道，再和其他画面进行混合。您可以通过透明模版实现目标画面的半透明效果和任意形状裁剪（如圆角、星形、心形等）。 支持png格式。图片大小限制不超过5MB。
注：1，模板图片宽高比应接近目标画面宽高比，以避免缩放适配目标画面时出现模板效果变形；2，透明模版只有RenderMode为0（裁剪）时才生效；3，您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，透明模版将不会生效。
                     * 
                     */
                    std::string GetTransparentUrl() const;

                    /**
                     * 设置子画面的透明模版url，指向一张包含透明通道的模板图片。填写该参数，后台混流时会提取该模板图片的透明通道，将其缩放作为目标画面的透明通道，再和其他画面进行混合。您可以通过透明模版实现目标画面的半透明效果和任意形状裁剪（如圆角、星形、心形等）。 支持png格式。图片大小限制不超过5MB。
注：1，模板图片宽高比应接近目标画面宽高比，以避免缩放适配目标画面时出现模板效果变形；2，透明模版只有RenderMode为0（裁剪）时才生效；3，您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，透明模版将不会生效。
                     * @param _transparentUrl 子画面的透明模版url，指向一张包含透明通道的模板图片。填写该参数，后台混流时会提取该模板图片的透明通道，将其缩放作为目标画面的透明通道，再和其他画面进行混合。您可以通过透明模版实现目标画面的半透明效果和任意形状裁剪（如圆角、星形、心形等）。 支持png格式。图片大小限制不超过5MB。
注：1，模板图片宽高比应接近目标画面宽高比，以避免缩放适配目标画面时出现模板效果变形；2，透明模版只有RenderMode为0（裁剪）时才生效；3，您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，透明模版将不会生效。
                     * 
                     */
                    void SetTransparentUrl(const std::string& _transparentUrl);

                    /**
                     * 判断参数 TransparentUrl 是否已赋值
                     * @return TransparentUrl 是否已赋值
                     * 
                     */
                    bool TransparentUrlHasBeenSet() const;

                    /**
                     * 获取子背景图的自定义渲染参数，当BackgroundRenderMode为4时必须配置。
                     * @return BackgroundCustomRender 子背景图的自定义渲染参数，当BackgroundRenderMode为4时必须配置。
                     * 
                     */
                    McuBackgroundCustomRender GetBackgroundCustomRender() const;

                    /**
                     * 设置子背景图的自定义渲染参数，当BackgroundRenderMode为4时必须配置。
                     * @param _backgroundCustomRender 子背景图的自定义渲染参数，当BackgroundRenderMode为4时必须配置。
                     * 
                     */
                    void SetBackgroundCustomRender(const McuBackgroundCustomRender& _backgroundCustomRender);

                    /**
                     * 判断参数 BackgroundCustomRender 是否已赋值
                     * @return BackgroundCustomRender 是否已赋值
                     * 
                     */
                    bool BackgroundCustomRenderHasBeenSet() const;

                    /**
                     * 获取子背景色生效模式，默认值为0表示均不生效。
bit0:占位图缩放是否生效。
bit1:上行流缩放是否生效。
您可以将相应bit位置1启动生效，例如：
0(00)表示子背景色不生效。
1(01)表示子背景色只在占位图缩放时生效。
2(10)表示子背景色只在上行流缩放时生效。
3(11)表示子背景色在占位图缩放和上行流缩放时均生效。

                     * @return BackGroundColorMode 子背景色生效模式，默认值为0表示均不生效。
bit0:占位图缩放是否生效。
bit1:上行流缩放是否生效。
您可以将相应bit位置1启动生效，例如：
0(00)表示子背景色不生效。
1(01)表示子背景色只在占位图缩放时生效。
2(10)表示子背景色只在上行流缩放时生效。
3(11)表示子背景色在占位图缩放和上行流缩放时均生效。

                     * 
                     */
                    uint64_t GetBackGroundColorMode() const;

                    /**
                     * 设置子背景色生效模式，默认值为0表示均不生效。
bit0:占位图缩放是否生效。
bit1:上行流缩放是否生效。
您可以将相应bit位置1启动生效，例如：
0(00)表示子背景色不生效。
1(01)表示子背景色只在占位图缩放时生效。
2(10)表示子背景色只在上行流缩放时生效。
3(11)表示子背景色在占位图缩放和上行流缩放时均生效。

                     * @param _backGroundColorMode 子背景色生效模式，默认值为0表示均不生效。
bit0:占位图缩放是否生效。
bit1:上行流缩放是否生效。
您可以将相应bit位置1启动生效，例如：
0(00)表示子背景色不生效。
1(01)表示子背景色只在占位图缩放时生效。
2(10)表示子背景色只在上行流缩放时生效。
3(11)表示子背景色在占位图缩放和上行流缩放时均生效。

                     * 
                     */
                    void SetBackGroundColorMode(const uint64_t& _backGroundColorMode);

                    /**
                     * 判断参数 BackGroundColorMode 是否已赋值
                     * @return BackGroundColorMode 是否已赋值
                     * 
                     */
                    bool BackGroundColorModeHasBeenSet() const;

                private:

                    /**
                     * 用户媒体流参数。不填时腾讯云后台按照上行主播的进房顺序自动填充。
                     */
                    UserMediaStream m_userMediaStream;
                    bool m_userMediaStreamHasBeenSet;

                    /**
                     * 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 子画面在输出时的高度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 子画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 子画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 子画面在输出时的层级，不填默认为0。
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * 子画面在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底。不填默认为0。
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * 【此参数配置无效，暂不支持】子画面的背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * 子画面的背景图url，填写该参数，当用户关闭摄像头或未进入TRTC房间时，会在布局位置填充为指定图片。若指定图片与布局位置尺寸比例不一致，则会对图片进行拉伸处理，优先级高于BackGroundColor。支持png、jpg、jpeg、bmp、gif、webm格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，子画面的背景图将不会生效。
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * 客户自定义裁剪，针对原始输入流裁剪
                     */
                    McuCustomCrop m_customCrop;
                    bool m_customCropHasBeenSet;

                    /**
                     * 子背景图在输出时的显示模式：0为裁剪，1为缩放并显示背景，2为缩放并显示黑底，3为变比例伸缩，4为自定义渲染。不填默认为3。
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                    /**
                     * 子画面的透明模版url，指向一张包含透明通道的模板图片。填写该参数，后台混流时会提取该模板图片的透明通道，将其缩放作为目标画面的透明通道，再和其他画面进行混合。您可以通过透明模版实现目标画面的半透明效果和任意形状裁剪（如圆角、星形、心形等）。 支持png格式。图片大小限制不超过5MB。
注：1，模板图片宽高比应接近目标画面宽高比，以避免缩放适配目标画面时出现模板效果变形；2，透明模版只有RenderMode为0（裁剪）时才生效；3，您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，透明模版将不会生效。
                     */
                    std::string m_transparentUrl;
                    bool m_transparentUrlHasBeenSet;

                    /**
                     * 子背景图的自定义渲染参数，当BackgroundRenderMode为4时必须配置。
                     */
                    McuBackgroundCustomRender m_backgroundCustomRender;
                    bool m_backgroundCustomRenderHasBeenSet;

                    /**
                     * 子背景色生效模式，默认值为0表示均不生效。
bit0:占位图缩放是否生效。
bit1:上行流缩放是否生效。
您可以将相应bit位置1启动生效，例如：
0(00)表示子背景色不生效。
1(01)表示子背景色只在占位图缩放时生效。
2(10)表示子背景色只在上行流缩放时生效。
3(11)表示子背景色在占位图缩放和上行流缩放时均生效。

                     */
                    uint64_t m_backGroundColorMode;
                    bool m_backGroundColorModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_
