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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICDETAILINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMusicBaseInfo.h>
#include <tencentcloud/yinsuda/v20220527/model/ChorusClip.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVBPMInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 歌曲详细信息。
                */
                class KTVMusicDetailInfo : public AbstractModel
                {
                public:
                    KTVMusicDetailInfo();
                    ~KTVMusicDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲基础信息。
                     * @return KTVMusicBaseInfo 歌曲基础信息。
                     * 
                     */
                    KTVMusicBaseInfo GetKTVMusicBaseInfo() const;

                    /**
                     * 设置歌曲基础信息。
                     * @param _kTVMusicBaseInfo 歌曲基础信息。
                     * 
                     */
                    void SetKTVMusicBaseInfo(const KTVMusicBaseInfo& _kTVMusicBaseInfo);

                    /**
                     * 判断参数 KTVMusicBaseInfo 是否已赋值
                     * @return KTVMusicBaseInfo 是否已赋值
                     * 
                     */
                    bool KTVMusicBaseInfoHasBeenSet() const;

                    /**
                     * 获取播放凭证。
                     * @return PlayToken 播放凭证。
                     * 
                     */
                    std::string GetPlayToken() const;

                    /**
                     * 设置播放凭证。
                     * @param _playToken 播放凭证。
                     * 
                     */
                    void SetPlayToken(const std::string& _playToken);

                    /**
                     * 判断参数 PlayToken 是否已赋值
                     * @return PlayToken 是否已赋值
                     * 
                     */
                    bool PlayTokenHasBeenSet() const;

                    /**
                     * 获取歌词下载链接。
                     * @return LyricsUrl 歌词下载链接。
                     * 
                     */
                    std::string GetLyricsUrl() const;

                    /**
                     * 设置歌词下载链接。
                     * @param _lyricsUrl 歌词下载链接。
                     * 
                     */
                    void SetLyricsUrl(const std::string& _lyricsUrl);

                    /**
                     * 判断参数 LyricsUrl 是否已赋值
                     * @return LyricsUrl 是否已赋值
                     * 
                     */
                    bool LyricsUrlHasBeenSet() const;

                    /**
                     * 获取音高数据下载链接。
                     * @return MidiUrl 音高数据下载链接。
                     * 
                     */
                    std::string GetMidiUrl() const;

                    /**
                     * 设置音高数据下载链接。
                     * @param _midiUrl 音高数据下载链接。
                     * 
                     */
                    void SetMidiUrl(const std::string& _midiUrl);

                    /**
                     * 判断参数 MidiUrl 是否已赋值
                     * @return MidiUrl 是否已赋值
                     * 
                     */
                    bool MidiUrlHasBeenSet() const;

                    /**
                     * 获取副歌片段信息。
                     * @return ChorusClipSet 副歌片段信息。
                     * 
                     */
                    std::vector<ChorusClip> GetChorusClipSet() const;

                    /**
                     * 设置副歌片段信息。
                     * @param _chorusClipSet 副歌片段信息。
                     * 
                     */
                    void SetChorusClipSet(const std::vector<ChorusClip>& _chorusClipSet);

                    /**
                     * 判断参数 ChorusClipSet 是否已赋值
                     * @return ChorusClipSet 是否已赋值
                     * 
                     */
                    bool ChorusClipSetHasBeenSet() const;

                    /**
                     * 获取前奏间隔。
                     * @return PreludeInterval 前奏间隔。
                     * 
                     */
                    int64_t GetPreludeInterval() const;

                    /**
                     * 设置前奏间隔。
                     * @param _preludeInterval 前奏间隔。
                     * 
                     */
                    void SetPreludeInterval(const int64_t& _preludeInterval);

                    /**
                     * 判断参数 PreludeInterval 是否已赋值
                     * @return PreludeInterval 是否已赋值
                     * 
                     */
                    bool PreludeIntervalHasBeenSet() const;

                    /**
                     * 获取歌曲流派列表。
                     * @return GenreSet 歌曲流派列表。
                     * 
                     */
                    std::vector<std::string> GetGenreSet() const;

                    /**
                     * 设置歌曲流派列表。
                     * @param _genreSet 歌曲流派列表。
                     * 
                     */
                    void SetGenreSet(const std::vector<std::string>& _genreSet);

                    /**
                     * 判断参数 GenreSet 是否已赋值
                     * @return GenreSet 是否已赋值
                     * 
                     */
                    bool GenreSetHasBeenSet() const;

                    /**
                     * 获取节拍信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BPMInfo 节拍信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KTVBPMInfo GetBPMInfo() const;

                    /**
                     * 设置节拍信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bPMInfo 节拍信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBPMInfo(const KTVBPMInfo& _bPMInfo);

                    /**
                     * 判断参数 BPMInfo 是否已赋值
                     * @return BPMInfo 是否已赋值
                     * 
                     */
                    bool BPMInfoHasBeenSet() const;

                private:

                    /**
                     * 歌曲基础信息。
                     */
                    KTVMusicBaseInfo m_kTVMusicBaseInfo;
                    bool m_kTVMusicBaseInfoHasBeenSet;

                    /**
                     * 播放凭证。
                     */
                    std::string m_playToken;
                    bool m_playTokenHasBeenSet;

                    /**
                     * 歌词下载链接。
                     */
                    std::string m_lyricsUrl;
                    bool m_lyricsUrlHasBeenSet;

                    /**
                     * 音高数据下载链接。
                     */
                    std::string m_midiUrl;
                    bool m_midiUrlHasBeenSet;

                    /**
                     * 副歌片段信息。
                     */
                    std::vector<ChorusClip> m_chorusClipSet;
                    bool m_chorusClipSetHasBeenSet;

                    /**
                     * 前奏间隔。
                     */
                    int64_t m_preludeInterval;
                    bool m_preludeIntervalHasBeenSet;

                    /**
                     * 歌曲流派列表。
                     */
                    std::vector<std::string> m_genreSet;
                    bool m_genreSetHasBeenSet;

                    /**
                     * 节拍信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KTVBPMInfo m_bPMInfo;
                    bool m_bPMInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMUSICDETAILINFO_H_
