/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVPlaylistBaseInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVPlaylists返回参数结构体
                */
                class DescribeKTVPlaylistsResponse : public AbstractModel
                {
                public:
                    DescribeKTVPlaylistsResponse();
                    ~DescribeKTVPlaylistsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌单基础信息。
                     * @return PlaylistBaseInfoSet 歌单基础信息。
                     * 
                     */
                    std::vector<KTVPlaylistBaseInfo> GetPlaylistBaseInfoSet() const;

                    /**
                     * 判断参数 PlaylistBaseInfoSet 是否已赋值
                     * @return PlaylistBaseInfoSet 是否已赋值
                     * 
                     */
                    bool PlaylistBaseInfoSetHasBeenSet() const;

                    /**
                     * 获取歌单总数。
                     * @return TotalCount 歌单总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 歌单基础信息。
                     */
                    std::vector<KTVPlaylistBaseInfo> m_playlistBaseInfoSet;
                    bool m_playlistBaseInfoSetHasBeenSet;

                    /**
                     * 歌单总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSRESPONSE_H_
