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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAsrHotwords请求参数结构体
                */
                class DescribeAsrHotwordsRequest : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsRequest();
                    ~DescribeAsrHotwordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的热词库 id
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * @return HotwordsId 需要查询的热词库 id
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置需要查询的热词库 id
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * @param _hotwordsId 需要查询的热词库 id
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * 
                     */
                    void SetHotwordsId(const std::string& _hotwordsId);

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取热词库名称，
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * @return Name 热词库名称，
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置热词库名称，
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * @param _name 热词库名称，
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。

                     * @return Offset 分页偏移量，默认值：0。

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。

                     * @param _offset 分页偏移量，默认值：0。

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
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
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
                     * 获取热词排序字段，目前可选值为

- Default：默认文件中的顺序
- Weight：权重排序
- Lexical：热词文本排序
                     * @return OrderBy 热词排序字段，目前可选值为

- Default：默认文件中的顺序
- Weight：权重排序
- Lexical：热词文本排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置热词排序字段，目前可选值为

- Default：默认文件中的顺序
- Weight：权重排序
- Lexical：热词文本排序
                     * @param _orderBy 热词排序字段，目前可选值为

- Default：默认文件中的顺序
- Weight：权重排序
- Lexical：热词文本排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取热词排序顺序 0：升序（默认） 1：降序
                     * @return OrderType 热词排序顺序 0：升序（默认） 1：降序
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置热词排序顺序 0：升序（默认） 1：降序
                     * @param _orderType 热词排序顺序 0：升序（默认） 1：降序
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 需要查询的热词库 id
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * 热词库名称，
**注意：HotwordsId 与 Name 必须选择填写一个，如果同时填写，HotwordsId 优先级高于 Name**
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 热词排序字段，目前可选值为

- Default：默认文件中的顺序
- Weight：权重排序
- Lexical：热词文本排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 热词排序顺序 0：升序（默认） 1：降序
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_
