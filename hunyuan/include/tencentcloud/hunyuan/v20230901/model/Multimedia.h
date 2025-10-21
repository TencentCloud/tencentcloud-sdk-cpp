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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/SongExt.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 多媒体详情
                */
                class Multimedia : public AbstractModel
                {
                public:
                    Multimedia();
                    ~Multimedia() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多媒体类型，可选值包括 image、music、album、playlist。
说明：
1. image：图片；music：单曲，类型为单曲时，会返回详细歌手和歌曲信息；album：专辑；playlist：歌单。
2. 当 type 为 music、album、playlist 时，需要配合 [QQ音乐SDK](https://developer.y.qq.com/) 使用。
                     * @return Type 多媒体类型，可选值包括 image、music、album、playlist。
说明：
1. image：图片；music：单曲，类型为单曲时，会返回详细歌手和歌曲信息；album：专辑；playlist：歌单。
2. 当 type 为 music、album、playlist 时，需要配合 [QQ音乐SDK](https://developer.y.qq.com/) 使用。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置多媒体类型，可选值包括 image、music、album、playlist。
说明：
1. image：图片；music：单曲，类型为单曲时，会返回详细歌手和歌曲信息；album：专辑；playlist：歌单。
2. 当 type 为 music、album、playlist 时，需要配合 [QQ音乐SDK](https://developer.y.qq.com/) 使用。
                     * @param _type 多媒体类型，可选值包括 image、music、album、playlist。
说明：
1. image：图片；music：单曲，类型为单曲时，会返回详细歌手和歌曲信息；album：专辑；playlist：歌单。
2. 当 type 为 music、album、playlist 时，需要配合 [QQ音乐SDK](https://developer.y.qq.com/) 使用。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取多媒体地址。
说明：
1. type 为 image 时，地址为图片的预览地址；其他类型时，地址为封面图地址。
                     * @return Url 多媒体地址。
说明：
1. type 为 image 时，地址为图片的预览地址；其他类型时，地址为封面图地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置多媒体地址。
说明：
1. type 为 image 时，地址为图片的预览地址；其他类型时，地址为封面图地址。
                     * @param _url 多媒体地址。
说明：
1. type 为 image 时，地址为图片的预览地址；其他类型时，地址为封面图地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取如果Url为图片地址，标识图片宽度。
                     * @return Width 如果Url为图片地址，标识图片宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置如果Url为图片地址，标识图片宽度。
                     * @param _width 如果Url为图片地址，标识图片宽度。
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
                     * 获取如果Url为图片地址，标识图片高度。
                     * @return Height 如果Url为图片地址，标识图片高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置如果Url为图片地址，标识图片高度。
                     * @param _height 如果Url为图片地址，标识图片高度。
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
                     * 获取多媒体详情地址。
说明：
1. 仅 type 为 image 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JumpUrl 多媒体详情地址。
说明：
1. 仅 type 为 image 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置多媒体详情地址。
说明：
1. 仅 type 为 image 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jumpUrl 多媒体详情地址。
说明：
1. 仅 type 为 image 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取缩略图地址。
                     * @return ThumbURL 缩略图地址。
                     * 
                     */
                    std::string GetThumbURL() const;

                    /**
                     * 设置缩略图地址。
                     * @param _thumbURL 缩略图地址。
                     * 
                     */
                    void SetThumbURL(const std::string& _thumbURL);

                    /**
                     * 判断参数 ThumbURL 是否已赋值
                     * @return ThumbURL 是否已赋值
                     * 
                     */
                    bool ThumbURLHasBeenSet() const;

                    /**
                     * 获取缩略图宽度
                     * @return ThumbWidth 缩略图宽度
                     * 
                     */
                    int64_t GetThumbWidth() const;

                    /**
                     * 设置缩略图宽度
                     * @param _thumbWidth 缩略图宽度
                     * 
                     */
                    void SetThumbWidth(const int64_t& _thumbWidth);

                    /**
                     * 判断参数 ThumbWidth 是否已赋值
                     * @return ThumbWidth 是否已赋值
                     * 
                     */
                    bool ThumbWidthHasBeenSet() const;

                    /**
                     * 获取缩略图高度
                     * @return ThumbHeight 缩略图高度
                     * 
                     */
                    int64_t GetThumbHeight() const;

                    /**
                     * 设置缩略图高度
                     * @param _thumbHeight 缩略图高度
                     * 
                     */
                    void SetThumbHeight(const int64_t& _thumbHeight);

                    /**
                     * 判断参数 ThumbHeight 是否已赋值
                     * @return ThumbHeight 是否已赋值
                     * 
                     */
                    bool ThumbHeightHasBeenSet() const;

                    /**
                     * 获取名称。
说明：
1. type 为 image 时，该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 名称。
说明：
1. type 为 image 时，该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置名称。
说明：
1. type 为 image 时，该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 名称。
说明：
1. type 为 image 时，该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取歌手名称。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Singer 歌手名称。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSinger() const;

                    /**
                     * 设置歌手名称。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _singer 歌手名称。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSinger(const std::string& _singer);

                    /**
                     * 判断参数 Singer 是否已赋值
                     * @return Singer 是否已赋值
                     * 
                     */
                    bool SingerHasBeenSet() const;

                    /**
                     * 获取歌曲详情。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 歌曲详情。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SongExt GetExt() const;

                    /**
                     * 设置歌曲详情。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ext 歌曲详情。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExt(const SongExt& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取发布时间。
                     * @return PublishTime 发布时间。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置发布时间。
                     * @param _publishTime 发布时间。
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return SiteName 站点名称
                     * 
                     */
                    std::string GetSiteName() const;

                    /**
                     * 设置站点名称
                     * @param _siteName 站点名称
                     * 
                     */
                    void SetSiteName(const std::string& _siteName);

                    /**
                     * 判断参数 SiteName 是否已赋值
                     * @return SiteName 是否已赋值
                     * 
                     */
                    bool SiteNameHasBeenSet() const;

                    /**
                     * 获取站点图标
                     * @return SiteIcon 站点图标
                     * 
                     */
                    std::string GetSiteIcon() const;

                    /**
                     * 设置站点图标
                     * @param _siteIcon 站点图标
                     * 
                     */
                    void SetSiteIcon(const std::string& _siteIcon);

                    /**
                     * 判断参数 SiteIcon 是否已赋值
                     * @return SiteIcon 是否已赋值
                     * 
                     */
                    bool SiteIconHasBeenSet() const;

                private:

                    /**
                     * 多媒体类型，可选值包括 image、music、album、playlist。
说明：
1. image：图片；music：单曲，类型为单曲时，会返回详细歌手和歌曲信息；album：专辑；playlist：歌单。
2. 当 type 为 music、album、playlist 时，需要配合 [QQ音乐SDK](https://developer.y.qq.com/) 使用。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 多媒体地址。
说明：
1. type 为 image 时，地址为图片的预览地址；其他类型时，地址为封面图地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 如果Url为图片地址，标识图片宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 如果Url为图片地址，标识图片高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 多媒体详情地址。
说明：
1. 仅 type 为 image 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 缩略图地址。
                     */
                    std::string m_thumbURL;
                    bool m_thumbURLHasBeenSet;

                    /**
                     * 缩略图宽度
                     */
                    int64_t m_thumbWidth;
                    bool m_thumbWidthHasBeenSet;

                    /**
                     * 缩略图高度
                     */
                    int64_t m_thumbHeight;
                    bool m_thumbHeightHasBeenSet;

                    /**
                     * 名称。
说明：
1. type 为 image 时，该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 歌手名称。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_singer;
                    bool m_singerHasBeenSet;

                    /**
                     * 歌曲详情。
说明：
1. 仅 type 为 music 时，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SongExt m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 发布时间。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_siteName;
                    bool m_siteNameHasBeenSet;

                    /**
                     * 站点图标
                     */
                    std::string m_siteIcon;
                    bool m_siteIconHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_
