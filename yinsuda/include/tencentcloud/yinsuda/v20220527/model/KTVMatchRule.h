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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHRULE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMatchRuleMusicInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 歌曲匹配规则。
                */
                class KTVMatchRule : public AbstractModel
                {
                public:
                    KTVMatchRule();
                    ~KTVMatchRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AME 曲库 Id。
                     * @return AMEMusicId AME 曲库 Id。
                     * 
                     */
                    std::string GetAMEMusicId() const;

                    /**
                     * 设置AME 曲库 Id。
                     * @param _aMEMusicId AME 曲库 Id。
                     * 
                     */
                    void SetAMEMusicId(const std::string& _aMEMusicId);

                    /**
                     * 判断参数 AMEMusicId 是否已赋值
                     * @return AMEMusicId 是否已赋值
                     * 
                     */
                    bool AMEMusicIdHasBeenSet() const;

                    /**
                     * 获取歌曲匹配信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MusicInfo 歌曲匹配信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KTVMatchRuleMusicInfo GetMusicInfo() const;

                    /**
                     * 设置歌曲匹配信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _musicInfo 歌曲匹配信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMusicInfo(const KTVMatchRuleMusicInfo& _musicInfo);

                    /**
                     * 判断参数 MusicInfo 是否已赋值
                     * @return MusicInfo 是否已赋值
                     * 
                     */
                    bool MusicInfoHasBeenSet() const;

                    /**
                     * 获取音速达歌曲 Id，用于匹配 AME 曲库歌曲。
                     * @return MusicIdToMatchAME 音速达歌曲 Id，用于匹配 AME 曲库歌曲。
                     * 
                     */
                    std::string GetMusicIdToMatchAME() const;

                    /**
                     * 设置音速达歌曲 Id，用于匹配 AME 曲库歌曲。
                     * @param _musicIdToMatchAME 音速达歌曲 Id，用于匹配 AME 曲库歌曲。
                     * 
                     */
                    void SetMusicIdToMatchAME(const std::string& _musicIdToMatchAME);

                    /**
                     * 判断参数 MusicIdToMatchAME 是否已赋值
                     * @return MusicIdToMatchAME 是否已赋值
                     * 
                     */
                    bool MusicIdToMatchAMEHasBeenSet() const;

                private:

                    /**
                     * AME 曲库 Id。
                     */
                    std::string m_aMEMusicId;
                    bool m_aMEMusicIdHasBeenSet;

                    /**
                     * 歌曲匹配信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KTVMatchRuleMusicInfo m_musicInfo;
                    bool m_musicInfoHasBeenSet;

                    /**
                     * 音速达歌曲 Id，用于匹配 AME 曲库歌曲。
                     */
                    std::string m_musicIdToMatchAME;
                    bool m_musicIdToMatchAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHRULE_H_
