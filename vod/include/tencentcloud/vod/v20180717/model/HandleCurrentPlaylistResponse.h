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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayListItemInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * HandleCurrentPlaylist返回参数结构体
                */
                class HandleCurrentPlaylistResponse : public AbstractModel
                {
                public:
                    HandleCurrentPlaylistResponse();
                    ~HandleCurrentPlaylistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作成功的节目列表。
                     * @return RoundPlaylist 操作成功的节目列表。
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     * 
                     */
                    bool RoundPlaylistHasBeenSet() const;

                private:

                    /**
                     * 操作成功的节目列表。
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTRESPONSE_H_
