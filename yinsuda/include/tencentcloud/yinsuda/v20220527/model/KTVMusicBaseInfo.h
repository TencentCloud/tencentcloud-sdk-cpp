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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICBASEINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/MusicAlbumInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 歌曲基础信息。
                */
                class KTVMusicBaseInfo : public AbstractModel
                {
                public:
                    KTVMusicBaseInfo();
                    ~KTVMusicBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>歌曲Id。</p>
                     * @return MusicId <p>歌曲Id。</p>
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置<p>歌曲Id。</p>
                     * @param _musicId <p>歌曲Id。</p>
                     * 
                     */
                    void SetMusicId(const std::string& _musicId);

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     * 
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取<p>歌曲名称。</p>
                     * @return Name <p>歌曲名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>歌曲名称。</p>
                     * @param _name <p>歌曲名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>歌手名称。</p>
                     * @return SingerSet <p>歌手名称。</p>
                     * 
                     */
                    std::vector<std::string> GetSingerSet() const;

                    /**
                     * 设置<p>歌手名称。</p>
                     * @param _singerSet <p>歌手名称。</p>
                     * 
                     */
                    void SetSingerSet(const std::vector<std::string>& _singerSet);

                    /**
                     * 判断参数 SingerSet 是否已赋值
                     * @return SingerSet 是否已赋值
                     * 
                     */
                    bool SingerSetHasBeenSet() const;

                    /**
                     * 获取<p>播放时长。</p><p>单位：秒</p>
                     * @return Duration <p>播放时长。</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>播放时长。</p><p>单位：秒</p>
                     * @param _duration <p>播放时长。</p><p>单位：秒</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>歌手图片链接。</p>
                     * @return SingerImageUrl <p>歌手图片链接。</p>
                     * 
                     */
                    std::string GetSingerImageUrl() const;

                    /**
                     * 设置<p>歌手图片链接。</p>
                     * @param _singerImageUrl <p>歌手图片链接。</p>
                     * 
                     */
                    void SetSingerImageUrl(const std::string& _singerImageUrl);

                    /**
                     * 判断参数 SingerImageUrl 是否已赋值
                     * @return SingerImageUrl 是否已赋值
                     * 
                     */
                    bool SingerImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>专辑信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbumInfo <p>专辑信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MusicAlbumInfo GetAlbumInfo() const;

                    /**
                     * 设置<p>专辑信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _albumInfo <p>专辑信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlbumInfo(const MusicAlbumInfo& _albumInfo);

                    /**
                     * 判断参数 AlbumInfo 是否已赋值
                     * @return AlbumInfo 是否已赋值
                     * 
                     */
                    bool AlbumInfoHasBeenSet() const;

                    /**
                     * 获取<p>权益列表，取值有：</p><li>Play：可播；</li><li>Sing：可唱。</li>
                     * @return RightSet <p>权益列表，取值有：</p><li>Play：可播；</li><li>Sing：可唱。</li>
                     * 
                     */
                    std::vector<std::string> GetRightSet() const;

                    /**
                     * 设置<p>权益列表，取值有：</p><li>Play：可播；</li><li>Sing：可唱。</li>
                     * @param _rightSet <p>权益列表，取值有：</p><li>Play：可播；</li><li>Sing：可唱。</li>
                     * 
                     */
                    void SetRightSet(const std::vector<std::string>& _rightSet);

                    /**
                     * 判断参数 RightSet 是否已赋值
                     * @return RightSet 是否已赋值
                     * 
                     */
                    bool RightSetHasBeenSet() const;

                    /**
                     * 获取<p>推荐类型，取值有：</p><li>Featured：精选；</li><li>Other：其他。</li>
                     * @return RecommendType <p>推荐类型，取值有：</p><li>Featured：精选；</li><li>Other：其他。</li>
                     * 
                     */
                    std::string GetRecommendType() const;

                    /**
                     * 设置<p>推荐类型，取值有：</p><li>Featured：精选；</li><li>Other：其他。</li>
                     * @param _recommendType <p>推荐类型，取值有：</p><li>Featured：精选；</li><li>Other：其他。</li>
                     * 
                     */
                    void SetRecommendType(const std::string& _recommendType);

                    /**
                     * 判断参数 RecommendType 是否已赋值
                     * @return RecommendType 是否已赋值
                     * 
                     */
                    bool RecommendTypeHasBeenSet() const;

                private:

                    /**
                     * <p>歌曲Id。</p>
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * <p>歌曲名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>歌手名称。</p>
                     */
                    std::vector<std::string> m_singerSet;
                    bool m_singerSetHasBeenSet;

                    /**
                     * <p>播放时长。</p><p>单位：秒</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>歌手图片链接。</p>
                     */
                    std::string m_singerImageUrl;
                    bool m_singerImageUrlHasBeenSet;

                    /**
                     * <p>专辑信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MusicAlbumInfo m_albumInfo;
                    bool m_albumInfoHasBeenSet;

                    /**
                     * <p>权益列表，取值有：</p><li>Play：可播；</li><li>Sing：可唱。</li>
                     */
                    std::vector<std::string> m_rightSet;
                    bool m_rightSetHasBeenSet;

                    /**
                     * <p>推荐类型，取值有：</p><li>Featured：精选；</li><li>Other：其他。</li>
                     */
                    std::string m_recommendType;
                    bool m_recommendTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICBASEINFO_H_
