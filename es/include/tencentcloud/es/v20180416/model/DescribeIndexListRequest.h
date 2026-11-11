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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeIndexList请求参数结构体
                */
                class DescribeIndexListRequest : public AbstractModel
                {
                public:
                    DescribeIndexListRequest();
                    ~DescribeIndexListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>索引类型。auto：自治索引；normal：普通索引</p>
                     * @return IndexType <p>索引类型。auto：自治索引；normal：普通索引</p>
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置<p>索引类型。auto：自治索引；normal：普通索引</p>
                     * @param _indexType <p>索引类型。auto：自治索引；normal：普通索引</p>
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取<p>ES集群ID</p>
                     * @return InstanceId <p>ES集群ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES集群ID</p>
                     * @param _instanceId <p>ES集群ID</p>
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
                     * 获取<p>索引名，若填空则获取所有索引</p>
                     * @return IndexName <p>索引名，若填空则获取所有索引</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>索引名，若填空则获取所有索引</p>
                     * @param _indexName <p>索引名，若填空则获取所有索引</p>
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>集群访问用户名</p>
                     * @return Username <p>集群访问用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>集群访问用户名</p>
                     * @param _username <p>集群访问用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>集群访问密码</p>
                     * @return Password <p>集群访问密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>集群访问密码</p>
                     * @param _password <p>集群访问密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>分页起始位置</p>
                     * @return Offset <p>分页起始位置</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始位置</p>
                     * @param _offset <p>分页起始位置</p>
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
                     * 获取<p>一页展示数量</p>
                     * @return Limit <p>一页展示数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>一页展示数量</p>
                     * @param _limit <p>一页展示数量</p>
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
                     * 获取<p>排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime</p>
                     * @return OrderBy <p>排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime</p>
                     * @param _orderBy <p>排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime</p>
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
                     * 获取<p>过滤索引状态</p>
                     * @return IndexStatusList <p>过滤索引状态</p>
                     * 
                     */
                    std::vector<std::string> GetIndexStatusList() const;

                    /**
                     * 设置<p>过滤索引状态</p>
                     * @param _indexStatusList <p>过滤索引状态</p>
                     * 
                     */
                    void SetIndexStatusList(const std::vector<std::string>& _indexStatusList);

                    /**
                     * 判断参数 IndexStatusList 是否已赋值
                     * @return IndexStatusList 是否已赋值
                     * 
                     */
                    bool IndexStatusListHasBeenSet() const;

                    /**
                     * 获取<p>排序顺序，支持asc、desc，默认为desc 数据格式&quot;asc&quot;,&quot;desc&quot;</p>
                     * @return Order <p>排序顺序，支持asc、desc，默认为desc 数据格式&quot;asc&quot;,&quot;desc&quot;</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序顺序，支持asc、desc，默认为desc 数据格式&quot;asc&quot;,&quot;desc&quot;</p>
                     * @param _order <p>排序顺序，支持asc、desc，默认为desc 数据格式&quot;asc&quot;,&quot;desc&quot;</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>索引名称过滤列表。仅返回列表中指定的索引，常用于事件中心跳转时筛选受影响的索引；不填返回全部索引。单次最多支持100个索引名称。</p>
                     * @return FilterIndexNames <p>索引名称过滤列表。仅返回列表中指定的索引，常用于事件中心跳转时筛选受影响的索引；不填返回全部索引。单次最多支持100个索引名称。</p>
                     * 
                     */
                    std::vector<std::string> GetFilterIndexNames() const;

                    /**
                     * 设置<p>索引名称过滤列表。仅返回列表中指定的索引，常用于事件中心跳转时筛选受影响的索引；不填返回全部索引。单次最多支持100个索引名称。</p>
                     * @param _filterIndexNames <p>索引名称过滤列表。仅返回列表中指定的索引，常用于事件中心跳转时筛选受影响的索引；不填返回全部索引。单次最多支持100个索引名称。</p>
                     * 
                     */
                    void SetFilterIndexNames(const std::vector<std::string>& _filterIndexNames);

                    /**
                     * 判断参数 FilterIndexNames 是否已赋值
                     * @return FilterIndexNames 是否已赋值
                     * 
                     */
                    bool FilterIndexNamesHasBeenSet() const;

                private:

                    /**
                     * <p>索引类型。auto：自治索引；normal：普通索引</p>
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * <p>ES集群ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>索引名，若填空则获取所有索引</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>集群访问用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>集群访问密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>分页起始位置</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>一页展示数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>过滤索引状态</p>
                     */
                    std::vector<std::string> m_indexStatusList;
                    bool m_indexStatusListHasBeenSet;

                    /**
                     * <p>排序顺序，支持asc、desc，默认为desc 数据格式&quot;asc&quot;,&quot;desc&quot;</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>索引名称过滤列表。仅返回列表中指定的索引，常用于事件中心跳转时筛选受影响的索引；不填返回全部索引。单次最多支持100个索引名称。</p>
                     */
                    std::vector<std::string> m_filterIndexNames;
                    bool m_filterIndexNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
