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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_

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
                * SearchKTVMusics请求参数结构体
                */
                class SearchKTVMusicsRequest : public AbstractModel
                {
                public:
                    SearchKTVMusicsRequest();
                    ~SearchKTVMusicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键词
                     * @return KeyWord 搜索关键词
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyWord 搜索关键词
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000。
                     * @return Offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000。
                     * @param _offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000。
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
                     * 获取分页返回的起始偏移量，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @return Limit 分页返回的起始偏移量，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @param _limit 分页返回的起始偏移量，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序方式。默认按照匹配度排序
<li> Sort.Field 可选 CreateTime</li>
<li> Sort.Order 可选 Desc </li>
<li> 当 KeyWord 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * @return Sort 排序方式。默认按照匹配度排序
<li> Sort.Field 可选 CreateTime</li>
<li> Sort.Order 可选 Desc </li>
<li> 当 KeyWord 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。默认按照匹配度排序
<li> Sort.Field 可选 CreateTime</li>
<li> Sort.Order 可选 Desc </li>
<li> 当 KeyWord 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * @param _sort 排序方式。默认按照匹配度排序
<li> Sort.Field 可选 CreateTime</li>
<li> Sort.Order 可选 Desc </li>
<li> 当 KeyWord 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
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
                     * 获取标签 ID 集合，匹配集合指定所有 ID 。
<li>数组长度限制：10。</li>
                     * @return TagIds 标签 ID 集合，匹配集合指定所有 ID 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetTagIds() const;

                    /**
                     * 设置标签 ID 集合，匹配集合指定所有 ID 。
<li>数组长度限制：10。</li>
                     * @param _tagIds 标签 ID 集合，匹配集合指定所有 ID 。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetTagIds(const std::vector<std::string>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
取值范围：Offset + Limit 不超过5000。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：50。将返回第 Offset 到第 Offset+Limit-1 条。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式。默认按照匹配度排序
<li> Sort.Field 可选 CreateTime</li>
<li> Sort.Order 可选 Desc </li>
<li> 当 KeyWord 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 标签 ID 集合，匹配集合指定所有 ID 。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_
