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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取实例列表的大小，参数默认值20
                     * @return Limit 实例列表的大小，参数默认值20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置实例列表的大小，参数默认值20
                     * @param Limit 实例列表的大小，参数默认值20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，取Limit整数倍
                     * @return Offset 偏移量，取Limit整数倍
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取Limit整数倍
                     * @param Offset 偏移量，取Limit整数倍
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取实例Id，如：crs-6ubhgouj
                     * @return InstanceId 实例Id，如：crs-6ubhgouj
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id，如：crs-6ubhgouj
                     * @param InstanceId 实例Id，如：crs-6ubhgouj
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取枚举范围： projectId,createtime,instancename,type,curDeadline
                     * @return OrderBy 枚举范围： projectId,createtime,instancename,type,curDeadline
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置枚举范围： projectId,createtime,instancename,type,curDeadline
                     * @param OrderBy 枚举范围： projectId,createtime,instancename,type,curDeadline
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取1倒序，0顺序，默认倒序
                     * @return OrderType 1倒序，0顺序，默认倒序
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1倒序，0顺序，默认倒序
                     * @param OrderType 1倒序，0顺序，默认倒序
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * @return VpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     * @param VpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：47525
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取子网ID数组，数组下标从0开始，如：56854
                     * @return SubnetIds 子网ID数组，数组下标从0开始，如：56854
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID数组，数组下标从0开始，如：56854
                     * @param SubnetIds 子网ID数组，数组下标从0开始，如：56854
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取项目ID 组成的数组，数组下标从0开始
                     * @return ProjectIds 项目ID 组成的数组，数组下标从0开始
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID 组成的数组，数组下标从0开始
                     * @param ProjectIds 项目ID 组成的数组，数组下标从0开始
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取查找实例的ID。
                     * @return SearchKey 查找实例的ID。
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置查找实例的ID。
                     * @param SearchKey 查找实例的ID。
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @return UniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @param UniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @return UniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @param UniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取地域ID，已经弃用，可通过公共参数Region查询对应地域
                     * @return RegionIds 地域ID，已经弃用，可通过公共参数Region查询对应地域
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置地域ID，已经弃用，可通过公共参数Region查询对应地域
                     * @param RegionIds 地域ID，已经弃用，可通过公共参数Region查询对应地域
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     * @return Status 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     * @param Status 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型版本：1-单机版,2-主从版,3-集群版
                     * @return TypeVersion 类型版本：1-单机版,2-主从版,3-集群版
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置类型版本：1-单机版,2-主从版,3-集群版
                     * @param TypeVersion 类型版本：1-单机版,2-主从版,3-集群版
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取引擎信息：Redis-2.8，Redis-4.0，CKV
                     * @return EngineName 引擎信息：Redis-2.8，Redis-4.0，CKV
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎信息：Redis-2.8，Redis-4.0，CKV
                     * @param EngineName 引擎信息：Redis-2.8，Redis-4.0，CKV
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取续费模式：0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @return AutoRenew 续费模式：0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置续费模式：0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @param AutoRenew 续费模式：0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取计费模式：postpaid-按量计费；prepaid-包年包月
                     * @return BillingMode 计费模式：postpaid-按量计费；prepaid-包年包月
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置计费模式：postpaid-按量计费；prepaid-包年包月
                     * @param BillingMode 计费模式：postpaid-按量计费；prepaid-包年包月
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取实例类型：1-Redis老集群版；2-Redis 2.8主从版；3-CKV主从版；4-CKV集群版；5-Redis 2.8单机版；6-Redis 4.0主从版；7-Redis 4.0集群版
                     * @return Type 实例类型：1-Redis老集群版；2-Redis 2.8主从版；3-CKV主从版；4-CKV集群版；5-Redis 2.8单机版；6-Redis 4.0主从版；7-Redis 4.0集群版
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型：1-Redis老集群版；2-Redis 2.8主从版；3-CKV主从版；4-CKV集群版；5-Redis 2.8单机版；6-Redis 4.0主从版；7-Redis 4.0集群版
                     * @param Type 实例类型：1-Redis老集群版；2-Redis 2.8主从版；3-CKV主从版；4-CKV集群版；5-Redis 2.8单机版；6-Redis 4.0主从版；7-Redis 4.0集群版
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取搜索关键词：支持实例Id、实例名称、完整IP
                     * @return SearchKeys 搜索关键词：支持实例Id、实例名称、完整IP
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置搜索关键词：支持实例Id、实例名称、完整IP
                     * @param SearchKeys 搜索关键词：支持实例Id、实例名称、完整IP
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略
                     * @return TypeList 内部参数，用户可忽略
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置内部参数，用户可忽略
                     * @param TypeList 内部参数，用户可忽略
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     */
                    bool TypeListHasBeenSet() const;

                private:

                    /**
                     * 实例列表的大小，参数默认值20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，取Limit整数倍
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例Id，如：crs-6ubhgouj
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 枚举范围： projectId,createtime,instancename,type,curDeadline
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1倒序，0顺序，默认倒序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：47525
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
                     * 查找实例的ID。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 实例名称
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
                     * 地域ID，已经弃用，可通过公共参数Region查询对应地域
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型版本：1-单机版,2-主从版,3-集群版
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * 引擎信息：Redis-2.8，Redis-4.0，CKV
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 续费模式：0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 计费模式：postpaid-按量计费；prepaid-包年包月
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例类型：1-Redis老集群版；2-Redis 2.8主从版；3-CKV主从版；4-CKV集群版；5-Redis 2.8单机版；6-Redis 4.0主从版；7-Redis 4.0集群版
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 搜索关键词：支持实例Id、实例名称、完整IP
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * 内部参数，用户可忽略
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
