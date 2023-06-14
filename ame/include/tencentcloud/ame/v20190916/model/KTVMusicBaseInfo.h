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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICBASEINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVSingerBaseInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * KTV 曲目基础信息
                */
                class KTVMusicBaseInfo : public AbstractModel
                {
                public:
                    KTVMusicBaseInfo();
                    ~KTVMusicBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲 Id
                     * @return MusicId 歌曲 Id
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲 Id
                     * @param _musicId 歌曲 Id
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
                     * 获取歌曲名称
                     * @return Name 歌曲名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置歌曲名称
                     * @param _name 歌曲名称
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
                     * 获取演唱者基础信息列表
                     * @return SingerInfoSet 演唱者基础信息列表
                     * 
                     */
                    std::vector<KTVSingerBaseInfo> GetSingerInfoSet() const;

                    /**
                     * 设置演唱者基础信息列表
                     * @param _singerInfoSet 演唱者基础信息列表
                     * 
                     */
                    void SetSingerInfoSet(const std::vector<KTVSingerBaseInfo>& _singerInfoSet);

                    /**
                     * 判断参数 SingerInfoSet 是否已赋值
                     * @return SingerInfoSet 是否已赋值
                     * 
                     */
                    bool SingerInfoSetHasBeenSet() const;

                    /**
                     * 获取已弃用，请使用SingerInfoSet
                     * @return SingerSet 已弃用，请使用SingerInfoSet
                     * 
                     */
                    std::vector<std::string> GetSingerSet() const;

                    /**
                     * 设置已弃用，请使用SingerInfoSet
                     * @param _singerSet 已弃用，请使用SingerInfoSet
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
                     * 获取作词者列表
                     * @return LyricistSet 作词者列表
                     * 
                     */
                    std::vector<std::string> GetLyricistSet() const;

                    /**
                     * 设置作词者列表
                     * @param _lyricistSet 作词者列表
                     * 
                     */
                    void SetLyricistSet(const std::vector<std::string>& _lyricistSet);

                    /**
                     * 判断参数 LyricistSet 是否已赋值
                     * @return LyricistSet 是否已赋值
                     * 
                     */
                    bool LyricistSetHasBeenSet() const;

                    /**
                     * 获取作曲者列表
                     * @return ComposerSet 作曲者列表
                     * 
                     */
                    std::vector<std::string> GetComposerSet() const;

                    /**
                     * 设置作曲者列表
                     * @param _composerSet 作曲者列表
                     * 
                     */
                    void SetComposerSet(const std::vector<std::string>& _composerSet);

                    /**
                     * 判断参数 ComposerSet 是否已赋值
                     * @return ComposerSet 是否已赋值
                     * 
                     */
                    bool ComposerSetHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagSet 标签列表
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param _tagSet 标签列表
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取歌曲时长
                     * @return Duration 歌曲时长
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置歌曲时长
                     * @param _duration 歌曲时长
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 歌曲 Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 歌曲名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 演唱者基础信息列表
                     */
                    std::vector<KTVSingerBaseInfo> m_singerInfoSet;
                    bool m_singerInfoSetHasBeenSet;

                    /**
                     * 已弃用，请使用SingerInfoSet
                     */
                    std::vector<std::string> m_singerSet;
                    bool m_singerSetHasBeenSet;

                    /**
                     * 作词者列表
                     */
                    std::vector<std::string> m_lyricistSet;
                    bool m_lyricistSetHasBeenSet;

                    /**
                     * 作曲者列表
                     */
                    std::vector<std::string> m_composerSet;
                    bool m_composerSetHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 歌曲时长
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICBASEINFO_H_
