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
                     * 获取实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @return InstanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @param _instanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

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
                     * 获取实例配置变更后的内存大小。- 单位：GB。为空时，默认取实例当前的内存大小。<br>  注意：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
                     * @return Memory 实例配置变更后的内存大小。- 单位：GB。为空时，默认取实例当前的内存大小。<br>  注意：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例配置变更后的内存大小。- 单位：GB。为空时，默认取实例当前的内存大小。<br>  注意：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
                     * @param _memory 实例配置变更后的内存大小。- 单位：GB。为空时，默认取实例当前的内存大小。<br>  注意：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
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
                     * 获取实例配置变更后的硬盘大小，单位：GB。为空时，默认取当前实例的磁盘大小。
- 内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
- 降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。
                     * @return Volume 实例配置变更后的硬盘大小，单位：GB。为空时，默认取当前实例的磁盘大小。
- 内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
- 降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例配置变更后的硬盘大小，单位：GB。为空时，默认取当前实例的磁盘大小。
- 内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
- 降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。
                     * @param _volume 实例配置变更后的硬盘大小，单位：GB。为空时，默认取当前实例的磁盘大小。
- 内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
- 降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。
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
                     * 获取(已废弃) 请使用ResizeOplog独立接口完成。

实例配置变更后 Oplog 的大小。
- 单位：GB。
- 默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。
                     * @return OplogSize (已废弃) 请使用ResizeOplog独立接口完成。

实例配置变更后 Oplog 的大小。
- 单位：GB。
- 默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。
                     * @deprecated
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置(已废弃) 请使用ResizeOplog独立接口完成。

实例配置变更后 Oplog 的大小。
- 单位：GB。
- 默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。
                     * @param _oplogSize (已废弃) 请使用ResizeOplog独立接口完成。

实例配置变更后 Oplog 的大小。
- 单位：GB。
- 默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。
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
                     * 获取实例变更后mongod的节点数（不包含readonly节点数）。
- 变更mongod CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  变更 mongos CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  节点变更时(全部类型)，该参数可不配置或输入变更后的 mongod(不包含readonly) 节点数量。
-  副本集节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinNodeNum 与 MaxNodeNum 获取。
-  分片集群每个分片节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取。
                     * @return NodeNum 实例变更后mongod的节点数（不包含readonly节点数）。
- 变更mongod CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  变更 mongos CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  节点变更时(全部类型)，该参数可不配置或输入变更后的 mongod(不包含readonly) 节点数量。
-  副本集节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinNodeNum 与 MaxNodeNum 获取。
-  分片集群每个分片节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取。
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置实例变更后mongod的节点数（不包含readonly节点数）。
- 变更mongod CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  变更 mongos CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  节点变更时(全部类型)，该参数可不配置或输入变更后的 mongod(不包含readonly) 节点数量。
-  副本集节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinNodeNum 与 MaxNodeNum 获取。
-  分片集群每个分片节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取。
                     * @param _nodeNum 实例变更后mongod的节点数（不包含readonly节点数）。
- 变更mongod CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  变更 mongos CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  节点变更时(全部类型)，该参数可不配置或输入变更后的 mongod(不包含readonly) 节点数量。
-  副本集节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinNodeNum 与 MaxNodeNum 获取。
-  分片集群每个分片节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取。
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
                     * 获取实例变更后的分片数。
- 取值范围请通过云数据库的售卖规格[DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 接口返回的参数**MinReplicateSetNum**与**MaxReplicateSetNum**获取。- 该参数只能增加不能减少。
                     * @return ReplicateSetNum 实例变更后的分片数。
- 取值范围请通过云数据库的售卖规格[DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 接口返回的参数**MinReplicateSetNum**与**MaxReplicateSetNum**获取。- 该参数只能增加不能减少。
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置实例变更后的分片数。
- 取值范围请通过云数据库的售卖规格[DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 接口返回的参数**MinReplicateSetNum**与**MaxReplicateSetNum**获取。- 该参数只能增加不能减少。
                     * @param _replicateSetNum 实例变更后的分片数。
- 取值范围请通过云数据库的售卖规格[DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 接口返回的参数**MinReplicateSetNum**与**MaxReplicateSetNum**获取。- 该参数只能增加不能减少。
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
                     * 获取实例配置变更的切换时间。
- 0：调整完成时，立即执行变配任务。默认为0。
- 1：在维护时间窗内，执行变配任务。
**说明**：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。
                     * @return InMaintenance 实例配置变更的切换时间。
- 0：调整完成时，立即执行变配任务。默认为0。
- 1：在维护时间窗内，执行变配任务。
**说明**：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置实例配置变更的切换时间。
- 0：调整完成时，立即执行变配任务。默认为0。
- 1：在维护时间窗内，执行变配任务。
**说明**：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。
                     * @param _inMaintenance 实例配置变更的切换时间。
- 0：调整完成时，立即执行变配任务。默认为0。
- 1：在维护时间窗内，执行变配任务。
**说明**：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。
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
                     * 获取分片实例配置变更后的mongos内存大小。单位：GB。
                     * @return MongosMemory 分片实例配置变更后的mongos内存大小。单位：GB。
                     * 
                     */
                    std::string GetMongosMemory() const;

                    /**
                     * 设置分片实例配置变更后的mongos内存大小。单位：GB。
                     * @param _mongosMemory 分片实例配置变更后的mongos内存大小。单位：GB。
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
                     * 获取新增节点列表，节点类型及可用区信息。
                     * @return AddNodeList 新增节点列表，节点类型及可用区信息。
                     * 
                     */
                    std::vector<AddNodeList> GetAddNodeList() const;

                    /**
                     * 设置新增节点列表，节点类型及可用区信息。
                     * @param _addNodeList 新增节点列表，节点类型及可用区信息。
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
                     * 获取删除节点列表，注意：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。
                     * @return RemoveNodeList 删除节点列表，注意：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。
                     * 
                     */
                    std::vector<RemoveNodeList> GetRemoveNodeList() const;

                    /**
                     * 设置删除节点列表，注意：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。
                     * @param _removeNodeList 删除节点列表，注意：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。
                     * 
                     */
                    void SetRemoveNodeList(const std::vector<RemoveNodeList>& _removeNodeList);

                    /**
                     * 判断参数 RemoveNodeList 是否已赋值
                     * @return RemoveNodeList 是否已赋值
                     * 
                     */
                    bool RemoveNodeListHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例配置变更后的内存大小。- 单位：GB。为空时，默认取实例当前的内存大小。<br>  注意：内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例配置变更后的硬盘大小，单位：GB。为空时，默认取当前实例的磁盘大小。
- 内存和磁盘必须同时升配或同时降配，即 Memory 与 Volume 需同时配置变更。
- 降配时，变更后的磁盘容量必须大于已用磁盘容量的1.2倍。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * (已废弃) 请使用ResizeOplog独立接口完成。

实例配置变更后 Oplog 的大小。
- 单位：GB。
- 默认 Oplog 占用容量为磁盘空间的10%。系统允许设置的 Oplog 容量范围为磁盘空间的[10%,90%]。
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * 实例变更后mongod的节点数（不包含readonly节点数）。
- 变更mongod CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  变更 mongos CPU与内存规格时，该参数可以不配置或者输入当前 mongod(不包含readonly) 节点数量。
-  节点变更时(全部类型)，该参数可不配置或输入变更后的 mongod(不包含readonly) 节点数量。
-  副本集节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinNodeNum 与 MaxNodeNum 获取。
-  分片集群每个分片节点数：请确认节点数量取值范围，通过云数据库的售卖规格 [DescribeSpecInfo ](https://cloud.tencent.com/document/product/240/38565)接口返回的参数 MinReplicateSetNodeNum 与 MaxReplicateSetNodeNum 获取。
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 实例变更后的分片数。
- 取值范围请通过云数据库的售卖规格[DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 接口返回的参数**MinReplicateSetNum**与**MaxReplicateSetNum**获取。- 该参数只能增加不能减少。
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * 实例配置变更的切换时间。
- 0：调整完成时，立即执行变配任务。默认为0。
- 1：在维护时间窗内，执行变配任务。
**说明**：调整节点数和分片数不支持在<b>维护时间窗内</b>变更。
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                    /**
                     * 分片实例配置变更后的mongos内存大小。单位：GB。
                     */
                    std::string m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * 新增节点列表，节点类型及可用区信息。
                     */
                    std::vector<AddNodeList> m_addNodeList;
                    bool m_addNodeListHasBeenSet;

                    /**
                     * 删除节点列表，注意：基于分片实例各片节点的一致性原则，删除分片实例节点时，只需指定0分片对应的节点即可，如：cmgo-9nl1czif_0-node-readonly0 将删除每个分片的第1个只读节点。
                     */
                    std::vector<RemoveNodeList> m_removeNodeList;
                    bool m_removeNodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
