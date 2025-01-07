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

#ifndef TENCENTCLOUD_MONGODB_V20180408_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20180408_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateDBInstanceHour请求参数结构体
                */
                class CreateDBInstanceHourRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceHourRequest();
                    ~CreateDBInstanceHourRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例内存大小，单位：GB
                     * @return Memory 实例内存大小，单位：GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：GB
                     * @param _memory 实例内存大小，单位：GB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB
                     * @return Volume 实例硬盘大小，单位：GB
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB
                     * @param _volume 实例硬盘大小，单位：GB
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取副本集个数，1为单副本集实例，大于1为分片集群实例，最大不超过10
                     * @return ReplicateSetNum 副本集个数，1为单副本集实例，大于1为分片集群实例，最大不超过10
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置副本集个数，1为单副本集实例，大于1为分片集群实例，最大不超过10
                     * @param _replicateSetNum 副本集个数，1为单副本集实例，大于1为分片集群实例，最大不超过10
                     * 
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取每个副本集内从节点个数，目前只支持从节点数为2
                     * @return SecondaryNum 每个副本集内从节点个数，目前只支持从节点数为2
                     * 
                     */
                    uint64_t GetSecondaryNum() const;

                    /**
                     * 设置每个副本集内从节点个数，目前只支持从节点数为2
                     * @param _secondaryNum 每个副本集内从节点个数，目前只支持从节点数为2
                     * 
                     */
                    void SetSecondaryNum(const uint64_t& _secondaryNum);

                    /**
                     * 判断参数 SecondaryNum 是否已赋值
                     * @return SecondaryNum 是否已赋值
                     * 
                     */
                    bool SecondaryNumHasBeenSet() const;

                    /**
                     * 获取MongoDB引擎版本，值包括MONGO_3_WT 、MONGO_3_ROCKS和MONGO_36_WT
                     * @return EngineVersion MongoDB引擎版本，值包括MONGO_3_WT 、MONGO_3_ROCKS和MONGO_36_WT
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MongoDB引擎版本，值包括MONGO_3_WT 、MONGO_3_ROCKS和MONGO_36_WT
                     * @param _engineVersion MongoDB引擎版本，值包括MONGO_3_WT 、MONGO_3_ROCKS和MONGO_36_WT
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取实例类型，HIO10G：高IO万兆。
                     * @return Machine 实例类型，HIO10G：高IO万兆。
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置实例类型，HIO10G：高IO万兆。
                     * @param _machine 实例类型，HIO10G：高IO万兆。
                     * 
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取实例数量，默认值为1, 最小值1，最大值为10
                     * @return GoodsNum 实例数量，默认值为1, 最小值1，最大值为10
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，默认值为1, 最小值1，最大值为10
                     * @param _goodsNum 实例数量，默认值为1, 最小值1，最大值为10
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取可用区信息，格式如：ap-guangzhou-2
                     * @return Zone 可用区信息，格式如：ap-guangzhou-2
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，格式如：ap-guangzhou-2
                     * @param _zone 可用区信息，格式如：ap-guangzhou-2
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
                     * 获取实例角色，默认传MASTER即可
                     * @return InstanceRole 实例角色，默认传MASTER即可
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例角色，默认传MASTER即可
                     * @param _instanceRole 实例角色，默认传MASTER即可
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取实例类型，REPLSET-副本集，SHARD-分片集群
                     * @return InstanceType 实例类型，REPLSET-副本集，SHARD-分片集群
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，REPLSET-副本集，SHARD-分片集群
                     * @param _instanceType 实例类型，REPLSET-副本集，SHARD-分片集群
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
                     * 获取数据是否加密，当且仅当引擎版本为MONGO_3_ROCKS，可以选择加密
                     * @return Encrypt 数据是否加密，当且仅当引擎版本为MONGO_3_ROCKS，可以选择加密
                     * 
                     */
                    uint64_t GetEncrypt() const;

                    /**
                     * 设置数据是否加密，当且仅当引擎版本为MONGO_3_ROCKS，可以选择加密
                     * @param _encrypt 数据是否加密，当且仅当引擎版本为MONGO_3_ROCKS，可以选择加密
                     * 
                     */
                    void SetEncrypt(const uint64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取私有网络ID，如果不传则默认选择基础网络
                     * @return VpcId 私有网络ID，如果不传则默认选择基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，如果不传则默认选择基础网络
                     * @param _vpcId 私有网络ID，如果不传则默认选择基础网络
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
                     * 获取私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @return SubnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @param _subnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
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
                     * 获取项目ID，不填为默认项目
                     * @return ProjectId 项目ID，不填为默认项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，不填为默认项目
                     * @param _projectId 项目ID，不填为默认项目
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取安全组参数
                     * @return SecurityGroup 安全组参数
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组参数
                     * @param _securityGroup 安全组参数
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取私有网络ID，如果不传则默认选择基础网络
                     * @return UniqVpcId 私有网络ID，如果不传则默认选择基础网络
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID，如果不传则默认选择基础网络
                     * @param _uniqVpcId 私有网络ID，如果不传则默认选择基础网络
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @return UniqSubnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @param _uniqSubnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 实例内存大小，单位：GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 副本集个数，1为单副本集实例，大于1为分片集群实例，最大不超过10
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * 每个副本集内从节点个数，目前只支持从节点数为2
                     */
                    uint64_t m_secondaryNum;
                    bool m_secondaryNumHasBeenSet;

                    /**
                     * MongoDB引擎版本，值包括MONGO_3_WT 、MONGO_3_ROCKS和MONGO_36_WT
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例类型，HIO10G：高IO万兆。
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 实例数量，默认值为1, 最小值1，最大值为10
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 可用区信息，格式如：ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例角色，默认传MASTER即可
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 实例类型，REPLSET-副本集，SHARD-分片集群
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 数据是否加密，当且仅当引擎版本为MONGO_3_ROCKS，可以选择加密
                     */
                    uint64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 私有网络ID，如果不传则默认选择基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目ID，不填为默认项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 安全组参数
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 私有网络ID，如果不传则默认选择基础网络
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20180408_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
