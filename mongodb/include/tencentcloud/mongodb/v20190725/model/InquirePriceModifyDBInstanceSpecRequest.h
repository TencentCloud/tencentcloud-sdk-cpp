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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_

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
                * InquirePriceModifyDBInstanceSpec请求参数结构体
                */
                class InquirePriceModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyDBInstanceSpecRequest();
                    ~InquirePriceModifyDBInstanceSpecRequest() = default;
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
                     * 获取变更配置后实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @return Memory 变更配置后实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置变更配置后实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @param _memory 变更配置后实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
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
                     * 获取变更配置后实例磁盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @return Volume 变更配置后实例磁盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置变更配置后实例磁盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     * @param _volume 变更配置后实例磁盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
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
                     * 获取实例节点数量。请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 副本集实例，指变更配置后实例的主从节点数量。
- 分片集群实例，指变更配置后实例每一个分片的主从节点数。
**说明**：切勿同时发起调整节点数、调整分片数、调整节点规格的任务。
                     * @return NodeNum 实例节点数量。请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 副本集实例，指变更配置后实例的主从节点数量。
- 分片集群实例，指变更配置后实例每一个分片的主从节点数。
**说明**：切勿同时发起调整节点数、调整分片数、调整节点规格的任务。
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置实例节点数量。请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 副本集实例，指变更配置后实例的主从节点数量。
- 分片集群实例，指变更配置后实例每一个分片的主从节点数。
**说明**：切勿同时发起调整节点数、调整分片数、调整节点规格的任务。
                     * @param _nodeNum 实例节点数量。请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 副本集实例，指变更配置后实例的主从节点数量。
- 分片集群实例，指变更配置后实例每一个分片的主从节点数。
**说明**：切勿同时发起调整节点数、调整分片数、调整节点规格的任务。
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
                     * 获取分片集群实例，指变更配置后实例的分片数量。取值范围：[2,36] 。
**说明**：变更后的分片数量不能小于当前现有的数量。切勿同时发起调整节点数、调整分片数与调整节点规格的任务。
                     * @return ReplicateSetNum 分片集群实例，指变更配置后实例的分片数量。取值范围：[2,36] 。
**说明**：变更后的分片数量不能小于当前现有的数量。切勿同时发起调整节点数、调整分片数与调整节点规格的任务。
                     * 
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置分片集群实例，指变更配置后实例的分片数量。取值范围：[2,36] 。
**说明**：变更后的分片数量不能小于当前现有的数量。切勿同时发起调整节点数、调整分片数与调整节点规格的任务。
                     * @param _replicateSetNum 分片集群实例，指变更配置后实例的分片数量。取值范围：[2,36] 。
**说明**：变更后的分片数量不能小于当前现有的数量。切勿同时发起调整节点数、调整分片数与调整节点规格的任务。
                     * 
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 变更配置后实例内存大小，单位：GB。具体售卖的内存规格，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 变更配置后实例磁盘大小，单位：GB。每一个 CPU 规格对应的最大磁盘与最小磁盘范围，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例节点数量。请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- 副本集实例，指变更配置后实例的主从节点数量。
- 分片集群实例，指变更配置后实例每一个分片的主从节点数。
**说明**：切勿同时发起调整节点数、调整分片数、调整节点规格的任务。
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 分片集群实例，指变更配置后实例的分片数量。取值范围：[2,36] 。
**说明**：变更后的分片数量不能小于当前现有的数量。切勿同时发起调整节点数、调整分片数与调整节点规格的任务。
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
