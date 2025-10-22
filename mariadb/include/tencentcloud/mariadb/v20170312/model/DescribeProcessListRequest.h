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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPROCESSLISTREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPROCESSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeProcessList请求参数结构体
                */
                class DescribeProcessListRequest : public AbstractModel
                {
                public:
                    DescribeProcessListRequest();
                    ~DescribeProcessListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取节点ID。
                     * @return NodeId 节点ID。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID。
                     * @param _nodeId 节点ID。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<li><strong>id</strong></li>
    <p style="padding-left: 30px;">按照【<strong>会话ID</strong>】进行过滤。会话ID例如：125700。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>

<li><strong>user</strong></li>
    <p style="padding-left: 30px;">按照【<strong>用户名</strong>】进行过滤。用户名例如：root。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>host</strong></li>
    <p style="padding-left: 30px;">按照【<strong>客户端Host</strong>】进行过滤。客户端Host例如：127.0.0.1:46295。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如可以查询客户端IP不加端口：127.0.0.1。</p>
<li><strong>state</strong></li>
    <p style="padding-left: 30px;">按照【<strong>线程状态</strong>】进行过滤。线程状态例如：Updating。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>db</strong></li>
    <p style="padding-left: 30px;">按照【<strong>数据库名称</strong>】进行过滤。数据库名称例如：mysql。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>command</strong></li>
    <p style="padding-left: 30px;">按照【<strong>命令类型</strong>】进行过滤。命令类型例如：Query。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>info</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行语句</strong>】进行过滤。执行语句例如：select id, name from demo.table1 where id > 10。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如SQL较长，可以输入SQL前缀：select  id, name from demo.table1。</p>
<li><strong>time</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行时间大于多少（秒）</strong>】进行过滤。例如：10，表示查询执行时间超过10秒的会话。</p>
    <p style="padding-left: 30px;">类型：Integer</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：范围匹配，Values值只支持输入1个。</p>
每次请求的`Filters`的上限为10，`Filter.Values`的上限为50。
                     * @return Filters <li><strong>id</strong></li>
    <p style="padding-left: 30px;">按照【<strong>会话ID</strong>】进行过滤。会话ID例如：125700。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>

<li><strong>user</strong></li>
    <p style="padding-left: 30px;">按照【<strong>用户名</strong>】进行过滤。用户名例如：root。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>host</strong></li>
    <p style="padding-left: 30px;">按照【<strong>客户端Host</strong>】进行过滤。客户端Host例如：127.0.0.1:46295。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如可以查询客户端IP不加端口：127.0.0.1。</p>
<li><strong>state</strong></li>
    <p style="padding-left: 30px;">按照【<strong>线程状态</strong>】进行过滤。线程状态例如：Updating。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>db</strong></li>
    <p style="padding-left: 30px;">按照【<strong>数据库名称</strong>】进行过滤。数据库名称例如：mysql。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>command</strong></li>
    <p style="padding-left: 30px;">按照【<strong>命令类型</strong>】进行过滤。命令类型例如：Query。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>info</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行语句</strong>】进行过滤。执行语句例如：select id, name from demo.table1 where id > 10。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如SQL较长，可以输入SQL前缀：select  id, name from demo.table1。</p>
<li><strong>time</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行时间大于多少（秒）</strong>】进行过滤。例如：10，表示查询执行时间超过10秒的会话。</p>
    <p style="padding-left: 30px;">类型：Integer</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：范围匹配，Values值只支持输入1个。</p>
每次请求的`Filters`的上限为10，`Filter.Values`的上限为50。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>id</strong></li>
    <p style="padding-left: 30px;">按照【<strong>会话ID</strong>】进行过滤。会话ID例如：125700。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>

<li><strong>user</strong></li>
    <p style="padding-left: 30px;">按照【<strong>用户名</strong>】进行过滤。用户名例如：root。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>host</strong></li>
    <p style="padding-left: 30px;">按照【<strong>客户端Host</strong>】进行过滤。客户端Host例如：127.0.0.1:46295。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如可以查询客户端IP不加端口：127.0.0.1。</p>
<li><strong>state</strong></li>
    <p style="padding-left: 30px;">按照【<strong>线程状态</strong>】进行过滤。线程状态例如：Updating。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>db</strong></li>
    <p style="padding-left: 30px;">按照【<strong>数据库名称</strong>】进行过滤。数据库名称例如：mysql。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>command</strong></li>
    <p style="padding-left: 30px;">按照【<strong>命令类型</strong>】进行过滤。命令类型例如：Query。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>info</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行语句</strong>】进行过滤。执行语句例如：select id, name from demo.table1 where id > 10。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如SQL较长，可以输入SQL前缀：select  id, name from demo.table1。</p>
<li><strong>time</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行时间大于多少（秒）</strong>】进行过滤。例如：10，表示查询执行时间超过10秒的会话。</p>
    <p style="padding-left: 30px;">类型：Integer</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：范围匹配，Values值只支持输入1个。</p>
每次请求的`Filters`的上限为10，`Filter.Values`的上限为50。
                     * @param _filters <li><strong>id</strong></li>
    <p style="padding-left: 30px;">按照【<strong>会话ID</strong>】进行过滤。会话ID例如：125700。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>

<li><strong>user</strong></li>
    <p style="padding-left: 30px;">按照【<strong>用户名</strong>】进行过滤。用户名例如：root。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>host</strong></li>
    <p style="padding-left: 30px;">按照【<strong>客户端Host</strong>】进行过滤。客户端Host例如：127.0.0.1:46295。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如可以查询客户端IP不加端口：127.0.0.1。</p>
<li><strong>state</strong></li>
    <p style="padding-left: 30px;">按照【<strong>线程状态</strong>】进行过滤。线程状态例如：Updating。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>db</strong></li>
    <p style="padding-left: 30px;">按照【<strong>数据库名称</strong>】进行过滤。数据库名称例如：mysql。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>command</strong></li>
    <p style="padding-left: 30px;">按照【<strong>命令类型</strong>】进行过滤。命令类型例如：Query。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>info</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行语句</strong>】进行过滤。执行语句例如：select id, name from demo.table1 where id > 10。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如SQL较长，可以输入SQL前缀：select  id, name from demo.table1。</p>
<li><strong>time</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行时间大于多少（秒）</strong>】进行过滤。例如：10，表示查询执行时间超过10秒的会话。</p>
    <p style="padding-left: 30px;">类型：Integer</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：范围匹配，Values值只支持输入1个。</p>
每次请求的`Filters`的上限为10，`Filter.Values`的上限为50。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点ID。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <li><strong>id</strong></li>
    <p style="padding-left: 30px;">按照【<strong>会话ID</strong>】进行过滤。会话ID例如：125700。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>

<li><strong>user</strong></li>
    <p style="padding-left: 30px;">按照【<strong>用户名</strong>】进行过滤。用户名例如：root。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>host</strong></li>
    <p style="padding-left: 30px;">按照【<strong>客户端Host</strong>】进行过滤。客户端Host例如：127.0.0.1:46295。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如可以查询客户端IP不加端口：127.0.0.1。</p>
<li><strong>state</strong></li>
    <p style="padding-left: 30px;">按照【<strong>线程状态</strong>】进行过滤。线程状态例如：Updating。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>db</strong></li>
    <p style="padding-left: 30px;">按照【<strong>数据库名称</strong>】进行过滤。数据库名称例如：mysql。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>command</strong></li>
    <p style="padding-left: 30px;">按照【<strong>命令类型</strong>】进行过滤。命令类型例如：Query。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：精确匹配</p>
<li><strong>info</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行语句</strong>】进行过滤。执行语句例如：select id, name from demo.table1 where id > 10。</p>
    <p style="padding-left: 30px;">类型：String</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：前缀匹配，例如SQL较长，可以输入SQL前缀：select  id, name from demo.table1。</p>
<li><strong>time</strong></li>
    <p style="padding-left: 30px;">按照【<strong>执行时间大于多少（秒）</strong>】进行过滤。例如：10，表示查询执行时间超过10秒的会话。</p>
    <p style="padding-left: 30px;">类型：Integer</p>
    <p style="padding-left: 30px;">必选：否</p>
    <p style="padding-left: 30px;">匹配类型：范围匹配，Values值只支持输入1个。</p>
每次请求的`Filters`的上限为10，`Filter.Values`的上限为50。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPROCESSLISTREQUEST_H_
