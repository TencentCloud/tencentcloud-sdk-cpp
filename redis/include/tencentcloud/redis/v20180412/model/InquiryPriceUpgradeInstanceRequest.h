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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_

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
                * InquiryPriceUpgradeInstance请求参数结构体
                */
                class InquiryPriceUpgradeInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeInstanceRequest();
                    ~InquiryPriceUpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取分片大小，单位：MB。
                     * @return MemSize 分片大小，单位：MB。
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置分片大小，单位：MB。
                     * @param _memSize 分片大小，单位：MB。
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取分片数量，Redis 2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * @return RedisShardNum 分片数量，Redis 2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * 
                     */
                    uint64_t GetRedisShardNum() const;

                    /**
                     * 设置分片数量，Redis 2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * @param _redisShardNum 分片数量，Redis 2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * 
                     */
                    void SetRedisShardNum(const uint64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * @return RedisReplicasNum 副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * 
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * @param _redisReplicasNum 副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     * 
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分片大小，单位：MB。
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 分片数量，Redis 2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     */
                    uint64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 副本数量，Redis2.8主从版、CKV主从版和Redis2.8单机版不需要填写。
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCEREQUEST_H_
