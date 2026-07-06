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
                     * 获取<p>每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。</p>
                     * @return Limit <p>每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。</p>
                     * @param _limit <p>每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。</p>
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
                     * 获取<p>分页偏移量，取Limit整数倍。<br>计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。</p>
                     * @return Offset <p>分页偏移量，取Limit整数倍。<br>计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，取Limit整数倍。<br>计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。</p>
                     * @param _offset <p>分页偏移量，取Limit整数倍。<br>计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。</p>
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
                     * 获取<p>实例 ID，如：kee-6ubh****。</p>
                     * @return InstanceId <p>实例 ID，如：kee-6ubh****。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，如：kee-6ubh****。</p>
                     * @param _instanceId <p>实例 ID，如：kee-6ubh****。</p>
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
                     * 获取<p>排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul></p>
                     * @return OrderBy <p>排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul></p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul></p>
                     * @param _orderBy <p>排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul></p>
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
                     * 获取<p>排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul></p>
                     * @return OrderType <p>排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul></p>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul></p>
                     * @param _orderType <p>排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul></p>
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
                     * 获取<p>私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525</p>
                     * @return VpcIds <p>私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525</p>
                     * @param _vpcIds <p>私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525</p>
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
                     * 获取<p>子网ID数组，数组下标从0开始，如：56854</p>
                     * @return SubnetIds <p>子网ID数组，数组下标从0开始，如：56854</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网ID数组，数组下标从0开始，如：56854</p>
                     * @param _subnetIds <p>子网ID数组，数组下标从0开始，如：56854</p>
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
                     * 获取<p>项目ID 组成的数组，数组下标从0开始</p>
                     * @return ProjectIds <p>项目ID 组成的数组，数组下标从0开始</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目ID 组成的数组，数组下标从0开始</p>
                     * @param _projectIds <p>项目ID 组成的数组，数组下标从0开始</p>
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
                     * 获取<p>查找关键字，可输入实例的ID或者实例名称。</p>
                     * @return SearchKey <p>查找关键字，可输入实例的ID或者实例名称。</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>查找关键字，可输入实例的ID或者实例名称。</p>
                     * @param _searchKey <p>查找关键字，可输入实例的ID或者实例名称。</p>
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
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk</p>
                     * @return UniqVpcIds <p>私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk</p>
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置<p>私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk</p>
                     * @param _uniqVpcIds <p>私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk</p>
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
                     * 获取<p>子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2</p>
                     * @return UniqSubnetIds <p>子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2</p>
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置<p>子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2</p>
                     * @param _uniqSubnetIds <p>子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2</p>
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
                     * 获取<p>实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul></p>
                     * @return Status <p>实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul></p>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul></p>
                     * @param _status <p>实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul></p>
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
                     * 获取<p>续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。</p>
                     * @return AutoRenew <p>续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。</p>
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置<p>续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。</p>
                     * @param _autoRenew <p>续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。</p>
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
                     * 获取<p>计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul></p>
                     * @return BillingMode <p>计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul></p>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置<p>计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul></p>
                     * @param _billingMode <p>计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul></p>
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
                     * 获取<p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * @return Type <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * @param _type <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
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
                     * 获取<p>搜索关键词：支持实例 ID、实例名称、私有网络IP地址。</p>
                     * @return SearchKeys <p>搜索关键词：支持实例 ID、实例名称、私有网络IP地址。</p>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>搜索关键词：支持实例 ID、实例名称、私有网络IP地址。</p>
                     * @param _searchKeys <p>搜索关键词：支持实例 ID、实例名称、私有网络IP地址。</p>
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
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return TypeList <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _typeList <p>内部参数，用户可忽略。</p>
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
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return MonitorVersion <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _monitorVersion <p>内部参数，用户可忽略。</p>
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
                     * 获取<p>废弃字段。请使用TagList传参。</p>
                     * @return InstanceTags <p>废弃字段。请使用TagList传参。</p>
                     * @deprecated
                     */
                    InstanceTagInfo GetInstanceTags() const;

                    /**
                     * 设置<p>废弃字段。请使用TagList传参。</p>
                     * @param _instanceTags <p>废弃字段。请使用TagList传参。</p>
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
                     * 获取<p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * @return TagKeys <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置<p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * @param _tagKeys <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
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
                     * 获取<p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * @return TagList <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTagList() const;

                    /**
                     * 设置<p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * @param _tagList <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
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
                     * <p>每页输出的实例列表的大小，即每页输出的实例数量，默认值20，取值范围为[1,1000]。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，取Limit整数倍。<br>计算公式为offset=limit*(页码-1)。例如 limit=10，第1页offset就为0，第2页offset就为10，依次类推。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>实例 ID，如：kee-6ubh****。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>排序依据。枚举范围如下所示。 <ul><li>projectId：实例按照项目ID排序。</li><li>createtime：实例按照创建时间排序。</li><li>instancename：实例按照实例名称排序。</li><li>type：实例按照类型排序。</li><li>curDeadline：实例按照到期时间排序。</li></ul></p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式。<ul><li>1：倒序。默认为倒序。</li><li>0：顺序。</li></ul></p>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>私有网络ID数组。数组下标从0开始，如果不传则默认选择基础网络，如：47525</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>子网ID数组，数组下标从0开始，如：56854</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>项目ID 组成的数组，数组下标从0开始</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>查找关键字，可输入实例的ID或者实例名称。</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk</p>
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * <p>子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2</p>
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * <p>实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul></p>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>续费模式。- 0：手动续费。- 1：自动续费。- 2：到期不再续费。</p>
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul></p>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>搜索关键词：支持实例 ID、实例名称、私有网络IP地址。</p>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>废弃字段。请使用TagList传参。</p>
                     */
                    InstanceTagInfo m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     */
                    std::vector<InstanceTagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCESREQUEST_H_
