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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片水印模板输入参数
                */
                class ImageWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    ImageWatermarkInputForUpdate();
                    ~ImageWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串。支持 jpeg、png 图片格式。
                     * @return ImageContent 水印图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串。支持 jpeg、png 图片格式。
                     * 
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置水印图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串。支持 jpeg、png 图片格式。
                     * @param _imageContent 水印图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串。支持 jpeg、png 图片格式。
                     * 
                     */
                    void SetImageContent(const std::string& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     * 
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取水印的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素。取值范围为[8, 4096]。</li>
                     * @return Width 水印的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素。取值范围为[8, 4096]。</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置水印的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素。取值范围为[8, 4096]。</li>
                     * @param _width 水印的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素。取值范围为[8, 4096]。</li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取水印的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素。取值范围为0或[8, 4096]。</li>
                     * @return Height 水印的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素。取值范围为0或[8, 4096]。</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置水印的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素。取值范围为0或[8, 4096]。</li>
                     * @param _height 水印的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素。取值范围为0或[8, 4096]。</li>
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取水印重复类型。使用场景：水印为动态图像。取值范围：
<li>once：动态水印播放完后，不再出现；</li>
<li>repeat_last_frame：水印播放完后，停留在最后一帧；</li>
<li>repeat：水印循环播放，直到视频结束。</li>
                     * @return RepeatType 水印重复类型。使用场景：水印为动态图像。取值范围：
<li>once：动态水印播放完后，不再出现；</li>
<li>repeat_last_frame：水印播放完后，停留在最后一帧；</li>
<li>repeat：水印循环播放，直到视频结束。</li>
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置水印重复类型。使用场景：水印为动态图像。取值范围：
<li>once：动态水印播放完后，不再出现；</li>
<li>repeat_last_frame：水印播放完后，停留在最后一帧；</li>
<li>repeat：水印循环播放，直到视频结束。</li>
                     * @param _repeatType 水印重复类型。使用场景：水印为动态图像。取值范围：
<li>once：动态水印播放完后，不再出现；</li>
<li>repeat_last_frame：水印播放完后，停留在最后一帧；</li>
<li>repeat：水印循环播放，直到视频结束。</li>
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                    /**
                     * 获取图片透明度，取值范围：[0, 100]
<li>0：完全不透明</li>
<li>100：完全透明。</li>
                     * @return Transparency 图片透明度，取值范围：[0, 100]
<li>0：完全不透明</li>
<li>100：完全透明。</li>
                     * 
                     */
                    int64_t GetTransparency() const;

                    /**
                     * 设置图片透明度，取值范围：[0, 100]
<li>0：完全不透明</li>
<li>100：完全透明。</li>
                     * @param _transparency 图片透明度，取值范围：[0, 100]
<li>0：完全不透明</li>
<li>100：完全透明。</li>
                     * 
                     */
                    void SetTransparency(const int64_t& _transparency);

                    /**
                     * 判断参数 Transparency 是否已赋值
                     * @return Transparency 是否已赋值
                     * 
                     */
                    bool TransparencyHasBeenSet() const;

                private:

                    /**
                     * 水印图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串。支持 jpeg、png 图片格式。
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * 水印的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Width 为视频宽度的百分比大小，如 10% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素。取值范围为[8, 4096]。</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 Height 为视频高度的百分比大小，如 10% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素。取值范围为0或[8, 4096]。</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印重复类型。使用场景：水印为动态图像。取值范围：
<li>once：动态水印播放完后，不再出现；</li>
<li>repeat_last_frame：水印播放完后，停留在最后一帧；</li>
<li>repeat：水印循环播放，直到视频结束。</li>
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * 图片透明度，取值范围：[0, 100]
<li>0：完全不透明</li>
<li>100：完全透明。</li>
                     */
                    int64_t m_transparency;
                    bool m_transparencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
