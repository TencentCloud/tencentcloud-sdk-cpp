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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Filter.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeInstancesDetail请求参数结构体
                */
                class DescribeInstancesDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstancesDetailRequest();
                    ~DescribeInstancesDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>（过滤条件）按照实例ID过滤</p>
                     * @return InstanceId <p>（过滤条件）按照实例ID过滤</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>（过滤条件）按照实例ID过滤</p>
                     * @param _instanceId <p>（过滤条件）按照实例ID过滤</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>（过滤条件）按照实例名,实例Id,可用区,私有网络id,子网id 过滤，支持模糊查询</p>
                     * @return SearchWord <p>（过滤条件）按照实例名,实例Id,可用区,私有网络id,子网id 过滤，支持模糊查询</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>（过滤条件）按照实例名,实例Id,可用区,私有网络id,子网id 过滤，支持模糊查询</p>
                     * @param _searchWord <p>（过滤条件）按照实例名,实例Id,可用区,私有网络id,子网id 过滤，支持模糊查询</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * @return Status <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * @param _status <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
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
                     * 获取<p>偏移量，不填默认为0。</p>
                     * @return Offset <p>偏移量，不填默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，不填默认为0。</p>
                     * @param _offset <p>偏移量，不填默认为0。</p>
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
                     * 获取<p>返回数量，不填则默认10，最大值20。</p>
                     * @return Limit <p>返回数量，不填则默认10，最大值20。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，不填则默认10，最大值20。</p>
                     * @param _limit <p>返回数量，不填则默认10，最大值20。</p>
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
                     * 获取<p>匹配标签key值。</p>
                     * @return TagKey <p>匹配标签key值。</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>匹配标签key值。</p>
                     * @param _tagKey <p>匹配标签key值。</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>过滤器。filter.Name 支持(&#39;Ip&#39;, &#39;VpcId&#39;, &#39;SubNetId&#39;, &#39;InstanceType&#39;,&#39;InstanceId&#39;) ,filter.Values最多传递10个值.</p>
                     * @return Filters <p>过滤器。filter.Name 支持(&#39;Ip&#39;, &#39;VpcId&#39;, &#39;SubNetId&#39;, &#39;InstanceType&#39;,&#39;InstanceId&#39;) ,filter.Values最多传递10个值.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器。filter.Name 支持(&#39;Ip&#39;, &#39;VpcId&#39;, &#39;SubNetId&#39;, &#39;InstanceType&#39;,&#39;InstanceId&#39;) ,filter.Values最多传递10个值.</p>
                     * @param _filters <p>过滤器。filter.Name 支持(&#39;Ip&#39;, &#39;VpcId&#39;, &#39;SubNetId&#39;, &#39;InstanceType&#39;,&#39;InstanceId&#39;) ,filter.Values最多传递10个值.</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>已经废弃， 使用InstanceIdList</p>
                     * @return InstanceIds <p>已经废弃， 使用InstanceIdList</p>
                     * @deprecated
                     */
                    std::string GetInstanceIds() const;

                    /**
                     * 设置<p>已经废弃， 使用InstanceIdList</p>
                     * @param _instanceIds <p>已经废弃， 使用InstanceIdList</p>
                     * @deprecated
                     */
                    void SetInstanceIds(const std::string& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>按照实例ID过滤</p>
                     * @return InstanceIdList <p>按照实例ID过滤</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置<p>按照实例ID过滤</p>
                     * @param _instanceIdList <p>按照实例ID过滤</p>
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取<p>根据标签列表过滤实例（取交集）</p>
                     * @return TagList <p>根据标签列表过滤实例（取交集）</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>根据标签列表过滤实例（取交集）</p>
                     * @param _tagList <p>根据标签列表过滤实例（取交集）</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>（过滤条件）按照实例ID过滤</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>（过滤条件）按照实例名,实例Id,可用区,私有网络id,子网id 过滤，支持模糊查询</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>偏移量，不填默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，不填则默认10，最大值20。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>匹配标签key值。</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>过滤器。filter.Name 支持(&#39;Ip&#39;, &#39;VpcId&#39;, &#39;SubNetId&#39;, &#39;InstanceType&#39;,&#39;InstanceId&#39;) ,filter.Values最多传递10个值.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>已经废弃， 使用InstanceIdList</p>
                     */
                    std::string m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>按照实例ID过滤</p>
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * <p>根据标签列表过滤实例（取交集）</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_
