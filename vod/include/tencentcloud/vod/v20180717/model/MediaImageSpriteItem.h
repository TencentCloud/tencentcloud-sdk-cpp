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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_

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
                * 雪碧图信息
                */
                class MediaImageSpriteItem : public AbstractModel
                {
                public:
                    MediaImageSpriteItem();
                    ~MediaImageSpriteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取雪碧图规格，参见[雪碧图参数模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @return Definition 雪碧图规格，参见[雪碧图参数模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置雪碧图规格，参见[雪碧图参数模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @param _definition 雪碧图规格，参见[雪碧图参数模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

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
                     * 获取每一张雪碧图大图里小图的数量。
                     * @return TotalCount 每一张雪碧图大图里小图的数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置每一张雪碧图大图里小图的数量。
                     * @param _totalCount 每一张雪碧图大图里小图的数量。
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
                     * 获取每一张雪碧图大图的地址。
                     * @return ImageUrlSet 每一张雪碧图大图的地址。
                     * 
                     */
                    std::vector<std::string> GetImageUrlSet() const;

                    /**
                     * 设置每一张雪碧图大图的地址。
                     * @param _imageUrlSet 每一张雪碧图大图的地址。
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
                     * 雪碧图规格，参见[雪碧图参数模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

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
                     * 每一张雪碧图大图里小图的数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 每一张雪碧图大图的地址。
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_
