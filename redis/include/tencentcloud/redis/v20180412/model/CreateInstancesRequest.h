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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_

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
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所属的可用区id
                     * @return ZoneId 实例所属的可用区id
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置实例所属的可用区id
                     * @param ZoneId 实例所属的可用区id
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取实例类型：2 – Redis2.8主从版，3 – Redis3.2主从版(CKV主从版)，4 – Redis3.2集群版(CKV集群版)，5-Redis2.8单机版，7 – Redis4.0集群版，
                     * @return TypeId 实例类型：2 – Redis2.8主从版，3 – Redis3.2主从版(CKV主从版)，4 – Redis3.2集群版(CKV集群版)，5-Redis2.8单机版，7 – Redis4.0集群版，
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置实例类型：2 – Redis2.8主从版，3 – Redis3.2主从版(CKV主从版)，4 – Redis3.2集群版(CKV集群版)，5-Redis2.8单机版，7 – Redis4.0集群版，
                     * @param TypeId 实例类型：2 – Redis2.8主从版，3 – Redis3.2主从版(CKV主从版)，4 – Redis3.2集群版(CKV集群版)，5-Redis2.8单机版，7 – Redis4.0集群版，
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取实例容量，单位MB， 取值大小以 查询售卖规格接口返回的规格为准
                     * @return MemSize 实例容量，单位MB， 取值大小以 查询售卖规格接口返回的规格为准
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置实例容量，单位MB， 取值大小以 查询售卖规格接口返回的规格为准
                     * @param MemSize 实例容量，单位MB， 取值大小以 查询售卖规格接口返回的规格为准
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取实例数量，单次购买实例数量以 查询售卖规格接口返回的规格为准
                     * @return GoodsNum 实例数量，单次购买实例数量以 查询售卖规格接口返回的规格为准
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，单次购买实例数量以 查询售卖规格接口返回的规格为准
                     * @param GoodsNum 实例数量，单次购买实例数量以 查询售卖规格接口返回的规格为准
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]
                     * @return Period 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]
                     * @param Period 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取实例密码，密码规则：1.长度为8-16个字符；2:至少包含字母、数字和字符!@^*()中的两种
                     * @return Password 实例密码，密码规则：1.长度为8-16个字符；2:至少包含字母、数字和字符!@^*()中的两种
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码，密码规则：1.长度为8-16个字符；2:至少包含字母、数字和字符!@^*()中的两种
                     * @param Password 实例密码，密码规则：1.长度为8-16个字符；2:至少包含字母、数字和字符!@^*()中的两种
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取付费方式:0-按量计费，1-包年包月。
                     * @return BillingMode 付费方式:0-按量计费，1-包年包月。
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置付费方式:0-按量计费，1-包年包月。
                     * @param BillingMode 付费方式:0-按量计费，1-包年包月。
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取私有网络ID，如果不传则默认选择基础网络，请使用私有网络列表查询，如：vpc-sad23jfdfk
                     * @return VpcId 私有网络ID，如果不传则默认选择基础网络，请使用私有网络列表查询，如：vpc-sad23jfdfk
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，如果不传则默认选择基础网络，请使用私有网络列表查询，如：vpc-sad23jfdfk
                     * @param VpcId 私有网络ID，如果不传则默认选择基础网络，请使用私有网络列表查询，如：vpc-sad23jfdfk
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取基础网络下， subnetId无效； vpc子网下，取值以查询子网列表，如：subnet-fdj24n34j2
                     * @return SubnetId 基础网络下， subnetId无效； vpc子网下，取值以查询子网列表，如：subnet-fdj24n34j2
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置基础网络下， subnetId无效； vpc子网下，取值以查询子网列表，如：subnet-fdj24n34j2
                     * @param SubnetId 基础网络下， subnetId无效； vpc子网下，取值以查询子网列表，如：subnet-fdj24n34j2
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准
                     * @return ProjectId 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准
                     * @param ProjectId 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取自动续费标识。0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @return AutoRenew 自动续费标识。0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标识。0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @param AutoRenew 自动续费标识。0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取安全组id数组
                     * @return SecurityGroupIdList 安全组id数组
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置安全组id数组
                     * @param SecurityGroupIdList 安全组id数组
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取用户自定义的端口 不填则默认为6379
                     * @return VPort 用户自定义的端口 不填则默认为6379
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置用户自定义的端口 不填则默认为6379
                     * @param VPort 用户自定义的端口 不填则默认为6379
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取实例分片数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @return RedisShardNum 实例分片数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置实例分片数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @param RedisShardNum 实例分片数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取实例副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @return RedisReplicasNum 实例副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置实例副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @param RedisReplicasNum 实例副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取是否支持副本只读，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @return ReplicasReadonly 是否支持副本只读，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置是否支持副本只读，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     * @param ReplicasReadonly 是否支持副本只读，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

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

                private:

                    /**
                     * 实例所属的可用区id
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例类型：2 – Redis2.8主从版，3 – Redis3.2主从版(CKV主从版)，4 – Redis3.2集群版(CKV集群版)，5-Redis2.8单机版，7 – Redis4.0集群版，
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 实例容量，单位MB， 取值大小以 查询售卖规格接口返回的规格为准
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 实例数量，单次购买实例数量以 查询售卖规格接口返回的规格为准
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 实例密码，密码规则：1.长度为8-16个字符；2:至少包含字母、数字和字符!@^*()中的两种
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 付费方式:0-按量计费，1-包年包月。
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 私有网络ID，如果不传则默认选择基础网络，请使用私有网络列表查询，如：vpc-sad23jfdfk
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 基础网络下， subnetId无效； vpc子网下，取值以查询子网列表，如：subnet-fdj24n34j2
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 自动续费标识。0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 安全组id数组
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * 用户自定义的端口 不填则默认为6379
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 实例分片数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 实例副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 是否支持副本只读，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
