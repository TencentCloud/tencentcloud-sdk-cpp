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
                     * 获取实例内存大小，单位：GB。
                     * @return Memory 实例内存大小，单位：GB。
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：GB。
                     * @param Memory 实例内存大小，单位：GB。
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB。
                     * @return Volume 实例硬盘大小，单位：GB。
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB。
                     * @param Volume 实例硬盘大小，单位：GB。
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取指副本集数量。
- 创建副本集实例，该参数只能为1。
- 创建分片实例，指分片的数量。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @return ReplicateSetNum 指副本集数量。
- 创建副本集实例，该参数只能为1。
- 创建分片实例，指分片的数量。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置指副本集数量。
- 创建副本集实例，该参数只能为1。
- 创建分片实例，指分片的数量。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @param ReplicateSetNum 指副本集数量。
- 创建副本集实例，该参数只能为1。
- 创建分片实例，指分片的数量。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取指每个副本集内节点个数。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @return NodeNum 指每个副本集内节点个数。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置指每个副本集内节点个数。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @param NodeNum 指每个副本集内节点个数。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取指版本信息。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
                     * @return MongoVersion 指版本信息。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置指版本信息。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
                     * @param MongoVersion 指版本信息。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取机器类型。
- HIO：高IO型。
- HIO10G：高IO万兆。
                     * @return MachineCode 机器类型。
- HIO：高IO型。
- HIO10G：高IO万兆。
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置机器类型。
- HIO：高IO型。
- HIO10G：高IO万兆。
                     * @param MachineCode 机器类型。
- HIO：高IO型。
- HIO10G：高IO万兆。
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取实例数量，最小值1，最大值为10。
                     * @return GoodsNum 实例数量，最小值1，最大值为10。
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，最小值1，最大值为10。
                     * @param GoodsNum 实例数量，最小值1，最大值为10。
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取可用区信息，输入格式如：ap-guangzhou-2。
- 具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。
                     * @return Zone 可用区信息，输入格式如：ap-guangzhou-2。
- 具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，输入格式如：ap-guangzhou-2。
- 具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。
                     * @param Zone 可用区信息，输入格式如：ap-guangzhou-2。
- 具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例架构类型。
- REPLSET：副本集。
- SHARD：分片集群。
                     * @return ClusterType 实例架构类型。
- REPLSET：副本集。
- SHARD：分片集群。
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置实例架构类型。
- REPLSET：副本集。
- SHARD：分片集群。
                     * @param ClusterType 实例架构类型。
- REPLSET：副本集。
- SHARD：分片集群。
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取私有网络ID。如果不设置该参数，则默认选择基础网络。
                     * @return VpcId 私有网络ID。如果不设置该参数，则默认选择基础网络。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。如果不设置该参数，则默认选择基础网络。
                     * @param VpcId 私有网络ID。如果不设置该参数，则默认选择基础网络。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网 ID，如果配置参数 VpcId，则 SubnetId必须配置。
                     * @return SubnetId 私有网络下的子网 ID，如果配置参数 VpcId，则 SubnetId必须配置。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网 ID，如果配置参数 VpcId，则 SubnetId必须配置。
                     * @param SubnetId 私有网络下的子网 ID，如果配置参数 VpcId，则 SubnetId必须配置。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例密码。自定义密码长度为8-32个字符，至少包含字母、数字和字符（!@#%^*()_）中的两种。
                     * @return Password 实例密码。自定义密码长度为8-32个字符，至少包含字母、数字和字符（!@#%^*()_）中的两种。
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码。自定义密码长度为8-32个字符，至少包含字母、数字和字符（!@#%^*()_）中的两种。
                     * @param Password 实例密码。自定义密码长度为8-32个字符，至少包含字母、数字和字符（!@#%^*()_）中的两种。
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取项目ID。若不设置该参数，则为默认项目。
                     * @return ProjectId 项目ID。若不设置该参数，则为默认项目。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。若不设置该参数，则为默认项目。
                     * @param ProjectId 项目ID。若不设置该参数，则为默认项目。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例标签信息。
                     * @return Tags 实例标签信息。
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置实例标签信息。
                     * @param Tags 实例标签信息。
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例类型。
- 1：正式实例。
- 3：只读实例。
- 4：灾备实例。
                     * @return Clone 实例类型。
- 1：正式实例。
- 3：只读实例。
- 4：灾备实例。
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置实例类型。
- 1：正式实例。
- 3：只读实例。
- 4：灾备实例。
                     * @param Clone 实例类型。
- 1：正式实例。
- 3：只读实例。
- 4：灾备实例。
                     */
                    void SetClone(const int64_t& _clone);

                    /**
                     * 判断参数 Clone 是否已赋值
                     * @return Clone 是否已赋值
                     */
                    bool CloneHasBeenSet() const;

                    /**
                     * 获取父实例 ID。当参数**Clone**为3或者4时，即实例为只读或灾备实例时，该参数必须配置。
                     * @return Father 父实例 ID。当参数**Clone**为3或者4时，即实例为只读或灾备实例时，该参数必须配置。
                     */
                    std::string GetFather() const;

                    /**
                     * 设置父实例 ID。当参数**Clone**为3或者4时，即实例为只读或灾备实例时，该参数必须配置。
                     * @param Father 父实例 ID。当参数**Clone**为3或者4时，即实例为只读或灾备实例时，该参数必须配置。
                     */
                    void SetFather(const std::string& _father);

                    /**
                     * 判断参数 Father 是否已赋值
                     * @return Father 是否已赋值
                     */
                    bool FatherHasBeenSet() const;

                    /**
                     * 获取安全组。
                     * @return SecurityGroup 安全组。
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组。
                     * @param SecurityGroup 安全组。
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取克隆实例回档时间。
- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。
- 回档时间范围：仅能回档7天内时间点的数据。
                     * @return RestoreTime 克隆实例回档时间。
- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。
- 回档时间范围：仅能回档7天内时间点的数据。
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置克隆实例回档时间。
- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。
- 回档时间范围：仅能回档7天内时间点的数据。
                     * @param RestoreTime 克隆实例回档时间。
- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。
- 回档时间范围：仅能回档7天内时间点的数据。
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取实例名称。仅支持长度为60个字符的中文、英文、数字、下划线_、分隔符- 。
                     * @return InstanceName 实例名称。仅支持长度为60个字符的中文、英文、数字、下划线_、分隔符- 。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。仅支持长度为60个字符的中文、英文、数字、下划线_、分隔符- 。
                     * @param InstanceName 实例名称。仅支持长度为60个字符的中文、英文、数字、下划线_、分隔符- 。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取多可用区部署的节点列表。具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567)获取。
- 多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。
- 不支持4.2及以上版本。
- 不支持只读灾备实例。
- 不能选择基础网络。
                     * @return AvailabilityZoneList 多可用区部署的节点列表。具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567)获取。
- 多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。
- 不支持4.2及以上版本。
- 不支持只读灾备实例。
- 不能选择基础网络。
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置多可用区部署的节点列表。具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567)获取。
- 多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。
- 不支持4.2及以上版本。
- 不支持只读灾备实例。
- 不能选择基础网络。
                     * @param AvailabilityZoneList 多可用区部署的节点列表。具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567)获取。
- 多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。
- 不支持4.2及以上版本。
- 不支持只读灾备实例。
- 不能选择基础网络。
                     */
                    void SetAvailabilityZoneList(const std::vector<std::string>& _availabilityZoneList);

                    /**
                     * 判断参数 AvailabilityZoneList 是否已赋值
                     * @return AvailabilityZoneList 是否已赋值
                     */
                    bool AvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取Mongos CPU 核数。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @return MongosCpu Mongos CPU 核数。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置Mongos CPU 核数。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @param MongosCpu Mongos CPU 核数。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    void SetMongosCpu(const uint64_t& _mongosCpu);

                    /**
                     * 判断参数 MongosCpu 是否已赋值
                     * @return MongosCpu 是否已赋值
                     */
                    bool MongosCpuHasBeenSet() const;

                    /**
                     * 获取Mongos 内存大小。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @return MongosMemory Mongos 内存大小。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置Mongos 内存大小。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @param MongosMemory Mongos 内存大小。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取Mongos 数量。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @return MongosNodeNum Mongos 数量。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置Mongos 数量。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     * @param MongosNodeNum Mongos 数量。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取只读节点数量，最大不超过7个。
                     * @return ReadonlyNodeNum 只读节点数量，最大不超过7个。
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置只读节点数量，最大不超过7个。
                     * @param ReadonlyNodeNum 只读节点数量，最大不超过7个。
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取指只读节点所属可用区。跨可用区部署实例，参数**ReadonlyNodeNum**不为**0**时，必须配置该参数。
                     * @return ReadonlyNodeAvailabilityZoneList 指只读节点所属可用区。跨可用区部署实例，参数**ReadonlyNodeNum**不为**0**时，必须配置该参数。
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置指只读节点所属可用区。跨可用区部署实例，参数**ReadonlyNodeNum**不为**0**时，必须配置该参数。
                     * @param ReadonlyNodeAvailabilityZoneList 指只读节点所属可用区。跨可用区部署实例，参数**ReadonlyNodeNum**不为**0**时，必须配置该参数。
                     */
                    void SetReadonlyNodeAvailabilityZoneList(const std::vector<std::string>& _readonlyNodeAvailabilityZoneList);

                    /**
                     * 判断参数 ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * @return ReadonlyNodeAvailabilityZoneList 是否已赋值
                     */
                    bool ReadonlyNodeAvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。
                     * @return HiddenZone Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。
                     * @param HiddenZone Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。
                     */
                    void SetHiddenZone(const std::string& _hiddenZone);

                    /**
                     * 判断参数 HiddenZone 是否已赋值
                     * @return HiddenZone 是否已赋值
                     */
                    bool HiddenZoneHasBeenSet() const;

                private:

                    /**
                     * 实例内存大小，单位：GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 指副本集数量。
- 创建副本集实例，该参数只能为1。
- 创建分片实例，指分片的数量。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * 指每个副本集内节点个数。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 指版本信息。具体售卖规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 机器类型。
- HIO：高IO型。
- HIO10G：高IO万兆。
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * 实例数量，最小值1，最大值为10。
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 可用区信息，输入格式如：ap-guangzhou-2。
- 具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例架构类型。
- REPLSET：副本集。
- SHARD：分片集群。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 私有网络ID。如果不设置该参数，则默认选择基础网络。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网 ID，如果配置参数 VpcId，则 SubnetId必须配置。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例密码。自定义密码长度为8-32个字符，至少包含字母、数字和字符（!@#%^*()_）中的两种。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 项目ID。若不设置该参数，则为默认项目。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例标签信息。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例类型。
- 1：正式实例。
- 3：只读实例。
- 4：灾备实例。
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * 父实例 ID。当参数**Clone**为3或者4时，即实例为只读或灾备实例时，该参数必须配置。
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * 安全组。
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 克隆实例回档时间。
- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。
- 回档时间范围：仅能回档7天内时间点的数据。
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * 实例名称。仅支持长度为60个字符的中文、英文、数字、下划线_、分隔符- 。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 多可用区部署的节点列表。具体信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567)获取。
- 多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。
- 不支持4.2及以上版本。
- 不支持只读灾备实例。
- 不能选择基础网络。
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * Mongos CPU 核数。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * Mongos 内存大小。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * Mongos 数量。
- 购买MongoDB 3.6 WiredTiger存储引擎版本以上的分片集群时，可选择性配置该参数。
- 若不配置该参数，则根据Mongod节点规格默认适配 Mongos 规格，默认规格免费。
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * 只读节点数量，最大不超过7个。
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * 指只读节点所属可用区。跨可用区部署实例，参数**ReadonlyNodeNum**不为**0**时，必须配置该参数。
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
