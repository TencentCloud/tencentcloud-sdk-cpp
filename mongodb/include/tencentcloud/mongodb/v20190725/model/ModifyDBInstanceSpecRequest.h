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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/AddNodeList.h>
#include <tencentcloud/mongodb/v20190725/model/RemoveNodeList.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSpec请求参数结构体
                */
                class ModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSpecRequest();
                    ~ModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>实例配置变更后的内存大小。单位：GB。该参数为空值时，默认取实例当前的内存大小。当前所支持的内存规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。<br><strong>注意</strong>：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</p>
                     * @return Memory <p>实例配置变更后的内存大小。单位：GB。该参数为空值时，默认取实例当前的内存大小。当前所支持的内存规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。<br><strong>注意</strong>：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>实例配置变更后的内存大小。单位：GB。该参数为空值时，默认取实例当前的内存大小。当前所支持的内存规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。<br><strong>注意</strong>：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</p>
                     * @param _memory <p>实例配置变更后的内存大小。单位：GB。该参数为空值时，默认取实例当前的内存大小。当前所支持的内存规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。<br><strong>注意</strong>：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</p>
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
                     * 获取<p>实例配置变更后的硬盘大小，单位：GB。该参数为空值时，默认取当前实例的磁盘大小。当前所支持的磁盘容量，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p><ul><li>内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</li><li>降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。</li></ul>
                     * @return Volume <p>实例配置变更后的硬盘大小，单位：GB。该参数为空值时，默认取当前实例的磁盘大小。当前所支持的磁盘容量，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p><ul><li>内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</li><li>降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。</li></ul>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>实例配置变更后的硬盘大小，单位：GB。该参数为空值时，默认取当前实例的磁盘大小。当前所支持的磁盘容量，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p><ul><li>内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</li><li>降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。</li></ul>
                     * @param _volume <p>实例配置变更后的硬盘大小，单位：GB。该参数为空值时，默认取当前实例的磁盘大小。当前所支持的磁盘容量，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p><ul><li>内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</li><li>降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。</li></ul>
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
                     * 获取<p>(已废弃) 请使用ResizeOplog独立接口完成。</p><p>实例配置变更后 Oplog 的大小。</p><ul><li>单位：GB。</li><li>默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。</li></ul>
                     * @return OplogSize <p>(已废弃) 请使用ResizeOplog独立接口完成。</p><p>实例配置变更后 Oplog 的大小。</p><ul><li>单位：GB。</li><li>默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。</li></ul>
                     * @deprecated
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置<p>(已废弃) 请使用ResizeOplog独立接口完成。</p><p>实例配置变更后 Oplog 的大小。</p><ul><li>单位：GB。</li><li>默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。</li></ul>
                     * @param _oplogSize <p>(已废弃) 请使用ResizeOplog独立接口完成。</p><p>实例配置变更后 Oplog 的大小。</p><ul><li>单位：GB。</li><li>默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。</li></ul>
                     * @deprecated
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     * @deprecated
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取<p>实例变更后 mongod 的节点数（不包含 readonly 只读节点数）。</p><ul><li>副本集节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinNodeNum 与 MaxNodeNum 获取节点数量取值范围。</li><li>分片集群每个分片节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取节点数量取值范围。<br><strong>说明</strong>：变更 mongod 或 mongos 的 CPU 与内存规格时，该参数可以不配置或者输入当前 mongod 或 mongos（不包含readonly）节点数量。</li></ul>
                     * @return NodeNum <p>实例变更后 mongod 的节点数（不包含 readonly 只读节点数）。</p><ul><li>副本集节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinNodeNum 与 MaxNodeNum 获取节点数量取值范围。</li><li>分片集群每个分片节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取节点数量取值范围。<br><strong>说明</strong>：变更 mongod 或 mongos 的 CPU 与内存规格时，该参数可以不配置或者输入当前 mongod 或 mongos（不包含readonly）节点数量。</li></ul>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>实例变更后 mongod 的节点数（不包含 readonly 只读节点数）。</p><ul><li>副本集节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinNodeNum 与 MaxNodeNum 获取节点数量取值范围。</li><li>分片集群每个分片节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取节点数量取值范围。<br><strong>说明</strong>：变更 mongod 或 mongos 的 CPU 与内存规格时，该参数可以不配置或者输入当前 mongod 或 mongos（不包含readonly）节点数量。</li></ul>
                     * @param _nodeNum <p>实例变更后 mongod 的节点数（不包含 readonly 只读节点数）。</p><ul><li>副本集节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinNodeNum 与 MaxNodeNum 获取节点数量取值范围。</li><li>分片集群每个分片节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取节点数量取值范围。<br><strong>说明</strong>：变更 mongod 或 mongos 的 CPU 与内存规格时，该参数可以不配置或者输入当前 mongod 或 mongos（不包含readonly）节点数量。</li></ul>
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
                     * 获取<p>实例变更后的分片数。</p><ul><li>请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 接口返回的参数<strong>MinReplicateSetNum</strong>与<strong>MaxReplicateSetNum</strong>获取实例分片数取值范围。</li><li>实例分片数量只允许增加不允许减少。</li></ul>
                     * @return ReplicateSetNum <p>实例变更后的分片数。</p><ul><li>请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 接口返回的参数<strong>MinReplicateSetNum</strong>与<strong>MaxReplicateSetNum</strong>获取实例分片数取值范围。</li><li>实例分片数量只允许增加不允许减少。</li></ul>
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置<p>实例变更后的分片数。</p><ul><li>请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 接口返回的参数<strong>MinReplicateSetNum</strong>与<strong>MaxReplicateSetNum</strong>获取实例分片数取值范围。</li><li>实例分片数量只允许增加不允许减少。</li></ul>
                     * @param _replicateSetNum <p>实例变更后的分片数。</p><ul><li>请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 接口返回的参数<strong>MinReplicateSetNum</strong>与<strong>MaxReplicateSetNum</strong>获取实例分片数取值范围。</li><li>实例分片数量只允许增加不允许减少。</li></ul>
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
                     * 获取<p>实例配置变更的切换时间。</p><ul><li>0：调整完成时，立即执行变配任务。默认为0。</li><li>1：在维护时间窗内，执行变配任务。<br><strong>说明</strong>：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。</li></ul>
                     * @return InMaintenance <p>实例配置变更的切换时间。</p><ul><li>0：调整完成时，立即执行变配任务。默认为0。</li><li>1：在维护时间窗内，执行变配任务。<br><strong>说明</strong>：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。</li></ul>
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置<p>实例配置变更的切换时间。</p><ul><li>0：调整完成时，立即执行变配任务。默认为0。</li><li>1：在维护时间窗内，执行变配任务。<br><strong>说明</strong>：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。</li></ul>
                     * @param _inMaintenance <p>实例配置变更的切换时间。</p><ul><li>0：调整完成时，立即执行变配任务。默认为0。</li><li>1：在维护时间窗内，执行变配任务。<br><strong>说明</strong>：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。</li></ul>
                     * 
                     */
                    void SetInMaintenance(const uint64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                    /**
                     * 获取<p>分片实例配置变更后的 mongos 内存大小。单位：GB。实例支持的规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * @return MongosMemory <p>分片实例配置变更后的 mongos 内存大小。单位：GB。实例支持的规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * 
                     */
                    std::string GetMongosMemory() const;

                    /**
                     * 设置<p>分片实例配置变更后的 mongos 内存大小。单位：GB。实例支持的规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * @param _mongosMemory <p>分片实例配置变更后的 mongos 内存大小。单位：GB。实例支持的规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * 
                     */
                    void SetMongosMemory(const std::string& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取<p>新增节点列表，节点类型及可用区信息。</p>
                     * @return AddNodeList <p>新增节点列表，节点类型及可用区信息。</p>
                     * 
                     */
                    std::vector<AddNodeList> GetAddNodeList() const;

                    /**
                     * 设置<p>新增节点列表，节点类型及可用区信息。</p>
                     * @param _addNodeList <p>新增节点列表，节点类型及可用区信息。</p>
                     * 
                     */
                    void SetAddNodeList(const std::vector<AddNodeList>& _addNodeList);

                    /**
                     * 判断参数 AddNodeList 是否已赋值
                     * @return AddNodeList 是否已赋值
                     * 
                     */
                    bool AddNodeListHasBeenSet() const;

                    /**
                     * 获取<p>删除节点列表。<br><strong>注意</strong>：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。</p>
                     * @return RemoveNodeList <p>删除节点列表。<br><strong>注意</strong>：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。</p>
                     * 
                     */
                    std::vector<RemoveNodeList> GetRemoveNodeList() const;

                    /**
                     * 设置<p>删除节点列表。<br><strong>注意</strong>：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。</p>
                     * @param _removeNodeList <p>删除节点列表。<br><strong>注意</strong>：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。</p>
                     * 
                     */
                    void SetRemoveNodeList(const std::vector<RemoveNodeList>& _removeNodeList);

                    /**
                     * 判断参数 RemoveNodeList 是否已赋值
                     * @return RemoveNodeList 是否已赋值
                     * 
                     */
                    bool RemoveNodeListHasBeenSet() const;

                    /**
                     * 获取<p>实例配置变更后的CPU大小。单位：C。该参数为空值时，默认取实例当前的 CPU 大小。当前所支持的CPU规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * @return Cpu <p>实例配置变更后的CPU大小。单位：C。该参数为空值时，默认取实例当前的 CPU 大小。当前所支持的CPU规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例配置变更后的CPU大小。单位：C。该参数为空值时，默认取实例当前的 CPU 大小。当前所支持的CPU规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * @param _cpu <p>实例配置变更后的CPU大小。单位：C。该参数为空值时，默认取实例当前的 CPU 大小。当前所支持的CPU规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>实例配置变更后的产品规格类型。该参数为空值时，默认取实例当前的产品规格类型。<br>当前支持的产品规格类型如下：<br>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：</p><ol><li>白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</li><li>通用 I 型不能变更到白名单规格类型</li></ol>
                     * @return MachineCode <p>实例配置变更后的产品规格类型。该参数为空值时，默认取实例当前的产品规格类型。<br>当前支持的产品规格类型如下：<br>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：</p><ol><li>白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</li><li>通用 I 型不能变更到白名单规格类型</li></ol>
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置<p>实例配置变更后的产品规格类型。该参数为空值时，默认取实例当前的产品规格类型。<br>当前支持的产品规格类型如下：<br>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：</p><ol><li>白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</li><li>通用 I 型不能变更到白名单规格类型</li></ol>
                     * @param _machineCode <p>实例配置变更后的产品规格类型。该参数为空值时，默认取实例当前的产品规格类型。<br>当前支持的产品规格类型如下：<br>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：</p><ol><li>白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</li><li>通用 I 型不能变更到白名单规格类型</li></ol>
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例配置变更后的内存大小。单位：GB。该参数为空值时，默认取实例当前的内存大小。当前所支持的内存规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。<br><strong>注意</strong>：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例配置变更后的硬盘大小，单位：GB。该参数为空值时，默认取当前实例的磁盘大小。当前所支持的磁盘容量，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p><ul><li>内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。</li><li>降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。</li></ul>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>(已废弃) 请使用ResizeOplog独立接口完成。</p><p>实例配置变更后 Oplog 的大小。</p><ul><li>单位：GB。</li><li>默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。</li></ul>
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * <p>实例变更后 mongod 的节点数（不包含 readonly 只读节点数）。</p><ul><li>副本集节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinNodeNum 与 MaxNodeNum 获取节点数量取值范围。</li><li>分片集群每个分片节点数：请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo </a>接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取节点数量取值范围。<br><strong>说明</strong>：变更 mongod 或 mongos 的 CPU 与内存规格时，该参数可以不配置或者输入当前 mongod 或 mongos（不包含readonly）节点数量。</li></ul>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>实例变更后的分片数。</p><ul><li>请通过 <a href="https://cloud.tencent.com/document/product/240/38567">DescribeSpecInfo</a> 接口返回的参数<strong>MinReplicateSetNum</strong>与<strong>MaxReplicateSetNum</strong>获取实例分片数取值范围。</li><li>实例分片数量只允许增加不允许减少。</li></ul>
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <p>实例配置变更的切换时间。</p><ul><li>0：调整完成时，立即执行变配任务。默认为0。</li><li>1：在维护时间窗内，执行变配任务。<br><strong>说明</strong>：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。</li></ul>
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                    /**
                     * <p>分片实例配置变更后的 mongos 内存大小。单位：GB。实例支持的规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     */
                    std::string m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>新增节点列表，节点类型及可用区信息。</p>
                     */
                    std::vector<AddNodeList> m_addNodeList;
                    bool m_addNodeListHasBeenSet;

                    /**
                     * <p>删除节点列表。<br><strong>注意</strong>：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。</p>
                     */
                    std::vector<RemoveNodeList> m_removeNodeList;
                    bool m_removeNodeListHasBeenSet;

                    /**
                     * <p>实例配置变更后的CPU大小。单位：C。该参数为空值时，默认取实例当前的 CPU 大小。当前所支持的CPU规格，请参见<a href="https://cloud.tencent.com/document/product/240/64125">产品规格</a>。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>实例配置变更后的产品规格类型。该参数为空值时，默认取实例当前的产品规格类型。<br>当前支持的产品规格类型如下：<br>产品推荐规格类型：</p><ul><li>GE.LD.T1：本地盘（通用I型）。</li><li>GE.CD.T1：云盘（通用I型）。</li></ul><p>产品白名单规格类型：</p><ul><li>HIO10G：本地盘（高IO万兆型）。</li><li>HCD：云盘（云盘版）。</li></ul><p>注意：</p><ol><li>白名单规格类型为白名单控制，如若需要，请 <a href="https://console.cloud.tencent.com/workorder/category">提交工单</a> 申请</li><li>通用 I 型不能变更到白名单规格类型</li></ol>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
