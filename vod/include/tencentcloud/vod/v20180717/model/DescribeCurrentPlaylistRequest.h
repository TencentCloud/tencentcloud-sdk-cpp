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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECURRENTPLAYLISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECURRENTPLAYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCurrentPlaylist请求参数结构体
                */
                class DescribeCurrentPlaylistRequest : public AbstractModel
                {
                public:
                    DescribeCurrentPlaylistRequest();
                    ~DescribeCurrentPlaylistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取轮播播单唯一标识。
                     * @return RoundPlayId 轮播播单唯一标识。
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置轮播播单唯一标识。
                     * @param _roundPlayId 轮播播单唯一标识。
                     * 
                     */
                    void SetRoundPlayId(const std::string& _roundPlayId);

                    /**
                     * 判断参数 RoundPlayId 是否已赋值
                     * @return RoundPlayId 是否已赋值
                     * 
                     */
                    bool RoundPlayIdHasBeenSet() const;

                    /**
                     * 获取返回的播放列表的长度。最大10，默认值为5。
                     * @return Limit 返回的播放列表的长度。最大10，默认值为5。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回的播放列表的长度。最大10，默认值为5。
                     * @param _limit 返回的播放列表的长度。最大10，默认值为5。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 轮播播单唯一标识。
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * 返回的播放列表的长度。最大10，默认值为5。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECURRENTPLAYLISTREQUEST_H_
