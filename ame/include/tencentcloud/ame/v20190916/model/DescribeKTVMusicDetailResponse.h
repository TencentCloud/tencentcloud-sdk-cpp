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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVMUSICDETAILRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVMUSICDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicDefinitionInfo.h>
#include <tencentcloud/ame/v20190916/model/ChorusClip.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVMusicDetail返回参数结构体
                */
                class DescribeKTVMusicDetailResponse : public AbstractModel
                {
                public:
                    DescribeKTVMusicDetailResponse();
                    ~DescribeKTVMusicDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲基础信息
                     * @return KTVMusicBaseInfo 歌曲基础信息
                     * 
                     */
                    KTVMusicBaseInfo GetKTVMusicBaseInfo() const;

                    /**
                     * 判断参数 KTVMusicBaseInfo 是否已赋值
                     * @return KTVMusicBaseInfo 是否已赋值
                     * 
                     */
                    bool KTVMusicBaseInfoHasBeenSet() const;

                    /**
                     * 获取播放凭证
                     * @return PlayToken 播放凭证
                     * 
                     */
                    std::string GetPlayToken() const;

                    /**
                     * 判断参数 PlayToken 是否已赋值
                     * @return PlayToken 是否已赋值
                     * 
                     */
                    bool PlayTokenHasBeenSet() const;

                    /**
                     * 获取歌词下载地址
                     * @return LyricsUrl 歌词下载地址
                     * 
                     */
                    std::string GetLyricsUrl() const;

                    /**
                     * 判断参数 LyricsUrl 是否已赋值
                     * @return LyricsUrl 是否已赋值
                     * 
                     */
                    bool LyricsUrlHasBeenSet() const;

                    /**
                     * 获取歌曲规格信息列表
                     * @return DefinitionInfoSet 歌曲规格信息列表
                     * 
                     */
                    std::vector<KTVMusicDefinitionInfo> GetDefinitionInfoSet() const;

                    /**
                     * 判断参数 DefinitionInfoSet 是否已赋值
                     * @return DefinitionInfoSet 是否已赋值
                     * 
                     */
                    bool DefinitionInfoSetHasBeenSet() const;

                    /**
                     * 获取音高数据文件下载地址
                     * @return MidiJsonUrl 音高数据文件下载地址
                     * 
                     */
                    std::string GetMidiJsonUrl() const;

                    /**
                     * 判断参数 MidiJsonUrl 是否已赋值
                     * @return MidiJsonUrl 是否已赋值
                     * 
                     */
                    bool MidiJsonUrlHasBeenSet() const;

                    /**
                     * 获取副歌片段数据列表
                     * @return ChorusClipSet 副歌片段数据列表
                     * 
                     */
                    std::vector<ChorusClip> GetChorusClipSet() const;

                    /**
                     * 判断参数 ChorusClipSet 是否已赋值
                     * @return ChorusClipSet 是否已赋值
                     * 
                     */
                    bool ChorusClipSetHasBeenSet() const;

                    /**
                     * 获取前奏间隔，单位：毫秒；注：若参数返回为0则无人声部分
                     * @return PreludeInterval 前奏间隔，单位：毫秒；注：若参数返回为0则无人声部分
                     * 
                     */
                    int64_t GetPreludeInterval() const;

                    /**
                     * 判断参数 PreludeInterval 是否已赋值
                     * @return PreludeInterval 是否已赋值
                     * 
                     */
                    bool PreludeIntervalHasBeenSet() const;

                private:

                    /**
                     * 歌曲基础信息
                     */
                    KTVMusicBaseInfo m_kTVMusicBaseInfo;
                    bool m_kTVMusicBaseInfoHasBeenSet;

                    /**
                     * 播放凭证
                     */
                    std::string m_playToken;
                    bool m_playTokenHasBeenSet;

                    /**
                     * 歌词下载地址
                     */
                    std::string m_lyricsUrl;
                    bool m_lyricsUrlHasBeenSet;

                    /**
                     * 歌曲规格信息列表
                     */
                    std::vector<KTVMusicDefinitionInfo> m_definitionInfoSet;
                    bool m_definitionInfoSetHasBeenSet;

                    /**
                     * 音高数据文件下载地址
                     */
                    std::string m_midiJsonUrl;
                    bool m_midiJsonUrlHasBeenSet;

                    /**
                     * 副歌片段数据列表
                     */
                    std::vector<ChorusClip> m_chorusClipSet;
                    bool m_chorusClipSetHasBeenSet;

                    /**
                     * 前奏间隔，单位：毫秒；注：若参数返回为0则无人声部分
                     */
                    int64_t m_preludeInterval;
                    bool m_preludeIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVMUSICDETAILRESPONSE_H_
