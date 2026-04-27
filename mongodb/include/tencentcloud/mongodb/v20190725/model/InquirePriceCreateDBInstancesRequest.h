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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * InquirePriceCreateDBInstances请求参数结构体
                */
                class InquirePriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateDBInstancesRequest();
                    ~InquirePriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例所属区域及可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * @return Zone <p>实例所属区域及可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所属区域及可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * @param _zone <p>实例所属区域及可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
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
                     * 获取<ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * @return NodeNum <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置<ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * @param _nodeNum <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>实例内存大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li></ul>
                     * @return Memory <p>实例内存大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li></ul>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li></ul>
                     * @param _memory <p>实例内存大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li></ul>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例硬盘大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MinStorage与MaxStorage分别对应其最小磁盘规格与最大磁盘规格。</li></ul>
                     * @return Volume <p>实例硬盘大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MinStorage与MaxStorage分别对应其最小磁盘规格与最大磁盘规格。</li></ul>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>实例硬盘大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MinStorage与MaxStorage分别对应其最小磁盘规格与最大磁盘规格。</li></ul>
                     * @param _volume <p>实例硬盘大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MinStorage与MaxStorage分别对应其最小磁盘规格与最大磁盘规格。</li></ul>
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取<p>实例版本信息。具体支持的版本，请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MongoVersionCode为实例所支持的版本信息。版本信息与版本号对应关系如下：</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * @return MongoVersion <p>实例版本信息。具体支持的版本，请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MongoVersionCode为实例所支持的版本信息。版本信息与版本号对应关系如下：</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置<p>实例版本信息。具体支持的版本，请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MongoVersionCode为实例所支持的版本信息。版本信息与版本号对应关系如下：</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     * @param _mongoVersion <p>实例版本信息。具体支持的版本，请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MongoVersionCode为实例所支持的版本信息。版本信息与版本号对应关系如下：</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
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
                     * 获取<p>实例数量，取值范围为[1,10]。</p>
                     * @return GoodsNum <p>实例数量，取值范围为[1,10]。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，取值范围为[1,10]。</p>
                     * @param _goodsNum <p>实例数量，取值范围为[1,10]。</p>
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * @return ClusterType <p>实例类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>实例类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     * @param _clusterType <p>实例类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
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
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置<ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     * @param _replicateSetNum <ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     * 
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取<ul><li>选择包年包月计费模式，即 <b>InstanceChargeType </b>设定为<b>PREPAID</b>时，必须设置该参数，指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。<br>-选择按量计费，即 <b>InstanceChargeType</b> 设定为 <strong>POSTPAID_BY_HOUR</strong> 时，该参数仅可配置为 1。</li></ul>
                     * @return Period <ul><li>选择包年包月计费模式，即 <b>InstanceChargeType </b>设定为<b>PREPAID</b>时，必须设置该参数，指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。<br>-选择按量计费，即 <b>InstanceChargeType</b> 设定为 <strong>POSTPAID_BY_HOUR</strong> 时，该参数仅可配置为 1。</li></ul>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<ul><li>选择包年包月计费模式，即 <b>InstanceChargeType </b>设定为<b>PREPAID</b>时，必须设置该参数，指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。<br>-选择按量计费，即 <b>InstanceChargeType</b> 设定为 <strong>POSTPAID_BY_HOUR</strong> 时，该参数仅可配置为 1。</li></ul>
                     * @param _period <ul><li>选择包年包月计费模式，即 <b>InstanceChargeType </b>设定为<b>PREPAID</b>时，必须设置该参数，指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。<br>-选择按量计费，即 <b>InstanceChargeType</b> 设定为 <strong>POSTPAID_BY_HOUR</strong> 时，该参数仅可配置为 1。</li></ul>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>实例付费方式。</p><ul><li>PREPAID：包年包月计费。</li><li>POSTPAID_BY_HOUR：按量计费。</li></ul>
                     * @return InstanceChargeType <p>实例付费方式。</p><ul><li>PREPAID：包年包月计费。</li><li>POSTPAID_BY_HOUR：按量计费。</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例付费方式。</p><ul><li>PREPAID：包年包月计费。</li><li>POSTPAID_BY_HOUR：按量计费。</li></ul>
                     * @param _instanceChargeType <p>实例付费方式。</p><ul><li>PREPAID：包年包月计费。</li><li>POSTPAID_BY_HOUR：按量计费。</li></ul>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。注意为空时取默认取值为2C。</p>
                     * @return MongosCpu <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。注意为空时取默认取值为2C。</p>
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置<p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。注意为空时取默认取值为2C。</p>
                     * @param _mongosCpu <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。注意为空时取默认取值为2C。</p>
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
                     * 获取<p>Mongos 内存大小。-  购买分片集群时，必须填写。- 单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。注意为空时取默认取值为4G。</p>
                     * @return MongosMemory <p>Mongos 内存大小。-  购买分片集群时，必须填写。- 单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。注意为空时取默认取值为4G。</p>
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置<p>Mongos 内存大小。-  购买分片集群时，必须填写。- 单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。注意为空时取默认取值为4G。</p>
                     * @param _mongosMemory <p>Mongos 内存大小。-  购买分片集群时，必须填写。- 单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。注意为空时取默认取值为4G。</p>
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
                     * 获取<p>指 Mongos 个数，取值范围为[3,32]。若为分片集群实例询价，则该参数必须设置。注意为空时取默认取值为3个节点。</p>
                     * @return MongosNum <p>指 Mongos 个数，取值范围为[3,32]。若为分片集群实例询价，则该参数必须设置。注意为空时取默认取值为3个节点。</p>
                     * 
                     */
                    uint64_t GetMongosNum() const;

                    /**
                     * 设置<p>指 Mongos 个数，取值范围为[3,32]。若为分片集群实例询价，则该参数必须设置。注意为空时取默认取值为3个节点。</p>
                     * @param _mongosNum <p>指 Mongos 个数，取值范围为[3,32]。若为分片集群实例询价，则该参数必须设置。注意为空时取默认取值为3个节点。</p>
                     * 
                     */
                    void SetMongosNum(const uint64_t& _mongosNum);

                    /**
                     * 判断参数 MongosNum 是否已赋值
                     * @return MongosNum 是否已赋值
                     * 
                     */
                    bool MongosNumHasBeenSet() const;

                    /**
                     * 获取<p>指 ConfigServer CPU核数，固定取值为 1，单位：GB，可不配置该参数。</p>
                     * @return ConfigServerCpu <p>指 ConfigServer CPU核数，固定取值为 1，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    uint64_t GetConfigServerCpu() const;

                    /**
                     * 设置<p>指 ConfigServer CPU核数，固定取值为 1，单位：GB，可不配置该参数。</p>
                     * @param _configServerCpu <p>指 ConfigServer CPU核数，固定取值为 1，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    void SetConfigServerCpu(const uint64_t& _configServerCpu);

                    /**
                     * 判断参数 ConfigServerCpu 是否已赋值
                     * @return ConfigServerCpu 是否已赋值
                     * 
                     */
                    bool ConfigServerCpuHasBeenSet() const;

                    /**
                     * 获取<p>指 ConfigServer 内存大小，固定取值为 2，单位：GB，可不配置该参数。</p>
                     * @return ConfigServerMemory <p>指 ConfigServer 内存大小，固定取值为 2，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    uint64_t GetConfigServerMemory() const;

                    /**
                     * 设置<p>指 ConfigServer 内存大小，固定取值为 2，单位：GB，可不配置该参数。</p>
                     * @param _configServerMemory <p>指 ConfigServer 内存大小，固定取值为 2，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    void SetConfigServerMemory(const uint64_t& _configServerMemory);

                    /**
                     * 判断参数 ConfigServerMemory 是否已赋值
                     * @return ConfigServerMemory 是否已赋值
                     * 
                     */
                    bool ConfigServerMemoryHasBeenSet() const;

                    /**
                     * 获取<p>指 ConfigServer 磁盘大小，固定取值为 20，单位：GB，可不配置该参数。</p>
                     * @return ConfigServerVolume <p>指 ConfigServer 磁盘大小，固定取值为 20，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    uint64_t GetConfigServerVolume() const;

                    /**
                     * 设置<p>指 ConfigServer 磁盘大小，固定取值为 20，单位：GB，可不配置该参数。</p>
                     * @param _configServerVolume <p>指 ConfigServer 磁盘大小，固定取值为 20，单位：GB，可不配置该参数。</p>
                     * 
                     */
                    void SetConfigServerVolume(const uint64_t& _configServerVolume);

                    /**
                     * 判断参数 ConfigServerVolume 是否已赋值
                     * @return ConfigServerVolume 是否已赋值
                     * 
                     */
                    bool ConfigServerVolumeHasBeenSet() const;

                    /**
                     * 获取<ul><li>创建副本集实例，指每个副本集内只读节点数量。 </li><li>创建分片集群实例，指每个分片的只读节点数量。<br>取值范围为［1,5］。</li></ul>
                     * @return ReadonlyNodeNum <ul><li>创建副本集实例，指每个副本集内只读节点数量。 </li><li>创建分片集群实例，指每个分片的只读节点数量。<br>取值范围为［1,5］。</li></ul>
                     * 
                     */
                    int64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置<ul><li>创建副本集实例，指每个副本集内只读节点数量。 </li><li>创建分片集群实例，指每个分片的只读节点数量。<br>取值范围为［1,5］。</li></ul>
                     * @param _readonlyNodeNum <ul><li>创建副本集实例，指每个副本集内只读节点数量。 </li><li>创建分片集群实例，指每个分片的只读节点数量。<br>取值范围为［1,5］。</li></ul>
                     * 
                     */
                    void SetReadonlyNodeNum(const int64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>实例CPU大小。</p><ul><li>单位：C。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li><li>注意：通用 I 型实例询价时必须传入与内存对应的 CPU 核数大小</li></ul>
                     * @return Cpu <p>实例CPU大小。</p><ul><li>单位：C。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li><li>注意：通用 I 型实例询价时必须传入与内存对应的 CPU 核数大小</li></ul>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例CPU大小。</p><ul><li>单位：C。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li><li>注意：通用 I 型实例询价时必须传入与内存对应的 CPU 核数大小</li></ul>
                     * @param _cpu <p>实例CPU大小。</p><ul><li>单位：C。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li><li>注意：通用 I 型实例询价时必须传入与内存对应的 CPU 核数大小</li></ul>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * <p>实例所属区域及可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <ul><li>创建副本集实例，指每个副本集内主从节点数量。每个副本集所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li><li>创建分片集群实例，指每个分片的主从节点数量。每个分片所支持的最大节点数与最小节点数，请通过接口 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 获取。</li></ul>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>实例内存大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li></ul>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例硬盘大小。</p><ul><li>单位：GB。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MinStorage与MaxStorage分别对应其最小磁盘规格与最大磁盘规格。</li></ul>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>实例版本信息。具体支持的版本，请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数MongoVersionCode为实例所支持的版本信息。版本信息与版本号对应关系如下：</p><ul><li>MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。</li><li>MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。</li><li>MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。</li><li>MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。</li><li>MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。</li><li>MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。</li><li>MONGO_80_WT：MongoDB 8.0 WiredTiger存储引擎版本。</li></ul>
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * <p>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</p>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * <p>实例数量，取值范围为[1,10]。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>实例类型。</p><ul><li>REPLSET：副本集。</li><li>SHARD：分片集群。</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <ul><li>创建副本集实例，指副本集数量，该参数只能为1。</li><li>创建分片集群实例，指分片的数量。请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询分片数量的取值范围，其返回的数据结构SpecItems中的参数MinReplicateSetNum与MaxReplicateSetNum分别对应其最小值与最大值。</li></ul>
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <ul><li>选择包年包月计费模式，即 <b>InstanceChargeType </b>设定为<b>PREPAID</b>时，必须设置该参数，指定购买实例的购买时长。取值可选：[1,2,3,4,5,6,7,8,9,10,11,12,24,36]；单位：月。<br>-选择按量计费，即 <b>InstanceChargeType</b> 设定为 <strong>POSTPAID_BY_HOUR</strong> 时，该参数仅可配置为 1。</li></ul>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>实例付费方式。</p><ul><li>PREPAID：包年包月计费。</li><li>POSTPAID_BY_HOUR：按量计费。</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Mongos CPU 核数，支持1、2、4、8、16。购买分片集群时，必须填写。注意为空时取默认取值为2C。</p>
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * <p>Mongos 内存大小。-  购买分片集群时，必须填写。- 单位：GB，支持1核2GB、2核4GB、4核8GB、8核16GB、16核32GB。注意为空时取默认取值为4G。</p>
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>指 Mongos 个数，取值范围为[3,32]。若为分片集群实例询价，则该参数必须设置。注意为空时取默认取值为3个节点。</p>
                     */
                    uint64_t m_mongosNum;
                    bool m_mongosNumHasBeenSet;

                    /**
                     * <p>指 ConfigServer CPU核数，固定取值为 1，单位：GB，可不配置该参数。</p>
                     */
                    uint64_t m_configServerCpu;
                    bool m_configServerCpuHasBeenSet;

                    /**
                     * <p>指 ConfigServer 内存大小，固定取值为 2，单位：GB，可不配置该参数。</p>
                     */
                    uint64_t m_configServerMemory;
                    bool m_configServerMemoryHasBeenSet;

                    /**
                     * <p>指 ConfigServer 磁盘大小，固定取值为 20，单位：GB，可不配置该参数。</p>
                     */
                    uint64_t m_configServerVolume;
                    bool m_configServerVolumeHasBeenSet;

                    /**
                     * <ul><li>创建副本集实例，指每个副本集内只读节点数量。 </li><li>创建分片集群实例，指每个分片的只读节点数量。<br>取值范围为［1,5］。</li></ul>
                     */
                    int64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * <p>实例CPU大小。</p><ul><li>单位：C。</li><li>取值范围：请通过接口<a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a>查询，其返回的数据结构SpecItems中的参数CPU与Memory分别对应CPU核数与内存规格。</li><li>注意：通用 I 型实例询价时必须传入与内存对应的 CPU 核数大小</li></ul>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
