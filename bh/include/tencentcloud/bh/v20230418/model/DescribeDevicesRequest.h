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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/TagFilter.h>
#include <tencentcloud/bh/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * 获取<p>资产ID集合</p>
                     * @return IdSet <p>资产ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置<p>资产ID集合</p>
                     * @param _idSet <p>资产ID集合</p>
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
                     * 获取<p>资产名或资产IP，模糊查询</p>
                     * @return Name <p>资产名或资产IP，模糊查询</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资产名或资产IP，模糊查询</p>
                     * @param _name <p>资产名或资产IP，模糊查询</p>
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
                     * 获取<p>暂未使用</p>
                     * @return Ip <p>暂未使用</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>暂未使用</p>
                     * @param _ip <p>暂未使用</p>
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
                     * 获取<p>地域码集合</p>
                     * @return ApCodeSet <p>地域码集合</p>
                     * 
                     */
                    std::vector<std::string> GetApCodeSet() const;

                    /**
                     * 设置<p>地域码集合</p>
                     * @param _apCodeSet <p>地域码集合</p>
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
                     * 获取<p>操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @return Kind <p>操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置<p>操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @param _kind <p>操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
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
                     * 获取<p>分页偏移位置，默认值为0</p>
                     * @return Offset <p>分页偏移位置，默认值为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移位置，默认值为0</p>
                     * @param _offset <p>分页偏移位置，默认值为0</p>
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
                     * 获取<p>每页条目数量</p><p>取值范围：[0, 500]</p><p>默认值：20</p>
                     * @return Limit <p>每页条目数量</p><p>取值范围：[0, 500]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页条目数量</p><p>取值范围：[0, 500]</p><p>默认值：20</p>
                     * @param _limit <p>每页条目数量</p><p>取值范围：[0, 500]</p><p>默认值：20</p>
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
                     * 获取<p>有该资产访问权限的用户ID集合</p>
                     * @return AuthorizedUserIdSet <p>有该资产访问权限的用户ID集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetAuthorizedUserIdSet() const;

                    /**
                     * 设置<p>有该资产访问权限的用户ID集合</p>
                     * @param _authorizedUserIdSet <p>有该资产访问权限的用户ID集合</p>
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
                     * 获取<p>过滤条件，资产绑定的堡垒机服务ID集合</p>
                     * @return ResourceIdSet <p>过滤条件，资产绑定的堡垒机服务ID集合</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIdSet() const;

                    /**
                     * 设置<p>过滤条件，资产绑定的堡垒机服务ID集合</p>
                     * @param _resourceIdSet <p>过滤条件，资产绑定的堡垒机服务ID集合</p>
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
                     * 获取<p>可提供按照多种类型过滤, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @return KindSet <p>可提供按照多种类型过滤, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * 
                     */
                    std::vector<uint64_t> GetKindSet() const;

                    /**
                     * 设置<p>可提供按照多种类型过滤, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @param _kindSet <p>可提供按照多种类型过滤, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
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
                     * 获取<p>资产是否包含托管账号。1，包含；0，不包含</p>
                     * @return ManagedAccount <p>资产是否包含托管账号。1，包含；0，不包含</p>
                     * 
                     */
                    std::string GetManagedAccount() const;

                    /**
                     * 设置<p>资产是否包含托管账号。1，包含；0，不包含</p>
                     * @param _managedAccount <p>资产是否包含托管账号。1，包含；0，不包含</p>
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
                     * 获取<p>过滤条件，可按照部门ID进行过滤</p>
                     * @return DepartmentId <p>过滤条件，可按照部门ID进行过滤</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>过滤条件，可按照部门ID进行过滤</p>
                     * @param _departmentId <p>过滤条件，可按照部门ID进行过滤</p>
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
                     * 获取<p>资产所属云账号id</p>
                     * @return AccountIdSet <p>资产所属云账号id</p>
                     * 
                     */
                    std::vector<uint64_t> GetAccountIdSet() const;

                    /**
                     * 设置<p>资产所属云账号id</p>
                     * @param _accountIdSet <p>资产所属云账号id</p>
                     * 
                     */
                    void SetAccountIdSet(const std::vector<uint64_t>& _accountIdSet);

                    /**
                     * 判断参数 AccountIdSet 是否已赋值
                     * @return AccountIdSet 是否已赋值
                     * 
                     */
                    bool AccountIdSetHasBeenSet() const;

                    /**
                     * 获取<p>云厂商类型，1-腾讯云，2-阿里云</p>
                     * @return ProviderTypeSet <p>云厂商类型，1-腾讯云，2-阿里云</p>
                     * 
                     */
                    std::vector<uint64_t> GetProviderTypeSet() const;

                    /**
                     * 设置<p>云厂商类型，1-腾讯云，2-阿里云</p>
                     * @param _providerTypeSet <p>云厂商类型，1-腾讯云，2-阿里云</p>
                     * 
                     */
                    void SetProviderTypeSet(const std::vector<uint64_t>& _providerTypeSet);

                    /**
                     * 判断参数 ProviderTypeSet 是否已赋值
                     * @return ProviderTypeSet 是否已赋值
                     * 
                     */
                    bool ProviderTypeSetHasBeenSet() const;

                    /**
                     * 获取<p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * @return CloudDeviceStatusSet <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * 
                     */
                    std::vector<uint64_t> GetCloudDeviceStatusSet() const;

                    /**
                     * 设置<p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * @param _cloudDeviceStatusSet <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * 
                     */
                    void SetCloudDeviceStatusSet(const std::vector<uint64_t>& _cloudDeviceStatusSet);

                    /**
                     * 判断参数 CloudDeviceStatusSet 是否已赋值
                     * @return CloudDeviceStatusSet 是否已赋值
                     * 
                     */
                    bool CloudDeviceStatusSetHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系</p>
                     * @return TagFilters <p>过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系</p>
                     * @param _tagFilters <p>过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系</p>
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
                     * 获取<p>过滤数组。支持的Name：<br>BindingStatus 绑定状态</p>
                     * @return Filters <p>过滤数组。支持的Name：<br>BindingStatus 绑定状态</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤数组。支持的Name：<br>BindingStatus 绑定状态</p>
                     * @param _filters <p>过滤数组。支持的Name：<br>BindingStatus 绑定状态</p>
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
                     * 获取<p>所属成员 AppId</p>
                     * @return OwnerAppIds <p>所属成员 AppId</p>
                     * 
                     */
                    std::vector<uint64_t> GetOwnerAppIds() const;

                    /**
                     * 设置<p>所属成员 AppId</p>
                     * @param _ownerAppIds <p>所属成员 AppId</p>
                     * 
                     */
                    void SetOwnerAppIds(const std::vector<uint64_t>& _ownerAppIds);

                    /**
                     * 判断参数 OwnerAppIds 是否已赋值
                     * @return OwnerAppIds 是否已赋值
                     * 
                     */
                    bool OwnerAppIdsHasBeenSet() const;

                private:

                    /**
                     * <p>资产ID集合</p>
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * <p>资产名或资产IP，模糊查询</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>暂未使用</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>地域码集合</p>
                     */
                    std::vector<std::string> m_apCodeSet;
                    bool m_apCodeSetHasBeenSet;

                    /**
                     * <p>操作系统类型, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>分页偏移位置，默认值为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页条目数量</p><p>取值范围：[0, 500]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>有该资产访问权限的用户ID集合</p>
                     */
                    std::vector<uint64_t> m_authorizedUserIdSet;
                    bool m_authorizedUserIdSetHasBeenSet;

                    /**
                     * <p>过滤条件，资产绑定的堡垒机服务ID集合</p>
                     */
                    std::vector<std::string> m_resourceIdSet;
                    bool m_resourceIdSetHasBeenSet;

                    /**
                     * <p>可提供按照多种类型过滤, 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     */
                    std::vector<uint64_t> m_kindSet;
                    bool m_kindSetHasBeenSet;

                    /**
                     * <p>资产是否包含托管账号。1，包含；0，不包含</p>
                     */
                    std::string m_managedAccount;
                    bool m_managedAccountHasBeenSet;

                    /**
                     * <p>过滤条件，可按照部门ID进行过滤</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * <p>资产所属云账号id</p>
                     */
                    std::vector<uint64_t> m_accountIdSet;
                    bool m_accountIdSetHasBeenSet;

                    /**
                     * <p>云厂商类型，1-腾讯云，2-阿里云</p>
                     */
                    std::vector<uint64_t> m_providerTypeSet;
                    bool m_providerTypeSetHasBeenSet;

                    /**
                     * <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     */
                    std::vector<uint64_t> m_cloudDeviceStatusSet;
                    bool m_cloudDeviceStatusSetHasBeenSet;

                    /**
                     * <p>过滤条件，可按照标签键、标签进行过滤。如果同时指定标签键和标签过滤条件，它们之间为“AND”的关系</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>过滤数组。支持的Name：<br>BindingStatus 绑定状态</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>所属成员 AppId</p>
                     */
                    std::vector<uint64_t> m_ownerAppIds;
                    bool m_ownerAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICESREQUEST_H_
