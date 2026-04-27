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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_

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
                * CreateDBInstance请求参数结构体
                */
                class CreateDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceRequest();
                    ~CreateDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * @return NodeNum <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * @param _nodeNum <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * @return Memory <p>实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * @param _memory <p>实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
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
                     * 获取<p>实例硬盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * @return Volume <p>实例硬盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>实例硬盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     * @param _volume <p>实例硬盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
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
                     * 获取<p>指版本信息。具体支持的版本信息 ，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * @return MongoVersion <p>指版本信息。具体支持的版本信息 ，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置<p>指版本信息。具体支持的版本信息 ，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * @param _mongoVersion <p>指版本信息。具体支持的版本信息 ，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例数量, 最小值1，最大值为30。</p>
                     * @return GoodsNum <p>实例数量, 最小值1，最大值为30。</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量, 最小值1，最大值为30。</p>
                     * @param _goodsNum <p>实例数量, 最小值1，最大值为30。</p>
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
                     * 获取<p>可用区信息，输入格式如：ap-guangzhou-2。</p><ul><li>具体信息，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。</li></ul>
                     * @return Zone <p>可用区信息，输入格式如：ap-guangzhou-2。</p><ul><li>具体信息，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。</li></ul>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息，输入格式如：ap-guangzhou-2。</p><ul><li>具体信息，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。</li></ul>
                     * @param _zone <p>可用区信息，输入格式如：ap-guangzhou-2。</p><ul><li>具体信息，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。</li></ul>
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
                     * 获取<p>指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。</p>
                     * @return Period <p>指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。</p>
                     * @param _period <p>指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     * @return MachineCode <p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置<p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     * @param _machineCode <p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取<p>实例架构类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * @return ClusterType <p>实例架构类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>实例架构类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * @param _clusterType <p>实例架构类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     * @return ReplicateSetNum <ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置<ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     * @param _replicateSetNum <ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
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
                     * 获取<p>项目ID。</p><ul><li>若不设置该参数，则为默认项目。</li><li>在 <a href="https://console.cloud.tencent.com/project">MongoDB 控制台项目管理</a>页面，可获取项目ID。</li></ul>
                     * @return ProjectId <p>项目ID。</p><ul><li>若不设置该参数，则为默认项目。</li><li>在 <a href="https://console.cloud.tencent.com/project">MongoDB 控制台项目管理</a>页面，可获取项目ID。</li></ul>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。</p><ul><li>若不设置该参数，则为默认项目。</li><li>在 <a href="https://console.cloud.tencent.com/project">MongoDB 控制台项目管理</a>页面，可获取项目ID。</li></ul>
                     * @param _projectId <p>项目ID。</p><ul><li>若不设置该参数，则为默认项目。</li><li>在 <a href="https://console.cloud.tencent.com/project">MongoDB 控制台项目管理</a>页面，可获取项目ID。</li></ul>
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
                     * 获取<p>私有网络 ID。</p><ul><li>仅支持配置私有网络，必须选择一个与实例同一地域的私有网络。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的私有网络 ID。</li><li>实例创建成功之后，支持更换私有网络。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * @return VpcId <p>私有网络 ID。</p><ul><li>仅支持配置私有网络，必须选择一个与实例同一地域的私有网络。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的私有网络 ID。</li><li>实例创建成功之后，支持更换私有网络。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络 ID。</p><ul><li>仅支持配置私有网络，必须选择一个与实例同一地域的私有网络。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的私有网络 ID。</li><li>实例创建成功之后，支持更换私有网络。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * @param _vpcId <p>私有网络 ID。</p><ul><li>仅支持配置私有网络，必须选择一个与实例同一地域的私有网络。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的私有网络 ID。</li><li>实例创建成功之后，支持更换私有网络。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
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
                     * 获取<p>私有网络 VPC 的子网 ID。</p><ul><li>必须在已选的私有网络内指定一个子网。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的子网 ID。</li><li>实例创建成功之后，支持更换私有网络及子网。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * @return SubnetId <p>私有网络 VPC 的子网 ID。</p><ul><li>必须在已选的私有网络内指定一个子网。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的子网 ID。</li><li>实例创建成功之后，支持更换私有网络及子网。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络 VPC 的子网 ID。</p><ul><li>必须在已选的私有网络内指定一个子网。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的子网 ID。</li><li>实例创建成功之后，支持更换私有网络及子网。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     * @param _subnetId <p>私有网络 VPC 的子网 ID。</p><ul><li>必须在已选的私有网络内指定一个子网。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的子网 ID。</li><li>实例创建成功之后，支持更换私有网络及子网。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
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
                     * 获取<p>实例密码。设置要求如下：</p><ul><li>字符个数为[8,32]。</li><li>可输入[A,Z]、[a,z]、[0,9]范围内的字符。</li><li>可输入的特殊字符包括：感叹号“!”，at“@”，警号“#”、百分号“%”、插入号“^”、星号“*”、括号“()”、下划线“_”。</li><li>不能设置单一的字母或者数字。</li></ul>
                     * @return Password <p>实例密码。设置要求如下：</p><ul><li>字符个数为[8,32]。</li><li>可输入[A,Z]、[a,z]、[0,9]范围内的字符。</li><li>可输入的特殊字符包括：感叹号“!”，at“@”，警号“#”、百分号“%”、插入号“^”、星号“*”、括号“()”、下划线“_”。</li><li>不能设置单一的字母或者数字。</li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>实例密码。设置要求如下：</p><ul><li>字符个数为[8,32]。</li><li>可输入[A,Z]、[a,z]、[0,9]范围内的字符。</li><li>可输入的特殊字符包括：感叹号“!”，at“@”，警号“#”、百分号“%”、插入号“^”、星号“*”、括号“()”、下划线“_”。</li><li>不能设置单一的字母或者数字。</li></ul>
                     * @param _password <p>实例密码。设置要求如下：</p><ul><li>字符个数为[8,32]。</li><li>可输入[A,Z]、[a,z]、[0,9]范围内的字符。</li><li>可输入的特殊字符包括：感叹号“!”，at“@”，警号“#”、百分号“%”、插入号“^”、星号“*”、括号“()”、下划线“_”。</li><li>不能设置单一的字母或者数字。</li></ul>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>实例标签信息。</p>
                     * @return Tags <p>实例标签信息。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>实例标签信息。</p>
                     * @param _tags <p>实例标签信息。</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记。</p><ul><li>0：不自动续费。</li><li>1：自动续费。</li></ul>
                     * @return AutoRenewFlag <p>自动续费标记。</p><ul><li>0：不自动续费。</li><li>1：自动续费。</li></ul>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记。</p><ul><li>0：不自动续费。</li><li>1：自动续费。</li></ul>
                     * @param _autoRenewFlag <p>自动续费标记。</p><ul><li>0：不自动续费。</li><li>1：自动续费。</li></ul>
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券。</p><ul><li>1：是。</li><li>0：否。默认为0。</li></ul>
                     * @return AutoVoucher <p>是否自动选择代金券。</p><ul><li>1：是。</li><li>0：否。默认为0。</li></ul>
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券。</p><ul><li>1：是。</li><li>0：否。默认为0。</li></ul>
                     * @param _autoVoucher <p>是否自动选择代金券。</p><ul><li>1：是。</li><li>0：否。默认为0。</li></ul>
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p><ul><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li><li>5：克隆实例。注意：克隆实例 RestoreTime 为必填项。</li></ul>
                     * @return Clone <p>实例类型。</p><ul><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li><li>5：克隆实例。注意：克隆实例 RestoreTime 为必填项。</li></ul>
                     * 
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置<p>实例类型。</p><ul><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li><li>5：克隆实例。注意：克隆实例 RestoreTime 为必填项。</li></ul>
                     * @param _clone <p>实例类型。</p><ul><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li><li>5：克隆实例。注意：克隆实例 RestoreTime 为必填项。</li></ul>
                     * 
                     */
                    void SetClone(const int64_t& _clone);

                    /**
                     * 判断参数 Clone 是否已赋值
                     * @return Clone 是否已赋值
                     * 
                     */
                    bool CloneHasBeenSet() const;

                    /**
                     * 获取<p>父实例 ID。</p><ul><li>当参数<strong>Clone</strong>为3或者4时，即实例为只读或灾备实例时，该参数必须配置。</li><li>请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制父实例 ID。</li></ul>
                     * @return Father <p>父实例 ID。</p><ul><li>当参数<strong>Clone</strong>为3或者4时，即实例为只读或灾备实例时，该参数必须配置。</li><li>请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制父实例 ID。</li></ul>
                     * 
                     */
                    std::string GetFather() const;

                    /**
                     * 设置<p>父实例 ID。</p><ul><li>当参数<strong>Clone</strong>为3或者4时，即实例为只读或灾备实例时，该参数必须配置。</li><li>请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制父实例 ID。</li></ul>
                     * @param _father <p>父实例 ID。</p><ul><li>当参数<strong>Clone</strong>为3或者4时，即实例为只读或灾备实例时，该参数必须配置。</li><li>请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制父实例 ID。</li></ul>
                     * 
                     */
                    void SetFather(const std::string& _father);

                    /**
                     * 判断参数 Father 是否已赋值
                     * @return Father 是否已赋值
                     * 
                     */
                    bool FatherHasBeenSet() const;

                    /**
                     * 获取<p>安全组 ID。 请登录<a href="https://console.cloud.tencent.com/vpc/security-group">安全组控制台</a>页面获取与数据库实例同地域的安全组 ID。</p>
                     * @return SecurityGroup <p>安全组 ID。 请登录<a href="https://console.cloud.tencent.com/vpc/security-group">安全组控制台</a>页面获取与数据库实例同地域的安全组 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>安全组 ID。 请登录<a href="https://console.cloud.tencent.com/vpc/security-group">安全组控制台</a>页面获取与数据库实例同地域的安全组 ID。</p>
                     * @param _securityGroup <p>安全组 ID。 请登录<a href="https://console.cloud.tencent.com/vpc/security-group">安全组控制台</a>页面获取与数据库实例同地域的安全组 ID。</p>
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
                     * 获取<p>克隆实例回档时间，当Clone取值为5或6时为必填。- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。- 回档时间范围：仅能回档7天内时间点的数据。</p>
                     * @return RestoreTime <p>克隆实例回档时间，当Clone取值为5或6时为必填。- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。- 回档时间范围：仅能回档7天内时间点的数据。</p>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>克隆实例回档时间，当Clone取值为5或6时为必填。- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。- 回档时间范围：仅能回档7天内时间点的数据。</p>
                     * @param _restoreTime <p>克隆实例回档时间，当Clone取值为5或6时为必填。- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。- 回档时间范围：仅能回档7天内时间点的数据。</p>
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。仅支持长度为128个字符的中文、英文、数字、下划线_、分隔符-。批量购买数据库实例时，支持通过自定义命名模式串与数字后缀自动升序功能，高效设置实例名称。</p><ul><li>基础模式：前缀＋自动升序编号（默认从1开始），<strong>lnstanceName</strong>仅需自定义实例名称前缀，例如设置为：cmgo，设置购买数量为5，则购买后，实例名称依次分别为cmgo1、cmgo2、cmgo3、cmgo4、cmgo5。</li><li>自定义起始序号模式：前缀+｛R:x｝（x为自定义起始序号）。<strong>InstanceName</strong>需填写“前缀｛R:x｝”，例如：cmgo｛R:3｝，设置购买数量为5，则实例名称为cmgo3、cmgo4、cmgo5、cmgo6、cmgo7。</li><li>复合模式串：前缀1{R:x}+前缀2{R:y}+ ⋯+固定后缀，x与y分别为每一段前缀的起始序号。<strong>instanceName</strong>需填写复合模式串，例如：cmgo{R:10}_node{R:12}_db，设置批量购买数量为5，则实例名称为 cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, cluster14_node16_db.</li></ul>
                     * @return InstanceName <p>实例名称。仅支持长度为128个字符的中文、英文、数字、下划线_、分隔符-。批量购买数据库实例时，支持通过自定义命名模式串与数字后缀自动升序功能，高效设置实例名称。</p><ul><li>基础模式：前缀＋自动升序编号（默认从1开始），<strong>lnstanceName</strong>仅需自定义实例名称前缀，例如设置为：cmgo，设置购买数量为5，则购买后，实例名称依次分别为cmgo1、cmgo2、cmgo3、cmgo4、cmgo5。</li><li>自定义起始序号模式：前缀+｛R:x｝（x为自定义起始序号）。<strong>InstanceName</strong>需填写“前缀｛R:x｝”，例如：cmgo｛R:3｝，设置购买数量为5，则实例名称为cmgo3、cmgo4、cmgo5、cmgo6、cmgo7。</li><li>复合模式串：前缀1{R:x}+前缀2{R:y}+ ⋯+固定后缀，x与y分别为每一段前缀的起始序号。<strong>instanceName</strong>需填写复合模式串，例如：cmgo{R:10}_node{R:12}_db，设置批量购买数量为5，则实例名称为 cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, cluster14_node16_db.</li></ul>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。仅支持长度为128个字符的中文、英文、数字、下划线_、分隔符-。批量购买数据库实例时，支持通过自定义命名模式串与数字后缀自动升序功能，高效设置实例名称。</p><ul><li>基础模式：前缀＋自动升序编号（默认从1开始），<strong>lnstanceName</strong>仅需自定义实例名称前缀，例如设置为：cmgo，设置购买数量为5，则购买后，实例名称依次分别为cmgo1、cmgo2、cmgo3、cmgo4、cmgo5。</li><li>自定义起始序号模式：前缀+｛R:x｝（x为自定义起始序号）。<strong>InstanceName</strong>需填写“前缀｛R:x｝”，例如：cmgo｛R:3｝，设置购买数量为5，则实例名称为cmgo3、cmgo4、cmgo5、cmgo6、cmgo7。</li><li>复合模式串：前缀1{R:x}+前缀2{R:y}+ ⋯+固定后缀，x与y分别为每一段前缀的起始序号。<strong>instanceName</strong>需填写复合模式串，例如：cmgo{R:10}_node{R:12}_db，设置批量购买数量为5，则实例名称为 cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, cluster14_node16_db.</li></ul>
                     * @param _instanceName <p>实例名称。仅支持长度为128个字符的中文、英文、数字、下划线_、分隔符-。批量购买数据库实例时，支持通过自定义命名模式串与数字后缀自动升序功能，高效设置实例名称。</p><ul><li>基础模式：前缀＋自动升序编号（默认从1开始），<strong>lnstanceName</strong>仅需自定义实例名称前缀，例如设置为：cmgo，设置购买数量为5，则购买后，实例名称依次分别为cmgo1、cmgo2、cmgo3、cmgo4、cmgo5。</li><li>自定义起始序号模式：前缀+｛R:x｝（x为自定义起始序号）。<strong>InstanceName</strong>需填写“前缀｛R:x｝”，例如：cmgo｛R:3｝，设置购买数量为5，则实例名称为cmgo3、cmgo4、cmgo5、cmgo6、cmgo7。</li><li>复合模式串：前缀1{R:x}+前缀2{R:y}+ ⋯+固定后缀，x与y分别为每一段前缀的起始序号。<strong>instanceName</strong>需填写复合模式串，例如：cmgo{R:10}_node{R:12}_db，设置批量购买数量为5，则实例名称为 cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, cluster14_node16_db.</li></ul>
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
                     * 获取<p>若多可用区部署云数据库实例，指定多可用区列表。</p><ul><li>多可用区部署实例，参数 <strong>Zone</strong> 指定实例主可用区信息；<strong>AvailabilityZoneList</strong> 指定所有可用区信息，包含主可用区。输入格式如：[ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4]。</li><li>通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 可获取云数据库不同地域规划的可用区信息，以便指定有效的可用区。</li><li>多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。</li></ul>
                     * @return AvailabilityZoneList <p>若多可用区部署云数据库实例，指定多可用区列表。</p><ul><li>多可用区部署实例，参数 <strong>Zone</strong> 指定实例主可用区信息；<strong>AvailabilityZoneList</strong> 指定所有可用区信息，包含主可用区。输入格式如：[ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4]。</li><li>通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 可获取云数据库不同地域规划的可用区信息，以便指定有效的可用区。</li><li>多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置<p>若多可用区部署云数据库实例，指定多可用区列表。</p><ul><li>多可用区部署实例，参数 <strong>Zone</strong> 指定实例主可用区信息；<strong>AvailabilityZoneList</strong> 指定所有可用区信息，包含主可用区。输入格式如：[ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4]。</li><li>通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 可获取云数据库不同地域规划的可用区信息，以便指定有效的可用区。</li><li>多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。</li></ul>
                     * @param _availabilityZoneList <p>若多可用区部署云数据库实例，指定多可用区列表。</p><ul><li>多可用区部署实例，参数 <strong>Zone</strong> 指定实例主可用区信息；<strong>AvailabilityZoneList</strong> 指定所有可用区信息，包含主可用区。输入格式如：[ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4]。</li><li>通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 可获取云数据库不同地域规划的可用区信息，以便指定有效的可用区。</li><li>多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。</li></ul>
                     * 
                     */
                    void SetAvailabilityZoneList(const std::vector<std::string>& _availabilityZoneList);

                    /**
                     * 判断参数 AvailabilityZoneList 是否已赋值
                     * @return AvailabilityZoneList 是否已赋值
                     * 
                     */
                    bool AvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取<p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。</p>
                     * @return MongosCpu <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。</p>
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置<p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。</p>
                     * @param _mongosCpu <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。</p>
                     * 
                     */
                    void SetMongosCpu(const uint64_t& _mongosCpu);

                    /**
                     * 判断参数 MongosCpu 是否已赋值
                     * @return MongosCpu 是否已赋值
                     * 
                     */
                    bool MongosCpuHasBeenSet() const;

                    /**
                     * 获取<p>Mongos 内存大小。</p><ul><li>购买分片集群时，必须填写。</li><li>单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。</li></ul>
                     * @return MongosMemory <p>Mongos 内存大小。</p><ul><li>购买分片集群时，必须填写。</li><li>单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。</li></ul>
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置<p>Mongos 内存大小。</p><ul><li>购买分片集群时，必须填写。</li><li>单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。</li></ul>
                     * @param _mongosMemory <p>Mongos 内存大小。</p><ul><li>购买分片集群时，必须填写。</li><li>单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。</li></ul>
                     * 
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取<p>Mongos 数量。购买分片集群时，必须填写。</p><ul><li>单可用区部署实例，其数量范围为[3,32]。</li><li>多可用区部署实例，其数量范围为[6,32]。</li></ul>
                     * @return MongosNodeNum <p>Mongos 数量。购买分片集群时，必须填写。</p><ul><li>单可用区部署实例，其数量范围为[3,32]。</li><li>多可用区部署实例，其数量范围为[6,32]。</li></ul>
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置<p>Mongos 数量。购买分片集群时，必须填写。</p><ul><li>单可用区部署实例，其数量范围为[3,32]。</li><li>多可用区部署实例，其数量范围为[6,32]。</li></ul>
                     * @param _mongosNodeNum <p>Mongos 数量。购买分片集群时，必须填写。</p><ul><li>单可用区部署实例，其数量范围为[3,32]。</li><li>多可用区部署实例，其数量范围为[6,32]。</li></ul>
                     * 
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     * 
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>只读节点数量，取值范围[0,5]。</p>
                     * @return ReadonlyNodeNum <p>只读节点数量，取值范围[0,5]。</p>
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置<p>只读节点数量，取值范围[0,5]。</p>
                     * @param _readonlyNodeNum <p>只读节点数量，取值范围[0,5]。</p>
                     * 
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>指只读节点所属可用区数组。跨可用区部署实例，参数<strong>ReadonlyNodeNum</strong>不为<strong>0</strong>时，必须配置该参数。</p>
                     * @return ReadonlyNodeAvailabilityZoneList <p>指只读节点所属可用区数组。跨可用区部署实例，参数<strong>ReadonlyNodeNum</strong>不为<strong>0</strong>时，必须配置该参数。</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置<p>指只读节点所属可用区数组。跨可用区部署实例，参数<strong>ReadonlyNodeNum</strong>不为<strong>0</strong>时，必须配置该参数。</p>
                     * @param _readonlyNodeAvailabilityZoneList <p>指只读节点所属可用区数组。跨可用区部署实例，参数<strong>ReadonlyNodeNum</strong>不为<strong>0</strong>时，必须配置该参数。</p>
                     * 
                     */
                    void SetReadonlyNodeAvailabilityZoneList(const std::vector<std::string>& _readonlyNodeAvailabilityZoneList);

                    /**
                     * 判断参数 ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * @return ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeAvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取<p>Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。</p>
                     * @return HiddenZone <p>Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。</p>
                     * 
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置<p>Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。</p>
                     * @param _hiddenZone <p>Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。</p>
                     * 
                     */
                    void SetHiddenZone(const std::string& _hiddenZone);

                    /**
                     * 判断参数 HiddenZone 是否已赋值
                     * @return HiddenZone 是否已赋值
                     * 
                     */
                    bool HiddenZoneHasBeenSet() const;

                    /**
                     * 获取<p>参数模板 ID。</p><ul><li>参数模板是预置了特定参数值的集合，可用于快速配置新的 MongoDB 实例。合理使用参数模板，能有效提升数据库的部署效率与运行性能。</li><li>参数模板 ID 可通过 <a href="https://cloud.tencent.com/document/product/240/109155">DescribeDBInstanceParamTpl </a>接口获取。请选择与实例版本与架构所对应的参数模板 ID。</li></ul>
                     * @return ParamTemplateId <p>参数模板 ID。</p><ul><li>参数模板是预置了特定参数值的集合，可用于快速配置新的 MongoDB 实例。合理使用参数模板，能有效提升数据库的部署效率与运行性能。</li><li>参数模板 ID 可通过 <a href="https://cloud.tencent.com/document/product/240/109155">DescribeDBInstanceParamTpl </a>接口获取。请选择与实例版本与架构所对应的参数模板 ID。</li></ul>
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>参数模板 ID。</p><ul><li>参数模板是预置了特定参数值的集合，可用于快速配置新的 MongoDB 实例。合理使用参数模板，能有效提升数据库的部署效率与运行性能。</li><li>参数模板 ID 可通过 <a href="https://cloud.tencent.com/document/product/240/109155">DescribeDBInstanceParamTpl </a>接口获取。请选择与实例版本与架构所对应的参数模板 ID。</li></ul>
                     * @param _paramTemplateId <p>参数模板 ID。</p><ul><li>参数模板是预置了特定参数值的集合，可用于快速配置新的 MongoDB 实例。合理使用参数模板，能有效提升数据库的部署效率与运行性能。</li><li>参数模板 ID 可通过 <a href="https://cloud.tencent.com/document/product/240/109155">DescribeDBInstanceParamTpl </a>接口获取。请选择与实例版本与架构所对应的参数模板 ID。</li></ul>
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>实例CPU核大小，单位：C。具体售卖的CPU规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取<br>注意：通用 I 型实例必须设置 CPU 大小。</p>
                     * @return CpuCore <p>实例CPU核大小，单位：C。具体售卖的CPU规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取<br>注意：通用 I 型实例必须设置 CPU 大小。</p>
                     * 
                     */
                    int64_t GetCpuCore() const;

                    /**
                     * 设置<p>实例CPU核大小，单位：C。具体售卖的CPU规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取<br>注意：通用 I 型实例必须设置 CPU 大小。</p>
                     * @param _cpuCore <p>实例CPU核大小，单位：C。具体售卖的CPU规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取<br>注意：通用 I 型实例必须设置 CPU 大小。</p>
                     * 
                     */
                    void SetCpuCore(const int64_t& _cpuCore);

                    /**
                     * 判断参数 CpuCore 是否已赋值
                     * @return CpuCore 是否已赋值
                     * 
                     */
                    bool CpuCoreHasBeenSet() const;

                private:

                    /**
                     * <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例硬盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>指版本信息。具体支持的版本信息 ，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * <p>实例数量, 最小值1，最大值为30。</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>可用区信息，输入格式如：ap-guangzhou-2。</p><ul><li>具体信息，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>该参数为主可用区，如果多可用区部署，Zone必须是AvailabilityZoneList中的一个。</li></ul>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * <p>实例架构类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <p>项目ID。</p><ul><li>若不设置该参数，则为默认项目。</li><li>在 <a href="https://console.cloud.tencent.com/project">MongoDB 控制台项目管理</a>页面，可获取项目ID。</li></ul>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>私有网络 ID。</p><ul><li>仅支持配置私有网络，必须选择一个与实例同一地域的私有网络。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的私有网络 ID。</li><li>实例创建成功之后，支持更换私有网络。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络 VPC 的子网 ID。</p><ul><li>必须在已选的私有网络内指定一个子网。请登录<a href="https://console.cloud.tencent.com/vpc">私有网络控制台</a>获取可使用的子网 ID。</li><li>实例创建成功之后，支持更换私有网络及子网。具体操作，请参见<a href="https://cloud.tencent.com/document/product/239/30910">更换网络</a>。</li></ul>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例密码。设置要求如下：</p><ul><li>字符个数为[8,32]。</li><li>可输入[A,Z]、[a,z]、[0,9]范围内的字符。</li><li>可输入的特殊字符包括：感叹号“!”，at“@”，警号“#”、百分号“%”、插入号“^”、星号“*”、括号“()”、下划线“_”。</li><li>不能设置单一的字母或者数字。</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>实例标签信息。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动续费标记。</p><ul><li>0：不自动续费。</li><li>1：自动续费。</li></ul>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>是否自动选择代金券。</p><ul><li>1：是。</li><li>0：否。默认为0。</li></ul>
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>实例类型。</p><ul><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li><li>5：克隆实例。注意：克隆实例 RestoreTime 为必填项。</li></ul>
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * <p>父实例 ID。</p><ul><li>当参数<strong>Clone</strong>为3或者4时，即实例为只读或灾备实例时，该参数必须配置。</li><li>请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制父实例 ID。</li></ul>
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * <p>安全组 ID。 请登录<a href="https://console.cloud.tencent.com/vpc/security-group">安全组控制台</a>页面获取与数据库实例同地域的安全组 ID。</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>克隆实例回档时间，当Clone取值为5或6时为必填。- 若为克隆实例，则必须配置该参数。输入格式示例：2021-08-13 16:30:00。- 回档时间范围：仅能回档7天内时间点的数据。</p>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * <p>实例名称。仅支持长度为128个字符的中文、英文、数字、下划线_、分隔符-。批量购买数据库实例时，支持通过自定义命名模式串与数字后缀自动升序功能，高效设置实例名称。</p><ul><li>基础模式：前缀＋自动升序编号（默认从1开始），<strong>lnstanceName</strong>仅需自定义实例名称前缀，例如设置为：cmgo，设置购买数量为5，则购买后，实例名称依次分别为cmgo1、cmgo2、cmgo3、cmgo4、cmgo5。</li><li>自定义起始序号模式：前缀+｛R:x｝（x为自定义起始序号）。<strong>InstanceName</strong>需填写“前缀｛R:x｝”，例如：cmgo｛R:3｝，设置购买数量为5，则实例名称为cmgo3、cmgo4、cmgo5、cmgo6、cmgo7。</li><li>复合模式串：前缀1{R:x}+前缀2{R:y}+ ⋯+固定后缀，x与y分别为每一段前缀的起始序号。<strong>instanceName</strong>需填写复合模式串，例如：cmgo{R:10}_node{R:12}_db，设置批量购买数量为5，则实例名称为 cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, cluster14_node16_db.</li></ul>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>若多可用区部署云数据库实例，指定多可用区列表。</p><ul><li>多可用区部署实例，参数 <strong>Zone</strong> 指定实例主可用区信息；<strong>AvailabilityZoneList</strong> 指定所有可用区信息，包含主可用区。输入格式如：[ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4]。</li><li>通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 可获取云数据库不同地域规划的可用区信息，以便指定有效的可用区。</li><li>多可用区部署节点只能部署在3个不同可用区。不支持将集群的大多数节点部署在同一个可用区。例如：3节点集群不支持2个节点部署在同一个区。</li></ul>
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。</p>
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * <p>Mongos 内存大小。</p><ul><li>购买分片集群时，必须填写。</li><li>单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。</li></ul>
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>Mongos 数量。购买分片集群时，必须填写。</p><ul><li>单可用区部署实例，其数量范围为[3,32]。</li><li>多可用区部署实例，其数量范围为[6,32]。</li></ul>
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * <p>只读节点数量，取值范围[0,5]。</p>
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * <p>指只读节点所属可用区数组。跨可用区部署实例，参数<strong>ReadonlyNodeNum</strong>不为<strong>0</strong>时，必须配置该参数。</p>
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * <p>Hidden节点所属可用区。跨可用区部署实例，必须配置该参数。</p>
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                    /**
                     * <p>参数模板 ID。</p><ul><li>参数模板是预置了特定参数值的集合，可用于快速配置新的 MongoDB 实例。合理使用参数模板，能有效提升数据库的部署效率与运行性能。</li><li>参数模板 ID 可通过 <a href="https://cloud.tencent.com/document/product/240/109155">DescribeDBInstanceParamTpl </a>接口获取。请选择与实例版本与架构所对应的参数模板 ID。</li></ul>
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>实例CPU核大小，单位：C。具体售卖的CPU规格，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取<br>注意：通用 I 型实例必须设置 CPU 大小。</p>
                     */
                    int64_t m_cpuCore;
                    bool m_cpuCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_
