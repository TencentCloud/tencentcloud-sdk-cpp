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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：GB
                     * @param Memory 实例内存大小，单位：GB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB
                     * @return Volume 实例硬盘大小，单位：GB
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB
                     * @param Volume 实例硬盘大小，单位：GB
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取副本集个数，创建副本集实例时，该参数必须设置为1；创建分片实例时，具体参照查询云数据库的售卖规格返回参数
                     * @return ReplicateSetNum 副本集个数，创建副本集实例时，该参数必须设置为1；创建分片实例时，具体参照查询云数据库的售卖规格返回参数
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置副本集个数，创建副本集实例时，该参数必须设置为1；创建分片实例时，具体参照查询云数据库的售卖规格返回参数
                     * @param ReplicateSetNum 副本集个数，创建副本集实例时，该参数必须设置为1；创建分片实例时，具体参照查询云数据库的售卖规格返回参数
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取每个副本集内节点个数，当前副本集节点数固定为3，分片从节点数可选，具体参照查询云数据库的售卖规格返回参数
                     * @return NodeNum 每个副本集内节点个数，当前副本集节点数固定为3，分片从节点数可选，具体参照查询云数据库的售卖规格返回参数
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置每个副本集内节点个数，当前副本集节点数固定为3，分片从节点数可选，具体参照查询云数据库的售卖规格返回参数
                     * @param NodeNum 每个副本集内节点个数，当前副本集节点数固定为3，分片从节点数可选，具体参照查询云数据库的售卖规格返回参数
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取版本号，具体支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是MONGO_3_WT：MongoDB 3.2 WiredTiger存储引擎版本，MONGO_3_ROCKS：MongoDB 3.2 RocksDB存储引擎版本，MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本
                     * @return MongoVersion 版本号，具体支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是MONGO_3_WT：MongoDB 3.2 WiredTiger存储引擎版本，MONGO_3_ROCKS：MongoDB 3.2 RocksDB存储引擎版本，MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置版本号，具体支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是MONGO_3_WT：MongoDB 3.2 WiredTiger存储引擎版本，MONGO_3_ROCKS：MongoDB 3.2 RocksDB存储引擎版本，MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本
                     * @param MongoVersion 版本号，具体支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是MONGO_3_WT：MongoDB 3.2 WiredTiger存储引擎版本，MONGO_3_ROCKS：MongoDB 3.2 RocksDB存储引擎版本，MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取机器类型，HIO：高IO型；HIO10G：高IO万兆
                     * @return MachineCode 机器类型，HIO：高IO型；HIO10G：高IO万兆
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置机器类型，HIO：高IO型；HIO10G：高IO万兆
                     * @param MachineCode 机器类型，HIO：高IO型；HIO10G：高IO万兆
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取实例数量，最小值1，最大值为10
                     * @return GoodsNum 实例数量，最小值1，最大值为10
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，最小值1，最大值为10
                     * @param GoodsNum 实例数量，最小值1，最大值为10
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取可用区信息，格式如：ap-guangzhou-2
                     * @return Zone 可用区信息，格式如：ap-guangzhou-2
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，格式如：ap-guangzhou-2
                     * @param Zone 可用区信息，格式如：ap-guangzhou-2
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例类型，REPLSET-副本集，SHARD-分片集群
                     * @return ClusterType 实例类型，REPLSET-副本集，SHARD-分片集群
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置实例类型，REPLSET-副本集，SHARD-分片集群
                     * @param ClusterType 实例类型，REPLSET-副本集，SHARD-分片集群
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID，如果不设置该参数则默认选择基础网络
                     * @return VpcId 私有网络ID，如果不设置该参数则默认选择基础网络
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，如果不设置该参数则默认选择基础网络
                     * @param VpcId 私有网络ID，如果不设置该参数则默认选择基础网络
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @return SubnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     * @param SubnetId 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例密码，不设置该参数则需要在创建完成后通过设置密码接口初始化实例密码。密码必须是8-16位字符，且至少包含字母、数字和字符 !@#%^*() 中的两种
                     * @return Password 实例密码，不设置该参数则需要在创建完成后通过设置密码接口初始化实例密码。密码必须是8-16位字符，且至少包含字母、数字和字符 !@#%^*() 中的两种
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码，不设置该参数则需要在创建完成后通过设置密码接口初始化实例密码。密码必须是8-16位字符，且至少包含字母、数字和字符 !@#%^*() 中的两种
                     * @param Password 实例密码，不设置该参数则需要在创建完成后通过设置密码接口初始化实例密码。密码必须是8-16位字符，且至少包含字母、数字和字符 !@#%^*() 中的两种
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取项目ID，不设置为默认项目
                     * @return ProjectId 项目ID，不设置为默认项目
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，不设置为默认项目
                     * @param ProjectId 项目ID，不设置为默认项目
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例标签信息
                     * @return Tags 实例标签信息
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置实例标签信息
                     * @param Tags 实例标签信息
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

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
                     * 副本集个数，创建副本集实例时，该参数必须设置为1；创建分片实例时，具体参照查询云数据库的售卖规格返回参数
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * 每个副本集内节点个数，当前副本集节点数固定为3，分片从节点数可选，具体参照查询云数据库的售卖规格返回参数
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 版本号，具体支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是MONGO_3_WT：MongoDB 3.2 WiredTiger存储引擎版本，MONGO_3_ROCKS：MongoDB 3.2 RocksDB存储引擎版本，MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 机器类型，HIO：高IO型；HIO10G：高IO万兆
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * 实例数量，最小值1，最大值为10
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 可用区信息，格式如：ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例类型，REPLSET-副本集，SHARD-分片集群
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 私有网络ID，如果不设置该参数则默认选择基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，如果设置了 VpcId，则 SubnetId必填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例密码，不设置该参数则需要在创建完成后通过设置密码接口初始化实例密码。密码必须是8-16位字符，且至少包含字母、数字和字符 !@#%^*() 中的两种
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 项目ID，不设置为默认项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例标签信息
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
