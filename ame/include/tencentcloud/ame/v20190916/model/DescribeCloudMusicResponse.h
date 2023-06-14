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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICRESPONSE_H_

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
                * DescribeCloudMusic返回参数结构体
                */
                class DescribeCloudMusicResponse : public AbstractModel
                {
                public:
                    DescribeCloudMusicResponse();
                    ~DescribeCloudMusicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲Id
                     * @return MusicId 歌曲Id
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     * 
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取歌曲名称
                     * @return MusicName 歌曲名称
                     * 
                     */
                    std::string GetMusicName() const;

                    /**
                     * 判断参数 MusicName 是否已赋值
                     * @return MusicName 是否已赋值
                     * 
                     */
                    bool MusicNameHasBeenSet() const;

                    /**
                     * 获取歌曲时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 歌曲时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取歌曲链接
                     * @return MusicUrl 歌曲链接
                     * 
                     */
                    std::string GetMusicUrl() const;

                    /**
                     * 判断参数 MusicUrl 是否已赋值
                     * @return MusicUrl 是否已赋值
                     * 
                     */
                    bool MusicUrlHasBeenSet() const;

                    /**
                     * 获取歌曲图片
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MusicImageUrl 歌曲图片
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMusicImageUrl() const;

                    /**
                     * 判断参数 MusicImageUrl 是否已赋值
                     * @return MusicImageUrl 是否已赋值
                     * 
                     */
                    bool MusicImageUrlHasBeenSet() const;

                    /**
                     * 获取歌手列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Singers 歌手列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSingers() const;

                    /**
                     * 判断参数 Singers 是否已赋值
                     * @return Singers 是否已赋值
                     * 
                     */
                    bool SingersHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 歌曲名称
                     */
                    std::string m_musicName;
                    bool m_musicNameHasBeenSet;

                    /**
                     * 歌曲时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 歌曲链接
                     */
                    std::string m_musicUrl;
                    bool m_musicUrlHasBeenSet;

                    /**
                     * 歌曲图片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_musicImageUrl;
                    bool m_musicImageUrlHasBeenSet;

                    /**
                     * 歌手列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_singers;
                    bool m_singersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBECLOUDMUSICRESPONSE_H_
