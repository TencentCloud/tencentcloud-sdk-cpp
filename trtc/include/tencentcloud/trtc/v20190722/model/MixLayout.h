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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 用户自定义混流布局参数列表。
                */
                class MixLayout : public AbstractModel
                {
                public:
                    MixLayout();
                    ~MixLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。
                     * @return Top 画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。
                     * @param _top 画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。
                     * 
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。
                     * @return Left 画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。
                     * 
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。
                     * @param _left 画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。
                     * 
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。
                     * @return Width 画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。
                     * @param _width 画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。
                     * @return Height 画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。
                     * @param _height 画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。
                     * @return UserId 字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。
                     * @param _userId 字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。
                     * @return Alpha 画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。
                     * 
                     */
                    uint64_t GetAlpha() const;

                    /**
                     * 设置画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。
                     * @param _alpha 画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。
                     * 
                     */
                    void SetAlpha(const uint64_t& _alpha);

                    /**
                     * 判断参数 Alpha 是否已赋值
                     * @return Alpha 是否已赋值
                     * 
                     */
                    bool AlphaHasBeenSet() const;

                    /**
                     * 获取0 ：拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；

1 ：剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；

2 ：填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；

3 ：智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；
                     * @return RenderMode 0 ：拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；

1 ：剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；

2 ：填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；

3 ：智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置0 ：拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；

1 ：剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；

2 ：填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；

3 ：智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；
                     * @param _renderMode 0 ：拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；

1 ：剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；

2 ：填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；

3 ：智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；
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
                     * 获取对应订阅流的主辅路标识：
0：主流（默认）；
1：辅流；
                     * @return MediaId 对应订阅流的主辅路标识：
0：主流（默认）；
1：辅流；
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置对应订阅流的主辅路标识：
0：主流（默认）；
1：辅流；
                     * @param _mediaId 对应订阅流的主辅路标识：
0：主流（默认）；
1：辅流；
                     * 
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。
                     * @return ImageLayer 该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。
                     * 
                     */
                    uint64_t GetImageLayer() const;

                    /**
                     * 设置该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。
                     * @param _imageLayer 该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。
                     * 
                     */
                    void SetImageLayer(const uint64_t& _imageLayer);

                    /**
                     * 判断参数 ImageLayer 是否已赋值
                     * @return ImageLayer 是否已赋值
                     * 
                     */
                    bool ImageLayerHasBeenSet() const;

                    /**
                     * 获取图片的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @return SubBackgroundImage 图片的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    std::string GetSubBackgroundImage() const;

                    /**
                     * 设置图片的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @param _subBackgroundImage 图片的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    void SetSubBackgroundImage(const std::string& _subBackgroundImage);

                    /**
                     * 判断参数 SubBackgroundImage 是否已赋值
                     * @return SubBackgroundImage 是否已赋值
                     * 
                     */
                    bool SubBackgroundImageHasBeenSet() const;

                private:

                    /**
                     * 画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。
                     */
                    uint64_t m_alpha;
                    bool m_alphaHasBeenSet;

                    /**
                     * 0 ：拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；

1 ：剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；

2 ：填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；

3 ：智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * 对应订阅流的主辅路标识：
0：主流（默认）；
1：辅流；
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * 该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。
                     */
                    uint64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * 图片的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     */
                    std::string m_subBackgroundImage;
                    bool m_subBackgroundImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_
