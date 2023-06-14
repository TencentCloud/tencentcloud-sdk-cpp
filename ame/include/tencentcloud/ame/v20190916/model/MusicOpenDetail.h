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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_MUSICOPENDETAIL_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_MUSICOPENDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 对外开放信息
                */
                class MusicOpenDetail : public AbstractModel
                {
                public:
                    MusicOpenDetail();
                    ~MusicOpenDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音乐Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MusicId 音乐Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置音乐Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _musicId 音乐Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取专辑名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbumName 专辑名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlbumName() const;

                    /**
                     * 设置专辑名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _albumName 专辑名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlbumName(const std::string& _albumName);

                    /**
                     * 判断参数 AlbumName 是否已赋值
                     * @return AlbumName 是否已赋值
                     * 
                     */
                    bool AlbumNameHasBeenSet() const;

                    /**
                     * 获取专辑图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbumImageUrl 专辑图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlbumImageUrl() const;

                    /**
                     * 设置专辑图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _albumImageUrl 专辑图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlbumImageUrl(const std::string& _albumImageUrl);

                    /**
                     * 判断参数 AlbumImageUrl 是否已赋值
                     * @return AlbumImageUrl 是否已赋值
                     * 
                     */
                    bool AlbumImageUrlHasBeenSet() const;

                    /**
                     * 获取音乐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MusicName 音乐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMusicName() const;

                    /**
                     * 设置音乐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _musicName 音乐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMusicName(const std::string& _musicName);

                    /**
                     * 判断参数 MusicName 是否已赋值
                     * @return MusicName 是否已赋值
                     * 
                     */
                    bool MusicNameHasBeenSet() const;

                    /**
                     * 获取音乐图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MusicImageUrl 音乐图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMusicImageUrl() const;

                    /**
                     * 设置音乐图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _musicImageUrl 音乐图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMusicImageUrl(const std::string& _musicImageUrl);

                    /**
                     * 判断参数 MusicImageUrl 是否已赋值
                     * @return MusicImageUrl 是否已赋值
                     * 
                     */
                    bool MusicImageUrlHasBeenSet() const;

                    /**
                     * 获取歌手
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Singers 歌手
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSingers() const;

                    /**
                     * 设置歌手
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _singers 歌手
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSingers(const std::vector<std::string>& _singers);

                    /**
                     * 判断参数 Singers 是否已赋值
                     * @return Singers 是否已赋值
                     * 
                     */
                    bool SingersHasBeenSet() const;

                    /**
                     * 获取播放时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 播放时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置播放时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 播放时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取歌词url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LyricUrl 歌词url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLyricUrl() const;

                    /**
                     * 设置歌词url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lyricUrl 歌词url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLyricUrl(const std::string& _lyricUrl);

                    /**
                     * 判断参数 LyricUrl 是否已赋值
                     * @return LyricUrl 是否已赋值
                     * 
                     */
                    bool LyricUrlHasBeenSet() const;

                    /**
                     * 获取波形图url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaveformUrl 波形图url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaveformUrl() const;

                    /**
                     * 设置波形图url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waveformUrl 波形图url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaveformUrl(const std::string& _waveformUrl);

                    /**
                     * 判断参数 WaveformUrl 是否已赋值
                     * @return WaveformUrl 是否已赋值
                     * 
                     */
                    bool WaveformUrlHasBeenSet() const;

                private:

                    /**
                     * 音乐Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 专辑名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_albumName;
                    bool m_albumNameHasBeenSet;

                    /**
                     * 专辑图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_albumImageUrl;
                    bool m_albumImageUrlHasBeenSet;

                    /**
                     * 音乐名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_musicName;
                    bool m_musicNameHasBeenSet;

                    /**
                     * 音乐图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_musicImageUrl;
                    bool m_musicImageUrlHasBeenSet;

                    /**
                     * 歌手
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_singers;
                    bool m_singersHasBeenSet;

                    /**
                     * 播放时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 歌词url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lyricUrl;
                    bool m_lyricUrlHasBeenSet;

                    /**
                     * 波形图url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waveformUrl;
                    bool m_waveformUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MUSICOPENDETAIL_H_
