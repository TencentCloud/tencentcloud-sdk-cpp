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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关限流插件外部redis配置
                */
                class ExternalRedis : public AbstractModel
                {
                public:
                    ExternalRedis();
                    ~ExternalRedis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取redis ip
                     * @return RedisHost redis ip
                     * 
                     */
                    std::string GetRedisHost() const;

                    /**
                     * 设置redis ip
                     * @param _redisHost redis ip
                     * 
                     */
                    void SetRedisHost(const std::string& _redisHost);

                    /**
                     * 判断参数 RedisHost 是否已赋值
                     * @return RedisHost 是否已赋值
                     * 
                     */
                    bool RedisHostHasBeenSet() const;

                    /**
                     * 获取redis密码
                     * @return RedisPassword redis密码
                     * 
                     */
                    std::string GetRedisPassword() const;

                    /**
                     * 设置redis密码
                     * @param _redisPassword redis密码
                     * 
                     */
                    void SetRedisPassword(const std::string& _redisPassword);

                    /**
                     * 判断参数 RedisPassword 是否已赋值
                     * @return RedisPassword 是否已赋值
                     * 
                     */
                    bool RedisPasswordHasBeenSet() const;

                    /**
                     * 获取redis端口
                     * @return RedisPort redis端口
                     * 
                     */
                    int64_t GetRedisPort() const;

                    /**
                     * 设置redis端口
                     * @param _redisPort redis端口
                     * 
                     */
                    void SetRedisPort(const int64_t& _redisPort);

                    /**
                     * 判断参数 RedisPort 是否已赋值
                     * @return RedisPort 是否已赋值
                     * 
                     */
                    bool RedisPortHasBeenSet() const;

                    /**
                     * 获取超时时间  ms
                     * @return RedisTimeout 超时时间  ms
                     * 
                     */
                    int64_t GetRedisTimeout() const;

                    /**
                     * 设置超时时间  ms
                     * @param _redisTimeout 超时时间  ms
                     * 
                     */
                    void SetRedisTimeout(const int64_t& _redisTimeout);

                    /**
                     * 判断参数 RedisTimeout 是否已赋值
                     * @return RedisTimeout 是否已赋值
                     * 
                     */
                    bool RedisTimeoutHasBeenSet() const;

                private:

                    /**
                     * redis ip
                     */
                    std::string m_redisHost;
                    bool m_redisHostHasBeenSet;

                    /**
                     * redis密码
                     */
                    std::string m_redisPassword;
                    bool m_redisPasswordHasBeenSet;

                    /**
                     * redis端口
                     */
                    int64_t m_redisPort;
                    bool m_redisPortHasBeenSet;

                    /**
                     * 超时时间  ms
                     */
                    int64_t m_redisTimeout;
                    bool m_redisTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_EXTERNALREDIS_H_
