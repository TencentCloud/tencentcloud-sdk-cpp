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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

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
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * @return Status 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * @param _status 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _offset 分页返回，页编号，默认值为第0页
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
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为100
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
                     * 获取一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     * @return InstanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     * @param _instanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
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
                     * 获取付费类型检索 1-包年包月，0-按量计费
                     * @return PayMode 付费类型检索 1-包年包月，0-按量计费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型检索 1-包年包月，0-按量计费
                     * @param _payMode 付费类型检索 1-包年包月，0-按量计费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的唯一字符串ID，格式如：vpc-xxx，传空字符串(“”)则按照基础网络筛选。
                     * @return VpcId 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，传空字符串(“”)则按照基础网络筛选。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属VPC的唯一字符串ID，格式如：vpc-xxx，传空字符串(“”)则按照基础网络筛选。
                     * @param _vpcId 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，传空字符串(“”)则按照基础网络筛选。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取实例所属子网的唯一字符串ID，格式如： subnet-xxx，传空字符串(“”)则按照基础网络筛选。
                     * @return SubnetId 实例所属子网的唯一字符串ID，格式如： subnet-xxx，传空字符串(“”)则按照基础网络筛选。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例所属子网的唯一字符串ID，格式如： subnet-xxx，传空字符串(“”)则按照基础网络筛选。
                     * @param _subnetId 实例所属子网的唯一字符串ID，格式如： subnet-xxx，传空字符串(“”)则按照基础网络筛选。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例内网地址列表，格式如：172.1.0.12
                     * @return VipSet 实例内网地址列表，格式如：172.1.0.12
                     * 
                     */
                    std::vector<std::string> GetVipSet() const;

                    /**
                     * 设置实例内网地址列表，格式如：172.1.0.12
                     * @param _vipSet 实例内网地址列表，格式如：172.1.0.12
                     * 
                     */
                    void SetVipSet(const std::vector<std::string>& _vipSet);

                    /**
                     * 判断参数 VipSet 是否已赋值
                     * @return VipSet 是否已赋值
                     * 
                     */
                    bool VipSetHasBeenSet() const;

                    /**
                     * 获取实例名称列表，模糊查询
                     * @return InstanceNameSet 实例名称列表，模糊查询
                     * 
                     */
                    std::vector<std::string> GetInstanceNameSet() const;

                    /**
                     * 设置实例名称列表，模糊查询
                     * @param _instanceNameSet 实例名称列表，模糊查询
                     * 
                     */
                    void SetInstanceNameSet(const std::vector<std::string>& _instanceNameSet);

                    /**
                     * 判断参数 InstanceNameSet 是否已赋值
                     * @return InstanceNameSet 是否已赋值
                     * 
                     */
                    bool InstanceNameSetHasBeenSet() const;

                    /**
                     * 获取实例版本代号列表，格式如：2008R2，2012SP3等
                     * @return VersionSet 实例版本代号列表，格式如：2008R2，2012SP3等
                     * 
                     */
                    std::vector<std::string> GetVersionSet() const;

                    /**
                     * 设置实例版本代号列表，格式如：2008R2，2012SP3等
                     * @param _versionSet 实例版本代号列表，格式如：2008R2，2012SP3等
                     * 
                     */
                    void SetVersionSet(const std::vector<std::string>& _versionSet);

                    /**
                     * 判断参数 VersionSet 是否已赋值
                     * @return VersionSet 是否已赋值
                     * 
                     */
                    bool VersionSetHasBeenSet() const;

                    /**
                     * 获取实例可用区，格式如：ap-guangzhou-2
                     * @return Zone 实例可用区，格式如：ap-guangzhou-2
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区，格式如：ap-guangzhou-2
                     * @param _zone 实例可用区，格式如：ap-guangzhou-2
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例标签列表
                     * @return TagKeys 实例标签列表
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置实例标签列表
                     * @param _tagKeys 实例标签列表
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
                     * 获取模糊查询关键字，支持实例id、实例名、内网ip
                     * @return SearchKey 模糊查询关键字，支持实例id、实例名、内网ip
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊查询关键字，支持实例id、实例名、内网ip
                     * @param _searchKey 模糊查询关键字，支持实例id、实例名、内网ip
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
                     * 获取实例唯一Uid列表
                     * @return UidSet 实例唯一Uid列表
                     * 
                     */
                    std::vector<std::string> GetUidSet() const;

                    /**
                     * 设置实例唯一Uid列表
                     * @param _uidSet 实例唯一Uid列表
                     * 
                     */
                    void SetUidSet(const std::vector<std::string>& _uidSet);

                    /**
                     * 判断参数 UidSet 是否已赋值
                     * @return UidSet 是否已赋值
                     * 
                     */
                    bool UidSetHasBeenSet() const;

                    /**
                     * 获取实例类型 HA-高可用 RO-只读实例 SI-基础版 BI-商业智能服务,cvmHA-云盘双机高可用，cvmRO-云盘只读副本,MultiHA-多节点,cvmMultiHA-云盘多节点
                     * @return InstanceType 实例类型 HA-高可用 RO-只读实例 SI-基础版 BI-商业智能服务,cvmHA-云盘双机高可用，cvmRO-云盘只读副本,MultiHA-多节点,cvmMultiHA-云盘多节点
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型 HA-高可用 RO-只读实例 SI-基础版 BI-商业智能服务,cvmHA-云盘双机高可用，cvmRO-云盘只读副本,MultiHA-多节点,cvmMultiHA-云盘多节点
                     * @param _instanceType 实例类型 HA-高可用 RO-只读实例 SI-基础版 BI-商业智能服务,cvmHA-云盘双机高可用，cvmRO-云盘只读副本,MultiHA-多节点,cvmMultiHA-云盘多节点
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取分页查询方式 offset-按照偏移量分页查询，pageNumber-按照页数分页查询，默认取值pageNumber
                     * @return PaginationType 分页查询方式 offset-按照偏移量分页查询，pageNumber-按照页数分页查询，默认取值pageNumber
                     * 
                     */
                    std::string GetPaginationType() const;

                    /**
                     * 设置分页查询方式 offset-按照偏移量分页查询，pageNumber-按照页数分页查询，默认取值pageNumber
                     * @param _paginationType 分页查询方式 offset-按照偏移量分页查询，pageNumber-按照页数分页查询，默认取值pageNumber
                     * 
                     */
                    void SetPaginationType(const std::string& _paginationType);

                    /**
                     * 判断参数 PaginationType 是否已赋值
                     * @return PaginationType 是否已赋值
                     * 
                     */
                    bool PaginationTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例状态。取值范围：
<li>1：申请中</li>
<li>2：运行中</li>
<li>3：受限运行中 (主备切换中)</li>
<li>4：已隔离</li>
<li>5：回收中</li>
<li>6：已回收</li>
<li>7：任务执行中 (实例做备份、回档等操作)</li>
<li>8：已下线</li>
<li>9：实例扩容中</li>
<li>10：实例迁移中</li>
<li>11：只读</li>
<li>12：重启中</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 付费类型检索 1-包年包月，0-按量计费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例所属VPC的唯一字符串ID，格式如：vpc-xxx，传空字符串(“”)则按照基础网络筛选。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例所属子网的唯一字符串ID，格式如： subnet-xxx，传空字符串(“”)则按照基础网络筛选。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例内网地址列表，格式如：172.1.0.12
                     */
                    std::vector<std::string> m_vipSet;
                    bool m_vipSetHasBeenSet;

                    /**
                     * 实例名称列表，模糊查询
                     */
                    std::vector<std::string> m_instanceNameSet;
                    bool m_instanceNameSetHasBeenSet;

                    /**
                     * 实例版本代号列表，格式如：2008R2，2012SP3等
                     */
                    std::vector<std::string> m_versionSet;
                    bool m_versionSetHasBeenSet;

                    /**
                     * 实例可用区，格式如：ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例标签列表
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 模糊查询关键字，支持实例id、实例名、内网ip
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 实例唯一Uid列表
                     */
                    std::vector<std::string> m_uidSet;
                    bool m_uidSetHasBeenSet;

                    /**
                     * 实例类型 HA-高可用 RO-只读实例 SI-基础版 BI-商业智能服务,cvmHA-云盘双机高可用，cvmRO-云盘只读副本,MultiHA-多节点,cvmMultiHA-云盘多节点
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 分页查询方式 offset-按照偏移量分页查询，pageNumber-按照页数分页查询，默认取值pageNumber
                     */
                    std::string m_paginationType;
                    bool m_paginationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
