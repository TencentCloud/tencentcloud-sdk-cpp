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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessConnection请求参数结构体
                */
                class DescribeRabbitMQServerlessConnectionRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessConnectionRequest();
                    ~DescribeRabbitMQServerlessConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id	
                     * @return InstanceId 集群实例Id	
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id	
                     * @param _instanceId 集群实例Id	
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
                     * 获取vhost名
                     * @return VirtualHost vhost名
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置vhost名
                     * @param _virtualHost vhost名
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取按哪个字段排序，支持：channel(channel数),incoming_bytes(入流量大小),outgoing_bytes(出流量大小)
                     * @return SortElement 按哪个字段排序，支持：channel(channel数),incoming_bytes(入流量大小),outgoing_bytes(出流量大小)
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置按哪个字段排序，支持：channel(channel数),incoming_bytes(入流量大小),outgoing_bytes(出流量大小)
                     * @param _sortElement 按哪个字段排序，支持：channel(channel数),incoming_bytes(入流量大小),outgoing_bytes(出流量大小)
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取排序方式：ASC,DESC
                     * @return SortType 排序方式：ASC,DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式：ASC,DESC
                     * @param _sortType 排序方式：ASC,DESC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取分页参数，从第几条数据开始
                     * @return Offset 分页参数，从第几条数据开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，从第几条数据开始
                     * @param _offset 分页参数，从第几条数据开始
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
                     * 获取一页大小
                     * @return Limit 一页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页大小
                     * @param _limit 一页大小
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
                     * 获取连接名模糊搜索
                     * @return Name 连接名模糊搜索
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置连接名模糊搜索
                     * @param _name 连接名模糊搜索
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id	
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * vhost名
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 按哪个字段排序，支持：channel(channel数),incoming_bytes(入流量大小),outgoing_bytes(出流量大小)
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * 排序方式：ASC,DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 分页参数，从第几条数据开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 连接名模糊搜索
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
