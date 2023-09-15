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
                     * 获取索引类型。auto：自治索引；normal：普通索引
                     * @return IndexType 索引类型。auto：自治索引；normal：普通索引
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置索引类型。auto：自治索引；normal：普通索引
                     * @param _indexType 索引类型。auto：自治索引；normal：普通索引
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
                     * 获取ES集群ID
                     * @return InstanceId ES集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES集群ID
                     * @param _instanceId ES集群ID
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
                     * 获取索引名，若填空则获取所有索引
                     * @return IndexName 索引名，若填空则获取所有索引
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名，若填空则获取所有索引
                     * @param _indexName 索引名，若填空则获取所有索引
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
                     * 获取集群访问用户名
                     * @return Username 集群访问用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置集群访问用户名
                     * @param _username 集群访问用户名
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
                     * 获取集群访问密码
                     * @return Password 集群访问密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置集群访问密码
                     * @param _password 集群访问密码
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
                     * 获取分页起始位置
                     * @return Offset 分页起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始位置
                     * @param _offset 分页起始位置
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
                     * 获取一页展示数量
                     * @return Limit 一页展示数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页展示数量
                     * @param _limit 一页展示数量
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
                     * 获取排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * @return OrderBy 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     * @param _orderBy 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
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
                     * 获取过滤索引状态
                     * @return IndexStatusList 过滤索引状态
                     * 
                     */
                    std::vector<std::string> GetIndexStatusList() const;

                    /**
                     * 设置过滤索引状态
                     * @param _indexStatusList 过滤索引状态
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
                     * 获取排序顺序，支持asc、desc，默认为desc 数据格式"asc","desc"
                     * @return Order 排序顺序，支持asc、desc，默认为desc 数据格式"asc","desc"
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序顺序，支持asc、desc，默认为desc 数据格式"asc","desc"
                     * @param _order 排序顺序，支持asc、desc，默认为desc 数据格式"asc","desc"
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 索引类型。auto：自治索引；normal：普通索引
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * ES集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 索引名，若填空则获取所有索引
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 集群访问用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 集群访问密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 分页起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页展示数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持索引名：IndexName、索引存储量：IndexStorage、索引创建时间：IndexCreateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 过滤索引状态
                     */
                    std::vector<std::string> m_indexStatusList;
                    bool m_indexStatusListHasBeenSet;

                    /**
                     * 排序顺序，支持asc、desc，默认为desc 数据格式"asc","desc"
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
