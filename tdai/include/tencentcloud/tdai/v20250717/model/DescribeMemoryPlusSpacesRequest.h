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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACESREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeMemoryPlusSpaces请求参数结构体
                */
                class DescribeMemoryPlusSpacesRequest : public AbstractModel
                {
                public:
                    DescribeMemoryPlusSpacesRequest();
                    ~DescribeMemoryPlusSpacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * @return Offset <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * @param _offset <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
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
                     * 获取<p>单次查询返回的记录数量上限（分页大小）。</p>
                     * @return Limit <p>单次查询返回的记录数量上限（分页大小）。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的记录数量上限（分页大小）。</p>
                     * @param _limit <p>单次查询返回的记录数量上限（分页大小）。</p>
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
                     * 获取<p>查询实例名称或者实例id</p>
                     * @return SearchKeys <p>查询实例名称或者实例id</p>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>查询实例名称或者实例id</p>
                     * @param _searchKeys <p>查询实例名称或者实例id</p>
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p><p>枚举值：</p><ul><li>1： 运行中</li><li>2： 创建中</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 隔离中</li><li>6： 已隔离（进入回收站）</li><li>7： 恢复中（从回收站恢复）</li></ul>
                     * @return Status <p>实例状态</p><p>枚举值：</p><ul><li>1： 运行中</li><li>2： 创建中</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 隔离中</li><li>6： 已隔离（进入回收站）</li><li>7： 恢复中（从回收站恢复）</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>实例状态</p><p>枚举值：</p><ul><li>1： 运行中</li><li>2： 创建中</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 隔离中</li><li>6： 已隔离（进入回收站）</li><li>7： 恢复中（从回收站恢复）</li></ul>
                     * @param _status <p>实例状态</p><p>枚举值：</p><ul><li>1： 运行中</li><li>2： 创建中</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 隔离中</li><li>6： 已隔离（进入回收站）</li><li>7： 恢复中（从回收站恢复）</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>资源标签</p>
                     * @return ResourceTags <p>资源标签</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _resourceTags <p>资源标签</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>排序字段</p>
                     * @return Orderby <p>排序字段</p>
                     * 
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _orderby <p>排序字段</p>
                     * 
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     * 
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取<p>排序方向</p><p>枚举值：</p><ul><li>ASC： 升序</li><li>DESC： 降序</li></ul>
                     * @return OrderDirection <p>排序方向</p><p>枚举值：</p><ul><li>ASC： 升序</li><li>DESC： 降序</li></ul>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>排序方向</p><p>枚举值：</p><ul><li>ASC： 升序</li><li>DESC： 降序</li></ul>
                     * @param _orderDirection <p>排序方向</p><p>枚举值：</p><ul><li>ASC： 升序</li><li>DESC： 降序</li></ul>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次查询返回的记录数量上限（分页大小）。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询实例名称或者实例id</p>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>实例状态</p><p>枚举值：</p><ul><li>1： 运行中</li><li>2： 创建中</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 隔离中</li><li>6： 已隔离（进入回收站）</li><li>7： 恢复中（从回收站恢复）</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * <p>排序方向</p><p>枚举值：</p><ul><li>ASC： 升序</li><li>DESC： 降序</li></ul>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACESREQUEST_H_
