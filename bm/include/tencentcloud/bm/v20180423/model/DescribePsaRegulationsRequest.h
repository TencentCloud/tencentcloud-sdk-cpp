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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/Tag.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribePsaRegulations请求参数结构体
                */
                class DescribePsaRegulationsRequest : public AbstractModel
                {
                public:
                    DescribePsaRegulationsRequest();
                    ~DescribePsaRegulationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量限制
                     * @return Limit 数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量限制
                     * @param _limit 数量限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取规则ID过滤，支持模糊查询
                     * @return PsaIds 规则ID过滤，支持模糊查询
                     * 
                     */
                    std::vector<std::string> GetPsaIds() const;

                    /**
                     * 设置规则ID过滤，支持模糊查询
                     * @param _psaIds 规则ID过滤，支持模糊查询
                     * 
                     */
                    void SetPsaIds(const std::vector<std::string>& _psaIds);

                    /**
                     * 判断参数 PsaIds 是否已赋值
                     * @return PsaIds 是否已赋值
                     * 
                     */
                    bool PsaIdsHasBeenSet() const;

                    /**
                     * 获取规则别名过滤，支持模糊查询
                     * @return PsaNames 规则别名过滤，支持模糊查询
                     * 
                     */
                    std::vector<std::string> GetPsaNames() const;

                    /**
                     * 设置规则别名过滤，支持模糊查询
                     * @param _psaNames 规则别名过滤，支持模糊查询
                     * 
                     */
                    void SetPsaNames(const std::vector<std::string>& _psaNames);

                    /**
                     * 判断参数 PsaNames 是否已赋值
                     * @return PsaNames 是否已赋值
                     * 
                     */
                    bool PsaNamesHasBeenSet() const;

                    /**
                     * 获取标签过滤
                     * @return Tags 标签过滤
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签过滤
                     * @param _tags 标签过滤
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取排序字段，取值支持：CreateTime
                     * @return OrderField 排序字段，取值支持：CreateTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，取值支持：CreateTime
                     * @param _orderField 排序字段，取值支持：CreateTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式 0:递增(默认) 1:递减
                     * @return Order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式 0:递增(默认) 1:递减
                     * @param _order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 规则ID过滤，支持模糊查询
                     */
                    std::vector<std::string> m_psaIds;
                    bool m_psaIdsHasBeenSet;

                    /**
                     * 规则别名过滤，支持模糊查询
                     */
                    std::vector<std::string> m_psaNames;
                    bool m_psaNamesHasBeenSet;

                    /**
                     * 标签过滤
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 排序字段，取值支持：CreateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式 0:递增(默认) 1:递减
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSREQUEST_H_
