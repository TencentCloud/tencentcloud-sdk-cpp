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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIAIMAGESPRITEINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIAIMAGESPRITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 雪碧图
                */
                class MediaImageSpriteInfo : public AbstractModel
                {
                public:
                    MediaImageSpriteInfo();
                    ~MediaImageSpriteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取雪碧图小图的高度。
                     * @return Height 雪碧图小图的高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置雪碧图小图的高度。
                     * @param _height 雪碧图小图的高度。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取雪碧图小图的宽度。
                     * @return Width 雪碧图小图的宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置雪碧图小图的宽度。
                     * @param _width 雪碧图小图的宽度。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取雪碧图小图的总数量。
                     * @return TotalCount 雪碧图小图的总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置雪碧图小图的总数量。
                     * @param _totalCount 雪碧图小图的总数量。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取截取雪碧图输出的地址。
                     * @return ImageUrlSet 截取雪碧图输出的地址。
                     * 
                     */
                    std::vector<std::string> GetImageUrlSet() const;

                    /**
                     * 设置截取雪碧图输出的地址。
                     * @param _imageUrlSet 截取雪碧图输出的地址。
                     * 
                     */
                    void SetImageUrlSet(const std::vector<std::string>& _imageUrlSet);

                    /**
                     * 判断参数 ImageUrlSet 是否已赋值
                     * @return ImageUrlSet 是否已赋值
                     * 
                     */
                    bool ImageUrlSetHasBeenSet() const;

                    /**
                     * 获取雪碧图子图位置与时间关系的 WebVtt 文件地址。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。
                     * @return WebVttUrl 雪碧图子图位置与时间关系的 WebVtt 文件地址。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。
                     * 
                     */
                    std::string GetWebVttUrl() const;

                    /**
                     * 设置雪碧图子图位置与时间关系的 WebVtt 文件地址。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。
                     * @param _webVttUrl 雪碧图子图位置与时间关系的 WebVtt 文件地址。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。
                     * 
                     */
                    void SetWebVttUrl(const std::string& _webVttUrl);

                    /**
                     * 判断参数 WebVttUrl 是否已赋值
                     * @return WebVttUrl 是否已赋值
                     * 
                     */
                    bool WebVttUrlHasBeenSet() const;

                private:

                    /**
                     * 雪碧图小图的高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 雪碧图小图的宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 雪碧图小图的总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 截取雪碧图输出的地址。
                     */
                    std::vector<std::string> m_imageUrlSet;
                    bool m_imageUrlSetHasBeenSet;

                    /**
                     * 雪碧图子图位置与时间关系的 WebVtt 文件地址。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。
                     */
                    std::string m_webVttUrl;
                    bool m_webVttUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAIMAGESPRITEINFO_H_
