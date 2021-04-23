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
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲Id
                     * @param MusicId 歌曲Id
                     */
                    void SetMusicId(const std::string& _musicId);

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * @return MusicType MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     */
                    std::string GetMusicType() const;

                    /**
                     * 设置MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * @param MusicType MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     */
                    void SetMusicType(const std::string& _musicType);

                    /**
                     * 判断参数 MusicType 是否已赋值
                     * @return MusicType 是否已赋值
                     */
                    bool MusicTypeHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     */
                    std::string m_musicType;
                    bool m_musicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICREQUEST_H_
