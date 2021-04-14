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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_MUSICDETAILINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_MUSICDETAILINFO_H_

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
                * 歌曲变更细节
                */
                class MusicDetailInfo : public AbstractModel
                {
                public:
                    MusicDetailInfo();
                    ~MusicDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源方音乐Id
                     * @return MusicId 资源方音乐Id
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置资源方音乐Id
                     * @param MusicId 资源方音乐Id
                     */
                    void SetMusicId(const std::string& _musicId);

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取资源方识别信息
                     * @return AmeId 资源方识别信息
                     */
                    std::string GetAmeId() const;

                    /**
                     * 设置资源方识别信息
                     * @param AmeId 资源方识别信息
                     */
                    void SetAmeId(const std::string& _ameId);

                    /**
                     * 判断参数 AmeId 是否已赋值
                     * @return AmeId 是否已赋值
                     */
                    bool AmeIdHasBeenSet() const;

                    /**
                     * 获取分类标签
                     * @return Tags 分类标签
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置分类标签
                     * @param Tags 分类标签
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取关键词
                     * @return HitWords 关键词
                     */
                    std::vector<std::string> GetHitWords() const;

                    /**
                     * 设置关键词
                     * @param HitWords 关键词
                     */
                    void SetHitWords(const std::vector<std::string>& _hitWords);

                    /**
                     * 判断参数 HitWords 是否已赋值
                     * @return HitWords 是否已赋值
                     */
                    bool HitWordsHasBeenSet() const;

                    /**
                     * 获取节奏信息
                     * @return Bpm 节奏信息
                     */
                    int64_t GetBpm() const;

                    /**
                     * 设置节奏信息
                     * @param Bpm 节奏信息
                     */
                    void SetBpm(const int64_t& _bpm);

                    /**
                     * 判断参数 Bpm 是否已赋值
                     * @return Bpm 是否已赋值
                     */
                    bool BpmHasBeenSet() const;

                    /**
                     * 获取商业化权益
                     * @return Score 商业化权益
                     */
                    double GetScore() const;

                    /**
                     * 设置商业化权益
                     * @param Score 商业化权益
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 资源方音乐Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 资源方识别信息
                     */
                    std::string m_ameId;
                    bool m_ameIdHasBeenSet;

                    /**
                     * 分类标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::vector<std::string> m_hitWords;
                    bool m_hitWordsHasBeenSet;

                    /**
                     * 节奏信息
                     */
                    int64_t m_bpm;
                    bool m_bpmHasBeenSet;

                    /**
                     * 商业化权益
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MUSICDETAILINFO_H_
