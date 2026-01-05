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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_

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
                * DescribeInstanceSpecBandwidth请求参数结构体
                */
                class DescribeInstanceSpecBandwidthRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecBandwidthRequest();
                    ~DescribeInstanceSpecBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis控制台</a> 在实例列表复制实例 ID。同时，InstanceId 与规格参数不能同时为空，至少提供一种。</p><ul><li>若仅指定 InstanceId：查询该实例当前规格的带宽。</li><li>若指定 InstanceId + 至少一个规格参数（ShardSize、ShardNum 或 ReplicateNum）：计算变更规格后的带宽。</li><li>若指定部分或所有规格参数（ShardSize、ShardNum、ReplicateNum 与 Type），而不指定 InstanceId：根据规格组合查询理论带宽。</li></ul>
                     * @return InstanceId <p>指定实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis控制台</a> 在实例列表复制实例 ID。同时，InstanceId 与规格参数不能同时为空，至少提供一种。</p><ul><li>若仅指定 InstanceId：查询该实例当前规格的带宽。</li><li>若指定 InstanceId + 至少一个规格参数（ShardSize、ShardNum 或 ReplicateNum）：计算变更规格后的带宽。</li><li>若指定部分或所有规格参数（ShardSize、ShardNum、ReplicateNum 与 Type），而不指定 InstanceId：根据规格组合查询理论带宽。</li></ul>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis控制台</a> 在实例列表复制实例 ID。同时，InstanceId 与规格参数不能同时为空，至少提供一种。</p><ul><li>若仅指定 InstanceId：查询该实例当前规格的带宽。</li><li>若指定 InstanceId + 至少一个规格参数（ShardSize、ShardNum 或 ReplicateNum）：计算变更规格后的带宽。</li><li>若指定部分或所有规格参数（ShardSize、ShardNum、ReplicateNum 与 Type），而不指定 InstanceId：根据规格组合查询理论带宽。</li></ul>
                     * @param _instanceId <p>指定实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis控制台</a> 在实例列表复制实例 ID。同时，InstanceId 与规格参数不能同时为空，至少提供一种。</p><ul><li>若仅指定 InstanceId：查询该实例当前规格的带宽。</li><li>若指定 InstanceId + 至少一个规格参数（ShardSize、ShardNum 或 ReplicateNum）：计算变更规格后的带宽。</li><li>若指定部分或所有规格参数（ShardSize、ShardNum、ReplicateNum 与 Type），而不指定 InstanceId：根据规格组合查询理论带宽。</li></ul>
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
                     * 获取<p>分片大小。单位：MB。</p>
                     * @return ShardSize <p>分片大小。单位：MB。</p>
                     * 
                     */
                    int64_t GetShardSize() const;

                    /**
                     * 设置<p>分片大小。单位：MB。</p>
                     * @param _shardSize <p>分片大小。单位：MB。</p>
                     * 
                     */
                    void SetShardSize(const int64_t& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     * 
                     */
                    bool ShardSizeHasBeenSet() const;

                    /**
                     * 获取<p>分片数量。</p>
                     * @return ShardNum <p>分片数量。</p>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置<p>分片数量。</p>
                     * @param _shardNum <p>分片数量。</p>
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>复制组数量。</p>
                     * @return ReplicateNum <p>复制组数量。</p>
                     * 
                     */
                    int64_t GetReplicateNum() const;

                    /**
                     * 设置<p>复制组数量。</p>
                     * @param _replicateNum <p>复制组数量。</p>
                     * 
                     */
                    void SetReplicateNum(const int64_t& _replicateNum);

                    /**
                     * 判断参数 ReplicateNum 是否已赋值
                     * @return ReplicateNum 是否已赋值
                     * 
                     */
                    bool ReplicateNumHasBeenSet() const;

                    /**
                     * 获取<p>只读权重。- 100：开启从只读。- 0：关闭从只读。</p>
                     * @return ReadOnlyWeight <p>只读权重。- 100：开启从只读。- 0：关闭从只读。</p>
                     * 
                     */
                    int64_t GetReadOnlyWeight() const;

                    /**
                     * 设置<p>只读权重。- 100：开启从只读。- 0：关闭从只读。</p>
                     * @param _readOnlyWeight <p>只读权重。- 100：开启从只读。- 0：关闭从只读。</p>
                     * 
                     */
                    void SetReadOnlyWeight(const int64_t& _readOnlyWeight);

                    /**
                     * 判断参数 ReadOnlyWeight 是否已赋值
                     * @return ReadOnlyWeight 是否已赋值
                     * 
                     */
                    bool ReadOnlyWeightHasBeenSet() const;

                    /**
                     * 获取<p>实例类型，同 <a href="https://cloud.tencent.com/document/api/239/20026">CreateInstances</a> 的Type。</p>
                     * @return Type <p>实例类型，同 <a href="https://cloud.tencent.com/document/api/239/20026">CreateInstances</a> 的Type。</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>实例类型，同 <a href="https://cloud.tencent.com/document/api/239/20026">CreateInstances</a> 的Type。</p>
                     * @param _type <p>实例类型，同 <a href="https://cloud.tencent.com/document/api/239/20026">CreateInstances</a> 的Type。</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。请登录 <a href="https://console.cloud.tencent.com/redis">Redis控制台</a> 在实例列表复制实例 ID。同时，InstanceId 与规格参数不能同时为空，至少提供一种。</p><ul><li>若仅指定 InstanceId：查询该实例当前规格的带宽。</li><li>若指定 InstanceId + 至少一个规格参数（ShardSize、ShardNum 或 ReplicateNum）：计算变更规格后的带宽。</li><li>若指定部分或所有规格参数（ShardSize、ShardNum、ReplicateNum 与 Type），而不指定 InstanceId：根据规格组合查询理论带宽。</li></ul>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>分片大小。单位：MB。</p>
                     */
                    int64_t m_shardSize;
                    bool m_shardSizeHasBeenSet;

                    /**
                     * <p>分片数量。</p>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>复制组数量。</p>
                     */
                    int64_t m_replicateNum;
                    bool m_replicateNumHasBeenSet;

                    /**
                     * <p>只读权重。- 100：开启从只读。- 0：关闭从只读。</p>
                     */
                    int64_t m_readOnlyWeight;
                    bool m_readOnlyWeightHasBeenSet;

                    /**
                     * <p>实例类型，同 <a href="https://cloud.tencent.com/document/api/239/20026">CreateInstances</a> 的Type。</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_
