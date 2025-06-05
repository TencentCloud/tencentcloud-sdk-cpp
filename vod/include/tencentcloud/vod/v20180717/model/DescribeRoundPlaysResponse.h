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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeRoundPlays返回参数结构体
                */
                class DescribeRoundPlaysResponse : public AbstractModel
                {
                public:
                    DescribeRoundPlaysResponse();
                    ~DescribeRoundPlaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的轮播播单总数。已经废弃，分批次查询请请使用 ScrollToken 参数。
                     * @return TotalCount 符合过滤条件的轮播播单总数。已经废弃，分批次查询请请使用 ScrollToken 参数。
                     * @deprecated
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * @deprecated
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取轮播播单详情列表。
                     * @return RoundPlaySet 轮播播单详情列表。
                     * 
                     */
                    std::vector<RoundPlayInfo> GetRoundPlaySet() const;

                    /**
                     * 判断参数 RoundPlaySet 是否已赋值
                     * @return RoundPlaySet 是否已赋值
                     * 
                     */
                    bool RoundPlaySetHasBeenSet() const;

                    /**
                     * 获取翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空，说明已无更多数据。
                     * @return ScrollToken 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空，说明已无更多数据。
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的轮播播单总数。已经废弃，分批次查询请请使用 ScrollToken 参数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 轮播播单详情列表。
                     */
                    std::vector<RoundPlayInfo> m_roundPlaySet;
                    bool m_roundPlaySetHasBeenSet;

                    /**
                     * 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空，说明已无更多数据。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_
