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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTDETAILRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h>
#include <tencentcloud/ame/v20190916/model/KTVPlaylistBaseInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVPlaylistDetail返回参数结构体
                */
                class DescribeKTVPlaylistDetailResponse : public AbstractModel
                {
                public:
                    DescribeKTVPlaylistDetailResponse();
                    ~DescribeKTVPlaylistDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲基础信息列表
                     * @return KTVMusicInfoSet 歌曲基础信息列表
                     * 
                     */
                    std::vector<KTVMusicBaseInfo> GetKTVMusicInfoSet() const;

                    /**
                     * 判断参数 KTVMusicInfoSet 是否已赋值
                     * @return KTVMusicInfoSet 是否已赋值
                     * 
                     */
                    bool KTVMusicInfoSetHasBeenSet() const;

                    /**
                     * 获取歌单基础信息
                     * @return PlaylistBaseInfo 歌单基础信息
                     * 
                     */
                    KTVPlaylistBaseInfo GetPlaylistBaseInfo() const;

                    /**
                     * 判断参数 PlaylistBaseInfo 是否已赋值
                     * @return PlaylistBaseInfo 是否已赋值
                     * 
                     */
                    bool PlaylistBaseInfoHasBeenSet() const;

                private:

                    /**
                     * 歌曲基础信息列表
                     */
                    std::vector<KTVMusicBaseInfo> m_kTVMusicInfoSet;
                    bool m_kTVMusicInfoSetHasBeenSet;

                    /**
                     * 歌单基础信息
                     */
                    KTVPlaylistBaseInfo m_playlistBaseInfo;
                    bool m_playlistBaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTDETAILRESPONSE_H_
