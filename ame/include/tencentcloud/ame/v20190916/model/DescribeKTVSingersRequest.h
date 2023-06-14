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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/SortBy.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVSingers请求参数结构体
                */
                class DescribeKTVSingersRequest : public AbstractModel
                {
                public:
                    DescribeKTVSingersRequest();
                    ~DescribeKTVSingersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌手id集合，精确匹配歌手id
<li> 数组长度限制10</li>
                     * @return SingerIds 歌手id集合，精确匹配歌手id
<li> 数组长度限制10</li>
                     * 
                     */
                    std::vector<std::string> GetSingerIds() const;

                    /**
                     * 设置歌手id集合，精确匹配歌手id
<li> 数组长度限制10</li>
                     * @param _singerIds 歌手id集合，精确匹配歌手id
<li> 数组长度限制10</li>
                     * 
                     */
                    void SetSingerIds(const std::vector<std::string>& _singerIds);

                    /**
                     * 判断参数 SingerIds 是否已赋值
                     * @return SingerIds 是否已赋值
                     * 
                     */
                    bool SingerIdsHasBeenSet() const;

                    /**
                     * 获取歌手性别集合，不传为全部，精确匹配歌手性别类型，
<li>数组长度限制1</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回性别分类信息列表中，分类英文名</li>
                     * @return Genders 歌手性别集合，不传为全部，精确匹配歌手性别类型，
<li>数组长度限制1</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回性别分类信息列表中，分类英文名</li>
                     * 
                     */
                    std::vector<std::string> GetGenders() const;

                    /**
                     * 设置歌手性别集合，不传为全部，精确匹配歌手性别类型，
<li>数组长度限制1</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回性别分类信息列表中，分类英文名</li>
                     * @param _genders 歌手性别集合，不传为全部，精确匹配歌手性别类型，
<li>数组长度限制1</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回性别分类信息列表中，分类英文名</li>
                     * 
                     */
                    void SetGenders(const std::vector<std::string>& _genders);

                    /**
                     * 判断参数 Genders 是否已赋值
                     * @return Genders 是否已赋值
                     * 
                     */
                    bool GendersHasBeenSet() const;

                    /**
                     * 获取歌手区域集合，不传为全部，精确匹配歌手区域
<li>数组长度限制10</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回的区域分类信息列表中，分类英文名</li>
                     * @return Areas 歌手区域集合，不传为全部，精确匹配歌手区域
<li>数组长度限制10</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回的区域分类信息列表中，分类英文名</li>
                     * 
                     */
                    std::vector<std::string> GetAreas() const;

                    /**
                     * 设置歌手区域集合，不传为全部，精确匹配歌手区域
<li>数组长度限制10</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回的区域分类信息列表中，分类英文名</li>
                     * @param _areas 歌手区域集合，不传为全部，精确匹配歌手区域
<li>数组长度限制10</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回的区域分类信息列表中，分类英文名</li>
                     * 
                     */
                    void SetAreas(const std::vector<std::string>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                    /**
                     * 获取排序方式。默认按照播放数倒序
<li> Sort.Field 可选 PlayCount。</li>
                     * @return Sort 排序方式。默认按照播放数倒序
<li> Sort.Field 可选 PlayCount。</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。默认按照播放数倒序
<li> Sort.Field 可选 PlayCount。</li>
                     * @param _sort 排序方式。默认按照播放数倒序
<li> Sort.Field 可选 PlayCount。</li>
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @return Limit 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @param _limit 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
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
                     * 歌手id集合，精确匹配歌手id
<li> 数组长度限制10</li>
                     */
                    std::vector<std::string> m_singerIds;
                    bool m_singerIdsHasBeenSet;

                    /**
                     * 歌手性别集合，不传为全部，精确匹配歌手性别类型，
<li>数组长度限制1</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回性别分类信息列表中，分类英文名</li>
                     */
                    std::vector<std::string> m_genders;
                    bool m_gendersHasBeenSet;

                    /**
                     * 歌手区域集合，不传为全部，精确匹配歌手区域
<li>数组长度限制10</li>
<li>取值范围：直播互动曲库歌手分类信息接口，返回的区域分类信息列表中，分类英文名</li>
                     */
                    std::vector<std::string> m_areas;
                    bool m_areasHasBeenSet;

                    /**
                     * 排序方式。默认按照播放数倒序
<li> Sort.Field 可选 PlayCount。</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSREQUEST_H_
