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
                     * 获取<p>画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。</p>
                     * @return Top <p>画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。</p>
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置<p>画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。</p>
                     * @param _top <p>画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。</p>
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
                     * 获取<p>画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。</p>
                     * @return Left <p>画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。</p>
                     * 
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置<p>画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。</p>
                     * @param _left <p>画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。</p>
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
                     * 获取<p>画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。</p>
                     * @return Width <p>画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。</p>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。</p>
                     * @param _width <p>画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。</p>
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
                     * 获取<p>画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。</p>
                     * @return Height <p>画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。</p>
                     * @param _height <p>画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。</p>
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
                     * 获取<p>字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。</p>
                     * @return UserId <p>字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。</p>
                     * @param _userId <p>字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。</p>
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
                     * 获取<p>画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。</p>
                     * @return Alpha <p>画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。</p>
                     * 
                     */
                    uint64_t GetAlpha() const;

                    /**
                     * 设置<p>画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。</p>
                     * @param _alpha <p>画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。</p>
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
                     * 获取<p>画布上该画面的渲染模式</p><p>枚举值：</p><ul><li>0： 拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；</li><li>1： 剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；</li><li>2： 填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；</li><li>3： 智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；</li></ul>
                     * @return RenderMode <p>画布上该画面的渲染模式</p><p>枚举值：</p><ul><li>0： 拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；</li><li>1： 剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；</li><li>2： 填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；</li><li>3： 智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；</li></ul>
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置<p>画布上该画面的渲染模式</p><p>枚举值：</p><ul><li>0： 拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；</li><li>1： 剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；</li><li>2： 填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；</li><li>3： 智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；</li></ul>
                     * @param _renderMode <p>画布上该画面的渲染模式</p><p>枚举值：</p><ul><li>0： 拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；</li><li>1： 剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；</li><li>2： 填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；</li><li>3： 智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；</li></ul>
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
                     * 获取<p>对应订阅流的主辅路标识：<br>0：主流（默认）；<br>1：辅流；</p>
                     * @return MediaId <p>对应订阅流的主辅路标识：<br>0：主流（默认）；<br>1：辅流；</p>
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置<p>对应订阅流的主辅路标识：<br>0：主流（默认）；<br>1：辅流；</p>
                     * @param _mediaId <p>对应订阅流的主辅路标识：<br>0：主流（默认）；<br>1：辅流；</p>
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
                     * 获取<p>该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。</p>
                     * @return ImageLayer <p>该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。</p>
                     * 
                     */
                    uint64_t GetImageLayer() const;

                    /**
                     * 设置<p>该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。</p>
                     * @param _imageLayer <p>该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。</p>
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
                     * 获取<p>图片的url地址， 只支持jpg, png, jpeg，图片分辨率限制不超过2K，图片大小限制不超过5MB。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 &#39;-&#39;, &#39;.&#39;, &#39;_&#39;, &#39;~&#39;, &#39;:&#39;, &#39;/&#39;, &#39;?&#39;, &#39;#&#39;, &#39;[&#39;, &#39;]&#39; &#39;@&#39;, &#39;!&#39;, &#39;&amp;&#39;, &#39;(&#39;, &#39;)&#39;, &#39;*&#39;, &#39;+&#39;, &#39;,&#39;, &#39;%&#39;, &#39;=&#39;</p>
                     * @return SubBackgroundImage <p>图片的url地址， 只支持jpg, png, jpeg，图片分辨率限制不超过2K，图片大小限制不超过5MB。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 &#39;-&#39;, &#39;.&#39;, &#39;_&#39;, &#39;~&#39;, &#39;:&#39;, &#39;/&#39;, &#39;?&#39;, &#39;#&#39;, &#39;[&#39;, &#39;]&#39; &#39;@&#39;, &#39;!&#39;, &#39;&amp;&#39;, &#39;(&#39;, &#39;)&#39;, &#39;*&#39;, &#39;+&#39;, &#39;,&#39;, &#39;%&#39;, &#39;=&#39;</p>
                     * 
                     */
                    std::string GetSubBackgroundImage() const;

                    /**
                     * 设置<p>图片的url地址， 只支持jpg, png, jpeg，图片分辨率限制不超过2K，图片大小限制不超过5MB。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 &#39;-&#39;, &#39;.&#39;, &#39;_&#39;, &#39;~&#39;, &#39;:&#39;, &#39;/&#39;, &#39;?&#39;, &#39;#&#39;, &#39;[&#39;, &#39;]&#39; &#39;@&#39;, &#39;!&#39;, &#39;&amp;&#39;, &#39;(&#39;, &#39;)&#39;, &#39;*&#39;, &#39;+&#39;, &#39;,&#39;, &#39;%&#39;, &#39;=&#39;</p>
                     * @param _subBackgroundImage <p>图片的url地址， 只支持jpg, png, jpeg，图片分辨率限制不超过2K，图片大小限制不超过5MB。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 &#39;-&#39;, &#39;.&#39;, &#39;_&#39;, &#39;~&#39;, &#39;:&#39;, &#39;/&#39;, &#39;?&#39;, &#39;#&#39;, &#39;[&#39;, &#39;]&#39; &#39;@&#39;, &#39;!&#39;, &#39;&amp;&#39;, &#39;(&#39;, &#39;)&#39;, &#39;*&#39;, &#39;+&#39;, &#39;,&#39;, &#39;%&#39;, &#39;=&#39;</p>
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
                     * <p>画布上该画面左上角的 y 轴坐标，取值范围 [0, 1920]，不能超过画布的高。</p>
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * <p>画布上该画面左上角的 x 轴坐标，取值范围 [0, 1920]，不能超过画布的宽。</p>
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * <p>画布上该画面宽度的相对值，取值范围 [0, 1920]，与Left相加不应超过画布的宽。</p>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>画布上该画面高度的相对值，取值范围 [0, 1920]，与Top相加不应超过画布的高。</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>字符串内容为待显示在该画面的主播对应的UserId，如果不指定，会按照主播加入房间的顺序匹配。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>画布的透明度值，取值范围[0, 255]。0表示不透明，255表示全透明。默认值为0。</p>
                     */
                    uint64_t m_alpha;
                    bool m_alphaHasBeenSet;

                    /**
                     * <p>画布上该画面的渲染模式</p><p>枚举值：</p><ul><li>0： 拉伸模式，这个模式下整个视频内容会全部显示，并填满子画面，在源视频和目的视频宽高比不一致的时候，画面不会缺少内容，但是画面可能产生形变；</li><li>1： 剪裁模式（默认），这个模式下会严格按照目的视频的宽高比对源视频剪裁之后再拉伸，并填满子画面画布，在源视频和目的视频宽高比不一致的时候，画面保持不变形，但是会被剪裁；</li><li>2： 填黑模式，这个模式下会严格保持源视频的宽高比进行等比缩放，在源视频和目的视频宽高比不一致的时候，画面的上下侧边缘或者左右侧边缘会露出子画面画布的背景；</li><li>3： 智能拉伸模式，这个模式类似剪裁模式，区别是在源视频和目的视频宽高比不一致的时候，限制了最大剪裁比例为画面的宽度或者高度的20%；</li></ul>
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * <p>对应订阅流的主辅路标识：<br>0：主流（默认）；<br>1：辅流；</p>
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * <p>该画布的图层顺序, 这个值越小表示图层越靠后。默认值为0。</p>
                     */
                    uint64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * <p>图片的url地址， 只支持jpg, png, jpeg，图片分辨率限制不超过2K，图片大小限制不超过5MB。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 &#39;-&#39;, &#39;.&#39;, &#39;_&#39;, &#39;~&#39;, &#39;:&#39;, &#39;/&#39;, &#39;?&#39;, &#39;#&#39;, &#39;[&#39;, &#39;]&#39; &#39;@&#39;, &#39;!&#39;, &#39;&amp;&#39;, &#39;(&#39;, &#39;)&#39;, &#39;*&#39;, &#39;+&#39;, &#39;,&#39;, &#39;%&#39;, &#39;=&#39;</p>
                     */
                    std::string m_subBackgroundImage;
                    bool m_subBackgroundImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_
