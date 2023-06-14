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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVPLAYLISTBASEINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVPLAYLISTBASEINFO_H_

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
                * 推荐歌单基础信息
                */
                class KTVPlaylistBaseInfo : public AbstractModel
                {
                public:
                    KTVPlaylistBaseInfo();
                    ~KTVPlaylistBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌单Id
                     * @return PlaylistId 歌单Id
                     * 
                     */
                    std::string GetPlaylistId() const;

                    /**
                     * 设置歌单Id
                     * @param _playlistId 歌单Id
                     * 
                     */
                    void SetPlaylistId(const std::string& _playlistId);

                    /**
                     * 判断参数 PlaylistId 是否已赋值
                     * @return PlaylistId 是否已赋值
                     * 
                     */
                    bool PlaylistIdHasBeenSet() const;

                    /**
                     * 获取歌单标题
                     * @return Title 歌单标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置歌单标题
                     * @param _title 歌单标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取歌单介绍
                     * @return Description 歌单介绍
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置歌单介绍
                     * @param _description 歌单介绍
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取歌曲数量
                     * @return MusicNum 歌曲数量
                     * 
                     */
                    int64_t GetMusicNum() const;

                    /**
                     * 设置歌曲数量
                     * @param _musicNum 歌曲数量
                     * 
                     */
                    void SetMusicNum(const int64_t& _musicNum);

                    /**
                     * 判断参数 MusicNum 是否已赋值
                     * @return MusicNum 是否已赋值
                     * 
                     */
                    bool MusicNumHasBeenSet() const;

                private:

                    /**
                     * 歌单Id
                     */
                    std::string m_playlistId;
                    bool m_playlistIdHasBeenSet;

                    /**
                     * 歌单标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 歌单介绍
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 歌曲数量
                     */
                    int64_t m_musicNum;
                    bool m_musicNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVPLAYLISTBASEINFO_H_
