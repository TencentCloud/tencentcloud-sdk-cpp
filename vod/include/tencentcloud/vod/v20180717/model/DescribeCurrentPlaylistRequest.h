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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
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
                     * 获取<p>轮播播单唯一标识。</p>
                     * @return RoundPlayId <p>轮播播单唯一标识。</p>
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置<p>轮播播单唯一标识。</p>
                     * @param _roundPlayId <p>轮播播单唯一标识。</p>
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
                     * 获取<p>返回的播放列表的长度。最大10，默认值为5。</p>
                     * @return Limit <p>返回的播放列表的长度。最大10，默认值为5。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回的播放列表的长度。最大10，默认值为5。</p>
                     * @param _limit <p>返回的播放列表的长度。最大10，默认值为5。</p>
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
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>轮播播单唯一标识。</p>
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * <p>返回的播放列表的长度。最大10，默认值为5。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECURRENTPLAYLISTREQUEST_H_
