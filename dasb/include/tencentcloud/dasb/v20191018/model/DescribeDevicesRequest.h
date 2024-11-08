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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/TagFilter.h>
#include <tencentcloud/dasb/v20191018/model/Filter.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeDevices请求参数结构体
                */
                class DescribeDevicesRequest : public AbstractModel
                {
                public:
                    DescribeDevicesRequest();
                    ~DescribeDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID集合
                     * @return IdSet 资产ID集合
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置资产ID集合
                     * @param _idSet 资产ID集合
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取资产名或资产IP，模糊查询
                     * @return Name 资产名或资产IP，模糊查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产名或资产IP，模糊查询
                     * @param _name 资产名或资产IP，模糊查询
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
                     * 获取暂未使用
                     * @return Ip 暂未使用
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置暂未使用
                     * @param _ip 暂未使用
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取地域码集合
                     * @return ApCodeSet 地域码集合
                     * 
                     */
                    std::vector<std::string> GetApCodeSet() const;

                    /**
                     * 设置地域码集合
                     * @param _apCodeSet 地域码集合
                     * 
                     */
                    void SetApCodeSet(const std::vector<std::string>& _apCodeSet);

                    /**
                     * 判断参数 ApCodeSet 是否已赋值
                     * @return ApCodeSet 是否已赋值
                     * 
                     */
                    bool ApCodeSetHasBeenSet() const;

                    /**
                     * 获取操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer, 5 - TDSQL MySQL, 6 - TDSQL-C MySQL, 7 - MariaDB, 8 - PostgreSQL, 9 - MongoDB副本集群, 10 - MongoDB分片集群, 11 - Redis
                     * @return Kind 操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer, 5 - TDSQL MySQL, 6 - TDSQL-C MySQL, 7 - MariaDB, 8 - PostgreSQL, 9 - MongoDB副本集群, 10 - MongoDB分片集群, 11 - Redis
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer, 5 - TDSQL MySQL, 6 - TDSQL-C MySQL, 7 - MariaDB, 8 - PostgreSQL, 9 - MongoDB副本集群, 10 - MongoDB分片集群, 11 - Redis
                     * @param _kind 操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer, 5 - TDSQL MySQL, 6 - TDSQL-C MySQL, 7 - MariaDB, 8 - PostgreSQL, 9 - MongoDB副本集群, 10 - MongoDB分片集群, 11 - Redis
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
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
                     * 获取每页条目数量，默认20
                     * @return Limit 每页条目数量，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20
                     * @param _limit 每页条目数量，默认20
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
                     * 获取有该资产访问权限的用户ID集合
                     * @return AuthorizedUserIdSet 有该资产访问权限的用户ID集合
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizedUserIdSet() const;

                    /**
                     * 设置有该资产访问权限的用户ID集合
                     * @param _authorizedUserIdSet 有该资产访问权限的用户ID集合
                     * 
                     */
                    void SetAuthorizedUserIdSet(const std::vector<uint64_t>& _authorizedUserIdSet);

                    /**
                     * 判断参数 AuthorizedUserIdSet 是否已赋值
                     * @return AuthorizedUserIdSet 是否已赋值
                     * 
                     */
                    bool AuthorizedUserIdSetHasBeenSet() const;

                    /**
                     * 获取过滤条件，资产绑定的堡垒机服务ID集合
                     * @return ResourceIdSet 过滤条件，资产绑定的堡垒机服务ID集合
                     * 
                     */
                    std::vector<std::string> GetResourceIdSet() const;

                    /**
                     * 设置过滤条件，资产绑定的堡垒机服务ID集合
                     * @param _resourceIdSet 过滤条件，资产绑定的堡垒机服务ID集合
                     * 
                     */
                    void SetResourceIdSet(const std::vector<std::string>& _resourceIdSet);

                    /**
                     * 判断参数 ResourceIdSet 是否已赋值
                     * @return ResourceIdSet 是否已赋值
                     * 
                     */
                    bool ResourceIdSetHasBeenSet() const;

                    /**
                     * 获取可提供按照多种类型过滤, 取值范围与Kind一致
                     * @return KindSet 可提供按照多种类型过滤, 取值范围与Kind一致
                     * 
                     */
                    std::vector<uint64_t> GetKindSet() const;

                    /**
                     * 设置可提供按照多种类型过滤, 取值范围与Kind一致
                     * @param _kindSet 可提供按照多种类型过滤, 取值范围与Kind一致
                     * 
                     */
                    void SetKindSet(const std::vector<uint64_t>& _kindSet);

                    /**
                     * 判断参数 KindSet 是否已赋值
                     * @return KindSet 是否已赋值
                     * 
                     */
                    bool KindSetHasBeenSet() const;

                    /**
                     * 获取资产是否包含托管账号。1，包含；0，不包含
                     * @return ManagedAccount 资产是否包含托管账号。1，包含；0，不包含
                     * 
                     */
                    std::string GetManagedAccount() const;

                    /**
                     * 设置资产是否包含托管账号。1，包含；0，不包含
                     * @param _managedAccount 资产是否包含托管账号。1，包含；0，不包含
                     * 
                     */
                    void SetManagedAccount(const std::string& _managedAccount);

                    /**
                     * 判断参数 ManagedAccount 是否已赋值
                     * @return ManagedAccount 是否已赋值
                     * 
                     */
                    bool ManagedAccountHasBeenSet() const;

                    /**
                     * 获取过滤条件，可按照部门ID进行过滤
                     * @return DepartmentId 过滤条件，可按照部门ID进行过滤
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置过滤条件，可按照部门ID进行过滤
                     * @param _departmentId 过滤条件，可按照部门ID进行过滤
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系
                     * @return TagFilters 过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系
                     * @param _tagFilters 过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取过滤数组。支持的Name：
BindingStatus 绑定状态
                     * @return Filters 过滤数组。支持的Name：
BindingStatus 绑定状态
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤数组。支持的Name：
BindingStatus 绑定状态
                     * @param _filters 过滤数组。支持的Name：
BindingStatus 绑定状态
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 资产ID集合
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 资产名或资产IP，模糊查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 暂未使用
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 地域码集合
                     */
                    std::vector<std::string> m_apCodeSet;
                    bool m_apCodeSetHasBeenSet;

                    /**
                     * 操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer, 5 - TDSQL MySQL, 6 - TDSQL-C MySQL, 7 - MariaDB, 8 - PostgreSQL, 9 - MongoDB副本集群, 10 - MongoDB分片集群, 11 - Redis
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 有该资产访问权限的用户ID集合
                     */
                    std::vector<uint64_t> m_authorizedUserIdSet;
                    bool m_authorizedUserIdSetHasBeenSet;

                    /**
                     * 过滤条件，资产绑定的堡垒机服务ID集合
                     */
                    std::vector<std::string> m_resourceIdSet;
                    bool m_resourceIdSetHasBeenSet;

                    /**
                     * 可提供按照多种类型过滤, 取值范围与Kind一致
                     */
                    std::vector<uint64_t> m_kindSet;
                    bool m_kindSetHasBeenSet;

                    /**
                     * 资产是否包含托管账号。1，包含；0，不包含
                     */
                    std::string m_managedAccount;
                    bool m_managedAccountHasBeenSet;

                    /**
                     * 过滤条件，可按照部门ID进行过滤
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 过滤数组。支持的Name：
BindingStatus 绑定状态
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICESREQUEST_H_
