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
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。填写实例id或者规格，两者必选其一。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。填写实例id或者规格，两者必选其一。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。填写实例id或者规格，两者必选其一。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。填写实例id或者规格，两者必选其一。
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
                     * 获取分片大小，单位：MB
                     * @return ShardSize 分片大小，单位：MB
                     * 
                     */
                    int64_t GetShardSize() const;

                    /**
                     * 设置分片大小，单位：MB
                     * @param _shardSize 分片大小，单位：MB
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
                     * 获取分片数量。
                     * @return ShardNum 分片数量。
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置分片数量。
                     * @param _shardNum 分片数量。
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
                     * 获取复制组数量。
                     * @return ReplicateNum 复制组数量。
                     * 
                     */
                    int64_t GetReplicateNum() const;

                    /**
                     * 设置复制组数量。
                     * @param _replicateNum 复制组数量。
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
                     * 获取只读权重。
- 100：开启从只读。
- 0：关闭从只读。
                     * @return ReadOnlyWeight 只读权重。
- 100：开启从只读。
- 0：关闭从只读。
                     * 
                     */
                    int64_t GetReadOnlyWeight() const;

                    /**
                     * 设置只读权重。
- 100：开启从只读。
- 0：关闭从只读。
                     * @param _readOnlyWeight 只读权重。
- 100：开启从只读。
- 0：关闭从只读。
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
                     * 获取实例类型，同 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的Type。
                     * @return Type 实例类型，同 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的Type。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型，同 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的Type。
                     * @param _type 实例类型，同 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的Type。
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
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。填写实例id或者规格，两者必选其一。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分片大小，单位：MB
                     */
                    int64_t m_shardSize;
                    bool m_shardSizeHasBeenSet;

                    /**
                     * 分片数量。
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 复制组数量。
                     */
                    int64_t m_replicateNum;
                    bool m_replicateNumHasBeenSet;

                    /**
                     * 只读权重。
- 100：开启从只读。
- 0：关闭从只读。
                     */
                    int64_t m_readOnlyWeight;
                    bool m_readOnlyWeightHasBeenSet;

                    /**
                     * 实例类型，同 [CreateInstances](https://cloud.tencent.com/document/api/239/20026) 的Type。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESPECBANDWIDTHREQUEST_H_
