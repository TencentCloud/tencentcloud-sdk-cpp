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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_

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
                * DescribeKTVPlaylists请求参数结构体
                */
                class DescribeKTVPlaylistsRequest : public AbstractModel
                {
                public:
                    DescribeKTVPlaylistsRequest();
                    ~DescribeKTVPlaylistsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌单类型，取值有：
·OfficialRec：官方推荐
·Normal：自定义
当该字段未填时，默认为取OfficialRec
                     * @return Type 歌单类型，取值有：
·OfficialRec：官方推荐
·Normal：自定义
当该字段未填时，默认为取OfficialRec
                     */
                    std::string GetType() const;

                    /**
                     * 设置歌单类型，取值有：
·OfficialRec：官方推荐
·Normal：自定义
当该字段未填时，默认为取OfficialRec
                     * @param Type 歌单类型，取值有：
·OfficialRec：官方推荐
·Normal：自定义
当该字段未填时，默认为取OfficialRec
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     * @return Offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     * @param Offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     * @return Limit 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     * @param Limit 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 歌单类型，取值有：
·OfficialRec：官方推荐
·Normal：自定义
当该字段未填时，默认为取OfficialRec
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_
