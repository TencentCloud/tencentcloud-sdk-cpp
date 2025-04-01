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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISINSTANCECONF_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISINSTANCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Redis实例内存配置参数
                */
                class RedisInstanceConf : public AbstractModel
                {
                public:
                    RedisInstanceConf();
                    ~RedisInstanceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取副本数量
                     * @return ReplicasNum 副本数量
                     * 
                     */
                    std::string GetReplicasNum() const;

                    /**
                     * 设置副本数量
                     * @param _replicasNum 副本数量
                     * 
                     */
                    void SetReplicasNum(const std::string& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return ShardNum 分片数量
                     * 
                     */
                    std::string GetShardNum() const;

                    /**
                     * 设置分片数量
                     * @param _shardNum 分片数量
                     * 
                     */
                    void SetShardNum(const std::string& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取分片内存大小，单位MB
                     * @return ShardSize 分片内存大小，单位MB
                     * 
                     */
                    std::string GetShardSize() const;

                    /**
                     * 设置分片内存大小，单位MB
                     * @param _shardSize 分片内存大小，单位MB
                     * 
                     */
                    void SetShardSize(const std::string& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     * 
                     */
                    bool ShardSizeHasBeenSet() const;

                private:

                    /**
                     * 副本数量
                     */
                    std::string m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * 分片数量
                     */
                    std::string m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 分片内存大小，单位MB
                     */
                    std::string m_shardSize;
                    bool m_shardSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISINSTANCECONF_H_
