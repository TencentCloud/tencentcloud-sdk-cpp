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
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置资源方音乐Id
                     * @param _musicId 资源方音乐Id
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
                     * 获取资源方识别信息
                     * @return AmeId 资源方识别信息
                     * 
                     */
                    std::string GetAmeId() const;

                    /**
                     * 设置资源方识别信息
                     * @param _ameId 资源方识别信息
                     * 
                     */
                    void SetAmeId(const std::string& _ameId);

                    /**
                     * 判断参数 AmeId 是否已赋值
                     * @return AmeId 是否已赋值
                     * 
                     */
                    bool AmeIdHasBeenSet() const;

                    /**
                     * 获取分类标签
                     * @return Tags 分类标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置分类标签
                     * @param _tags 分类标签
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
                     * 获取关键词
                     * @return HitWords 关键词
                     * 
                     */
                    std::vector<std::string> GetHitWords() const;

                    /**
                     * 设置关键词
                     * @param _hitWords 关键词
                     * 
                     */
                    void SetHitWords(const std::vector<std::string>& _hitWords);

                    /**
                     * 判断参数 HitWords 是否已赋值
                     * @return HitWords 是否已赋值
                     * 
                     */
                    bool HitWordsHasBeenSet() const;

                    /**
                     * 获取节奏信息
                     * @return Bpm 节奏信息
                     * 
                     */
                    int64_t GetBpm() const;

                    /**
                     * 设置节奏信息
                     * @param _bpm 节奏信息
                     * 
                     */
                    void SetBpm(const int64_t& _bpm);

                    /**
                     * 判断参数 Bpm 是否已赋值
                     * @return Bpm 是否已赋值
                     * 
                     */
                    bool BpmHasBeenSet() const;

                    /**
                     * 获取商业化权益
                     * @return Score 商业化权益
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置商业化权益
                     * @param _score 商业化权益
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取应用歌曲信息,1.图文/短视频,2.网络直播,3.网络电台FM,4.免费游戏,5.商业游戏,6.网店网站设计,7.广告营销,8.网络长视频
                     * @return Scene 应用歌曲信息,1.图文/短视频,2.网络直播,3.网络电台FM,4.免费游戏,5.商业游戏,6.网店网站设计,7.广告营销,8.网络长视频
                     * 
                     */
                    std::vector<std::string> GetScene() const;

                    /**
                     * 设置应用歌曲信息,1.图文/短视频,2.网络直播,3.网络电台FM,4.免费游戏,5.商业游戏,6.网店网站设计,7.广告营销,8.网络长视频
                     * @param _scene 应用歌曲信息,1.图文/短视频,2.网络直播,3.网络电台FM,4.免费游戏,5.商业游戏,6.网店网站设计,7.广告营销,8.网络长视频
                     * 
                     */
                    void SetScene(const std::vector<std::string>& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取应用地域,1. 中国大陆,2. 中国含港澳台,3. 全球
                     * @return Region 应用地域,1. 中国大陆,2. 中国含港澳台,3. 全球
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置应用地域,1. 中国大陆,2. 中国含港澳台,3. 全球
                     * @param _region 应用地域,1. 中国大陆,2. 中国含港澳台,3. 全球
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取授权时间,1. 1年, 5. 随片永久
                     * @return AuthPeriod 授权时间,1. 1年, 5. 随片永久
                     * 
                     */
                    std::string GetAuthPeriod() const;

                    /**
                     * 设置授权时间,1. 1年, 5. 随片永久
                     * @param _authPeriod 授权时间,1. 1年, 5. 随片永久
                     * 
                     */
                    void SetAuthPeriod(const std::string& _authPeriod);

                    /**
                     * 判断参数 AuthPeriod 是否已赋值
                     * @return AuthPeriod 是否已赋值
                     * 
                     */
                    bool AuthPeriodHasBeenSet() const;

                    /**
                     * 获取商业化授权，1. 支持商业化 ,2. 不支持商业化
                     * @return Commercialization 商业化授权，1. 支持商业化 ,2. 不支持商业化
                     * 
                     */
                    std::string GetCommercialization() const;

                    /**
                     * 设置商业化授权，1. 支持商业化 ,2. 不支持商业化
                     * @param _commercialization 商业化授权，1. 支持商业化 ,2. 不支持商业化
                     * 
                     */
                    void SetCommercialization(const std::string& _commercialization);

                    /**
                     * 判断参数 Commercialization 是否已赋值
                     * @return Commercialization 是否已赋值
                     * 
                     */
                    bool CommercializationHasBeenSet() const;

                    /**
                     * 获取跨平台传播，1. 支持跨平台传播 ,2. 不支持跨平台传播
                     * @return Platform 跨平台传播，1. 支持跨平台传播 ,2. 不支持跨平台传播
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置跨平台传播，1. 支持跨平台传播 ,2. 不支持跨平台传播
                     * @param _platform 跨平台传播，1. 支持跨平台传播 ,2. 不支持跨平台传播
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取传播渠道
                     * @return Channel 传播渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置传播渠道
                     * @param _channel 传播渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

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

                    /**
                     * 应用歌曲信息,1.图文/短视频,2.网络直播,3.网络电台FM,4.免费游戏,5.商业游戏,6.网店网站设计,7.广告营销,8.网络长视频
                     */
                    std::vector<std::string> m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 应用地域,1. 中国大陆,2. 中国含港澳台,3. 全球
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 授权时间,1. 1年, 5. 随片永久
                     */
                    std::string m_authPeriod;
                    bool m_authPeriodHasBeenSet;

                    /**
                     * 商业化授权，1. 支持商业化 ,2. 不支持商业化
                     */
                    std::string m_commercialization;
                    bool m_commercializationHasBeenSet;

                    /**
                     * 跨平台传播，1. 支持跨平台传播 ,2. 不支持跨平台传播
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 传播渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MUSICDETAILINFO_H_
