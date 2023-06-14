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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCloudMusic请求参数结构体
                */
                class DescribeCloudMusicRequest : public AbstractModel
                {
                public:
                    DescribeCloudMusicRequest();
                    ~DescribeCloudMusicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲Id
                     * @return MusicId 歌曲Id
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲Id
                     * @param _musicId 歌曲Id
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
                     * 获取歌曲类型，可选值有：
<li>MP3-128K-FTW：含有水印的试听资源；</li>
<li>MP3-320K-FTD-P：320kbps歌曲热门片段；</li>
<li>MP3-320K-FTD：320kbps已核验歌曲完整资源。</li>
默认为：MP3-128K-FTW
                     * @return MusicType 歌曲类型，可选值有：
<li>MP3-128K-FTW：含有水印的试听资源；</li>
<li>MP3-320K-FTD-P：320kbps歌曲热门片段；</li>
<li>MP3-320K-FTD：320kbps已核验歌曲完整资源。</li>
默认为：MP3-128K-FTW
                     * 
                     */
                    std::string GetMusicType() const;

                    /**
                     * 设置歌曲类型，可选值有：
<li>MP3-128K-FTW：含有水印的试听资源；</li>
<li>MP3-320K-FTD-P：320kbps歌曲热门片段；</li>
<li>MP3-320K-FTD：320kbps已核验歌曲完整资源。</li>
默认为：MP3-128K-FTW
                     * @param _musicType 歌曲类型，可选值有：
<li>MP3-128K-FTW：含有水印的试听资源；</li>
<li>MP3-320K-FTD-P：320kbps歌曲热门片段；</li>
<li>MP3-320K-FTD：320kbps已核验歌曲完整资源。</li>
默认为：MP3-128K-FTW
                     * 
                     */
                    void SetMusicType(const std::string& _musicType);

                    /**
                     * 判断参数 MusicType 是否已赋值
                     * @return MusicType 是否已赋值
                     * 
                     */
                    bool MusicTypeHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 歌曲类型，可选值有：
<li>MP3-128K-FTW：含有水印的试听资源；</li>
<li>MP3-320K-FTD-P：320kbps歌曲热门片段；</li>
<li>MP3-320K-FTD：320kbps已核验歌曲完整资源。</li>
默认为：MP3-128K-FTW
                     */
                    std::string m_musicType;
                    bool m_musicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICREQUEST_H_
