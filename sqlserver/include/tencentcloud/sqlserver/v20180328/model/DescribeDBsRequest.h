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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDBs请求参数结构体
                */
                class DescribeDBsRequest : public AbstractModel
                {
                public:
                    DescribeDBsRequest();
                    ~DescribeDBsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceIdSet 实例ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID
                     * @param _instanceIdSet 实例ID
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为20
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
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _offset 分页返回，页编号，默认值为第0页
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
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名称
                     * @param _name 数据库名称
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
                     * 获取排序规则（desc-降序，asc-升序），默认desc
                     * @return OrderByType 排序规则（desc-降序，asc-升序），默认desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序规则（desc-降序，asc-升序），默认desc
                     * @param _orderByType 排序规则（desc-降序，asc-升序），默认desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取是否已开启TDE加密，enable-已加密，disable-未加密
                     * @return Encryption 是否已开启TDE加密，enable-已加密，disable-未加密
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置是否已开启TDE加密，enable-已加密，disable-未加密
                     * @param _encryption 是否已开启TDE加密，enable-已加密，disable-未加密
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取排序字段（Name-按名称排序，CreateTime-按创建时间排序），默认CreateTime
                     * @return OrderBy 排序字段（Name-按名称排序，CreateTime-按创建时间排序），默认CreateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段（Name-按名称排序，CreateTime-按创建时间排序），默认CreateTime
                     * @param _orderBy 排序字段（Name-按名称排序，CreateTime-按创建时间排序），默认CreateTime
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 排序规则（desc-降序，asc-升序），默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 是否已开启TDE加密，enable-已加密，disable-未加密
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 排序字段（Name-按名称排序，CreateTime-按创建时间排序），默认CreateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_
