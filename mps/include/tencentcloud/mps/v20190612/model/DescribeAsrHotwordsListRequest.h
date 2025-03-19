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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_

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
                * DescribeAsrHotwordsList请求参数结构体
                */
                class DescribeAsrHotwordsListRequest : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsListRequest();
                    ~DescribeAsrHotwordsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检索参数，根据热词库 id 查询
                     * @return HotwordsId 检索参数，根据热词库 id 查询
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置检索参数，根据热词库 id 查询
                     * @param _hotwordsId 检索参数，根据热词库 id 查询
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
                     * 获取检索参数，根据热词库名称查询
                     * @return Name 检索参数，根据热词库名称查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检索参数，根据热词库名称查询
                     * @param _name 检索参数，根据热词库名称查询
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
                     * 获取返回记录条数，默认返回所有热词库
                     * @return Limit 返回记录条数，默认返回所有热词库
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认返回所有热词库
                     * @param _limit 返回记录条数，默认返回所有热词库
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
                     * 获取热词排序顺序

0：升序（默认）
1：降序
                     * @return OrderType 热词排序顺序

0：升序（默认）
1：降序
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置热词排序顺序

0：升序（默认）
1：降序
                     * @param _orderType 热词排序顺序

0：升序（默认）
1：降序
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取根据某个字段排序，默认使用创建时间，使用非法字段视为默认情况

- CreateTime：创建时间排序
- UpdateTime：更新时间排序
- Name：热词库名称排序
- WordCount：热词数量排序
- HotwordsId：热词库 id 排序
                     * @return OrderBy 根据某个字段排序，默认使用创建时间，使用非法字段视为默认情况

- CreateTime：创建时间排序
- UpdateTime：更新时间排序
- Name：热词库名称排序
- WordCount：热词数量排序
- HotwordsId：热词库 id 排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置根据某个字段排序，默认使用创建时间，使用非法字段视为默认情况

- CreateTime：创建时间排序
- UpdateTime：更新时间排序
- Name：热词库名称排序
- WordCount：热词数量排序
- HotwordsId：热词库 id 排序
                     * @param _orderBy 根据某个字段排序，默认使用创建时间，使用非法字段视为默认情况

- CreateTime：创建时间排序
- UpdateTime：更新时间排序
- Name：热词库名称排序
- WordCount：热词数量排序
- HotwordsId：热词库 id 排序
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
                     * 获取0 临时热词 1 文件热词
                     * @return Types 0 临时热词 1 文件热词
                     * 
                     */
                    std::vector<uint64_t> GetTypes() const;

                    /**
                     * 设置0 临时热词 1 文件热词
                     * @param _types 0 临时热词 1 文件热词
                     * 
                     */
                    void SetTypes(const std::vector<uint64_t>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * 检索参数，根据热词库 id 查询
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * 检索参数，根据热词库名称查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认返回所有热词库
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 热词排序顺序

0：升序（默认）
1：降序
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 根据某个字段排序，默认使用创建时间，使用非法字段视为默认情况

- CreateTime：创建时间排序
- UpdateTime：更新时间排序
- Name：热词库名称排序
- WordCount：热词数量排序
- HotwordsId：热词库 id 排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 0 临时热词 1 文件热词
                     */
                    std::vector<uint64_t> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_
