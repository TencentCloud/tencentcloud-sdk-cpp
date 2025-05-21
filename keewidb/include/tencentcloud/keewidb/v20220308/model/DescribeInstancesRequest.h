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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。
                     * @return Limit 每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。
                     * @param _limit 每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。
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
                     * 获取分页偏移量，取Limit整数倍。
计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。
                     * @return Offset 分页偏移量，取Limit整数倍。
计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。
计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。
                     * @param _offset 分页偏移量，取Limit整数倍。
计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。
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
                     * 获取实例 ID，如：kee-6ubh****。
                     * @return InstanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubh****。
                     * @param _instanceId 实例 ID，如：kee-6ubh****。
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
                     * 获取排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul>
                     * @return OrderBy 排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul>
                     * @param _orderBy 排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul>
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
                     * 获取排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul>
                     * @return OrderType 排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul>
                     * @param _orderType 排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * @return VpcIds 私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * @param _vpcIds 私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取子网ID数组，数组下标从0开始，如：56854
                     * @return SubnetIds 子网ID数组，数组下标从0开始，如：56854
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID数组，数组下标从0开始，如：56854
                     * @param _subnetIds 子网ID数组，数组下标从0开始，如：56854
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取项目ID 组成的数组，数组下标从0开始
                     * @return ProjectIds 项目ID 组成的数组，数组下标从0开始
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID 组成的数组，数组下标从0开始
                     * @param _projectIds 项目ID 组成的数组，数组下标从0开始
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取查找关键字，可输入实例的ID或者实例名称。
                     * @return SearchKey 查找关键字，可输入实例的ID或者实例名称。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置查找关键字，可输入实例的ID或者实例名称。
                     * @param _searchKey 查找关键字，可输入实例的ID或者实例名称。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @return UniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @param _uniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @return UniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @param _uniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @return Status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @param _status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
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
                     * 获取续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。
                     * @return AutoRenew 续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。
                     * @param _autoRenew 续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。
                     * 
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @return BillingMode 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @param _billingMode 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * 
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取实例类型。<ul><li>13：标准版。</li><li>14：集群版。</li></ul>
                     * @return Type 实例类型。<ul><li>13：标准版。</li><li>14：集群版。</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型。<ul><li>13：标准版。</li><li>14：集群版。</li></ul>
                     * @param _type 实例类型。<ul><li>13：标准版。</li><li>14：集群版。</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取搜索关键词：支持实例 ID、实例名称、私有网络IP地址。
                     * @return SearchKeys 搜索关键词：支持实例 ID、实例名称、私有网络IP地址。
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置搜索关键词：支持实例 ID、实例名称、私有网络IP地址。
                     * @param _searchKeys 搜索关键词：支持实例 ID、实例名称、私有网络IP地址。
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
                     * 获取内部参数，用户可忽略。
                     * @return TypeList 内部参数，用户可忽略。
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置内部参数，用户可忽略。
                     * @param _typeList 内部参数，用户可忽略。
                     * 
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略。
                     * @return MonitorVersion 内部参数，用户可忽略。
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置内部参数，用户可忽略。
                     * @param _monitorVersion 内部参数，用户可忽略。
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取废弃字段。请使用TagList传参。
                     * @return InstanceTags 废弃字段。请使用TagList传参。
                     * @deprecated
                     */
                    InstanceTagInfo GetInstanceTags() const;

                    /**
                     * 设置废弃字段。请使用TagList传参。
                     * @param _instanceTags 废弃字段。请使用TagList传参。
                     * @deprecated
                     */
                    void SetInstanceTags(const InstanceTagInfo& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * @deprecated
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * @return TagKeys 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * @param _tagKeys 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * @return TagList 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTagList() const;

                    /**
                     * 设置根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * @param _tagList 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * 
                     */
                    void SetTagList(const std::vector<InstanceTagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。
计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例 ID，如：kee-6ubh****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 子网ID数组，数组下标从0开始，如：56854
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 项目ID 组成的数组，数组下标从0开始
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 查找关键字，可输入实例的ID或者实例名称。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例类型。<ul><li>13：标准版。</li><li>14：集群版。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 搜索关键词：支持实例 ID、实例名称、私有网络IP地址。
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * 废弃字段。请使用TagList传参。
                     */
                    InstanceTagInfo m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     */
                    std::vector<InstanceTagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCESREQUEST_H_
