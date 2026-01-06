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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSOUTPUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理编排输出配置。
                */
                class ImageProcessOutputConfig : public AbstractModel
                {
                public:
                    ImageProcessOutputConfig();
                    ~ImageProcessOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出图片的宽高比。可以配合ImageWidth 和 ImageHeight 使用，规则如下：

1. 仅指定 AspectRatio 时，根据原图输入进行自适应调整。
2. 指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。
3. 当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。

可取值：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9

支持该参数 ScheduleId: 30010(扩图)
                     * @return AspectRatio 输出图片的宽高比。可以配合ImageWidth 和 ImageHeight 使用，规则如下：

1. 仅指定 AspectRatio 时，根据原图输入进行自适应调整。
2. 指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。
3. 当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。

可取值：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9

支持该参数 ScheduleId: 30010(扩图)
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置输出图片的宽高比。可以配合ImageWidth 和 ImageHeight 使用，规则如下：

1. 仅指定 AspectRatio 时，根据原图输入进行自适应调整。
2. 指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。
3. 当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。

可取值：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9

支持该参数 ScheduleId: 30010(扩图)
                     * @param _aspectRatio 输出图片的宽高比。可以配合ImageWidth 和 ImageHeight 使用，规则如下：

1. 仅指定 AspectRatio 时，根据原图输入进行自适应调整。
2. 指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。
3. 当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。

可取值：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9

支持该参数 ScheduleId: 30010(扩图)
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取图片输出高度，单位：像素。
                     * @return ImageHeight 图片输出高度，单位：像素。
                     * 
                     */
                    int64_t GetImageHeight() const;

                    /**
                     * 设置图片输出高度，单位：像素。
                     * @param _imageHeight 图片输出高度，单位：像素。
                     * 
                     */
                    void SetImageHeight(const int64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取图片输出宽度，单位：像素。
                     * @return ImageWidth 图片输出宽度，单位：像素。
                     * 
                     */
                    int64_t GetImageWidth() const;

                    /**
                     * 设置图片输出宽度，单位：像素。
                     * @param _imageWidth 图片输出宽度，单位：像素。
                     * 
                     */
                    void SetImageWidth(const int64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取图片输出分辨率，取值：1K/2K/4K。
                     * @return ImageSize 图片输出分辨率，取值：1K/2K/4K。
                     * 
                     */
                    std::string GetImageSize() const;

                    /**
                     * 设置图片输出分辨率，取值：1K/2K/4K。
                     * @param _imageSize 图片输出分辨率，取值：1K/2K/4K。
                     * 
                     */
                    void SetImageSize(const std::string& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                private:

                    /**
                     * 输出图片的宽高比。可以配合ImageWidth 和 ImageHeight 使用，规则如下：

1. 仅指定 AspectRatio 时，根据原图输入进行自适应调整。
2. 指定 AspectRatio 和 ImageWidth 时，ImageHeight  由两者计算得出，反亦是如此。
3. 当AspectRatio、ImageWidth、ImageHeight 同时指定的时候，优先使用ImageWidth、ImageHeight。

可取值：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9、21:9

支持该参数 ScheduleId: 30010(扩图)
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 图片输出高度，单位：像素。
                     */
                    int64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 图片输出宽度，单位：像素。
                     */
                    int64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 图片输出分辨率，取值：1K/2K/4K。
                     */
                    std::string m_imageSize;
                    bool m_imageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSOUTPUTCONFIG_H_
