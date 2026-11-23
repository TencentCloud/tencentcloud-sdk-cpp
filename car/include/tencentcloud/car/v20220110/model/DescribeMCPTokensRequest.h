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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/Filter.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeMCPTokens请求参数结构体
                */
                class DescribeMCPTokensRequest : public AbstractModel
                {
                public:
                    DescribeMCPTokensRequest();
                    ~DescribeMCPTokensRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>单页数量</p><p>取值范围：[0, 200]</p><p>默认值：20</p><p>如果传入 0 会使用默认值</p>
                     * @return Limit <p>单页数量</p><p>取值范围：[0, 200]</p><p>默认值：20</p><p>如果传入 0 会使用默认值</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页数量</p><p>取值范围：[0, 200]</p><p>默认值：20</p><p>如果传入 0 会使用默认值</p>
                     * @param _limit <p>单页数量</p><p>取值范围：[0, 200]</p><p>默认值：20</p><p>如果传入 0 会使用默认值</p>
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
                     * 获取<p>过滤器列表</p><p>只支持 TokenId 和 TokenName 过滤，Filters 数量不能超过 10、每个 Filter 的 Values 个数不能超过 20、单个 Value 长度不能超过 64 个字符、不允许同名 Filter 出现</p>
                     * @return Filters <p>过滤器列表</p><p>只支持 TokenId 和 TokenName 过滤，Filters 数量不能超过 10、每个 Filter 的 Values 个数不能超过 20、单个 Value 长度不能超过 64 个字符、不允许同名 Filter 出现</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器列表</p><p>只支持 TokenId 和 TokenName 过滤，Filters 数量不能超过 10、每个 Filter 的 Values 个数不能超过 20、单个 Value 长度不能超过 64 个字符、不允许同名 Filter 出现</p>
                     * @param _filters <p>过滤器列表</p><p>只支持 TokenId 和 TokenName 过滤，Filters 数量不能超过 10、每个 Filter 的 Values 个数不能超过 20、单个 Value 长度不能超过 64 个字符、不允许同名 Filter 出现</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单页数量</p><p>取值范围：[0, 200]</p><p>默认值：20</p><p>如果传入 0 会使用默认值</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤器列表</p><p>只支持 TokenId 和 TokenName 过滤，Filters 数量不能超过 10、每个 Filter 的 Values 个数不能超过 20、单个 Value 长度不能超过 64 个字符、不允许同名 Filter 出现</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_
